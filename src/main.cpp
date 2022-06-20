// IMPORTANT: Winsock Library ("ws2_32") should be linked

//#include "Coche.h"
//#include "Comprador.h"
//#include "Vendedor.h"
//#include "Usuario.h"
//#include "Ticket.h"

#include <iostream>
using namespace std;

#include <stdio.h>
#include <winsock2.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 6000

void menu(SOCKET s)
{
	char sendBuff[512], recvBuff[512];
	int opcion;
		do {
			cout << "MENU PRINCIPAL" << endl;
			cout << "1. Comprar coche" << endl;
			cout << "2. Mis coches" << endl;
			cout << "3. Mis tickets \n" << endl;
			cout << "4. Ver perfil \n" << endl;
			cout << "5. Salir \n" << endl;
			cout << "Introduzca una opción: ";

			cin >> opcion;
			cout << "\n";
			switch(opcion){
				case 1 :
					//mandar instruccion comprarCoche al servidor
					strcpy(sendBuff, "1");
					send(s, sendBuff, sizeof(sendBuff), 0);
					recv(s, recvBuff, sizeof(recvBuff), 0);
					cout << recvBuff << endl;
					break;
				case 2 :
					//mandar instruccion misCoches al servidor
					strcpy(sendBuff, "2");
					send(s, sendBuff, sizeof(sendBuff), 0);

					break;
				case 3 :
					//mandar instruccion misTickets al servidor
					strcpy(sendBuff, "3");
					send(s, sendBuff, sizeof(sendBuff), 0);

					break;
				case 4:
					//mandar instruccion miPerfil al servidor
					strcpy(sendBuff, "4");
					send(s, sendBuff, sizeof(sendBuff), 0);

					break;
				case 5:
					//mandar instruccion salir
					strcpy(sendBuff, "5");
					send(s, sendBuff, sizeof(sendBuff), 0);

					cout << "Sesión finalizada" << endl;
					break;
				default:
					cout << "Error, seleccione otra opcion." << endl;
					break;
			}
		} while (opcion != 5);
}

// ESTÁ BIEN ESTO EN CPP?????

int main(int argc, char *argv[]) // se pueden meter argumentos de programa en el cpp???
{
	WSADATA wsaData;
	SOCKET s;
	struct sockaddr_in server;
	char sendBuff[512], recvBuff[512];

	printf("\nInitialising Winsock...\n");
	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
	{
		printf("Failed. Error Code : %d", WSAGetLastError());
		return -1;
	}

	printf("Initialised.\n");

	//SOCKET creation
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

	//CONNECT to remote server
	if (connect(s, (struct sockaddr*) &server, sizeof(server)) == SOCKET_ERROR)
	{
		printf("Connection error: %d", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return -1;
	}

	printf("Connection stablished with: %s (%d)\n", inet_ntoa(server.sin_addr),
			ntohs(server.sin_port));

///////////////////////////////////////////////////////

	//SEND and RECEIVE data (CLIENT/SERVER PROTOCOL)
	strcpy(sendBuff, "1");
	send(s, sendBuff, sizeof(sendBuff), 0);
	recv(s, recvBuff, sizeof(recvBuff), 0);
	cout << recvBuff << endl;
	//menu(s);

	// RECEIVING response to command SUMAR from the server

//	recv(s, recvBuff, sizeof(recvBuff), 0);
//	printf("Suma = %s \n", recvBuff);

	// CLOSING the socket and cleaning Winsock...
	closesocket(s);
	WSACleanup();

	return 0;
}
