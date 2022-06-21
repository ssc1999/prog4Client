#include <iostream>
#include "Ticket.h"
#include <string.h>

Ticket::Ticket()
{
	this->nomComprador = NULL;
	this->nomUsuario = NULL;
	this->matricula = NULL;
	this->fechaCompra = NULL;
}

Ticket::Ticket(const char* nomComprador, const char* nomUsuario, const char* matricula,  const char* fechaCompra)
{
	this->nomComprador = new char[strlen(nomComprador)+1];
	strcpy(this->nomComprador, nomComprador);
	this->nomUsuario = new char[strlen(nomUsuario)+1];
	strcpy(this->nomUsuario, nomUsuario);
	this->matricula = new char[strlen(matricula)+1];
	strcpy(this->matricula, matricula);
	this->fechaCompra = new char[strlen(fechaCompra)+1];
	strcpy(this->fechaCompra, fechaCompra);
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

void Ticket::imprimirInformacion()
{
	cout << "Ticket: " << endl;
	cout << this->matricula << endl;
	cout << this->nomComprador << endl;
	cout << this->fechaCompra << endl;
	//
}
