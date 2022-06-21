#include <iostream>

#include "Usuario.h"
#include <string.h>

Usuario::Usuario()
{
	this->usuario = NULL;
	this->contrasenya = NULL;
	this->nombre = NULL;
	this->dni = NULL;
	this->email = NULL;
}

Usuario::Usuario(const char* usuario, const char* contrasenya, const char* nombre, const char* dni, const char* email)
{
	this->usuario = new char[strlen(usuario)+1];
	strcpy(this->usuario, usuario);
	this->contrasenya = new char[strlen(contrasenya)+1];
	strcpy(this->contrasenya, contrasenya);
	this->nombre = new char[strlen(nombre)+1];
	strcpy(this->nombre, nombre);
	this->dni = new char[strlen(dni)+1];
	strcpy(this->dni, dni);
	this->email = new char[strlen(email)+1];
	strcpy(this->email, email);
}

Usuario::~Usuario()
{
	delete []this->usuario;
	delete []this->contrasenya;
	delete []this->nombre;
	delete []this->dni;
	delete []this->email;
}

char* Usuario::getUsuario() const
{
	return this->usuario;
}

void Usuario::setUsuario(const char* usuario)
{
	this->usuario = new char[strlen(usuario)+1];
	strcpy(this->usuario, usuario);
}

char* Usuario::getContrasenya() const
{
	return this->contrasenya;
}

void Usuario::setContrasenya(const char* contrasenya)
{
	this->contrasenya = new char[strlen(contrasenya)+1];
	strcpy(this->contrasenya, contrasenya);
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
