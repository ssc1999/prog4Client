#include <iostream>

#include "Usuario.h"
#include "Concesionario.h"
#include "Vendedor.h"
#include "Comprador.h"
#include "Ticket.h"
#include <string.h>

Concesionario::Concesionario()
{
	this->nombre = NULL;
	this->coches = new Coche*[200];
	this->numCoches = 0;
	this->vendedores = new Vendedor*[200];
	this->compradores = new Comprador*[200];
	this->tickets = new Ticket*[200];
	this->totalGanado = 0.0;
}

Concesionario::Concesionario(const char* nombre)
{
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
	this->coches = new Coche*[200];
	this->numCoches = 0;
	this->vendedores = new Vendedor*[200];
	this->compradores = new Comprador*[200];
	this->tickets = new Ticket*[200];
	this->totalGanado = 0.0;
}

Concesionario::~Concesionario()
{
	delete []this->nombre;
	delete []this->coches;
	delete []this->vendedores;
	delete []this->compradores;
	delete []this->tickets;
}

char* Concesionario::getNombre() const
{
	return this->nombre;
}

void Concesionario::setNombre(const char* nombre)
{
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
}

Coche** Concesionario::getCoches()
{
	return this->coches;
}

Vendedor** Concesionario::getVendedores()
{
	return this->vendedores;
}

Comprador** Concesionario::getCompradores()
{
	return this->compradores;
}

Ticket** Concesionario::getTickets()
{
	return this->tickets;
}

void Concesionario::anyadirCoche(Coche* coche)
{
	this->coches[this->numCoches] = coche;
	this->numCoches ++;
}

void Concesionario::anyadirVendedor(Vendedor* vendedor)
{
	//
}

void Concesionario::imprimirInfo()
{
	//
}
