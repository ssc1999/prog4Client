#include <iostream>
#include "Ticket.h"
#include <string.h>
using namespace std;

#include <stdio.h>

Ticket::Ticket()
{
	this->nomComprador = NULL;
	this->nomUsuario = NULL;
	this->matricula = NULL;
	this->fechaCompra = NULL;
	this->precio = 0;
}

Ticket::Ticket(const char* nomComprador, const char* nomUsuario, const char* matricula,  const char* fechaCompra, int precio)
{
	this->nomComprador = new char[strlen(nomComprador)+1];
	strcpy(this->nomComprador, nomComprador);
	this->nomUsuario = new char[strlen(nomUsuario)+1];
	strcpy(this->nomUsuario, nomUsuario);
	this->matricula = new char[strlen(matricula)+1];
	strcpy(this->matricula, matricula);
	this->fechaCompra = new char[strlen(fechaCompra)+1];
	strcpy(this->fechaCompra, fechaCompra);
	this->precio = precio;
}

Ticket::~Ticket()
{
	delete[]this->nomComprador;
	delete[]this->nomUsuario;
	delete[]this->matricula;
	delete[]this->fechaCompra;
}

char* Ticket::getNomComprador() const
{
	return this->nomComprador;
}

void Ticket::setNomComprador(const char* nomComprador)
{
	this->nomComprador = new char[strlen(nomComprador)+1];
	strcpy(this->nomComprador, nomComprador);
}

char* Ticket::getNomUsuario() const
{
	return this->nomUsuario;
}

void Ticket::setNomUsuario(const char* nomUsuario)
{
	this->nomUsuario = new char[strlen(nomUsuario)+1];
	strcpy(this->nomUsuario, nomUsuario);
}

char* Ticket::getMatricula() const
{
	return this->matricula;
}

void Ticket::setMatricula(const char* matricula)
{
	this->matricula = new char[strlen(matricula)+1];
	strcpy(this->matricula, matricula);
}

char* Ticket::getFechaCompra() const
{
	return this->fechaCompra;
}

void Ticket::setFechaCompra(const char* fechaCompra)
{
	this->fechaCompra = new char[strlen(fechaCompra)+1];
	strcpy(this->fechaCompra, fechaCompra);
}

int Ticket::getPrecio()
{
	return this->precio;
}

void Ticket::setPrecio (int precio)
{
	this->precio = precio;
}

void Ticket::imprimirInformacion()
{
	cout << "     Ticket: " << endl;
	cout << "" << endl;
	cout << "     Nombre de usuario: " << this->nomUsuario << endl;
	cout << "     Nombre : " << this->nomComprador << endl;
	cout << "     Matricula: " << this->matricula << endl;
	cout << "     Fecha: " << this->fechaCompra << endl;
	cout << "     Total: " << this->precio << " euros." << endl;
}
