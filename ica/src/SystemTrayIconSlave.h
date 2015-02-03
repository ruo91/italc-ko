/*
 * SystemTrayIconSlave.h - an IcaSlave providing the system tray icon
 *
 * Copyright (c) 2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 * Copyright (c) 2010 Univention GmbH
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

#ifndef SYSTEM_TRAY_ICON_SLAVE_H
#define SYSTEM_TRAY_ICON_SLAVE_H

#include <QtGui/QSystemTrayIcon>

#include "IcaSlave.h"

class SystemTrayIconSlave : public IcaSlave
{
public:
	SystemTrayIconSlave();
	virtual ~SystemTrayIconSlave();

	static QString slaveName()
	{
		return "SystemTrayIconSlave";
	}


private:
	virtual bool handleMessage( const Ipc::Msg &m );

	QSystemTrayIcon m_systemTrayIcon;

} ;

#endif


