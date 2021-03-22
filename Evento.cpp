#include "Evento.h"
#include <iostream>
#include <string>
Evento::Evento(){
}

void Evento::mostrarEvento(int i){
	std::cout<<"----------------------------------------"<<std::endl;
	std::cout<<"Evento "<<i+1<<std::endl;
	std::cout<<"Evento: "<<Descripcion<<std::endl;
	//std::cout<<"Fecha: ";fecha.mostrarFecha();
	std::cout<<"Monto del Evento: "<<monto<<std::endl;
	std::cout<<"----------------------------------------"<<std::endl;
}

Evento::Evento(std::string Descrip, std::string Ent,float mont, int Dia, int Mes, int Anio, std::string moned){
	Descripcion = Descrip;
	monto = mont;
	Ente = Ent;
	dia = Dia;
	mes = Mes;
	anio = Anio;
	moneda = moned;
}

std::string Evento::getDescripcion(){
	return Descripcion;
}
float Evento::getMonto(){
	return monto;
}
std::string Evento::getMoneda(){
	return moneda;
}
int Evento::getDia(){
	return dia;
}
int Evento::getMes(){
	return mes;
}
int Evento::getAnio(){
	return anio;
}
std::string Evento::getEnte(){
	return Ente;
}

void Evento::setDescripcion(std::string Descrip){
	Descripcion = Descrip;
}
void Evento::setmonto(float mont){
	monto = mont;
}
void Evento::setEnte(std::string ente){
	Ente = ente;
}
void Evento::setMoneda(std::string moned){
	moneda=moned;
}
void Evento::setDia(int di){
	dia = di;
}
void Evento::setMes(int me){
	mes = me;
}
void Evento::setAnio(int ani){
	anio = ani;
}
