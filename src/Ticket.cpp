#include <iostream>
#include "Ticket.h"
#include <string.h>

Ticket::Ticket()
{
	this->nomConcesionario = NULL;
	this->fechaCompra = NULL;
	this->nomVendedor = NULL;
	this->nomComprador = NULL;
	this->nomCoche = NULL;
}

// no sé si habria que ponerlo por defecto a 0
Ticket::Ticket(const char* nomConcesionario, const char* fechaCompra, const char* nomVendedor, const char* nomComprador, const char* nomCoche)
{
	this->nomConcesionario = new char[strlen(nomConcesionario)+1];
	strcpy(this->nomConcesionario, nomConcesionario);
	this->fechaCompra = new char[strlen(fechaCompra)+1];
	strcpy(this->fechaCompra, fechaCompra);
	this->nomVendedor = new char[strlen(nomVendedor)+1];
	strcpy(this->nomVendedor, nomVendedor);
	this->nomComprador = new char[strlen(nomComprador)+1];
	strcpy(this->nomComprador, nomComprador);
	this->nomCoche = new char[strlen(nomCoche)+1];
	strcpy(this->nomCoche, nomCoche);
}

Ticket::~Ticket()
{
	delete this->nomConcesionario;
	delete this->fechaCompra;
	delete this->nomVendedor;
	delete this->nomComprador;
	delete this->nomCoche;
}

void Ticket::comprarCoche()
{
	//
}
