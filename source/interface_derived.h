#pragma once

//
//  interface_derived.h
//
//  Copyright © 2019 Ravbug. All rights reserved.
//
// This file contains the definition for GUI events and methods
// Define the user interface elements with wxFormBuilder

#include "interface.h"
#include <wx/event.h>

//// end generated include

class MainFrame : public MainFrameBase
{
public:
	MainFrame(wxWindow* parent = NULL);
private:
	void OnHello(wxCommandEvent&);
	void OnExit(wxCommandEvent&);
	void OnAbout(wxCommandEvent&);
	void HandleDPIChange(wxDPIChangedEvent&);

	wxDECLARE_EVENT_TABLE();
};
