#include <iostream>
#include "Primes.h"


int Primes::s_value = 1; // initializer

int main()
{
	for (int i = 0; i < 100; i++) {
		std::cout <<"Prime num. "<<i<<" "<< Primes::getPrime() << '\n';
	}
}