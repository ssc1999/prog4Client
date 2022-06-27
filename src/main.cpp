// IMPORTANT: Winsock Library ("ws2_32") should be linked

//#include "Coche.h"
//#include "Comprador.h"
//#include "Vendedor.h"
//#include "Usuario.h"
//#include "Ticket.h"
#include <time.h>
#include <iostream>
#include "Coche.h"
#include "Ticket.h"
#include "Comprador.h"
#include "Vendedor.h"
using namespace std;

#include <stdio.h>
#include <winsock2.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 6000

void menuInicio()
{
	// cout << " ------------------------------------------------" << endl;
	// cout << "| C/C++                              | - | o | X |" << endl;
	// cout << "|------------------------------------------------|" << endl;
	// cout << "|                                                |" << endl;
	// cout << "|    xxx                                         |" << endl;
	// cout << "|    x xxx                                       |" << endl;
	// cout << "|    x   xxx                                     |" << endl;
	// cout << "|    x     x   xxxx  x  x  xxxx  xxxxx  xx  x    |" << endl;
	// cout << "|    x     xx  x     x  x  x     x   x  xx  x    |" << endl;
	// cout << "|    x      x  xxx   x  x  x     x   x  xxx x    |" << endl;
	// cout << "|    x     xx  x     x  x  x     x   x  x xxx    |" << endl;
	// cout << "|    xxxxxxx   xxxx  xxxx  xxxx  xxxxx  x  xx    |" << endl;
	// cout << "|                                                |" << endl;
	// cout << " ------------------------------------------------" << endl;

	// cout << "                               	   Andrea Martinez" << endl;
	// cout << "" << endl;
	// cout << "" << endl;
	// cout << "" << endl;
	cout << " ------------------------------------------------" << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|    Bienvenido!                                 |" << endl;
	cout << "|                                                |" << endl;
	cout << "|    1. Iniciar Sesion                           |" << endl;
	cout << "|    2. Registrarse                              |" << endl;
	cout << "|    3. Salir                                    |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------" << endl;
}

void menuComprador()
{
	cout << " ------------------------------------------------ " << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|    Bienvenido!                                 |" << endl;
	cout << "|                                                |" << endl;
	cout << "|    1. Comprar coche                            |" << endl;
	cout << "|    2. Mi coche              	                 |" << endl;
	cout << "|    3. Mis tickets                              |" << endl;
	cout << "|    4. Perfil                                   |" << endl;
	cout << "|    5. Cerrar sesion                            |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------ " << endl;
}

void menuVendedor()
{
	cout << " ------------------------------------------------ " << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|    Bienvenido!                                 |" << endl;
	cout << "|                                                |" << endl;
	cout << "|    1. Perfil                                   |" << endl;
	cout << "|    2. Dinero en la cuenta                      |" << endl;
	cout << "|    3. Numero de ventas                         |" << endl;
	cout << "|    4. Cerrar sesion                            |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------ " << endl;
}

void menuNombreUsuario()
{
	cout << " ------------------------------------------------" << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|   Nombre de usuario:                           |" << endl;
	cout << "|    _                                           |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------" << endl;
}

void menuContrasenya()
{
	cout << " ------------------------------------------------" << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|   Contrasenya:                                 |" << endl;
	cout << "|    _                                           |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------" << endl;
}

void menuNombre()
{
	cout << " ------------------------------------------------" << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|   Nombre:                                      |" << endl;
	cout << "|    _                                           |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------" << endl;
}

void menuDni()
{
	cout << " ------------------------------------------------" << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|   DNI:                                 |" << endl;
	cout << "|    _                                           |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------" << endl;
}

void menuMail()
{
	cout << " ------------------------------------------------" << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|   Email:                                 |" << endl;
	cout << "|    _                                           |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------" << endl;
}

void menuCuentaBancaria()
{
	cout << " ------------------------------------------------" << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|   Numero de cuenta bancaria:                   |" << endl;
	cout << "|    _                                           |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------" << endl;
}

void menuRegistro()
{
	cout << " ------------------------------------------------" << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|   1. Comprador                                 |" << endl;
	cout << "|   2. Vendedor                                  |" << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------" << endl;
}

