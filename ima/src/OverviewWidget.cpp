/*
 * OverviewWidget.cpp - implementation of overview-widget for side-bar
 *
 * Copyright (c) 2004-2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
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

#include <QtGui/QLabel>
#include <QtGui/QLayout>
#include <QtGui/QPushButton>

#include "OverviewWidget.h"
#include "MainWindow.h"



OverviewWidget::OverviewWidget( MainWindow * _main_window, QWidget * _parent ) :
	SideBarWidget( QPixmap( ":/resources/overview.png" ),
			tr( "Overview" ),
			tr( "Some basic information on iTALC and how to use "
				"it." ), _main_window, _parent )
{
	setupUi( contentParent() );

	connect( aboutButton, SIGNAL( clicked() ), mainWindow(),
							SLOT( aboutITALC() ) );
}



