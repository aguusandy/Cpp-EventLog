#ifndef WXPRINCIPAL_H
#define WXPRINCIPAL_H
#include "wxfb_project.h"
#include "Registro.h"

class VentanaPrincipal : public WxPrincipal {
	
private:
	Registro* registro;
	
protected:
	void editarEvento( wxCommandEvent& event )  override;
	void eliminarEvento( wxCommandEvent& event )  override;
	void agregarNuevoEvento( wxCommandEvent& event )  override;
	void CargarFila(int i);
	void CargarEventosPlantilla();
	
public:
	VentanaPrincipal(wxWindow *parent=NULL);
	~VentanaPrincipal();
};

#endif

