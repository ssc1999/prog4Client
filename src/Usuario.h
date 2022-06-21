#ifndef USUARIO_H_
#define USUARIO_H_

class Usuario
{
protected:
	char* usuario;
	char* contrasenya;
	char* nombre;
	char* dni;
	char* email;
public:
	Usuario();
	Usuario(const char* usuario, const char* contrasenya, const char* nombre, const char* dni, const char* email);
	virtual ~Usuario();

	char* getUsuario() const;
	void setUsuario(const char* usuario);
	char* getContrasenya() const;
	void setContrasenya(const char* contrasenya);
	char* getNombre() const;
	void setNombre(const char* nombre);
	char* getDni() const;
	void setDni(const char* dni);
	char* getEmail() const;
	void setEmail(const char* email);

	virtual void imprimirInformacion() = 0;
};

#endif /* USUARIO_H_ */
