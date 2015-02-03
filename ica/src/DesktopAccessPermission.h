/*
 * DesktopAccessPermission.h - DesktopAccessPermission
 *
 * Copyright (c) 2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 *
 * This file is part of iTALC - http://italc.sourceforge.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef DESKTOP_ACCESS_PERMISSION_H
#define DESKTOP_ACCESS_PERMISSION_H

#include <QtCore/QString>

class DesktopAccessPermission
{
public:
	enum Choices
	{
		ChoiceYes 		= 0x01,
		ChoiceNo		= 0x02,
		ChoiceAlways	= 0x04,
		ChoiceNever		= 0x08,
		ChoiceDefault	= ChoiceYes | ChoiceNo,
		AllChoices		= ChoiceYes | ChoiceNo | ChoiceAlways | ChoiceNever
	} ;

	enum AuthenticationMethods
	{
		KeyAuthentication,
		LogonAuthentication,
		NumAuthenticationMethods
	} ;
	typedef AuthenticationMethods AuthenticationMethod;

	DesktopAccessPermission( AuthenticationMethod authMethod );
	~DesktopAccessPermission();

	bool ask( const QString &user, const QString &host );


private:
	AuthenticationMethod m_authenticationMethod;

} ;

#endif
