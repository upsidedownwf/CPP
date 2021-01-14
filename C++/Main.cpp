#include <iostream>
#include <string>
#define cway 5;//define constant in  c also called macros
using namespace std;// or using std::cout to use only cout
 enum cppenum{
	peter,
	louis,
	stewie,
	megan,
	chris,
	brian
};
// you have to declare and define a function before you call/use it else declare it first at the top and use wherever you want
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
	cout << cway;
	cout << "\nuse math expressions\n";
	cout << sqrt(25)<<"\n";
	cout << "the difference between remainder fn and modulo " << 15 % 2 << " and " << remainder(12.5, 2.0)<<endl;// remainder can take float and double datatypes
	cout << fmax(10, 100) <<" and "<< fmin(12, 65)<<endl;//prints the max and min numbers
	cout << trunc(-1.5) << " just removes the decimal value\n";
	int y, power;
	double base;
	long double a = 300000000000000000000000.0;//this will show exponential value
	cout << a << "\n";
	cout << fixed << a << "\n";// this will show the actual value with exponents
	const int constant = 12;
	bool negative = false;
	char s = 'a';
	char name[] = "Olamide";
	string str = "test";
	str = str + " lets";
	s = str[0];
	int str1 = str.length();
	int str2 = string("test").length();
	bool positive = -1;
	cout << FLT_DIG << " is the amount of digits you can trust a float"<< endl;
	cout << DBL_DIG << " is the amount of digits you can trust a double"<< endl;
	cout << LDBL_DIG << " is the amount of digits you can trust a long double"<< endl;
	cout << "\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a"; // cout  is equivalent of console.writeline
	cout << sizeof(int) << endl;//sizeof(int) gets the number of bytes in an int
	cout << SHRT_MIN << endl; //gets the minimum value of a short type
	cout << USHRT_MAX << endl;//gets the maximum value of a unsigned short type
	cout << sizeof(long long) << endl;
	cout << "\npositive is: " << boolalpha << positive << " and negative is: " << boolalpha << negative << ".\n";//boolapha prints out bit value in words i.e true/false
	cout << "Enter your age: \n";
	cin >> y;// cin  is equivalent of console.readline
	cout << "I am a good boy and my age is " << y << endl;// endl == \n 
	cout << "Enter base " << endl;
	cin >> base;
	cout << "Enter power " << endl;
	cin >> power;
	cout << "Default power " << pow(base, power) << endl;
	cout << "Custom power " << powere(base, power) << endl;
	string teststring, teststring2;
	cout << "Enter test string: \n";
	cin >> teststring; //cin grabs only the first word (split by space)
	cout << "using normal cin "+teststring+"\n";
	//getline(cin, teststring2);
	//cout <<"using getline "+ teststring2 + "\n";
}
