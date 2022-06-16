#include <iostream>
#include "Ticket.h"
#include <string.h>

Ticket::Ticket()
{
	this->fechaCompra = NULL;
	this->nomComprador = NULL;
	this->nomCoche = NULL;
}

// no sé si habria que ponerlo por defecto a 0
Ticket::Ticket(const char* fechaCompra, const char* nomComprador, const char* nomCoche)
{
	this->fechaCompra = new char[strlen(fechaCompra)+1];
	strcpy(this->fechaCompra, fechaCompra);
	this->nomComprador = new char[strlen(nomComprador)+1];
	strcpy(this->nomComprador, nomComprador);
	this->nomCoche = new char[strlen(nomCoche)+1];
	strcpy(this->nomCoche, nomCoche);
}

Ticket::~Ticket()
{
	delete this->fechaCompra;
	delete this->nomComprador;
	delete this->nomCoche;
}

void Ticket::comprarCoche()
{
	//
}
