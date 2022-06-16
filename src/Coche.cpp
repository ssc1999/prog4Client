#include <iostream>

#include "Coche.h"
#include <string.h>

Coche::Coche()
{
	this->marca = NULL;
	this->modelo = NULL;
	this->automatico = false;
	this->plazas = 0;
	this->anyoFabricacion = NULL;
}

Coche::Coche(const char* marca, const char* modelo, bool automatico, int plazas, const char* anyoFabricacion)
{
	this->marca = new char[strlen(marca)+1];
	strcpy(this->marca, marca);
	this->modelo = new char[strlen(modelo)+1];
	strcpy(this->modelo, modelo);
	this->automatico = automatico;
	this->plazas = plazas;
	this->anyoFabricacion = new char[strlen(anyoFabricacion)+1];
	strcpy(this->anyoFabricacion, anyoFabricacion);
}

Coche::~Coche()
{
	delete []this->marca;
	delete []this->modelo;
	delete []this->anyoFabricacion;
}

char* Coche::getMarca() const
{
	return this->marca;
}

void Coche::setMarca(const char* marca)
{
	this->marca = new char[strlen(marca)+1];
	strcpy(this->marca, marca);
}

char* Coche::getModelo() const
{
	return this->modelo;
}

void Coche::setModelo(const char* modelo)
{
	this->modelo = new char[strlen(modelo)+1];
	strcpy(this->modelo, modelo);
}

bool Coche::getAutomatico() const
{
	return this->automatico;
}

void Coche::setAutomatico(bool automatico)
{
	this->automatico = automatico;
}

int Coche::getPlazas() const
{
	return this->plazas;
}

void Coche::setPlazas(int plazas)
{
	this->plazas = plazas;
}

char* Coche::getAnyoFabricacion() const
{
	return this->anyoFabricacion;
}

void Coche::setAnyoFabricacion(const char* anyoFabricacion)
{
	this->anyoFabricacion = new char[strlen(anyoFabricacion)+1];
	strcpy(this->anyoFabricacion, anyoFabricacion);
}

void imprimirInformacion()
{
	// imprimir info
}
