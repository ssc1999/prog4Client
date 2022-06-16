#ifndef COMPRADOR_H_
#define COMPRADOR_H_

#define VALOR 199

#include "Usuario.h"
#include "Ticket.h"

class Comprador: public Usuario
{
protected:
	char* cuentaBancaria;
	Ticket** tickets;
public:
	Comprador();
	Comprador(const char* nombre, const char* dni, const char* telefono, const char* email, const char* cuentaBancaria);
	~Comprador();

	char* getCuentaBancaria() const;
	void setCuentaBancaria(const char* cuentaBancaria);
	Ticket** getTickets();

	void imprimirInformacion();
};

#endif /* COMPRADOR_H_ */
