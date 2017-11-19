#include "Primes.h"
#include <iostream>
#include <math.h>
bool Primes::isPrime(int nam)
{
	if (nam <= 1)
		return false;
	else if (nam == 2)
		return true;
	else if (nam % 2 == 0)
		return false;
	else
	{
		bool prime = true;
		int divisor = 3;
		double num_d = static_cast<double>(nam);
		int upperLimit = static_cast<int>(sqrt(num_d) + 1);

		while (divisor <= upperLimit)
		{
			if (nam % divisor == 0)
				prime = false;
			divisor += 2;
		}
		return prime;
	}
}

int Primes::getPrime()
{
	Primes::s_value++;
	while (!Primes::isPrime(Primes::s_value)) {
		Primes::s_value++;
	}
	return Primes::s_value;
}