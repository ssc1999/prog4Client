#ifndef USUARIO_H_
#define USUARIO_H_

class Usuario
{
protected:
	char* nombre;
	char* dni;
	char* email;
public:
	Usuario();
	Usuario(const char* nombre, const char* dni, const char* email);
	virtual ~Usuario();

	char* getNombre() const;
	void setNombre(const char* nombre);
	char* getDni() const;
	void setDni(const char* dni);
	char* getEmail() const;
	void setEmail(const char* email);

	virtual void imprimirInformacion() = 0;
};

#endif /* USUARIO_H_ */
