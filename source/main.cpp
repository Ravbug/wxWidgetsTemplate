//
//  main.cpp
//  wxWidgetsTemplate
//
//  Copyright © 2019 Ravbug. All rights reserved.
//
// This file contains the definition for a wxWidgets application. It configures it and launches it.
// There is no int main function.

// wxWidgets "Hello world" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif

#include "interface.hpp"

class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};

wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MainFrame *frame = new MainFrame( "Hello World", wxPoint(50, 50), wxSize(450, 340) );
    frame->Show( true );
    return true;
}
