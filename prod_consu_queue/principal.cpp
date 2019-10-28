/*
 * principal.cpp
 *
 *  Created on: 28 oct. 2019
 *      Author: antonio
 */

#include <queue>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>

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




int main() {
	//generarFichero();



}



