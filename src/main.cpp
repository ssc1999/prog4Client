#include "Coche.h"
#include "Comprador.h"
#include "Vendedor.h"
#include "Usuario.h"
#include "Ticket.h"

#include <iostream>
using namespace std;

int main(void)
{

	Coche* c1 = new Coche("Citroen", "C3", false, 7, "2020");

	c1->imprimirInformacion();

	return 0;
}
