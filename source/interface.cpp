//
//  interface.cpp
//
//  Copyright © 2019 Ravbug. All rights reserved.
//
// This file contains the implementation for the main GUI.
// Place constructors and function definitons here.

#include "interface.hpp"

//include the icon file on linux
#ifdef __linux
#include "wxlin.xpm"
#endif

//Declare events here
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
EVT_MENU(ID_Hello,   MainFrame::OnHello)
EVT_MENU(wxID_EXIT,  MainFrame::OnExit)
EVT_MENU(wxID_ABOUT, MainFrame::OnAbout)
wxEND_EVENT_TABLE()

//window constructor
MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame(NULL, wxID_ANY, title, pos, size)
{
	//set up the menus
	wxMenu *menuFile = new wxMenu;
	menuFile->Append(ID_Hello, "&Hello...\tCtrl-H","Help string shown in status bar for this menu item");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);
	wxMenu *menuHelp = new wxMenu;
	menuHelp->Append(wxID_ABOUT);
	wxMenuBar *menuBar = new wxMenuBar;
	menuBar->Append( menuFile, "&File" );
	menuBar->Append( menuHelp, "&Help" );
	SetMenuBar( menuBar );
	
	//create the status bar, and set the text on it
	CreateStatusBar();
	SetStatusText( "Welcome to wxWidgets!" );
	
	//set the icon (windows and linux only)
#ifdef _WIN32
	//name is the same as the one used in the resource file definition
	//the resource file definition must have the same ending as the name of the icon file itself
	//in this case, the icon file is wxwin.ico, so the definition is IDI_WXWIN
	SetIcon(wxIcon("IDI_WXWIN"));
#elif __linux
	SetIcon(wxIcon(wxICON(wxlin)));
#endif
}

//definitions for the events
void MainFrame::OnExit(wxCommandEvent& event)
{
	Close( true );
}
void MainFrame::OnAbout(wxCommandEvent& event)
{
	wxMessageBox( "This is a wxWidgets' Hello world sample", "About Hello World", wxOK | wxICON_INFORMATION );
}
void MainFrame::OnHello(wxCommandEvent& event)
{
	wxLogMessage("Hello world from wxWidgets!");
}
