#ifndef WXEVENTO_H
#define WXEVENTO_H
#include "wxfb_project.h"
#include "Evento.h"
#include "Registro.h"

class VentanaEvento : public WxEvento {
	
private:
	bool NuevoEvento;
	Registro *registro;
	int pos;
protected:
	void aceptarEvento( wxCommandEvent& event )  override;
	void cancelarEvento( wxCommandEvent& event )  override;
	
public:
	VentanaEvento(wxWindow *parent, int i, Registro* r);
	~VentanaEvento();
};

#endif

