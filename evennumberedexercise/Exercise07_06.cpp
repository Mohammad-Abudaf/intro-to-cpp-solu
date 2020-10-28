#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const int NUM_OF_PRIMES = 50;
  // Store prime numbers
  int primeNumbers[NUM_OF_PRIMES];
  int count = 0; // Count the number of prime numbers
  int number = 2; // A number to be tested for primeness
  bool isPrime = true; // Is the current number prime?

  cout << "The first 50 prime numbers are \n";

  // Repeatedly find prime numbers
  while (count < NUM_OF_PRIMES)
  {
    // Assume the number is prime
    isPrime = true;

    // Test if number is prime
    for (int i = 0; i < count && primeNumbers[i] <= sqrt(1.0 * number); i++)
    {
      //If true, the number is not prime
      if (number % primeNumbers[i] == 0)
      {
        // Set isPrime to false, if the number is not prime
        isPrime = false;
        break; // Exit the for loop
      }
    }

    // Print the prime number and increase the count
    if (isPrime)
    {
      primeNumbers[count] = number;
      count++; // Increase the count

      if (count % 10 == 0)
      {
        // Print the number and advance to the new line
        cout << number << endl;
      }
      else
        cout << number << "\t";
    }

    // Check if the next number is prime
    number++;
  }

  return 0;
}
