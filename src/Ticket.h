#ifndef TICKET_H_
#define TICKET_H_

class Ticket
{
protected:
	char* nomComprador;
	char* nomCoche; // marca - modelo
	char* fechaCompra;
public:
	Ticket();
	Ticket(const char* fechaCompra, const char* nomComprador, const char* nomCoche);
	~Ticket();

	void comprarCoche();

	// método comprarCoche :
	//	 se crea un ticket
	//	 quitar coche de la lista
	//	 añadir el precio al total ganado del concesionario

};

#endif /* TICKET_H_ */
