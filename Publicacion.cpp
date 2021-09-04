#include "Publicacion.h"
Publicacion::Publicacion(){
	
}
Publicacion::~Publicacion(){
	
}
Publicacion::Publicacion(int idPublicacion, string titulo, string autor, string texto, string fechaPublicacion){
	this-> idPublicacion =idPublicacion;
	this-> titulo = titulo;
	this-> autor = autor;
	this-> texto = texto;
	this-> fechaPublicacion = fechaPublicacion;
	
}
int Publicacion::getIdPublicacion(){
	return 	this-> idPublicacion;
}
void Publicacion::setIdPublicacion(int idPublicacion){
	this-> idPublicacion = idPublicacion;;
}


string Publicacion::getTitulo(){
	return 	this-> titulo;
}
void Publicacion::setTitulo(string titulo){
	this-> titulo = titulo;;
}


string Publicacion::getAutor(){
	return 	this-> autor;
}
void Publicacion::setAutor(string autor){
	this-> autor = autor;;
}

string Publicacion::getTexto(){
	return 	this-> texto;
}
void Publicacion::setTexto(string texto){
	this-> texto = texto;;
}
string Publicacion::getFechaPublicacion(){
	return 	this-> fechaPublicacion;
}
void Publicacion::setFechaPublicacion(string fechaPublicacion){
	this-> fechaPublicacion = fechaPublicacion;;
}
