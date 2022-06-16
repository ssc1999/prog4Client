#ifndef VENDEDOR_H_
#define VENDEDOR_H_

#include "Usuario.h"

class Vendedor: public Usuario
{
protected:
	float sueldo;
	int numVentas;
public:
	Vendedor();
	Vendedor(const char* nombre, const char* dni, const char* telefono, const char* email);
	~Vendedor();

	float getSueldo() const;
	void setSueldo(float sueldo);
	float getNumVentas() const;

	void imprimirInformacion();
};

#endif /* VENDEDOR_H_ */
