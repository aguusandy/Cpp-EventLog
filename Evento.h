#ifndef EVENTO_H
#define EVENTO_H
#include <string>

class Evento {
public:
	Evento();
	Evento(std::string Descrip, std::string Ente,float mont, int dia, int mes, int anio, std::string moneda);
	void mostrarEvento(int i);
	
	std::string getDescripcion();
	float getMonto();
	std::string getMoneda();
	std::string getEnte();
	int getDia();
	int getMes();
	int getAnio();
	
	void setDescripcion(std::string Descrip);
	void setmonto(float mont);
	void setEnte(std::string ent);
	void setDia(int di);
	void setMes(int me);
	void setAnio(int ani);
	void setMoneda(std::string moned);
private:
	std::string Descripcion;
	float monto;
	int dia;
	int mes;
	int anio;
	std::string Ente;
	std::string moneda;
};

#endif

