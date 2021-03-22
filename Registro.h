#ifndef REGISTRO_H
#define REGISTRO_H
#include "Evento.h"
#include <vector>

class Registro {
public:
	Registro();
	
	bool cargarEventosVector();
	void guardarEventosVector();

	void registrarNuevoEvento(Evento event);
	void eliminarEvento(int i);
	Evento getEventoFromVector(int i);
	void guardarEventoEditado(Evento event, int pos);
	
	int getCantidadEventos();
	void limpiarVector();
	
private:
	std::vector<Evento> vectorEventos;
};

#endif

