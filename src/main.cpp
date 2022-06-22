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

void menuProgramaComprador()
{
	cout << " ------------------------------------------------ " << endl;
	cout << "| Concesionario                      | - | o | X |" << endl;
	cout << "|------------------------------------------------|" << endl;
	cout << "|                                                |" << endl;
	cout << "|    Bienvenido!                                 |" << endl;
	cout << "|                                                |" << endl;
	cout << "|    1. Comprar coche                            |" << endl;
	cout << "|    2. Mis coches             	                 |" << endl;
	cout << "|    3. Mis tickets                              |" << endl;
	cout << "|    4. Ver perfil                               |" << endl;
	cout << "|    5. Cerrar Sesion                            |" << endl;
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
}

void cajaTextoInferior()
{
	cout << "|                                                |" << endl;
	cout << " ------------------------------------------------ " << endl;
}
// void registro(SOCKET s)
// {
// }

int main(int argc, char *argv[]) // se pueden meter argumentos de programa en el cpp???
{
	WSADATA wsaData;
	SOCKET s;
	struct sockaddr_in server;
	char usuario[20], nombreComprador[20], buff[100], sendBuff[512], recvBuff[512];
	int i, opcion, opcion2, opcion3, extra, extra2;
	Coche *listaCoches[50];
	Ticket *ticket;

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
		cin >> opcion;
		cout << "\n";

		switch (opcion)
		{
		case 1:
			strcpy(sendBuff, "login");
			send(s, sendBuff, sizeof(sendBuff), 0);

			menuNombreUsuario();

			cin >> buff;
			strcpy(usuario, buff);
			strcpy(sendBuff, buff);
			send(s, sendBuff, sizeof(sendBuff), 0);

			menuContrasenya();

			cin >> buff;
			strcpy(sendBuff, buff);
			send(s, sendBuff, sizeof(sendBuff), 0);

			recv(s, recvBuff, sizeof(recvBuff), 0);
			if (strcmp(recvBuff, "comprador") == 0)
			{
				do
				{
					system("cls");
					menuProgramaComprador();
					cin >> opcion2;
					cout << "\n";

					switch (opcion2)
					{
					case 1:
						// mandar instruccion comprarCoche al servidor
						strcpy(sendBuff, "comprarCoches");
						send(s, sendBuff, sizeof(sendBuff), 0);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						extra = atoi(recvBuff);
						cout << extra << "\n"
							 << endl;
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
							extra2 = atoi(recvBuff); // esta dpm
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

							// imprime ticket de compra realizada
						}
						else
						{
							cout << "Error en la compra" << endl;
						}

						cout << recvBuff << endl;
						break;
					case 2:
						// mandar instruccion misCoches al servidor
						strcpy(sendBuff, "misCoches");
						send(s, sendBuff, sizeof(sendBuff), 0);

						break;
					case 3:
						// mandar instruccion misTickets al servidor
						strcpy(sendBuff, "misTickets");
						send(s, sendBuff, sizeof(sendBuff), 0);

						break;
					case 4:
						// mandar instruccion miPerfil al servidor
						strcpy(sendBuff, "verPerfil");
						send(s, sendBuff, sizeof(sendBuff), 0);

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
			if (strcmp(recvBuff, "vendedor") == 0)
			{
				do
				{
					system("cls");
					menuProgramaComprador();
					cin >> opcion2;
					cout << "\n";

					switch (opcion2)
					{
					case 1:
						// mandar instruccion comprarCoche al servidor
						strcpy(sendBuff, "comprarCoches");
						send(s, sendBuff, sizeof(sendBuff), 0);
						recv(s, recvBuff, sizeof(recvBuff), 0);
						extra = atoi(recvBuff);
						for (i = 0; i < extra; i++)
						{
							Coche *coche = new Coche();
							recv(s, recvBuff, sizeof(recvBuff), 0);
							coche->setMatricula(recvBuff);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							coche->setMarca(recvBuff);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							coche->setModelo(recvBuff);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							extra2 = atoi(recvBuff); // esta dpm
							coche->setAutomatico(extra2);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							extra2 = atoi(recvBuff);
							coche->setPlazas(extra2);
							recv(s, recvBuff, sizeof(recvBuff), 0);
							extra2 = atoi(recvBuff);
							coche->setAnyoFabricacion(extra2);
							coche->imprimirInformacion();
							listaCoches[i] = coche;
						}
						// introduce que coche comprar
						cin >> opcion3;

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

							// imprime ticket de compra realizada
						}
						else
						{
							cout << "Error en la compra" << endl;
						}

						cout << recvBuff << endl;
						break;
					case 2:
						// mandar instruccion misCoches al servidor
						strcpy(sendBuff, "misCoches");
						send(s, sendBuff, sizeof(sendBuff), 0);

						break;
					case 3:
						// mandar instruccion misTickets al servidor
						strcpy(sendBuff, "misTickets");
						send(s, sendBuff, sizeof(sendBuff), 0);

						break;
					case 4:
						// mandar instruccion miPerfil al servidor
						strcpy(sendBuff, "verPerfil");
						send(s, sendBuff, sizeof(sendBuff), 0);

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

			else
			{
				system("cls");
				cout << "////////////////////////////////////////" << endl;
				cout << "                            " << endl;
				cout << "Los datos introducidos son " << recvBuff << endl;
				cout << "                            " << endl;
				cout << "////////////////////////////////////////" << endl;
			}
			break;
		case 2:
			// registro(s);
			strcpy(sendBuff, "registro");
			send(s, sendBuff, sizeof(sendBuff), 0);
			menuRegistro();
			cin >> sendBuff;
			send(s, sendBuff, sizeof(sendBuff), 0);
			if (strcmp(sendBuff, "1"))
			{

				// mandar al server que queremos registrar comprador para
				// pedir atributos por pantalla
				// mandar atributos al server
			}
			if (strcmp(sendBuff, "2"))
			{
				// mandar al server que queremos registrar comprador para
				// pedir atributos por pantalla
				// mandar atributos al server
			}
			else
			{
				cout << "Introduzca un numero valido" << endl;
			}
			break;
		case 3:
			strcpy(sendBuff, "exit");
			send(s, sendBuff, sizeof(sendBuff), 0);
			cout << "Cerrando programa..." << endl;
			cout << "Hasta pronto!" << endl;
			break;
		default:
			cout << "Error, introduce un numero valido" << endl;
			break;
		}

	} while (opcion != 3);

	// CLOSING the socket and cleaning Winsock...
	closesocket(s);
	WSACleanup();

	return 0;
}
