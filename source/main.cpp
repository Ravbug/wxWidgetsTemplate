//
//  main.cpp
//  wxTest
//
//  Created by Main on 3/1/19.
//  Copyright © 2019 Ravbug. All rights reserved.
//

// wxWidgets "Hello world" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif
class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};
class MainFrame: public wxFrame
{
public:
    MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size);
private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
    wxDECLARE_EVENT_TABLE();
};
enum
{
    ID_Hello = 1
};
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
EVT_MENU(ID_Hello,   MainFrame::OnHello)
EVT_MENU(wxID_EXIT,  MainFrame::OnExit)
EVT_MENU(wxID_ABOUT, MainFrame::OnAbout)
wxEND_EVENT_TABLE()
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MainFrame *frame = new MainFrame( "Hello World", wxPoint(50, 50), wxSize(450, 340) );
#ifdef _WIN32
	//set the icon (name is the same as the one used in the resource file definition)
	frame->SetIcon(wxIcon("IDI_WXWIN"));
#endif 

    frame->Show( true );
    return true;
}
MainFrame::MainFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
: wxFrame(NULL, wxID_ANY, title, pos, size)
{
    wxMenu *menuFile = new wxMenu;
    menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
                     "Help string shown in status bar for this menu item");
    menuFile->AppendSeparator();
    menuFile->Append(wxID_EXIT);
    wxMenu *menuHelp = new wxMenu;
    menuHelp->Append(wxID_ABOUT);
    wxMenuBar *menuBar = new wxMenuBar;
    menuBar->Append( menuFile, "&File" );
    menuBar->Append( menuHelp, "&Help" );
    SetMenuBar( menuBar );
    CreateStatusBar();
    SetStatusText( "Welcome to wxWidgets!" );
}
void MainFrame::OnExit(wxCommandEvent& event)
{
    Close( true );
}
void MainFrame::OnAbout(wxCommandEvent& event)
{
    wxMessageBox( "This is a wxWidgets' Hello world sample",
                 "About Hello World", wxOK | wxICON_INFORMATION );
}
void MainFrame::OnHello(wxCommandEvent& event)
{
    wxLogMessage("Hello world from wxWidgets!");
}
