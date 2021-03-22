///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Mar 15 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

WxPrincipal::WxPrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	bSizer3->SetMinSize( wxSize( 550,40 ) );
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Eventos y Transacciones"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 15, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxEmptyString ) );

	bSizer3->Add( m_staticText2, 0, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer2->Add( bSizer3, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_RIGHT, 0 );

	m_grilla = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grilla->CreateGrid( 0, 7 );
	m_grilla->EnableEditing( false );
	m_grilla->EnableGridLines( true );
	m_grilla->EnableDragGridSize( false );
	m_grilla->SetMargins( 0, 0 );

	// Columns
	m_grilla->SetColSize( 0, 150 );
	m_grilla->SetColSize( 1, 120 );
	m_grilla->SetColSize( 2, 70 );
	m_grilla->SetColSize( 3, 80 );
	m_grilla->SetColSize( 4, 70 );
	m_grilla->SetColSize( 5, 100 );
	m_grilla->SetColSize( 6, 95 );
	m_grilla->EnableDragColMove( false );
	m_grilla->EnableDragColSize( true );
	m_grilla->SetColLabelValue( 0, wxT("Descripción") );
	m_grilla->SetColLabelValue( 1, wxT("Ente") );
	m_grilla->SetColLabelValue( 2, wxT("Día") );
	m_grilla->SetColLabelValue( 3, wxT("Mes") );
	m_grilla->SetColLabelValue( 4, wxT("Año") );
	m_grilla->SetColLabelValue( 5, wxT("Monto") );
	m_grilla->SetColLabelValue( 6, wxT("Moneda") );
	m_grilla->SetColLabelSize( 30 );
	m_grilla->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grilla->EnableDragRowSize( true );
	m_grilla->SetRowLabelSize( 1 );
	m_grilla->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grilla->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer2->Add( m_grilla, 1, wxALL|wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_buttonAgregarPrincipal = new wxButton( this, wxID_ANY, wxT("Agregar Evento"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_buttonAgregarPrincipal, 0, wxALL, 5 );

	m_buttonEditarPrincipal = new wxButton( this, wxID_ANY, wxT("Editar Evento"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_buttonEditarPrincipal, 0, wxALL, 5 );

	m_buttonEliminarPrincipal = new wxButton( this, wxID_ANY, wxT("Eliminar Evento"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_buttonEliminarPrincipal, 0, wxALL, 5 );


	bSizer2->Add( bSizer4, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_buttonAgregarPrincipal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxPrincipal::agregarNuevoEvento ), NULL, this );
	m_buttonEditarPrincipal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxPrincipal::editarEvento ), NULL, this );
	m_buttonEliminarPrincipal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxPrincipal::eliminarEvento ), NULL, this );
}

WxPrincipal::~WxPrincipal()
{
	// Disconnect Events
	m_buttonAgregarPrincipal->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxPrincipal::agregarNuevoEvento ), NULL, this );
	m_buttonEditarPrincipal->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxPrincipal::editarEvento ), NULL, this );
	m_buttonEliminarPrincipal->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxPrincipal::eliminarEvento ), NULL, this );

}

