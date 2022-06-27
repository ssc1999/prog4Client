#ifndef COMPRADOR_H_
#define COMPRADOR_H_

#define VALOR 199

#include "Usuario.h"

class Comprador: public Usuario
{
protected:
	char* cuentaBancaria;
//	Ticket** tickets; // crear un m�todo en la bd que me devuelva los tickets de x vendedor
public:
	Comprador();
	Comprador(const char* usuario, const char* contrasenya, const char* nombre, const char* dni, const char* telefono, const char* email, const char* cuentaBancaria);
	~Comprador();

	char* getCuentaBancaria() const;
	void setCuentaBancaria(const char* cuentaBancaria);
//	Ticket** getTickets();

	void imprimirInformacion();
};

#endif /* COMPRADOR_H_ */
