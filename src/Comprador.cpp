#include <iostream>

#include "Usuario.h"
#include "Comprador.h"

#include <string.h>

using namespace std;

Comprador::Comprador(): Usuario()
{
	this->cuentaBancaria = NULL;
//	this->tickets = new Ticket*[VALOR];
}

Comprador::Comprador(const char* usuario, const char* contrasenya, const char* nombre, const char* dni, const char* telefono, const char* email, const char* cuentaBancaria): Usuario(usuario, contrasenya, nombre, dni, email)
{
	this->cuentaBancaria = new char[strlen(cuentaBancaria)+1];
	strcpy(this->cuentaBancaria, cuentaBancaria);
//	this->tickets = new Ticket*[200];
}

Comprador::~Comprador()
{
	delete[]this->cuentaBancaria;
//	delete[]this->tickets;
}

char* Comprador::getCuentaBancaria() const
{
	return this->cuentaBancaria;
}

void Comprador::setCuentaBancaria(const char* cuentaBancaria)
{
	this->cuentaBancaria = new char[strlen(cuentaBancaria)+1];
	strcpy(this->cuentaBancaria, cuentaBancaria);
}

//Ticket** Comprador::getTickets()
//{
//	return this->tickets;
//}

void Comprador::imprimirInformacion()
{
	cout << "     Perfil:" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "     Usuario: " << this->usuario << endl;
	cout << "" << endl;
	cout << "     Nombre: " << this->nombre << endl;
	cout << "     DNI: " << this->dni << endl;
	cout << "" << endl;
	cout << "     Email: " << this->email << endl;
	cout << "" << endl;
	cout << "     Cuenta bancaria: " << this->cuentaBancaria << endl;

}
