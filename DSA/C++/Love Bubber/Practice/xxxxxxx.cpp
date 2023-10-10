// // C++ program to print all primes smaller than or equal to
// // n using Sieve of Eratosthenes
// #include <bits/stdc++.h>
// using namespace std;

// void SieveOfEratosthenes(int n)
// {
// 	// Create a boolean array "prime[0..n]" and initialize
// 	// all entries it as true. A value in prime[i] will
// 	// finally be false if i is Not a prime, else true.
// 	bool prime[n + 1];
// 	memset(prime, true, sizeof(prime));

// 	for (int p = 2; p * p <= n; p++)
// 	{
// 		// If prime[p] is not changed, then it is a prime
// 		if (prime[p] == true)
// 		{
// 			// Update all multiples of p greater than or
// 			// equal to the square of it numbers which are
// 			// multiple of p and are less than p^2 are
// 			// already been marked.
// 			for (int i = p * p; i <= n; i += p)
// 				prime[i] = false;
// 		}
// 	}

// 	// Print all prime numbers
// 	int total = 0;
// 	for (int p = 2; p <= n; p++)
// 		if (prime[p])
// 			// cout << p << " ";
// 			total += 1;
// 	cout << total << endl;
// }

// // Driver Code
// int main()
// {
// 	int n = 10000000;
// 	cout << "Following are the prime numbers smaller "
// 		 << " than or equal to " << n << endl;
// 	SieveOfEratosthenes(n);
// 	return 0;
// }

// #include <iostream>
// using namespace std;
// void prime_sieve(int num)
// {
// 	int prime[num] = {0}; // anyone is not marked
// 	for (int i = 2; i * i <= num; i++)
// 	{
// 		for (int j = i * i; j < num; j += i)
// 		{
// 			prime[j] = {1}; // marked by 1;
// 		}
// 	}
// 	for (int i = 2; i <= num; i++)
// 	{
// 		if (prime[i] == 0)
// 		{
// 			cout << i << " ";
// 		}
// 	}
// 	cout << endl;
// }
// int main()
// {
// 	int num;
// 	cout << "Enter the Number: ";
// 	cin >> num;
// 	prime_sieve(num);
// 	return 0;
// }



// the following implementation 
// stores only halves of odd numbers 
// the algorithm is a faster by some constant factors 

#include <bitset> 
#include <iostream> 
using namespace std; 

bitset<500001> Primes; 
void SieveOfEratosthenes(int n) 
{ 
	Primes[0] = 1; 
	for (int i = 3; i*i <= n; i += 2) { 
		if (Primes[i / 2] == 0) { 
			for (int j = 3 * i; j <= n; j += 2 * i) 
				Primes[j / 2] = 1; 
		} 
	} 
} 

int main() 
{ 
	int n = 100; 
	SieveOfEratosthenes(n); 
	for (int i = 1; i <= n; i++) { 
		if (i == 2) 
			cout << i << ' '; 
		else if (i % 2 == 1 && Primes[i / 2] == 0) 
			cout << i << ' '; 
	} 
	return 0; 
}