void cajaTextoSuperior()
{
	cout << " ------------------------------------------------ " << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "                                                  " << endl;
}

void cajaTextoInferior()
{
	cout << "                                                  " << endl;
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------ " << endl;
}
// void registro(SOCKET s)
// {
// }

int main(int argc, char *argv[]) // se pueden meter argumentos de  en el cpp???
{
	WSADATA wsaData;
	SOCKET s;
	struct sockaddr_in server;
	char buff[100], sendBuff[512], recvBuff[512];
	int i, opcion, opcion2, opcion3, extra, extra2;
	
	//USUARIO
	Comprador *comprador;
	Vendedor *vendedor;
	char usuario[20], contrasenya[20], nombre[20], dni[20], telefono[20], email[20], nombreComprador[20], cuentaBancaria[20];
	int sueldo, numVentas;
	
	//COCHE
	Coche *listaCoches[50];
	Coche *coche;
	char matricula[20], marca[20], modelo[20];
	int automatico, plazas, anyoFabricacion, precio;
	
	//TICKET
	Ticket *ticket;
	char nomComprador[20], nomUsuario[20], fechaCompra[20];

	printf("\nInitialising Winsock...\n");
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
		return -1;
	}

	printf("Initialised.\n");

	// SOCKET creation
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		printf("Could not create socket : %d", WSAGetLastError());
		WSACleanup();
		return -1;
	}

	printf("Socket created.\n");

	server.sin_addr.s_addr = inet_addr(SERVER_IP);
	server.sin_family = AF_INET;
	server.sin_port = htons(SERVER_PORT);

	// CONNECT to remote server
	if (connect(s, (struct sockaddr *)&server, sizeof(server)) == SOCKET_ERROR)
	{
		printf("Connection error: %d", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return -1;
	}

	printf("Connection stablished with: %s (%d)\n", inet_ntoa(server.sin_addr),
		   ntohs(server.sin_port));

	///////////////////////////////////////////////////////

	// SEND and RECEIVE data (CLIENT/SERVER PROTOCOL)
	system("cls");
	do
	{
		menuInicio();
		cout.flush();
		cin >> opcion;
		cin.clear();

		switch (opcion)
		{
		case 1:
			strcpy(sendBuff, "login");
			send(s, sendBuff, sizeof(sendBuff), 0);

			menuNombreUsuario();
			cout.flush();

			cin >> buff;
			cin.clear();
			strcpy(usuario, buff);
			strcpy(sendBuff, buff);
			send(s, sendBuff, sizeof(sendBuff), 0);

			menuContrasenya();
			cout.flush();

			cin >> buff;
			cin.clear();
			strcpy(sendBuff, buff);
			send(s, sendBuff, sizeof(sendBuff), 0);
			recv(s, recvBuff, sizeof(recvBuff), 0);
			if (strcmp(recvBuff, "comprador") == 0)
			{
				system("cls");
				do
				{
					
					menuComprador();
					cout.flush();
					cin >> opcion2;
					cin.clear();

					switch (opcion2)
					{
					case 1:
						// mandar instruccion comprarCoche al servidor
						strcpy(sendBuff, "comprarCoches");
						send(s, sendBuff, sizeof(sendBuff), 0);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						extra = atoi(recvBuff);
						cout << extra << "\n"<< endl;
						cout.flush();
						for (i = 0; i < extra; i++)
						{
							Coche *coche = new Coche();
							recv(s, recvBuff, sizeof(recvBuff), 0);
							cout << recvBuff << "\n"<< endl;
							coche->setMatricula(recvBuff);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							cout << recvBuff << "\n"<< endl;
							coche->setMarca(recvBuff);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							cout << recvBuff << "\n"<< endl;
							coche->setModelo(recvBuff);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							cout << recvBuff << "\n"<< endl;
							extra2 = atoi(recvBuff);
							cout << recvBuff << "\n"<< endl;
							coche->setAutomatico(extra2);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							cout << recvBuff << "\n"<< endl;
							extra2 = atoi(recvBuff);
							coche->setPlazas(extra2);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							cout << recvBuff << "\n"<< endl;
							extra2 = atoi(recvBuff);
							coche->setAnyoFabricacion(extra2);
							coche->imprimirInformacion();
							listaCoches[i] = coche;
						}
						cout << listaCoches[1]->getMarca() <<"\n"<< endl;
						cout << listaCoches[1]->getMarca() <<"\n"<< endl;
						cout << listaCoches[1]->getMarca() <<"\n"<< endl;
						// introduce que coche comprar
						cin >> opcion3;
						cout.flush();
						cin.clear();
						// strcpy(sendBuff, listaCoches[opcion3]->getMarca());
						// send(s, sendBuff, sizeof(sendBuff), 0);
						// strcpy(sendBuff, listaCoches[opcion3]->getModelo());
						// send(s, sendBuff, sizeof(sendBuff), 0);
						// strcpy(sendBuff, (to_string(listaCoches[opcion3]->getAutomatico())).c_str());
						// send(s, sendBuff, sizeof(sendBuff), 0);
						// strcpy(sendBuff, (to_string(listaCoches[opcion3]->getPlazas())).c_str());
						// send(s, sendBuff, sizeof(sendBuff), 0);
						// strcpy(sendBuff, (to_string(listaCoches[opcion3]->getAnyoFabricacion())).c_str());
						// send(s, sendBuff, sizeof(sendBuff), 0);

						// coche matricula
						strcpy(sendBuff, listaCoches[opcion3]->getMatricula());
						send(s, sendBuff, sizeof(sendBuff), 0);

						// usuario
						strcpy(sendBuff, usuario);
						send(s, sendBuff, sizeof(sendBuff), 0);

						// fecha actual
						strcpy(sendBuff, "2022-06-28");
						send(s, sendBuff, sizeof(sendBuff), 0);

						// recibo el nombre del usuario
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(nombreComprador, recvBuff);

						if (strcmp(recvBuff, "OK") == 0)
						{

							// creo el ticket
							ticket = new Ticket();
							ticket->setNomComprador(nombreComprador);
							ticket->setNomUsuario(usuario);
							ticket->setMatricula(listaCoches[opcion3]->getMatricula());
							ticket->setFechaCompra("2022-06-28");

							// lo imprimo
							ticket->imprimirInformacion();

							cout << "Compra realizada con exito" << endl;
							cout.flush();

							// imprime ticket de compra realizada
						}
						else
						{
							cout << "Error en la compra" << endl;
							cout.flush();
						}

						cout << recvBuff << endl;
						cout.flush();
						break;
					case 2:
						// mandar instruccion misCoches al servidor
						strcpy(sendBuff, "miCoche");
						send(s, sendBuff, sizeof(sendBuff), 0);
						
						cajaTextoSuperior();
						
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(matricula, recvBuff);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(marca, recvBuff);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(modelo, recvBuff);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						automatico = atoi(recvBuff);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						plazas = atoi(recvBuff);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						anyoFabricacion = atoi(recvBuff);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						precio = atoi(recvBuff);

						if(plazas != 0){
							coche = new Coche(matricula, marca, modelo, automatico, plazas, anyoFabricacion, precio);
							coche->imprimirInformacion();
						}else{
							cout << "     No tienes ningun coche comprado" << endl;
						}
						
						cajaTextoInferior();

						break;
					case 3:
						// mandar instruccion misTickets al servidor
						strcpy(sendBuff, "miTicket");
						send(s, sendBuff, sizeof(sendBuff), 0);

						cajaTextoSuperior();
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(nomComprador, recvBuff);						
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(nomUsuario, recvBuff);						
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(matricula, recvBuff);						
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(fechaCompra, recvBuff);						
						if(strcmp(fechaCompra, "") != 0){
							ticket = new Ticket(nomComprador, nomUsuario, matricula, fechaCompra);
							ticket->imprimirInformacion();
						}else{
							cout << "     No tienes ningun ticket" << endl;
						}
						

						cajaTextoInferior();
						break;
					case 4:
						strcpy(sendBuff, "verPerfil");
						send(s, sendBuff, sizeof(sendBuff), 0);

						cajaTextoSuperior();
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(usuario, recvBuff);						
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(nombre, recvBuff);						
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(dni, recvBuff);						
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(email, recvBuff);						
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(cuentaBancaria, recvBuff);
						
						comprador = new Comprador(usuario, contrasenya, nombre, dni, telefono, email, cuentaBancaria);
						comprador->imprimirInformacion();

						cajaTextoInferior();
						break;
					case 5:
						strcpy(sendBuff, "cerrarSesion");
						send(s, sendBuff, sizeof(sendBuff), 0);
						system("cls");
						break;
					default:
						cout << "Error, seleccione otra opcion." << endl;
						break;
					}
				} while (opcion2 != 5);
			}
			else if (strcmp(recvBuff, "vendedor") == 0)
			{
				system("cls");
				do
				{
					
					menuVendedor();
					cout.flush();
					cin >> opcion2;
					cin.clear();

					switch (opcion2)
					{
					case 1:
						strcpy(sendBuff, "verPerfil");
						send(s, sendBuff, sizeof(sendBuff), 0);

						cajaTextoSuperior();
						
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(usuario, recvBuff);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(nombre, recvBuff);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(dni, recvBuff);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						strcpy(email, recvBuff);

						vendedor = new Vendedor(usuario, contrasenya, nombre, dni, telefono, email);
						vendedor->imprimirInformacion();

						cajaTextoInferior();
						break;
					case 2:
						strcpy(sendBuff, "verDinero");
						send(s, sendBuff, sizeof(sendBuff), 0);

						cajaTextoSuperior();
						cout << "     Dinero en la cuenta:" << endl;
						cout << "" << endl;
						recv(s, recvBuff, sizeof(recvBuff), 0);
						cout << "     Total de " << recvBuff<< " euros."<< endl;
						cajaTextoInferior();

						break;
					case 3:
						strcpy(sendBuff, "verNumeroVentas");
						send(s, sendBuff, sizeof(sendBuff), 0);

						cajaTextoSuperior();
						cout << "     Numero de ventas:" << endl;
						cout << "" << endl;
						recv(s, recvBuff, sizeof(recvBuff), 0);
						cout << "     Total de " << recvBuff<< " ventas."<< endl;
						cajaTextoInferior();

						break;
					case 4:
						// mandar instruccion miPerfil al servidor
						strcpy(sendBuff, "cerrarSesion");
						send(s, sendBuff, sizeof(sendBuff), 0);
						system("cls");
						break;
					default:
						cout << "Error, seleccione otra opcion." << endl;
						cout.flush();
						break;
					}
				} while (opcion2 != 4);
			}
			else
			{
				system("cls");
			}
			break;
		case 2:
			// registro(s);
			strcpy(sendBuff, "registro");
			send(s, sendBuff, sizeof(sendBuff), 0);
			menuRegistro();
			cout.flush();
			cin >> sendBuff;
			cin.clear();
			send(s, sendBuff, sizeof(sendBuff), 0);
			if (strcmp(sendBuff, "1") == 0)
			{
				menuNombre();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				menuDni();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				menuMail();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				menuCuentaBancaria();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				menuNombreUsuario();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				menuContrasenya();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				// mandar al server que queremos registrar comprador para
				// pedir atributos por pantalla
				// mandar atributos al server
			}
			else if (strcmp(sendBuff, "2") == 0)
			{
				menuNombre();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				menuDni();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				menuMail();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				menuNombreUsuario();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
				menuContrasenya();
				cout.flush();
				cin >> sendBuff;
				cin.clear();
				send(s, sendBuff, sizeof(sendBuff), 0);
			}
			else
			{
				cout << "Introduzca un numero valido" << endl;
				cout.flush();
			}
			break;
		case 3:
			strcpy(sendBuff, "exit");
			send(s, sendBuff, sizeof(sendBuff), 0);
			cout << "Cerrando programa..." << endl;
			cout << "Hasta pronto!" << endl;
			cout.flush();
			break;
		default:
			cout << "Error, introduce un numero valido" << endl;
			cout.flush();
			break;
		}

	} while (opcion != 3);
	free(coche);
	free(comprador);
	free(vendedor);
	// CLOSING the socket and cleaning Winsock...
	closesocket(s);
	WSACleanup();

	return 0;
}
