///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "interface.h"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* baseSizer;
	baseSizer = new wxBoxSizer( wxVERTICAL );

	infoLabel = new wxStaticText( this, wxID_ANY, wxT("Open form.fpb to edit this window. Then Generate Code (F8) and recompile. Unicode Test: 💬"), wxDefaultPosition, wxDefaultSize, 0 );
	infoLabel->Wrap( 500 );
	baseSizer->Add( infoLabel, 0, wxALL, 5 );


	this->SetSizer( baseSizer );
	this->Layout();
	statusBar = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );
	menuBar = new wxMenuBar( 0 );
	menuFile = new wxMenu();
	wxMenuItem* menuAbout;
	menuAbout = new wxMenuItem( menuFile, wxID_ABOUT, wxString( wxT("About") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuAbout );

	wxMenuItem* menuQuit;
	menuQuit = new wxMenuItem( menuFile, wxID_EXIT, wxString( wxT("Close") ) + wxT('\t') + wxT("Ctrl-W"), wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuQuit );

	wxMenuItem* menuHello;
	menuHello = new wxMenuItem( menuFile, ID_Hello, wxString( wxT("Hello") ) + wxT('\t') + wxT("Ctrl-H"), wxT("Show Sample Dialog with custom ID"), wxITEM_NORMAL );
	menuFile->Append( menuHello );

	menuBar->Append( menuFile, wxT("File") );

	this->SetMenuBar( menuBar );


	this->Centre( wxBOTH );
}

MainFrameBase::~MainFrameBase()
{
}
