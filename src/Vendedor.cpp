#include <iostream>

#include "Usuario.h"
#include "Vendedor.h"
#include <string.h>

using namespace std;

Vendedor::Vendedor(): Usuario()
{
	this->sueldo = 0.0;
	this->numVentas = 0;
}

Vendedor::Vendedor(const char* usuario, const char* contrasenya, const char* nombre, const char* dni, const char* telefono, const char* email): Usuario(usuario, contrasenya, nombre, dni, email)
{
	this->sueldo = 0.0;
	this->numVentas = 0;
}

Vendedor::~Vendedor()
{
}

float Vendedor::getSueldo() const
{
	return this->sueldo;
}

void Vendedor::setSueldo(float sueldo)
{
	this->sueldo = sueldo;
}

float Vendedor::getNumVentas() const
{
	return this->numVentas;
}

void Vendedor::imprimirInformacion()
{
	// imprimir info
}
