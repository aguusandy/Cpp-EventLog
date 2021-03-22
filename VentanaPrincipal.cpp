#include "VentanaPrincipal.h"
#include "VentanaEvento.h"
#include <wx/msgdlg.h>
#include <wx/icon.h>
#include <wx/strconv.h>

VentanaPrincipal::VentanaPrincipal(wxWindow *parent) : WxPrincipal(parent) {
	registro = new Registro();
	int cantidadEventos = registro->getCantidadEventos();
	m_grilla->SetSelectionMode(wxGrid::wxGridSelectRows);
	m_grilla->AppendRows(cantidadEventos); 
	CargarEventosPlantilla();
}

VentanaPrincipal::~VentanaPrincipal() {
	
	
}

void VentanaPrincipal::agregarNuevoEvento( wxCommandEvent& event){
	VentanaEvento* ventanaNuevoEvento = new VentanaEvento(this,-1,registro);
	ventanaNuevoEvento->Show();
	registro->limpiarVector();
	registro->cargarEventosVector();
	CargarEventosPlantilla();
}

void VentanaPrincipal::editarEvento( wxCommandEvent& event )  {
	int fila_actual = m_grilla->GetGridCursorRow();
	VentanaEvento* ventanaEditarEvento = new VentanaEvento(NULL, fila_actual, registro);
	ventanaEditarEvento->Show();
	registro->limpiarVector();
	registro->cargarEventosVector();
	CargarEventosPlantilla();
}

void VentanaPrincipal::eliminarEvento( wxCommandEvent& event )  {
	int fila_actual = m_grilla->GetGridCursorRow();
	int res = wxMessageBox(wxString(std::string("¿Eliminar el registro?")),m_grilla->GetCellValue(fila_actual,0),wxYES_NO);
	if (res==wxYES) {
		m_grilla->DeleteRows(fila_actual,1);
		registro->eliminarEvento(fila_actual);
		registro->guardarEventosVector();
	}	
}

void VentanaPrincipal::CargarFila(int i) {
	Evento evento = registro->getEventoFromVector(i);
	m_grilla->SetCellValue( i, 0, wxString( evento.getDescripcion() ));
	m_grilla->SetCellValue( i, 1, wxString( evento.getEnte() ) );
	m_grilla->SetCellValue( i, 2, wxString( std::to_string(evento.getDia()) ) );
	m_grilla->SetCellValue( i, 3, wxString( std::to_string(evento.getMes()) ) );
	m_grilla->SetCellValue( i, 4, wxString( std::to_string(evento.getAnio()) ) );
	m_grilla->SetCellValue( i, 5, wxString( std::to_string(evento.getMonto()) ) );
	m_grilla->SetCellValue( i, 6, wxString( evento.getMoneda() ) );
	
	
}

void VentanaPrincipal::CargarEventosPlantilla( ){
	int tamanio = registro->getCantidadEventos();

	for(int i=0;i<tamanio;++i){
		CargarFila(i);
	}
}
