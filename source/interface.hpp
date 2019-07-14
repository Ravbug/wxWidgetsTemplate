//
//  interface.hpp
//
//  Copyright © 2019 Ravbug. All rights reserved.
//
// This file contains the definition for the GUI.

#pragma once
#include <wx/string.h>
#include <wx/gdicmn.h>
#include <wx/frame.h>
#include <wx/event.h>


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
