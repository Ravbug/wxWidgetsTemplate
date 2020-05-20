//
//  interface.cpp
//
//  Copyright © 2019 Ravbug. All rights reserved.
//
// This file contains the implementation for the main GUI.
// Place constructors and function definitons here.

#include "interface_derived.h"
#include <wx/aboutdlg.h>
#include <wx/version.h> 
#include "globals.h"


//include the icon file on linux
#ifdef __linux
#include "wxlin.xpm"
#endif

//Declare event mapping here
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
EVT_MENU(ID_Hello,   MainFrame::OnHello)
EVT_MENU(wxID_EXIT,  MainFrame::OnExit)
EVT_MENU(wxID_ABOUT, MainFrame::OnAbout)
EVT_DPI_CHANGED(MainFrame::HandleDPIChange)
wxEND_EVENT_TABLE()

MainFrame::MainFrame(wxWindow* parent) : MainFrameBase( parent )
{
	//perform any additional setup here
	
	//set the icon and fix scaling issues(windows and linux only)
	#ifdef _WIN32
		//name is the same as the one used in the resource file definition
		//the resource file definition must have the same ending as the name of the icon file itself
		//in this case, the icon file is wxwin.ico, so the definition is IDI_WXWIN
		SetIcon(wxIcon("IDI_WXWIN"));
	
		//fix DPI scaling
		dpi_scale(this);
	#elif __linux
		SetIcon(wxIcon(wxICON(wxlin)));
	#endif

}

void MainFrame::HandleDPIChange(wxDPIChangedEvent& event)
{
#ifdef _WIN32
	dpi_scale(this);
#endif
}

//definitions for the events
void MainFrame::OnExit(wxCommandEvent& event)
{
	Close( true );
}

//called when the about menu is pressed
void MainFrame::OnAbout(wxCommandEvent& event)
{
	//example use of native about dialog with icons
	wxAboutDialogInfo aboutInfo;
	aboutInfo.SetName("wxWidgetsTemplate");
	aboutInfo.SetVersion("1.0.0");
	aboutInfo.SetCopyright("(C) 2020 Ravbug");
	aboutInfo.SetDescription(wxString::Format("wxWidgets %d.%d.%d.%d", wxMAJOR_VERSION, wxMINOR_VERSION, wxRELEASE_NUMBER, wxSUBRELEASE_NUMBER));
#if defined _WIN32
	aboutInfo.SetIcon(wxIcon("IDI_WXWIN"));
#elif defined __linux__
	aboutInfo.SetIcon(wxICON(wxlin_s));
#endif
	wxAboutBox(aboutInfo);
}

//called when the hello menu is pressed
void MainFrame::OnHello(wxCommandEvent& event)
{
	wxLogMessage("Hello world from wxWidgets!");
}
