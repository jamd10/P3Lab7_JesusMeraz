#ifndef PUBLICACION_H
#define PUBLICACION_H
#include <iostream>
#include <string>

using namespace std;
class Publicacion
{	
	private:
		int idPublicacion;
		string titulo;
		string autor;
		string texto;
		string fechaPublicacion;
		
	public:
		Publicacion();
		~Publicacion();
		Publicacion(int, string, string, string, string);
		int getIdPublicacion();
		void setIdPublicacion(int);
		string getTitulo();
		void setTitulo(string);
		string getAutor();
		void setAutor(string);
		string getTexto();
		void setTexto(string);
		string getFechaPublicacion();
		void setFechaPublicacion(string);
		void guardarPublicacion(ofstream*);
		string toString();
};

#endif