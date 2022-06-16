#ifndef USUARIO_H_
#define USUARIO_H_

class Usuario
{
protected:
	char* nombre;
	char* dni;
	char* telefono;
	char* email;
public:
	Usuario();
	Usuario(const char* nombre, const char* dni, const char* telefono, const char* email);
	virtual ~Usuario();

	char* getNombre() const;
	void setNombre(const char* nombre);
	char* getDni() const;
	void setDni(const char* dni);
	char* getTelefono() const;
	void setTelefono(const char* telefono);
	char* getEmail() const;
	void setEmail(const char* email);

	virtual void imprimirInformacion() = 0;
};

#endif /* USUARIO_H_ */
