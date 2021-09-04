#ifndef BLOG_H
#define BLOG_H
#include "Usuario.h"
class Blog
{
	private:
		string nombre = "YouBLOG";
		vector <Usuario*> publicaciones;
	public:
		void verPublicaciones();
		bool compare(Publicacion*, Publicacion*);
		void cargarArchivos(String,String);
		void escribirUsuarios(String);
		void escribirPublicaciones(String);
	
};

#endif