#include "Registro.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;
struct structEvento{
	char DescripcionStruct[100];
	float montoStruct;
	char Ente[100];
	char Moneda[100];
	int Dia;
	int Mes;
	int Anio;
};

Registro::Registro() {
	cargarEventosVector();
}

///pasa todos los eventos del archivo binario y los pasa al vectorEventos
bool Registro::cargarEventosVector(){	
	vectorEventos.clear();
	structEvento structEventoAux;
	std::ifstream fin("Eventos.xyz",std::ios::binary| std::ios::ate);
	if( fin.is_open() ){
		fin.seekg(0,std::ios::beg);
		while(	fin.read(reinterpret_cast<char*>(&structEventoAux), sizeof(structEventoAux)) ){
			Evento eventoAuxiliar( 
				std::string(structEventoAux.DescripcionStruct), 
				std::string(structEventoAux.Ente), 
				structEventoAux.montoStruct,
				structE	ventoAux.Dia, 
				structEventoAux.Mes, 
				structEventoAux.Anio, 
				std::string(structEventoAux.Moneda)
								   );
			vectorEventos.push_back( eventoAuxiliar );
		}
	}
	fin.close();
}

///crea un nuevo evento cuyos datos son obtenidos por otra función y se inserta en el vector de Eventos
void Registro::registrarNuevoEvento(Evento event){
	vectorEventos.push_back(event);
	guardarEventosVector();
}

///eliminar un evento del vector y guarda el vector en el archivo
void Registro::eliminarEvento(int i){
	vectorEventos.erase( vectorEventos.begin()+i ); 
	guardarEventosVector();
}

///guarda los eventos en el archivo	
void Registro::guardarEventosVector(){
	std::ofstream fout("Eventos.xyz",std::ios::binary| std::ios::trunc);
	for( Evento eventoAuxiliar:vectorEventos ){
		structEvento structEventoAux;
		strcpy(structEventoAux.DescripcionStruct,eventoAuxiliar.getDescripcion().c_str());
		strcpy(structEventoAux.Moneda, eventoAuxiliar.getMoneda().c_str());
		strcpy(structEventoAux.Ente, eventoAuxiliar.getEnte().c_str());
		structEventoAux.montoStruct = eventoAuxiliar.getMonto();
		structEventoAux.Dia = eventoAuxiliar.getDia();
		structEventoAux.Mes = eventoAuxiliar.getMes();
		structEventoAux.Anio = eventoAuxiliar.getAnio();                
		fout.write(reinterpret_cast<char*>(&structEventoAux), sizeof(structEventoAux));
	}
	fout.close();
}

Evento Registro::getEventoFromVector(int i){
	return vectorEventos[i];
}

int Registro::getCantidadEventos(){
	return vectorEventos.size();
}

void Registro::guardarEventoEditado(Evento event, int pos){
	vectorEventos[pos].setDescripcion( event.getDescripcion() );
	vectorEventos[pos].setEnte( event.getEnte() );
	vectorEventos[pos].setDia( event.getDia() );
	vectorEventos[pos].setMes( event.getMes() );
	vectorEventos[pos].setAnio( event.getAnio() );
	vectorEventos[pos].setmonto( event.getMonto() );
	vectorEventos[pos].setMoneda( event.getMoneda() );
}

void Registro::limpiarVector(){
	vectorEventos.clear();
}
