#ifndef COCHE_H_
#define COCHE_H_

class Coche
{
protected:
	char* marca;
	char* modelo;
	bool automatico;
	int plazas;
	char* anyoFabricacion;
public:
	Coche();
	Coche(const char* marca, const char* modelo, bool automaatico, int plazas, const char* anyoFabricacion);
	~Coche();

	char* getMarca() const;
	void setMarca(const char* marca);
	char* getModelo() const;
	void setModelo(const char* modelo);
	bool getAutomatico() const;
	void setAutomatico(bool automatico);
	int getPlazas() const;
	void setPlazas(int plazas);
	char* getAnyoFabricacion() const;
	void setAnyoFabricacion(const char* anyoFabricacion);

	void imprimirInformacion();
};

#endif /* COCHE_H_ */
