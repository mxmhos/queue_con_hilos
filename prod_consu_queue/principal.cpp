/*
 * principal.cpp
 *
 *  Created on: 28 oct. 2019
 *      Author: antonio
 */

#include <thread>
#include <queue>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
#include <stdexcept>
#include <mutex>

#define NUM_FICHEROS 100

void generarFichero() {
	std::ofstream ofs;
	std::srand(std::time(NULL));
	std::string nombreFich;

	for(int i = 0; i < NUM_FICHEROS; i++) {
		nombreFich = "ficheros/fich" + std::to_string(i) + ".txt";

		ofs.open(nombreFich, std::ios::out);
		ofs << std::to_string(std::rand());
		ofs.close();
	}
}

void testQueue() {
	std::queue<int> cola;

	for(int i = 0; i < 10; i++)
		cola.push(i);

	std::cout << "Queue: " << std::endl;

	while(!cola.empty()) {
		std::cout << cola.front() << std::endl;
		cola.pop();
	}
}

void procesarDatos(int fichInicio, int fichFinal, std::mutex &mutex, std::queue<int>) {
	std::string snum;
	std::ifstream ifs;

	for(int i = fichInicio; i < fichFinal; i++) {

		ifs.open("fich" + std::to_string(i), std::ios::in);
		std::getline(ifs, snum);
	}



}


int main() {
	//generarFichero();
	int numHilos, numFicheros;
	int asignarFicheros = 0;
	std::cout << "Teclee un multiplo de 100: ";
	std::cin >> numHilos;

	if(NUM_FICHEROS%numFicheros)
		throw "El numero introducido no es valido. Tiene que ser multiplo de 100";

	numFicheros = NUM_FICHEROS/numHilos;//nos indica el numero de ficheros que cada hilo va a tener que procesar

	return 0;
}



