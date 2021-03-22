#include "VentanaEvento.h"

VentanaEvento::VentanaEvento(wxWindow *parent, int i, Registro* r) : WxEvento(parent) {
	registro = r;
	if( i == -1){ NuevoEvento = true; }
	else{	
		NuevoEvento = false; 
		pos = i;
		Evento eventoAux = registro->getEventoFromVector(pos);
		
		m_textDescripcion->SetValue( wxString( eventoAux.getDescripcion() ) );
		m_textEnte->SetValue( wxString( eventoAux.getEnte() ) );
		m_textDia->SetValue( wxString( std::to_string( eventoAux.getDia() ) ) );
		m_textMes->SetValue( wxString( std::to_string( eventoAux.getMes() ) ) );
		m_textAnio->SetValue( wxString( std::to_string( eventoAux.getAnio() ) ) );
		m_textMonto->SetValue( wxString( std::to_string( eventoAux.getMonto() ) ) );
		m_choiceMoneda->SetLabel( wxString( ( eventoAux.getMoneda() ) ) );
	}
	
	
}

VentanaEvento::~VentanaEvento() {
	
}

void VentanaEvento::aceptarEvento( wxCommandEvent& event )  {
	
	Evento eventoAux;
	eventoAux.setDescripcion(m_textDescripcion->GetValue().ToStdString());
	eventoAux.setEnte(m_textEnte->GetValue().ToStdString());
	
	long dia,mes,anio,monto;
	m_textDia->GetValue().ToLong(&dia);
		eventoAux.setDia(dia);
	m_textMes->GetValue().ToLong(&mes);
		eventoAux.setMes(mes);
	m_textAnio->GetValue().ToLong(&anio);
		eventoAux.setAnio(anio);
	m_textMonto->GetValue().ToLong(&monto);
		eventoAux.setmonto(monto);
	
	eventoAux.setMoneda( m_choiceMoneda->GetString( m_choiceMoneda->GetCurrentSelection() ).ToStdString() );
	
	///si NuevoEvento == true entonces se crea un nuevo evento y se retorna dicho Eveno
	if( NuevoEvento == true){
		registro->registrarNuevoEvento(eventoAux);
	}///si NuevoEvento == false entonces se editará un evento ya creado
	else{
	///muestra los valores
		registro->guardarEventoEditado(eventoAux, pos);	
	}
	registro->guardarEventosVector();
	this->Close();
}

void VentanaEvento::cancelarEvento( wxCommandEvent& event )  {
	this->Close();
}

