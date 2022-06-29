#ifndef TICKET_H_
#define TICKET_H_

class Ticket
{
protected:
	char* nomComprador;
	char* nomUsuario;
	char* matricula;
	char* fechaCompra;
	int precio;

public:
	Ticket();
	Ticket(const char* nomComprador, const char* nomUsuario, const char* matricula,  const char* fechaCompra, int precio);
	~Ticket();

	char* getNomComprador() const;
	void setNomComprador(const char* nomComprador);
	char* getNomUsuario() const;
	void setNomUsuario(const char* nomUsuario);
	char* getMatricula() const;
	void setMatricula(const char* matricula);
	char* getFechaCompra() const;
	void setFechaCompra(const char* fechaCompra);
	int getPrecio() ;
	void setPrecio(int precio);

	void imprimirInformacion();

	// m�todo comprarCoche :
	//	 se crea un ticket
	//	 quitar coche de la lista
	//	 a�adir el precio al total ganado del concesionario

};

#endif /* TICKET_H_ */
