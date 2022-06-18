#include <iostream>

#include "Usuario.h"
#include "Comprador.h"
#include "Ticket.h"
#include <string.h>

Comprador::Comprador(): Usuario()
{
	this->cuentaBancaria = NULL;
//	this->tickets = new Ticket*[VALOR];
}

Comprador::Comprador(const char* nombre, const char* dni, const char* telefono, const char* email, const char* cuentaBancaria): Usuario(nombre, dni, email)
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
	// imprimir info
}
