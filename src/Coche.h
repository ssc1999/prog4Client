#ifndef COCHE_H_
#define COCHE_H_

class Coche
{
protected:
	char *matricula;
	char *marca;
	char *modelo;
	int automatico;
	int plazas;
	int anyoFabricacion;
	int precio;

public:
	Coche();
	Coche(const char *matricula, const char *marca, const char *modelo, int automaatico, int plazas, int anyoFabricacion, int precio);
	~Coche();

	char *getMatricula() const;
	void setMatricula(const char *matricula);
	char *getMarca() const;
	void setMarca(const char *marca);
	char *getModelo() const;
	void setModelo(const char *modelo);
	int getAutomatico() const;
	void setAutomatico(int automatico);
	int getPlazas() const;
	void setPlazas(int plazas);
	int getAnyoFabricacion();
	void setAnyoFabricacion(int anyoFabricacion);
	int getPrecio();
	void setPrecio(int precio);

	void imprimirInformacion();
};

#endif /* COCHE_H_ */
