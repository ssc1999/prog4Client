#include <iostream>

#include "Coche.h"
#include <string.h>
using namespace std;

Coche::Coche()
{
	this->matricula = NULL;
	this->marca = NULL;
	this->modelo = NULL;
	this->automatico = 0;
	this->plazas = 0;
	this->anyoFabricacion = 0;
	this->precio = 0;
}

Coche::Coche(const char *matricula, const char *marca, const char *modelo, int automatico, int plazas, int anyoFabricacion, int precio)
{
	this->matricula = new char[strlen(matricula) + 1];
	strcpy(this->matricula, matricula);
	this->marca = new char[strlen(marca) + 1];
	strcpy(this->marca, marca);
	this->modelo = new char[strlen(modelo) + 1];
	strcpy(this->modelo, modelo);
	if (automatico == 0 || automatico == 1)
	{
		this->automatico = automatico;
	}
	this->plazas = plazas;
	this->anyoFabricacion = anyoFabricacion;
	this->precio = precio;
}

Coche::~Coche()
{
	delete[] this->matricula;
	delete[] this->marca;
	delete[] this->modelo;
}

char *Coche::getMatricula() const
{
	return this->matricula;
}

void Coche::setMatricula(const char *matricula)
{
	this->matricula = new char[strlen(matricula) + 1];
	strcpy(this->matricula, matricula);
}

char *Coche::getMarca() const
{
	return this->marca;
}

void Coche::setMarca(const char *marca)
{
	this->marca = new char[strlen(marca) + 1];
	strcpy(this->marca, marca);
}

char *Coche::getModelo() const
{
	return this->modelo;
}

void Coche::setModelo(const char *modelo)
{
	this->modelo = new char[strlen(modelo) + 1];
	strcpy(this->modelo, modelo);
}

int Coche::getAutomatico() const
{
	return this->automatico;
}

void Coche::setAutomatico(int automatico)
{
	if (automatico == 0 || automatico == 1)
	{
		this->automatico = automatico;
	}
}

int Coche::getPlazas() const
{
	return this->plazas;
}

void Coche::setPlazas(int plazas)
{
	this->plazas = plazas;
}

int Coche::getAnyoFabricacion()
{
	return this->anyoFabricacion;
}

void Coche::setAnyoFabricacion(int anyoFabricacion)
{
	this->anyoFabricacion = anyoFabricacion;
}

int Coche::getPrecio()
{
	return this->precio;
}

void Coche::setPrecio(int precio)
{
	this->precio = precio;
}

void Coche::imprimirInformacion()
{
	cout << "     Coche:" << endl;
	cout << "" << endl;
	cout << "     Matricula: " << this->matricula << endl;
	cout << "     Marca: " << this->marca << endl;
	cout << "     Modelo: " << this->modelo << endl;
	if(this->automatico == 1){
		cout << "     Caja: automatica" << endl;
	}else{
		cout << "     Caja: manual" << endl;
	}
	cout << "     Plazas: " << this->plazas << endl;
	cout << "     Anyo de fabricacion: " << this->anyoFabricacion<< endl;
	cout << "     Precio: " << this->precio << " euros" << endl;
}
