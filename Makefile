all:
	g++ src/Coche.cpp src/Ticket.cpp src/Usuario.cpp src/Comprador.cpp src/Vendedor.cpp src/main.cpp -l ws2_32 -o client
