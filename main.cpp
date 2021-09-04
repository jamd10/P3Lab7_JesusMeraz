#include <iostream>
#include <string>
#include <time.h>
#include <fstream>
using namespace std;
int menu();
//fstream myFile;
int main(int argc, char** argv) {
	// crear los archivos csv
	fstream ReadFile("usuarios.csv", ios::in);
	if(!ReadFile){
		fstream	createFile("usuarios.csv", ios::out);
		createFile<<"id, usuario, contrasenia, esAdmin "<<endl;
	}
	fstream ReadFile2("publicaciones.csv", ios::in);
	if(!ReadFile){
		fstream	createFile("publicaciones.csv", ios::out);
		createFile<<"idPublicacion, titulo, autor, texto, fechaPublicacion "<<endl;
	}
	string user = "", pass = "";
	cout<<"Ingrese su nombre de usuario: "<<endl;
	cin>>user;
	cout<<"Ingrese su contraseña: "<<endl;
	cin>> pass;
	if(user == "admin" && pass == "1111"){
		int op = menu();
		while(op != 6){
			switch(op){
				case 1:{
					break;
				}
				case 2:{
					break;
				}
				case 3:{
					break;
				}
				case 4:{
					break;
				}
				case 5:{
					break;
				}
				default: {
					cout<<"Opcion invalida"<< endl;
					menu();
					break;
				}
			}
			op = menu();
		}
	}
	else if(user == "ss"){
			int p = 0;
			cout<<"******************** Menu ********************"<<endl;
			cout<<"* 1. Ver publicaciones                       *"<<endl;
			cout<<"* 2. Mis publicaciones                       *"<<endl;
			cout<<"* 3. Actualizar contraseña                   *"<<endl;
			cout<<"* 4. Cerrar sesion                           *"<<endl;
			cout<<"**********************************************"<<endl;
			cin>>p;
			switch(p){
				case 1:{
					break;
				}
				case 2:{
					break;
				}
				case 3:{
					break;
				}
				case 4:{
					break;
				}
				default: {
					cout<<"Opcion invalida"<< endl;
					menu();
					break;
				}
			}
		}else{
			cout<<"Usuario o contraseña incorrecta "<<endl;
		}
	return 0;
}
int menu(){
	int opcion = 0;
	cout<<"******************** Menu ********************"<<endl;
	cout<<"* 1. Agregar usuario                         *"<<endl;
	cout<<"* 2. Eliminar usuario                        *"<<endl;
	cout<<"* 3. Actualizar contraseña                   *"<<endl;
	cout<<"* 4. Ver publicaciones                       *"<<endl;
	cout<<"* 5. Cerrar sesion                           *"<<endl;
	cout<<"* 6. Salir                                   *"<<endl;
	cout<<"**********************************************"<<endl;
	cout<<"Elija una opcion: "<<endl;
	cin>> opcion;
	return opcion;
}