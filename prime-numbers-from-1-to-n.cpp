#include<iostream>
using namespace std;
enum enPrimeNotPrime { prime = 1, notPrime = 2 };
float readPositiveNumber(string message)
{
	float number = 0;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
enPrimeNotPrime checkPrime(int number)
{
	int m = round(number / 2);
	for (int counter = 2; counter <= m; counter++)
	{
		if (number % counter == 0)
			return enPrimeNotPrime::notPrime;
	}
	return enPrimeNotPrime::prime;
}
void PrintPrimeNumbersFrom1ToN(int number)
{
	cout << "Prime numbers from " << 1 << " To " << number << endl;
	for (int i = 1; i <= number; i++)
	{
		if (checkPrime(i)== enPrimeNotPrime::prime)
		{
			cout << i << "\n";
		}
	}
}
int main()
{
	PrintPrimeNumbersFrom1ToN(readPositiveNumber("Please enter a positive number ?"));
	return 0;
}