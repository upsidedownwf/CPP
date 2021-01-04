#include <iostream>

using namespace std;
double powere(double base, int power)
{
	double start = 1;
	for (int x = 0; x < power; x++)
	{
		start *= base;
	}
	return start;
}
int main()
{
	int y, power;
	double base;
	bool negative = false;
	bool positive = -1;
	cout << sizeof(int) << endl;
	cout << SHRT_MIN << endl;
	cout << USHRT_MAX << endl;
	cout << sizeof(long long) << endl;
	cout << "positive is: " << boolalpha << positive << " and negative is: " << boolalpha << negative << ".\n";
	cout << "Enter your age: \n";
	cin >> y;
	cout << "I am a good boy and my age is " << y << endl;
	cout << "Enter base " << endl;
	cin >> base;
	cout << "Enter power " << endl;
	cin >> power;
	cout << "Default power " << pow(base, power) << endl;
	cout << "Custom power " << powere(base, power) << endl;
}