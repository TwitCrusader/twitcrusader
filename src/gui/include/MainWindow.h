/*
 *	 TwitCrusader-GUI is part of TwitCrusader - Twitter Client For Linux Desktop
 *		Copyright (C) 2011  TwitCrusader Team
 *
 *		This program is free software: you can redistribute it and/or modify
 *		it under the terms of the GNU General Public License as published by
 *		the Free Software Foundation, either version 3 of the License, or
 *		(at your option) any later version.
 *
 *		This program is distributed in the hope that it will be useful,
 *		but WITHOUT ANY WARRANTY; without even the implied warranty of
 *		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *		GNU General Public License for more details.
 *
 *		You should have received a copy of the GNU General Public License
 *		along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 *		WebSite: http://www.twitcrusader.org/
 * 		Development Guidelines: http://dev.twitcrusader.org/
 *		Follow on Twitter: @teamtwc
 * 		IRC: chat.freenode.net at #teamtwc
 * 		E-mail: teamtwc@twitcrusader.org
 *
 */

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <iostream>
#include <vector>

#include <gtkmm.h>
#include <gtkmm/stock.h>

#include "Icons.h"
#include "OptionWindow.h"
#include "../../core/include/TwitterObject.h"
#include "../../core/include/Version.h"

using namespace std;
using namespace Gtk;

class MainWindow : public Window{

protected:

	MenuItem file_menu_items[3];
	MenuItem file_menu_root;
	Menu file_menu;


	MenuItem options_menu_items[1];
	MenuItem options_menu_root;
	Menu options_menu;


	MenuItem helps_menu_items[2];
	MenuItem helps_menu_root;
	Menu helps_menu;

	ToolButton button[7];
	Image icon_menu[7];


	Table table;
	Table table_into;
	ScrolledWindow scrolled_window;
	ScrolledWindow scroll_text;
	TextView text;
	Glib::RefPtr<TextBuffer> tweet_buffer;
	VBox layout;
	MenuBar menu_bar;

	Statusbar status_bar;
	Statusbar statusbar_char;
	Toolbar tool_bar;

	string status_label;

	void on_submit_text();
	void on_writing();
	void updateStatusBar();

	void loadWindowCredits();
	void loadWindowVersion();
	void loadWindowOptions();
	void loadWindowAdduser();


public:
	MainWindow();
	virtual ~MainWindow();

	void foo();
	void gtkConnect();

	void on_quit();
};

#endif /* MAINWINDOW_H_ */
