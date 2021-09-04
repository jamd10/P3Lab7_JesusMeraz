#include "Usuario.h"
#include <string>
#include <iostream>
#include <iostream>
#include <fstream>
using std::vector;
using namespace std;
Usuario::Usuario(){
	
}
Usuario::~Usuario() {
	for(int i = 0; i<publicaciones.size(); i++) {
		if(publicaciones[i] != NULL){
			delete publicaciones.at(i);
		}
	}
}
vector<Publicacion*> Usuario::getVector() {
	return this->publicaciones;
}
void Usuario::agregarUsuario(Publicacion* pc) {
	publicaciones.push_back(pc);
}
Usuario::Usuario(int id, string username, string password, bool esAdmin){
	this-> id =id;
	this-> username = username;
	this-> password = password;
	this-> esAdmin = esAdmin;
}
int Usuario::getId(){
	return 	this-> id;
}
void Usuario::setId(int id){
	this-> id = id;;
}


string Usuario::getUsername(){
	return 	this-> username;
}
void Usuario::setUsername(string id){
	this-> username = username;;
}


string Usuario::getPassword(){
	return 	this-> password;
}
void Usuario::setPassword(string password){
	this-> password = password;;
}


bool Usuario::getEsAdmin(){
	return 	this-> esAdmin;
}
void Usuario::setEsAdmin(bool esAdmin){
	this-> esAdmin = esAdmin;;
}
void guardarUsuario(ofstream* archivo){
		
}
string Usuario:: toString(){
	return std::to_string(id) + username + password + std::to_string(esAdmin) ;
}