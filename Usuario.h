#ifndef USUARIO_H
#define USUARIO_H
#include <string>
#include <vector>
#include "Publicacion.h"
#include <fstream>
using std::vector;
using namespace std;
class Usuario
{
	private:
		int	id;
		string username;
		string password;
		bool esAdmin;
		vector <Publicacion*> publicaciones;
	public:
		Usuario();
		~Usuario();
		Usuario(int, string, string, bool);
		int getId();
		void setId(int);
		string getUsername();
		void setUsername(string);
		string getPassword();
		void setPassword(string);
		bool getEsAdmin();
		void setEsAdmin(bool);
		void agregarUsuario(Publicacion*);
		vector<Publicacion*> getVector();
		void guardarUsuario(ofstream*);
		string toString();
};

#endif