WxEvento::WxEvento( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 400,300 ), wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNFACE ) );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Descripción"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetMinSize( wxSize( 80,-1 ) );

	bSizer6->Add( m_staticText3, 0, wxALL, 5 );

	m_textDescripcion = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_textDescripcion->HasFlag( wxTE_MULTILINE ) )
	{
	m_textDescripcion->SetMaxLength( 100 );
	}
	#else
	m_textDescripcion->SetMaxLength( 100 );
	#endif
	m_textDescripcion->SetMinSize( wxSize( 290,-1 ) );

	bSizer6->Add( m_textDescripcion, 0, wxALL, 5 );


	bSizer5->Add( bSizer6, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Ente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetMinSize( wxSize( 80,-1 ) );

	bSizer7->Add( m_staticText4, 0, wxALL, 5 );

	m_textEnte = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_textEnte->HasFlag( wxTE_MULTILINE ) )
	{
	m_textEnte->SetMaxLength( 100 );
	}
	#else
	m_textEnte->SetMaxLength( 100 );
	#endif
	m_textEnte->SetMinSize( wxSize( 290,-1 ) );

	bSizer7->Add( m_textEnte, 0, wxALL, 5 );


	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Día"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	m_staticText5->SetMinSize( wxSize( 80,-1 ) );

	bSizer8->Add( m_staticText5, 0, wxALL, 5 );

	m_textDia = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_textDia->HasFlag( wxTE_MULTILINE ) )
	{
	m_textDia->SetMaxLength( 2 );
	}
	#else
	m_textDia->SetMaxLength( 2 );
	#endif
	m_textDia->SetMinSize( wxSize( 290,-1 ) );

	bSizer8->Add( m_textDia, 0, wxALL, 5 );


	bSizer5->Add( bSizer8, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetMinSize( wxSize( 80,-1 ) );

	bSizer9->Add( m_staticText6, 0, wxALL, 5 );

	m_textMes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_textMes->HasFlag( wxTE_MULTILINE ) )
	{
	m_textMes->SetMaxLength( 2 );
	}
	#else
	m_textMes->SetMaxLength( 2 );
	#endif
	m_textMes->SetMinSize( wxSize( 290,-1 ) );

	bSizer9->Add( m_textMes, 0, wxALL, 5 );


	bSizer5->Add( bSizer9, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Año"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetMinSize( wxSize( 80,-1 ) );

	bSizer10->Add( m_staticText7, 0, wxALL, 5 );

	m_textAnio = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_textAnio->HasFlag( wxTE_MULTILINE ) )
	{
	m_textAnio->SetMaxLength( 4 );
	}
	#else
	m_textAnio->SetMaxLength( 4 );
	#endif
	m_textAnio->SetMinSize( wxSize( 290,-1 ) );

	bSizer10->Add( m_textAnio, 0, wxALL, 5 );


	bSizer5->Add( bSizer10, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Monto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	m_staticText8->SetMinSize( wxSize( 80,-1 ) );

	bSizer11->Add( m_staticText8, 0, wxALL, 5 );

	m_textMonto = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textMonto->SetMinSize( wxSize( 290,-1 ) );

	bSizer11->Add( m_textMonto, 0, wxALL, 5 );


	bSizer5->Add( bSizer11, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Moneda"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->SetMinSize( wxSize( 80,-1 ) );

	bSizer12->Add( m_staticText9, 0, wxALL, 5 );

	wxString m_choiceMonedaChoices[] = { wxT("Peso ARS"), wxT("Dolar US"), wxT("Euro"), wxT("Libra Esterlina ") };
	int m_choiceMonedaNChoices = sizeof( m_choiceMonedaChoices ) / sizeof( wxString );
	m_choiceMoneda = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceMonedaNChoices, m_choiceMonedaChoices, 0 );
	m_choiceMoneda->SetSelection( 0 );
	m_choiceMoneda->SetMinSize( wxSize( 290,-1 ) );

	bSizer12->Add( m_choiceMoneda, 0, wxALL, 5 );


	bSizer5->Add( bSizer12, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_buttonAceptarEvento = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_buttonAceptarEvento, 0, wxALL, 5 );

	m_buttonCancelarEvento = new wxButton( this, wxID_ANY, wxT("Cancelar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_buttonCancelarEvento, 0, wxALL, 5 );


	bSizer5->Add( bSizer13, 0, wxALIGN_RIGHT, 5 );


	this->SetSizer( bSizer5 );
	this->Layout();
	bSizer5->Fit( this );

	// Connect Events
	m_buttonAceptarEvento->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxEvento::aceptarEvento ), NULL, this );
	m_buttonCancelarEvento->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxEvento::cancelarEvento ), NULL, this );
}

WxEvento::~WxEvento()
{
	// Disconnect Events
	m_buttonAceptarEvento->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxEvento::aceptarEvento ), NULL, this );
	m_buttonCancelarEvento->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( WxEvento::cancelarEvento ), NULL, this );

}
