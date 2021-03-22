///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Mar 15 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/grid.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/choice.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class WxPrincipal
///////////////////////////////////////////////////////////////////////////////
class WxPrincipal : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText2;
		wxGrid* m_grilla;
		wxButton* m_buttonAgregarPrincipal;
		wxButton* m_buttonEditarPrincipal;
		wxButton* m_buttonEliminarPrincipal;

		// Virtual event handlers, override them in your derived class
		virtual void agregarNuevoEvento( wxCommandEvent& event ) { event.Skip(); }
		virtual void editarEvento( wxCommandEvent& event ) { event.Skip(); }
		virtual void eliminarEvento( wxCommandEvent& event ) { event.Skip(); }


	public:

		WxPrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Registro"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 700,500 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~WxPrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class WxEvento
///////////////////////////////////////////////////////////////////////////////
class WxEvento : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxTextCtrl* m_textDescripcion;
		wxStaticText* m_staticText4;
		wxTextCtrl* m_textEnte;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textDia;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textMes;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textAnio;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textMonto;
		wxStaticText* m_staticText9;
		wxChoice* m_choiceMoneda;
		wxButton* m_buttonAceptarEvento;
		wxButton* m_buttonCancelarEvento;

		// Virtual event handlers, override them in your derived class
		virtual void aceptarEvento( wxCommandEvent& event ) { event.Skip(); }
		virtual void cancelarEvento( wxCommandEvent& event ) { event.Skip(); }


	public:

		WxEvento( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Evento"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~WxEvento();

};

