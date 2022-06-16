#ifndef CONCESIONARIO_H_
#define CONCESIONARIO_H_

#include "Usuario.h"
#include "Coche.h"
#include "Vendedor.h"
#include "Comprador.h"
#include "Ticket.h"

class Concesionario
{
protected:
	char* nombre;
	Coche** coches;
	int numCoches; // poner el num en todos
	Vendedor** vendedores;
	Comprador** compradores;
	Ticket** tickets;
	float totalGanado;
public:
	Concesionario();
	Concesionario(const char* nombre);
	~Concesionario();

	char* getNombre() const;
	void setNombre(const char* nombre);
	Coche** getCoches();
	Vendedor** getVendedores();
	Comprador** getCompradores();
	Ticket** getTickets();
	float getTotalGanado() const;

	void anyadirCoche(Coche* coche);
	void anyadirVendedor(Vendedor* vendedor);
	void imprimirInfo();

	// el comprador se añade automaticamente cuando compra un coche
	// el ticket se añade automaticamente cuando alguien compra un coche
};

#endif /* CONCESIONARIO_H_ */
