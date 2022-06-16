#ifndef TICKET_H_
#define TICKET_H_

class Ticket
{
protected:
	char* nomConcesionario; // infor concesionario
	char* nomVendedor;
	char* nomComprador;
	char* nomCoche; // marca - modelo
	char* fechaCompra;
public:
	Ticket();
	Ticket(const char* nomConcesionario, const char* fechaCompra, const char* nomVendedor, const char* nomComprador, const char* nomCoche);
	~Ticket();

	void comprarCoche();

	// m�todo comprarCoche :
	//	 se crea un ticket
	//	 quitar coche de la lista
	//	 a�adir el precio al total ganado del concesionario

};

#endif /* TICKET_H_ */
