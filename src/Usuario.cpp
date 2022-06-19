#include <iostream>

#include "Usuario.h"
#include <string.h>

Usuario::Usuario()
{
	this->nombre = NULL;
	this->dni = NULL;
	this->email = NULL;
}

Usuario::Usuario(const char* nombre, const char* dni, const char* email)
{
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
	this->dni = new char[strlen(dni)+1];
	strcpy(this->dni, dni);
	this->email = new char[strlen(email)+1];
	strcpy(this->email, email);
}

Usuario::~Usuario()
{
	delete []this->nombre;
	delete []this->dni;
	delete []this->email;
}

char* Usuario::getNombre() const
{
	return this->nombre;
}

void Usuario::setNombre(const char* nombre)
{
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
}

char* Usuario::getDni() const
{
	return this->dni;
}

void Usuario::setDni(const char* dni)
{
	this->dni = new char[strlen(dni)+1];
	strcpy(this->dni, dni);
}

char* Usuario::getEmail() const
{
	return this->email;
}

void Usuario::setEmail(const char* email)
{
	this->email = new char[strlen(email)+1];
	strcpy(this->email, email);
}