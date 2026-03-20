#include <iostream>
#include <cctype>
#include <string>
using namespace std;



//int main()
//{
//	int age1 = { 22 + 5 };
//	int age2 = (22 + 5);
//	int age3 = 22 + 5;
//	std::cout << "age1 = " << age1 << '\n';
//	std::cout << "age2 = " << age2 << '\n';
//	std::cout << "age3 = " << age3 << '\n';
//}


//int main()
//{
//	bool isAlive{ true };
//	bool isDead{ false };
//	std::cout << "isAlive: " << isAlive << '\n';
//	std::cout << "isDead: " << isDead << '\n';
//}


//int main()
//{
//	signed char num1{ -64 };
//	unsigned char num2{ 64 };
//	short num3{ -88 };
//	unsigned short num4{ 88 };
//	int num5{ -1024 };
//	unsigned int num6{ 1024U }; // U - unsigned int
//	long num7{ -2048L }; // L - long
//	unsigned long num8{ 2048UL }; // UL - unsigned long
//	long long num9{ -4096LL }; // LL - long long
//	unsigned long long num10{ 4096ULL }; // ULL - unsigned long long
//
//	std::cout << "num1: " << num1 << '\n';
//	std::cout << "num2: " << num2 << '\n';
//	std::cout << "num3: " << num3 << '\n';
//	std::cout << "num4: " << num4 << '\n';
//	std::cout << "num5: " << num5 << '\n';
//	std::cout << "num6: " << num6 << '\n';
//	std::cout << "num7: " << num7 << '\n';
//	std::cout << "num8: " << num8 << '\n';
//	std::cout << "num9: " << num9 << '\n';
//	std::cout << "num10: " << num10 << '\n';
//}

//int main()
//{
//	int num1(1'2345'67890);
//	int num2{ 0x1A };
//	int num3{ 0xFF };
//	int num4{ 0xFFFFFF };
//	int num5{ 034 };
//	int num6{ 0377 };
//	int num7{ 0b11010 };
//	int num8{ 0b11111111 };
//	unsigned int num9{ 0b11010U };
//	long num10{ 0377L };
//	unsigned long num11{ 0xFFFFFFULL };
//	std::cout << "num1= " << num1 << std::endl;
//	std::cout << "num2= " << num2 << std::endl;
//	std::cout << "num3= " << num3 << std::endl;
//	std::cout << "num4= " << num4 << std::endl;
//	std::cout << "num5= " << num5 << std::endl;
//	std::cout << "num6= " << num6 << std::endl;
//	std::cout << "num7= " << num7 << std::endl;
//	std::cout << "num8= " << num8 << std::endl;
//	std::cout << "num9= " << num9 << std::endl;
//	std::cout << "num10= " << num10 << std::endl;
//	std::cout << "num11= " << num11 << std::endl;
//}


/*int main()
{
	double num1{ 10.45 };
	double num2{ 2 };
	double num3{ 2. };
	float num4{ 10.56f };
	long double num5{ 10.561 };
	double num6{ 5E3 };
	double num7{ 2.5e-3 };
	long double number{ 2 };
	std::cout << "sizeof(number) =" << sizeof(number) << std::endl;
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "num2 = " << num2 << std::endl;
	std::cout << "num3 = " << num3 << std::endl;
	std::cout << "num4 = " << num4 << std::endl;
	std::cout << "num5 = " << num5 << std::endl;
	std::cout << "num6 = " << num6 << std::endl;
	std::cout << "num7 = " << num7 << std::endl;
}*/

//int main()
//{
//	long double number{ 2 };
//	std::cout << "sizeof(number) =" << sizeof(number);
//}

//int main()
//{
//	char a1{ 'A' };
//	char a2{ 65 };
//	wchar_t a3{ L'A' };
//	wchar_t a4{ L'\x41' };
//	std::cout << "a1 = " << a1 << std::endl;
//	std::cout << "a2 = " << a2 << std::endl;
//	std::wcout << "a3 = " << a3 << std::endl;
//	std::wcout << "a4 = " << a4 << std::endl;
//}



//int main()
//{
//	auto num = 5;
//	auto sum = 1234.56 ;
//	auto distance = 267UL;
//	std::cout << "num type : " << typeid(num).name() << std::endl;
//	std::cout << "sum type : " << typeid(sum).name() << std::endl;
//	std::cout << "distance type : " << typeid(distance).name() << std::endl;
//}


//int main()
//{
//	const int age{ 22 };
//	int a{ 5 };
//	const int b{ a };
//	const int c{ b };
//	std::cout << "age = " << age << std::endl;
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//	std::cout << "c = " << c << std::endl;
//	const float pi{ 3.14 };
//	std::cout << "pi = " << pi << std::endl;
//}

//int main()
//{
//	int age{ 25 };
//	double height{ 81 };
//	std::cout << "Name: " << "Tom" << std::endl;
//	std::cout << "Age: " << age << std::endl;
//	std::cout << "Height: " << height << std::endl;
//}



//int main()
//{
//	int age;
//	double  weight;
//	std::cout << "Input Age: ";
//	std::cin >> age;
//	std::cout << "Input Weight: ";
//	std::cin >> weight;
//	std::cout << "Age: " << age << "\t Weight: " << weight << std::endl;
//}	


//int main()
//{
//	int age;
//	double weight;
//	std::cout << "Input Age and Weight: ";
//	std::cin >> age >> weight;
//	std::cout << "Age: " << age << "\tWeight: " << weight << std::endl;
//}


//using std::cout;
//using std::cin;
//using std::endl;
//
//int main()
//{
//	int age;
//	cout << "Input Age: ";
//	cin >> age;
//	cout << "Your age: " << age << endl;
//}


//using ullong = unsigned long long;
//using std::cout;
//int main()
//{
//	ullong n{ 1234 };
//	cout << "n: " << n << std::endl;
//}


//typedef unsigned long long ullong;
//int main()
//{
//	ullong n { 1234 };
//	std::cout << "n: " << n << std::endl;
//}


//+
//int main()
//{
//	int a{ 10 };
//	int b{ 7 };
//	int c{ a + b };
//	int d{ 4 + c };
//	std::cout << "a=" << a << std::endl;
//	std::cout << "b=" << b << std::endl;
//	std::cout << "c=" << c << std::endl;
//	std::cout << "d=" << d << std::endl;
//}


//-
//int main()
//{
//	int a{ 10 };
//	int b{ 7 };
//	int c{ a - b };
//	int d{ 4 - b };
//	std::cout << "a=" << a << std::endl;
//	std::cout << "b=" << b << std::endl;
//	std::cout << "c=" << c << std::endl;
//	std::cout << "d=" << d << std::endl;
//}


//*
//int main()
//{
//	int a{ 10 };
//	int b{ 7 };
//	int c{ a * b };
//	int d{ 4 * b };
//	std::cout << "a=" << a << std::endl;
//	std::cout << "b=" << b << std::endl;
//	std::cout << "c=" << c << std::endl;
//	std::cout << "d=" << d << std::endl;
//}

///
//int main()
//{
//	int a{ 26 };
//	int b{ 5 };
//	int c{ a / b };
//	int d{ 4 / b };
//	std::cout << "a=" << a << std::endl;
//	std::cout << "b=" << b << std::endl;
//	std::cout << "c=" << c << std::endl;
//	std::cout << "d=" << d << std::endl;
//}



//int main()
//{
//	int a{ 26 };
//	int b{ 5 };
//	float c{ a / b };      // c = 5
//	double d{ 4 / b };     // d = 0
//	std::cout << "c = " << c << std::endl;
//	std::cout << "d = " << d << std::endl;
//}


//int main()
//{
//	float a{ 26 };
//	int b{ 5 };
//	float c{ a / b };
//	double d{ 4.0 / b };
//	std::cout << "c=" << c << std::endl;
//	std::cout << "d=" << d << std::endl;
//}


//int main()
//{
//	int a{ 26 };
//	int b{ 5 };
//	int c{ a % b };
//	int d{ 4 % b };
//	std::cout << "c=" << c << std::endl;
//	std::cout << "d=" << d << std::endl;
//}

//int main()
//{
//	float num1{ 1.23E-4 };
//	float num2{ 3.65E+6 };
//	float sum{ num1 + num2 };
//	std::cout << "sum = " << sum << std::endl;
//}

//int main()
//{
//    double a{ 1.5 }, b{}, c{}, d {-1.5};
//    double result { a / b };
//    std::cout << a << "/" << b << " = " << result << std::endl;
//    result = d / c;
//    std::cout << d << "/" << c << " = " << result << std::endl;
//    result = b / c;
//    std::cout << b << "/" << c << " = " << result << std::endl;
//    std::cout << result << " + " << a << " = " << result + a << std::endl;
//}

//int main()
//{
//	int a{ 8 };
//	//int b{ ++a };
//	//int b{ a++ };
//	//int b{ --a };
//	int b{ a-- };
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//}


//int main()
//{
//	int a{ 8 };
//	int b{ 7 };
//	int c = a + 5 * ++b;
//	std::cout << "c = " << c << std::endl;
//
//	int count{ 1 };
//	int res = ++count * 3 + count++ * 5;
//	std::cout << "res = " << res << std::endl;
//}

//int main()
//{
//	int a{ 13 };
//	int b{ 5 };
//	int c = (a + 5) * ++b;
//	std::cout << "c = " << c << std::endl;
//}

//int main()
//{
//	//unsigned int age{ 25 };
//	unsigned int age{ -25 };
//	std::cout << "age: " << age << std::endl;
//}


//int main()
//{
//	bool a = 1;
//	bool b = 0;
//	bool c = 'g';
//	bool d = 3.14;
//	int e = true;
//	double f = false;
//	int g = 3.4;
//	int h = 3.6;
//	float i = 35005;
//	double j = 3500500000533;
//	unsigned char k = -5;
//	unsigned short l = -3500;
//	unsigned int m = -500000;
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//	std::cout << "c = " << c << std::endl;
//	std::cout << "d = " << d << std::endl;
//	std::cout << "e = " << e << std::endl;
//	std::cout << "f = " << f << std::endl;
//	std::cout << "g = " << g << std::endl;
//	std::cout << "h = " << h << std::endl;
//	std::cout << "i = " << i << std::endl;
//	std::cout << "j = " << j << std::endl;
//	std::cout << "k = " << k << std::endl;
//	std::cout << "l = " << l << std::endl;
//	std::cout << "m = " << m << std::endl;
//}


//int main()
//{
//	double sum{ 100.2 };
//	int hours{ 8 };
//	double revenuePerHour{ sum / hours };
//	std::cout << "Revenue Per Hour " << revenuePerHour << std::endl;
//}


//int main()
//{
//	int n{ 5 };
//	unsigned int x{ 8 };
//	std::cout << "result = " << x - n << std::endl;
//}


//Опасные и безопасные преобразования
//bool -> char -> short -> int -> double -> long double
//
//bool -> char -> short -> int -> long -> long long
//
//unsigned char -> unsigned short -> unsigned int -> unsigned long
//
//float -> double -> long double


//int main()
//{
//	short a = 'g';
//	int b = 10;
//	double c = b;
//	float d = 3.4;
//	double e = d;
//	double f = 35;
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//	std::cout << "c = " << c << std::endl;
//	std::cout << "d = " << d << std::endl;
//	std::cout << "e = " << e << std::endl;
//	std::cout << "f = " << f << std::endl;
//
//	//опасные преобразования
//	unsigned int g = -25;
//	unsigned short h = -2500;
//	unsigned int i{ -25 };
//	unsigned short j{ -2500 };
//	std::cout << "g = " << g << std::endl;
//	std::cout << "h = " << h << std::endl;
//	std::cout << "i = " << i << std::endl;
//	std::cout << "j = " << j << std::endl;
//}


//int main()
//{
//	double sum{ 100.2 };
//	unsigned int hours{ 8 };
//	unsigned int revenuePerHour{ static_cast<unsigned int>(sum / hours) };
//	std::cout << "Revenue Per Hour " << revenuePerHour << std::endl;
//}


//int main()
//{
//	unsigned int number{ 0b0000'1100 };
//	std::cout << "number = " << number << std::endl;
//	//Операции сдвига
//	unsigned int a = 2 << 2; //8
//	unsigned int b = 16 >> 3; //2
//	std::cout << "a = " << a << std::endl;
//	std::cout << "b = " << b << std::endl;
//
//	unsigned int x{ 3 };
//	unsigned int num{ 7 };
//	unsigned int result1{ num << x };
//	std::cout << "Result = " << result1 << std::endl;
//	num = 26;
//	result1 = num >> x;
//	std::cout << "Result = " << result1 << std::endl;
//
//	//Поразрядные операции
//	int a1 = 5 | 2;
//	int b1 = 6 & 2;
//	int c1 = 5 ^ 2;
//	int d1 = ~9;
//	
//	std::cout << "a1 = " << a1 << std::endl;
//	std::cout << "b1 = " << b1 << std::endl;
//	std::cout << "c1 = " << c1 << std::endl;
//	std::cout << "d1 = " << d1 << std::endl;
//}


//int main()
//{
//	int a{ 5 };
//	std::cout << "a = " << a << std::endl;
//	a += 10;
//	std::cout << "a = " << a << std::endl;
//	a -= 3;
//	std::cout << "a = " << a << std::endl;
//	a *= 2;
//	std::cout << "a = " << a << std::endl;
//	a /= 4;
//	std::cout << "a = " << a << std::endl;
//	a <<= 4;
//	std::cout << "a = " << a << std::endl;
//	a >>= 2;
//	std::cout << "a = " << a << std::endl;
//}


//int main()
//{
//	int a{ 10 };
//	int b{ 4 };
//	bool c{ a == b };
//	bool d{ a == 10 };
//	bool e{ a > b };
//	bool f{ a < b };
//	bool g{ a <= b };
//	bool h{ a <= 14 };
//	bool i{ a >= b };
//	bool j{ a >= 14 };
//	bool k{ a != 14 };
//	bool l{ b != 4 };
//	std::cout << "c = " << c << std::endl;
//	std::cout << "d = " << d << std::endl;
//	std::cout << "e = " << e << std::endl;
//	std::cout << "f = " << f << std::endl;
//	std::cout << "g = " << g << std::endl;
//	std::cout << "h = " << h << std::endl;
//	std::cout << "i = " << i << std::endl;
//	std::cout << "j = " << j << std::endl;
//	std::cout << "k = " << k << std::endl;
//	std::cout << "l = " << l << std::endl;
//}


//int main()
//{
//	int a{ 8 };
//	int b{ 11 };
//	bool c{ a == b };
//	bool d{ a != b };
//	std::cout << "c: " << std::boolalpha << c << std::endl;
//	std::cout << ": " << std::boolalpha << d << std::endl;
//}


////Логические операции
//int main()
//{
//	//! (операция отрицания)
//	bool a{ true };
//	bool b{ false };
//	bool res1{ !a }; //0
//	bool res2{ !res1 }; //1
//	//&& (конъюнкция, логическое умножение)
//	bool res3{ a && b }; // 0
//	bool res4{ a && true }; //1
//	//|| (дизъюнкция, логическое сложение)
//	bool res5{ a || b }; //1
//	bool res6{ b || false }; //0
//	//^ ( XOR или eXclusive OR)
//	bool res7{ a ^ b }; //1
//	bool res8{ a ^ true }; //0	
//	bool res9{ b ^ false }; //0
//}


//int main()
//{
//	int a{ 5 };
//	int b{ 8 };
//	bool res1 = a == 5 && b > 8; //0
//	bool res2 = a == 5 || b > 8; //1
//	bool res3 = a == 5 ^ b > 8; //1
//	std::cout << "res1 " << std::boolalpha << res1 << std::endl;
//	std::cout << "res2 " << std::boolalpha << res2 << std::endl;
//	std::cout << "res3 " << std::boolalpha << res3 << std::endl;
//}


//int main()
//{
//	int a{ 5 };
//	int b{ 8 };
//	bool res1 = a == 6 && b == 8;
//	bool res2 = a == 5 || b == 0;
//	std::cout << "res1 " << std::boolalpha << res1 << std::endl;
//	std::cout << "res2 " << std::boolalpha << res2 << std::endl;
//}


//int main()
//{
//	int a{ 8 };
//	if (a == 8)
//	{
//		std::cout << "a == 8" << std::endl;
//	}
//	std::cout << "End of program" << std::endl;
//}

//int main()
//{
//	int a{ 8 };
//	if (a == 7)
//	{
//		std::cout << "a == 8" << std::endl;
//	}
//	std::cout << "End of program" << std::endl;
//}

//int main()
//{
//	int n{ 23 };
//	if (n > 22)
//	{
//		std::cout << "n > 22" << std::endl;
//	}
//	else
//	{
//		std::cout << "n <= 22" << std::endl;
//	}
//}


//int main()
//{
//	int n{ 22 };
//	if (n > 22)
//	{
//		std::cout << "n > 22" << std::endl;
//	}
//	else if (n < 22)
//	{
//		std::cout << "n < 22" << std::endl;
//	}
//	else
//	{
//		std::cout << "n == 22" << std::endl;
//	}
//
//}


//int main()
//{
//	int n{ 20 };
//	if (n == 20)
//	{
//		std::cout << "n == 20" << std::endl;
//	}
//	if (n == 21)
//	{
//		std::cout << "n == 21" << std::endl;
//	}
//	if (n == 22)
//	{
//		std::cout << "n == 22" << std::endl;
//	}
//	if (n == 23)
//	{
//		std::cout << "n == 23" << std::endl;
//	}
//}


//int main()
//{
//	int a{ 8 };
//	if (a)
//	{
//		std::cout << "a is true" << std::endl;
//	}
//	else
//	{
//		std::cout << "a is false" << std::endl;
//	}
//
//	int b {};
//	if (b)
//	{
//		std::cout << "b is true" << std::endl;
//	}
//	else
//	{
//		std::cout << "b is false" << std::endl;
//	}
//}


//int main()
//{
//	int a{ 5 };
//	int b{ 6 };
//	if (a == 5)
//	{
//		if (b == 8)
//		{
//			std::cout << "a == 5 and b == 8" << std::endl;
//		}
//		else
//		{
//			std::cout << "a == 5 and b != 8" << std::endl;
//		}
//	}
//	else
//	{
//		std::cout << "a != 5" << std::endl;
//	}
//}


//int main()
//{
//	int a{ 2 };
//	int b{ 3 };
//	if(int c{ a - b }; a > b)
//	{
//		std::cout << "a = " << a << "; c = " << c << std::endl;
//	}
//	else
//	{
//		std::cout << "b = " << b << "; c = " << c << std::endl;
//	}
//}


//int main()
//{
//	int a{ 6 };
//	int b{ 3 };
//	if (int rem{ a % b }; rem == 0)
//	{
//		std::cout << "a divisible by b" << std::endl;
//	}
//	else
//	{
//		std::cout << "remaining of a/b = " << rem << std::endl;
//	}
//}


//int main()
//{
//	int a{ 5 };
//	int b{ 8 };
//	int c{};
//	if (a > b)
//	{
//		c = a - b;
//	}
//	else
//	{
//		c = a + b;
//	}
//	std::cout << "c = " << c << std::endl;
//}


//int main()
//{
//	int a{ 5 };
//	int b{8};
//	a > b ? std::cout << a - b : std::cout << a + b;
//}

//int main()
//{
//	int a{ 8 };
//	int b{5};
//	std :: cout << (a < b ? "a is less than b":
//		(a == b ? "a is equal to b ": "a is grater than b"));
//}


//int main()
//{
//	int x{1};
//
//	switch (x)
//	{
//	case 1:
//		std::cout << "x = 1" << std::endl;
//		break;
//	case 2:
//		std::cout << "x = 2" << std::endl;
//		break;
//	case 3:
//		std::cout << "x = 3" << std::endl;
//		break;
//	default:
//		std::cout << "x is undefined" << std::endl;
//		break;
//	}
//}


//int main()
//{
//	int x{ 5 };
//
//	switch (x)
//	{
//	case 1:
//	case 2:
//		std::cout << "x is 1 or 2" << std::endl;
//		break;
//	case 3:
//	case 4:
//		std::cout << "x is 3 or 4" << std::endl;
//		break;
//	case 5:
//		std::cout << "x is 5" << std::endl;
//		break;
//	}
//}


//int main()
//{
//	int x{ 3 };
//
//	switch (x)
//	{
//	case 1:
//	{
//		int a{ 10 };
//		std::cout << "a = " << a << std::endl;
//		break;
//	}
//	case 2:
//	{
//		int b{ 20 };
//		std::cout << "b = " << b << std::endl;
//		break;
//	}
//	default:
//	{
//		int c{ 30 };
//		std::cout << "c = " << c << std::endl;
//	}
//	}
//}


//int main()
//{
//	char op{ '-' };
//	int n = 10;
//
//	switch (int x{ 2 }; op)
//	{
//	case '+':
//	{
//		std::cout << "n + x = " << n + x << std::endl;
//		break;
//	}
//	case '-':
//	{
//		std::cout << "n - x = " << n - x << std::endl;
//		break;
//	}
//	case '*':
//	{
//		std::cout << "n * x = " << n * x << std::endl;
//		break;
//	}
//	}
//}


//int main()
//{
//	int i{ 1 };
//	while (i < 10)
//	{
//		std::cout << i << " * " << i << " = " << i*i << std::endl;
//		i++;
//	}
//}


//int main()
//{
//	int i{};
//	while (++i < 10)
//	{
//		std::cout << i << " * " << i << " = " << i * i << std::endl;
//	}
//}

//int main()
//{
//	int sum{};
//	for (unsigned i{}; i < 6; sum += i++);
//	std::cout << "Sum: " << sum << std::endl;
//}


//int main()
//{
//	int sum{};
//	for (int i{ 1 }, j{ 5 }; i < 6 && j < 10; i++, j++)
//	{
//		std::cout << i << " * " << j << " = " << i * j << std::endl;
//	}
//}


//int main()
//{
//	for (int n : {2, 3, 4, 5})
//	{
//		std::cout << "n = " << n << std::endl;
//	
// }
//}


//int main()
//{
//	for (char n : "hello")
//	{
//		std::cout << "n = " << n << std::endl;
//	}
//}

//int main()
//{
//	int i{ 6 };
//	do
//	{
//		std::cout << "i = " << i << std::endl;
//		i--;
//	} 
//	while (i > 0);
//}


//int main()
//{
//	int i{ -1 };
//	do
//	{
//		std::cout << "i = " << i << std::endl;
//		i--;
//	} while (i > 0);
//}


//int main()
//{
//	char reply{};
//	int count{};
//	double number{};
//	double total{};
//	do
//	{
//		std::cout << "Enter a number: ";
//		std::cin >> number;
//		total += number;
//		++count;
//		std::cout << "Finish? (y/n): ";
//		std::cin >> reply;
//	} while (reply != 'y' && reply != 'Y');
//
//	std::cout << "The average value is " << total / count << std::endl;
//}


//int main()
//{
//	for (int i{ 1 }; i <= 10; i++)
//	{
//		for (int j{ 1 }; j <= 10; j++)
//		{
//			std::cout << i * j << "\t";
//		}
//		std::cout << std::endl;
//	}
//}

//int main()
//{
//	int result{};
//	for (int i{ 1 }; i < 10; i++)
//	{
//		result += i;
//		std::cout << "result = " << result << std::endl;
//		if (result > 20) break;
//	}
//}


//int main()
//{
//	int result{};
//	for (int i{ 1 }; i < 10; i++)
//	{
//		if (i % 2 == 0) continue;
//		result += i;
//	}
//	std::cout << "result = " << result << std::endl;
//}


//int main()
//{
//	// бесконечный цикл for - условие завершения отсутствует
//	for (;;)
//	{
//
//	}
//	// бесконечный цикл while - условие всегда равно true
//	while (true)
//	{
//
//	}
//	// бесконечный цикл do-while - условие всегда равно true
//	do
//	{
//
//	} while (true);
//}


//int main()
//{
//	int n{};
//	while (true)
//	{
//		std::cout << "Enter a number: ";
//		std::cin >> n;
//		if (n == 0) break;
//		std::cout << n * n << std::endl;
//	}
//}


//int main()
//{
//	int number{ 5 };
//	int &refNumber{ number };
//	std::cout << "number = " << number << std::endl;
//	refNumber = 20;
//	std::cout << "refNumber = " << refNumber << std::endl;
//	std::cout << "number = " << number << std::endl;
//}

//int main()
//{
//	int number{ 5 };
//	const int &refNumber{ number };
//	number = 20;
//	std::cout << "refNumber = " << refNumber << std::endl;
//}


//int main()
//{
//	int numbers[]{ 1, 2, 3, 4, 5 };
//	for (auto &n : numbers)
//	{
//		n = n * n;
//	}
//	for (auto n : numbers)
//	{
//		std::cout << n << "\t";
//	}
//}


	//int main()
	//{
	//	int numbers[]{ 1, 2, 3, 4, 5 };
	//	for (const auto& n : numbers)
	//	{
	//		std::cout << n << "\t";
	//	}
	//	std::cout << std::endl;
	//}

//using namespace std;
//
//int main()
//{
//	const int n = 4;
//	int list1[n];
//	int list2[n]{};
//	int list3[n]{1, 2, 3, 4};
//	int list4[n]{1, 2};
//	int list5[]{ 1, 2, 3, 4, 5, 6 };
//}


//int main()
//{
//	int numbers[]{ 1, 2, 3, 4 };
//	int first = numbers[0];
//	std::cout << "First number of list: " << first << std::endl;
//	numbers[0] = 34;
//	std::cout << "First number of list: " << numbers[0] << std::endl;
//}


//int main()
//{
//	const int numbers[4]{ 1, 2, 3, 4 };
//	int forth = numbers[4]; // !Ошибка - в массиве только 4 элемента
//	numbers[1] = 25; // numbers[1] = 23;    // ошибка - значения элементов массива изменить нельзя
//}

//int main()
//{
//	int numbers[]{ 11, 12, 13, 14, 15 };
//	std::cout << "Lenght: " << sizeof(numbers) / sizeof(numbers[0]) << std::endl;
//}


//int main()
//{
//	int numbers[]{ 1, 2, 3, 4 };
//	int sum{};
//	for (int i{}; i < std::size(numbers); sum += numbers[i++]);
//	std::cout << "Sum = " << sum << std::endl;
//}


//int main()
//{
//	int numbers[]{ 1, 2, 3, 4 };
//	for (int n : numbers)
//	{
//		std::cout << "n = " << n << std::endl;
//	}
//}


//int main()
//{
//	int numbers[]{ 1, 2, 3, 4 };
//	for (auto n : numbers)
//	{
//		std::cout << "n = " << n << std::endl;
//	}
//}


//int main()
//{
//	int nums[3][2]
//	{
//		{1, 2},
//		{3, 4},
//		{5, 6}
//	};
//	int n = nums[1][0];
//	std::cout << "n = " << n << std::endl;
//	
//	std::cout << "nums[0][1] = " << nums[0][1] << std::endl;
//	nums[0][1] = 123;
//	std::cout << "nums[0][1] = " << nums[0][1] << std::endl;
//}


//int main()
//{
//	const int rows = 3, columns = 2;
//	int numbers[rows][columns]
//	{
//		{1, 2}, {3, 4}, {5, 6}
//	};
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//		{
//			std::cout << numbers[i][j] << "\t";
//		}
//		std::cout << std::endl;
//	}
//}


//int main()
//{
//	const int rows = 3, columns = 2;
//	int numbers[rows][columns]
//	{
//		{1, 2}, {3, 4}, {5, 6}
//	};
//
//	for (auto &subnumbers : numbers)
//	{
//		for (int number : subnumbers)
//		{
//			std::cout << number << "\t";
//		}
//		std::cout << std::endl;
//	}
//}


//int main()
//{
//	char hello1[]{ 'h', 'e', 'l', 'l', 'o' };
//	char hello2[]{ 'h', 'e', 'l', 'l', 'o', '\0'};
//	char hello3[]{ "hello" };
//
//	std::cout << hello1 << std::endl;
//	std::cout << hello2 << std::endl;
//	std::cout << hello3 << std::endl;
//}


//int main()
//{
//	const int max_lenght{ 50 };
//	char langs[][max_lenght]
//	{
//		"C++", "C#", "Python", "Java",
//		"Kotlin", "Go", "Dart", "PHP"
//	};
//	std::cout << langs[0] << std::endl;
//	std::cout << langs[1] << std::endl;
//	std::cout << langs[2] << std::endl;
//	std::cout << "langs[20] = " << langs[20] << std::endl;
//}


//int main()
//{
//	char langs[][20]
//	{
//		"C++", "Python", "JavaScript"
//	};
//	for (auto lang : langs)
//	{
//		std::cout << lang << "\t";
//	}
//	std::cout << std::endl;
//}


//int main()
//{
//	const int max_lenghht{ 100 };
//	char text[max_lenghht]{};
//	std::cout << "Enter some text: " << std::endl;
//	std::cin.getline(text, max_lenghht);
//	std::cout << "You entered : \t" << text << std::endl;
//}


//int main()
//{
//	const int max_lenght{ 100 };
//	char text[max_lenght]{};
//	std::cout << "Enter some text: ";
//	std::cin.getline(text, max_lenght, '!');
//	std::cout << "You entered: \n" << text << std::endl;
//}

#include <string>

//int main()
//{
//	std::string message{ "Hello ma frend" };
//	std::cout << "Message: " << message << std::endl;
//	std::cout << "message[0] = " << message[0] << std::endl;
//	message[0] = 'M';
//	std::cout << "message[0] = " << message[0] << std::endl;
//	std::cout << "Message: " << message << std::endl;
//}


//int main()
//{
//	unsigned count{};
//	std::string message{ "Hello ma frend" };
//	for (const char c : message)
//	{
//		if (c == 'l')
//		{
//			count++;
//		}
//	}
//	std::cout << "count: " << count << std::endl;
//}


//int main()
//{
//	std::string name;
//	std::cout << "Enter your name: ";
//	std::cin >> name;
//	std::cout << "Hello ma frend " << name << std::endl;
//}


//int main()
//{
//	std::string name;
//	std::cout << "Enter your name: ";
//	getline(std::cin, name);
//	std::cout << "hello ma frend " << name << std::endl;
//}


//Указатели

//int main()
//{
//	int* p{ nullptr };
//	cout << p;
//}

//int main()
//{
//	int* print{};
//	double *pdouble{};
//	cout << "pint size: " << sizeof(print) << endl;
//	cout << "pdouble size: " << sizeof(pdouble) << endl;
//}


//int main()
//{
//	int number{ 25 };
//	int* pnumber{ &number };
//	cout << "number address: " << pnumber << endl;
//	cout << "number address: " << &pnumber << endl;
//	cout << "Adress: " << pnumber << endl;
//	cout << "Value: " << *pnumber << endl;
//}


//int main()
//{
//	int n1{ 25 };
//	int* pn1{ &n1 };
//	int n2{ *pn1 };
//	cout << "n2: " << n2;
//}


//int main()
//{
//	int x = 10;
//	int* px = &x;
//	*px = 45;
//	cout << x;
//}


//
//int main()
//{
//	int a{ 10 };
//	int* pa{ &a };
//
//	std::cout << "a = " << a << std::endl;
//	std::cout << "pa = " << pa << std::endl;
//
//	*pa = 25;
//
//	std::cout << "a = " << a << std::endl;
//	std::cout << "pa = " << pa << std::endl;
//}




//int main()
//{
//	int a{ 10 };
//	int b{ 2 };
//
//	int* pa{ &a };
//	int* pb{ &b };
//
//	cout << "pa: adress: " << pa << "\t value = " << *pa << endl;
//	cout << "pb: adress: " << pb << "\t value = " << *pb << endl;
//
//	pa = pb;
//
//	cout << "pa: adress: " << pa << "\t value = " << *pa << endl;
//	*pa = 125;
//	cout << "pa: adress: " << pa << "\t value = " << *pa << endl;
//	cout << "pb: adress: " << pb << "\t value = " << *pb << endl;
//
//}


//Нулевые указатели
//int main()
//{
//	int* p1{ nullptr };
//	int* p2{};
//}

//int main()
//{
//	int a{ 10 };
//	int b{ 6 };
//
//	int* p{};
//	int*& pRef{ p };
//	pRef = &a;
//
//	cout << "p Value = " << *p << endl;
//	*pRef = 70;
//	cout << "a value = " << a << endl;
//
//	pRef = &b;
//	cout << "p Value = " << *p << endl;
//}


//int main()
//{
//	int a{ 10 };
//	int* pa{ &a };
//	//*pa = 20;
//	std::cout << "address of pointer=" << &pa << std::endl;        // адрес указателя
//	std::cout << "address stored in pointer=" << pa << std::endl;  // адрес, который хранится в указателе - адрес переменной a         
//	std::cout << "value on pointer=" << *pa << std::endl;          // значение по адресу в указателе - значение переменной a
//}


//int main()
//{
//	int a{ 10 };
//	int b{ 20 };
//	int* pa{ &a };
//	int* pb{ &b };
//
//	if (pa > pb)
//		std::cout << "pa (" << pa << ") is greater than pb (" << pb << ")" << std::endl;
//	else
//		std::cout << "pa (" << pa << ") is less or equal pb (" << pb << ")" << std::endl;
//}


//int main()
//{
//	char c{ 'N' };
//	char* pc{ &c };            // указатель на символ
//	int* pd{ (int*)pc };      // указатель на int
//	void* pv{ (void*)pc };     // указатель на void
//	std::cout << "pv=" << pv << std::endl;
//	std::cout << "pd=" << pd << std::endl;
//	std::cout << "pd=" << *pd << std::endl;
//	std::cout << "pc=" << *pc << std::endl;
//}


//int main()
//{
//	int n = 10;
//	int* pn = &n;
//	cout << "address = " << pn << "\t value = " << *pn << endl;
//
//	pn++;
//
//	cout << "address = " << pn << "\t value = " << *pn << endl;
//	
//	pn--;
//
//	cout << "address = " << pn << "\t value = " << *pn << endl;
//}


//int main()
//{
//	double d{ 10.6 };
//	double* pd{ &d };
//
//	cout << "Pointer address = " << pd << endl;
//	pd++;
//	cout << "Pointer address = " << pd << endl;
//	pd += 3;
//	cout << "Pointer address = " << pd << endl;
//
//	short n{ 5 };
//	short* pn{ &n };
//	cout << "Pointer address = " << pn  << endl;
//	pn++;
//	cout << "Pointer address = " << pn  << endl;
//	pn -= 3;
//	cout << "Pointer address = " << pn  << endl;
//
//}


//int main()
//{
//	int a{ 10 };
//	int b{ 23 };
//
//	int* pa{ &a };
//	int* pb{ &b };
//
//	auto ab{ pa - pb };
//
//	std::cout << "pa: " << pa << std::endl;
//	std::cout << "pb: " << pb << std::endl;
//	std::cout << "ab: " << ab << std::endl;
//
//	int c = *pa + 20;
//	std::cout << "c: " << &c << std::endl;
//
//}


//int main()
//{
//	const int a{ 10 };
//	const int* pa{ &a };
//	cout << "address = = " << pa << "\t value = " << *pa << endl;
//	*pa = 20; // !Ошибка - нельзя изменить значение по адресу, на который указывает константный указатель
//	cout << "address = = " << pa << "\t value = " << *pa << endl;
//}


//int main()
//{
//	int a{ 10 };
//	const int* pa{ &a };
//	cout << "address = " << pa << "\t value = " << *pa << endl;
//	a = 22;
//	cout << "address = " << pa << "\t value = " << *pa << endl;
//	//*pa = 22 так нельзя
//}


//int main()
//{
//	const int a{ 10 };
//	const int* pa{ &a };
//	const int b{ 46 };
//	pa = &b; // можно изменить адрес, на который указывает константный указатель
//	cout << "address = " << pa << "\t value = " << *pa << endl;
//	cout << "address = " << &a << "\t value = " << a << endl;
//}

//
//int main()
//{
//	int a{ 10 };
//    int *const pa {&a};
//	cout << "value = " << *pa << endl;
//	*pa = 22;
//	cout << "value = " << *pa << endl;
//
//	int b{ 45 };
////	pa = &b; // !Ошибка - нельзя изменить адрес, на который указывает константный указатель
//}


//int main()
//{
//	int a{ 10 };
//	const int *const pa{ &a };
//	//*pa = 22; // !Ошибка - нельзя изменить значение по адресу, на который указывает константный указатель
//	int b{ 45 };
//	//pa = b; // !Ошибка - нельзя изменить адрес, на который указывает константный указатель
//}


//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	cout << "nums[0] address : " << nums << endl;
//	cout << "nums[0] value : " << *nums << endl;
//	cout << "nums objects :  " << sizeof(nums) / sizeof(nums[0]) << endl;
//	int nums2 = *(nums + 1);
//	int nums3 = *(nums + 2);
//	cout << "nums2 = " << nums2 << endl;
//	cout << "nums3 = " << nums3 << endl;
//}


//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	for (unsigned i{}; i < size(nums); i++)
//	{
//		cout << "nums[" << i << "] : address = " << nums + i << "\t value = " << *(nums + i) << endl;
//	}
//
//	//nums++; // !Ошибка - нельзя изменить адрес массива	
//	int b{ 8 };
//	//nums = &b; // !Ошибка - нельзя изменить адрес массива
//}


//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	int* ptr{ nums };
//	int num3 = *(ptr+2);
//	cout << "num3 = " << num3 << std::endl;
//
//	ptr = &(nums[2]);
//	std::cout << "ptr = " << *ptr << std::endl;
//}

//int main()
//{
//	const int n = 5;
//	int nums[n]{ 1, 2, 3, 4, 5 };
//
//	for (int* ptr{ nums }; ptr <= &nums[n - 1]; ptr++)
//	{
//		std::cout << "address = " << ptr << std::endl;
//	}
//
//}


//int main()
//{
//	int nums[3][4]{
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9, 10, 11, 12}
//	};
//	unsigned int n{ sizeof(nums) / sizeof(nums[0])};
//	unsigned int m{ sizeof(nums[0]) / sizeof(nums[0][0])};
//
//	int* end{ nums[0] + n * m - 1 };
//	int* ptr{ nums[0] };
//	for (unsigned i{ 1 }; ptr <= end; ptr++, i++)
//	{
//		cout << ptr << "\t";
//		if (i % m == 0)
//		{
//			cout << endl;
//		}
//	}
//}


//int main()
//{
//	const unsigned n{ 3 };
//	const unsigned m{ 4 };
//	int nums[n][m]{
//	{1, 2, 3, 4},
//	{5, 6, 7, 8},
//	{9, 10, 11, 12}
//	};
//	const unsigned count{ n * m };
//
//	int* ptr{ nums[0] };
//	for (unsigned i{ 1 }; i <= count; ptr++, i++)
//
//	{
//		cout << *ptr << "\t";
//		if (i % m == 0)
//		{
//			cout << endl;
//		}
//	}
//}


//int main()
//{
//	char hello[]{ "hello" };
//	char* phello{ hello };
//	cout << *phello << endl;
//	cout << (void*)phello << endl; //выводит адресс
//}


//int main()
//{
//	const char* phello{ "hello" };
//	cout << phello << endl;
//}

//
//int main()
//{
//	//char langs[][20]{ "C++", "Python", "JavaScript" 
//	//cout << langs[0] << ": " << size(langs[0]) << " bytes" << endl;
//	const char* langs[]{ "C++", "Python", "JavaScript" };
//	for (unsigned i{}; i < size(langs); i++)
//	{
//		cout << langs[i] << endl;
//	}
//}


//void hello()
//{
//	cout << "hello" << endl;
//}
//
//
//int main()
//{
//	hello();
//	hello();
//}

//
//void hello();
//
//int main()
//{
//	hello();
//	hello();
//}
//
//void hello()
//{
//	std::cout << "hello" << std::endl;
//}


//int n{ 5 };
//
//void print()
//{
//	n++;
//	cout << "n = " << n << endl;
//}
//
//int main()
//{
//	cout << "n = " << n << endl;
//	print();
//	cout << "n = " << n << endl;
//	n++;
//	cout << "n = " << n << endl;
//
//}


//void print()
//{
//	int n{ 5 };  // локальная переменная, которая существует только в функции print
//	std::cout << "n=" << n << std::endl;
//	//так сделать нельзя, так как m определена в функции main
//	// std::cout << "m=" << m << std::endl;
//}
//int main()
//{
//	int m{ 2 };  // локальная переменная, которая существует только в функции main 
//	std::cout << "m=" << m << std::endl;
//	//так сделать нельзя, так как n определена в функции print
//	// std::cout << "n=" << n << std::endl;
//}


//int main()
//{
//	int n1{ 2 };  // область видимости - вся функция main 
//
//	{
//		int n2{ 5 };     // область видимости - блок кода
//		std::cout << "n2=" << n2 << std::endl;
//		n1++;   // переменная n1 доступна, т.к. определена во внешнем контексте - функции
//	}   // конец блока функции - конец времени жизни переменной n2
//
//	// так нельзя - переменная n2 из блока функции уже не существует
//	// std::cout << "n2=" << n2 << std::endl;
//	// переменная n1 доступна до конца функции
//	std::cout << "n1=" << n1 << std::endl;
//}   // конец блока функции - конец времени жизни переменной n1


//
//int n = 5;
//
//int main()
//{
//	int n{ 10 };
//	cout << "n = " << n << endl;
//
//	{
//		int n{ 20 };
//		cout << "n = " << n << endl;
//	}
//
//}


//int n = 5;
//
//int main()
//{
//	int n{ 10 };
//	cout << "n = " << ::n << endl;  //обращения именно к глобальной переменной
//
//	{
//		int n{ 20 };
//		cout << "n = " << ::n << endl; //обращения именно к глобальной переменной
//	}
//
//}


//void print()
//{
//	int n{ 1 };
//	cout << "n = " << n << endl;
//	n++;
//}
//
//int main()
//{
//	print();
//	print();
//	print();
//}


//void print()
//{
//	static int n{ 1 };
//	cout << "n = " << n << endl;
//	n++;
//}
//
//int main()
//{
//	print();
//	print();
//	print();
//}


//void print(string name, unsigned age)
//{
//	cout << "Name: " << name << "\t Age: " << age << endl;
//}
//
//int main()
//{
//	string name;
//	unsigned age;
//	//print("Tom", 38);
//	cout <<si "Enter Name: " << endl;
//	cin >> name;
//	cout << "Enter Age: " << endl;
//	cin >> age;
//	print(name, age);
//}


//void print(string name, unsigned age)
//{
//	cout << "Name: " << name << "\t Age: " << age << endl;
//}
//
//
//int main()
//{
//	const string name{ "Bob" };
//	unsigned userAge{ 25 };
//	print(name, userAge);
//}

//void print(string, unsigned);
//
//int main()
//{
//	print("Sam", 22);
//}
//
//void print(string name, unsigned age)
//{
//	cout << "Name: " << name << "\t Age: " << age << endl;
//}


//void print(string name, unsigned age = 18)
//{
//	cout << "Name: " << name << "\t Age: " << age << endl;
//}
//
//int main()
//{
//	print("Sam", 22);
//	print("Sam");
//}


//void print(string, unsigned = 18);
//
//int main()
//{
//	print("Sam", 22);
//	print("Sam");
//}
//
//void print(string name, unsigned age)
//{
//	cout << "Name: " << name << "\t Age: " << age << endl;
//}


//void print(string = "Undefined", unsigned = 18);
//
//int main()
//{
//	print();
//	print("Sam", 22);
//	print("Sam");
//}
//
//void print(string name, unsigned age)
//{
//	cout << "Name: " << name << "\t Age: " << age << endl;
//}


//void sum(auto, auto);
//
//int main()
//{
//	const int n1{ 4 };
//	const int n2{ 5 };
//	sum(n1, n2);
//
//	const double d1{ 3.5 };
//	const double d2{ 4.1 };
//	sum(d1, d2);
//}
//
//void sum(auto a, auto b)
//{
//	auto result = a + b;
//	cout << a << " + " << b << " = " << result << endl;
//}	



//void square(int);
//
//int main()
//{
//	int n{ 4 };
//	cout << "Before square: n = " << n << endl;
//	square(n);
//	cout << "After square: n = " << n << endl;
//}
//
//void square(int m)
//{
//	m = m * m;
//	cout << "In square: m = " << m << std::endl;
//}


//void square(int&);
//
//int main()
//{
//	int n{ 4 };
//	cout << "Before square: n = " << n << endl;
//	square(n);
//	cout << "After square: n = " << n << endl;
//}
//
//void square(int& m)
//{
//	m = m * m;
//	cout << "In square: m = " << m << std::endl;
//}


//void square(int);
//
//int main()
//{
//	int n{ 4 };
//	int& nRef{ n };
//	cout << "Before square: n = " << n << endl;
//	square(nRef);
//	cout << "After square: n = " << n << endl;
//}
//
//void square(int m)
//{
//	m = m * m;
//	cout << "In square: m = " << m << std::endl;
//}


//void printVal(int n);
//void printRef(int& n);
//
//int main()
//{
//	double value{ 3.14159 };
//	printVal(value);
//	//printRef(value); //яЁюуЁрььр эх ёъюьяшышЁєхЄё , Єръ ъръ printRef юцшфрхЄ ёё√ыъє эр int, р ь√ яхЁхфрхь double
//}
//
//void printVal(int n)
//{
//	cout << n << endl;
//}
//
//void printRef(int& n)
//{
//	cout << n << endl;
//}

//void square(int);
//
//int main()
//{
//	int number{ 4 };
//	square(number);
//}
//
//void square(const int n)
//{
//	//n = n * n //Єръющ ъюф эх ёъюьяшышЁєхЄё , Єръ ъръ n юс· тыхэр ъръ ъюэёЄрэЄэр  яхЁхьхээр , ш хх чэрўхэшх эхы№ч  шчьхэшЄ№
//	cout << "In square: n = " << n * n << endl;
//}


//void square(int, int);
//
//int main()
//{
//	const int n = 4;
//	const int m = 5;
//	square(n, m);
//}
//
//void square(int a, int b)
//{
//	a = a * a;
//	b = b * b;
//	cout << "In square a * b = " << a * b << endl;
//}

//void square(const int&);
//
//int main()
//{
//	int number = 5;
//	square(number);
//}
//
//void square(const int& n)
//{
//	//n = n * n; //Єръющ ъюф эх ёъюьяшышЁєхЄё , Єръ ъръ n юс· тыхэр ъръ ъюэёЄрэЄэр  ёё√ыър, ш хх чэрўхэшх эхы№ч  шчьхэшЄ№
//	cout << "In square: n * n = " << n * n << endl;
//}

//void square(const int&);
//
//int main()
//{
//	const int n = 6;
//	square(n);
//}
//
//void square(const int& n)
//{
//	//n = n * n; //Єръющ ъюф эх ёъюьяшышЁєхЄё , Єръ ъръ n юс· тыхэр ъръ ъюэёЄрэЄэр  ёё√ыър, ш хх чэрўхэшх эхы№ч  шчьхэшЄ№
//	cout << "n * n = " << n * n << endl;
//}

//int sum(int, int);
//
//int main()
//{
//	int result = sum(3, 6);
//	cout << result << endl;
//	cout << sum(10, 20) << endl;
//	cout << sum(6, 13) << endl;
//}
//
//int sum(int n, int m)
//{
//	int result = n + m;
//	return result;
//}


//int calculate(int, int, char);
//
//int main()
//{
//	cout << calculate(10, 5, '+') << endl;
//	cout << calculate(10, 5, '-') << endl;
//	cout << calculate(10, 5, '*') << endl;
//	cout << calculate(10, 5, '/') << endl;
//}
//
//int calculate(int a, int  b, char op)
//{
//	switch (op)
//	{
//		case '+':
//			return a + b;
//		case '-':
//			return a - b;
//		case '*':
//			return a * b;
//		default:
//			return 0;
//	}
//}



//void print(string, unsigned);
//
//int main()
//{
//	print("Sam", 21);
//	print("Bob", 19);
//}
//
//void print(string name, unsigned age)
//{
//	if (age > 120)
//	{
//		cout << "Incorect Age" << endl;
//		return;
//	}
//	cout << "Name: " << name << "\t Age: " << age << endl;
//}


//void increment(int);
//
//int main()
//{
//	int n{ 10 };
//	increment(n);
//	cout << "main function: " << n << endl;
//}
//
//void increment(int x)
//{
//	x++;
//	cout << "Increment function: " << x << endl;
//}


//void increment(int*);
//
//int main()
//{
//	int n{ 10 };
//	increment(&n);
//	cout << "main function: " << n << endl;
//}
//
//void increment(int *x)
//{
//	(*x)++;
//	cout << "Increment function: " << *x << endl;
//}


//void increment(int*);
//
//int main()
//{
//	int n{ 10 };
//	int* ptr{ &n };
//	increment(ptr);
//	cout << "main function: " << *ptr << endl;
//}
//
//void increment(int* x)
//{
//	int z{ 6 };
//	x = &z;
//	cout << "Increment function: " << *x << endl;
//}


//void print(const int*);
//
//int main()
//{
//	int n{ 10 };
//	print(&n);
//
//}
//
//void print(const int* x)
//{
//	//(*x)++; //Єръющ ъюф эх ёъюьяшышЁєхЄё , Єръ ъръ x - єърчрЄхы№ эр ъюэёЄрэЄэ√щ int, ш ь√ эх ьюцхь шчьхэшЄ№ чэрўхэшх, эр ъюЄюЁюх юэ єърч√трхЄ
//	//cout << "Value: " << *x << endl;
//	int z{ 2 };
//	//x = &z;
//	cout << z << std::endl;   // 2
//	cout << *x << std::endl;   // 2
//}


//void print(int[]);
//
//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	print(nums);
//}
//
//void print(int arr[])
//{
//	cout << "First element: " << arr[0] << endl;
//}

//void print(int*);
//
//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	print(nums);
//}
//
//void print(int *arr)
//{
//	cout << "First element: " << *arr << endl;
//}


//void print(int[]);
//
//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	print(nums);
//}
//
//void print(int arr[])
//{
//	//int size = sizeof(arr) / sizeof(arr[0]); //Єръющ ъюф эх сєфхЄ ЁрсюЄрЄ№, Єръ ъръ arr - ¤Єю єърчрЄхы№ эр int, р эх ьрёёшт, ш sizeof(arr) тхЁэхЄ ЁрчьхЁ єърчрЄхы , р эх ЁрчьхЁ ьрёёштр);
//	//cout << size << endl;
//
//	//for (int n : arr) 
//	//{
//	//	cout << n << endl;
//	//}
//}


//void print(char[]);
//
//int main()
//{
//	char chars[]{ "Hello" };
//	print(chars);
//}
//
//void print(char chars[])
//{
//	for (unsigned i{}; chars[i] != '\0'; i++)
//	{
//		cout << chars[i] << endl;
//	}
//}


//void print(int[], size_t);
//
//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	size_t n{ size(nums) };
//	print(nums, n);
//}
//
//void print(int nums[], size_t n)
//{
//	for (size_t i{}; i < n; i++)
//	{
//		cout << nums[i] << endl;
//	}
//}

//void print(int*, int*);
//
//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	int *begin{ std::begin(nums) };
//	int *end{ std::end(nums) };
//
//
//	print(begin, end);
//}
//
//void print(int* begin, int* end)
//{
//	for (int* ptr = begin; ptr != end; ptr++)
//	{
//		cout << *ptr << endl;
//	}
//}


//void print(const int*, const size_t);
//void twice(int*, const size_t);
//
//int main()
//{
//	int numbers[]{ 1, 2, 3, 4, 5 };
//	size_t n = size(numbers);
//	print(numbers, n);
//	twice(numbers, n); //єтхышўштрхь ьрёёшт т 2 Ёрчр
//	print(numbers, n);
//}
//
//void print(const int numbers[], const size_t n)
//{
//	for (size_t i = 0; i < n; i++)
//	{
//		cout << numbers[i] << "\t";
//	}
//	cout << endl;
//}
//
//void twice(int* numbers, const size_t n)
//{
//	for (size_t i = 0; i < n; i++)
//	{
//		numbers[i] *= 2;
//	}
//}


//void print(int(&)[], size_t);
//
//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	size_t count = size(nums);
//	print(nums, count);
//}
//
//void print(int (&nums)[], size_t n)
//{
//	for (size_t i{}; i < n; i++)
//	{
//		cout << nums[i] << "\t";
//	}
//	cout << endl;
//}


//void print(const int(&)[5]);
//
//int main()
//{
//	int nums[]{ 1, 2, 3, 4, 5 };
//	print(nums);
//}
//
//void print(const int(&nums)[5])
//{
//	for (unsigned i{}; i < 5; i++)
//	{
//		cout << nums[i] << "\t";
//	}
//	cout << endl;
//}


//void print(const int(*)[3], const size_t);
//
//int main()
//{
//	int table[][3]{
//		{1, 2, 3},
//		{4, 5, 6},
//		{7, 8, 9}
//	};
//
//	size_t rowsCount = size(table);
//	print(table, rowsCount);
//}
//
//void print(const int (*rows)[3], const size_t rowsCount)
//{
//	size_t columnsCount = size(*rows);
//	for (size_t i = 0; i < rowsCount; i++)
//	{
//		for (size_t j = 0; j < columnsCount; j++)
//		{
//			cout << rows[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}



//void print(const int(*)[3], const size_t);
//
//int main()
//{
//	int table[][3]{
//		{1, 2, 3},
//		{4, 5, 6},
//		{7, 8, 9}
//	};
//
//	size_t rowsCount = size(table);
//	print(table, rowsCount);
//}
//
//void print(const int (*rows)[3], const size_t rowsCount)
//{
//	size_t columnsCount = size(rows[0]);
//	for (size_t i = 0; i < rowsCount; i++)
//	{
//		for (size_t j = 0; j < columnsCount; j++)
//		{
//			cout << rows[i][j] << "\t";
//		}
//		cout << endl;
//	}
//}

//int main(int argc, char* argv[])
//{
//	for (int i = 0; i < argc; i++)
//	{
//		cout << argv[i] << endl;
//	}
//}


//int* max(int*, int*);
//
//int main()
//{
//	int n = 5;
//	int m = 4;
//	//int* ptr = max(&n, &m);
//	//cout << "max = " << *ptr << endl;
//	cout << "max = " << *max(&n, &m) << endl;
//
//}
//
//int *max(int* a, int* b)
//{
//	if (*a > *b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}


//int& max(int&, int&);
//
//int main()
//{
//	int n = 5;
//	int m = 4;
//	//int* ptr = max(&n, &m);
//	//cout << "max = " << *ptr << endl;
//	int result = max(n, m);
//	cout << "max = " << result << endl;
//
//}
//
//int& max(int& a, int& b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}


//const int& max(const int&, const int&);
//
//int main()
//{
//	int n = 5;
//	int m = 4;
//	//int* ptr = max(&n, &m);
//	//cout << "max = " << *ptr << endl;
//	int result = max(n, m);
//	cout << "max = " << result << endl;
//
//}
//
//const int& max(const int& a, const int& b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}

//int sum(int, int);
//double sum(double, double);
//
//int main()
//{
//	int result1 = sum(3, 6);
//	cout << result1 << endl;
//
//	double result2 = sum(3.5, 4.1);	
//	cout << result2 << endl;
//}
//
//int sum(int a, int b)
//{
//	return a + b;
//}
//
//double sum(double a, double b)
//{
//	return a + b;
//}


//int sum(int, int);
//double sum(int, int, int);
//
//int main()
//{
//	int result1 = sum(3, 6);
//	cout << result1 << endl;
//
//	int result2 = sum(3, 5, 11);
//	cout << result2 << endl;
//}
//
//int sum(int a, int b)
//{
//	return a + b;
//}
//
//double sum(int a, int b, int c)
//{
//	return a + b + c;
//}


//int square(const int*);
//int square(int*);
//
//int main()
//{
//	const int n1{ 2 };
//	int n2{ 3 };
//
//	int square_n1{ square(&n1) };
//	int square_n2{ square(&n2) };
//
//	cout << "Square of n1: " << square_n1 << endl;
//	cout << "Square of n2: " << square_n2 << endl;
//
//}
//
//int square(const int* n)
//{
//	return *n * *n;
//}
//
//int square(int* n)
//{
//	*n = *n * *n;
//	return *n;
//}

//unsigned long long factorial(unsigned n);
//
//int main()
//{
//	unsigned n{ 5 };
//	auto result{ factorial(n) };
//	cout << result << endl;
//}
//
//unsigned long long factorial(unsigned n)
//{
//	if (n > 1)
//	{
//		return n * factorial(n - 1);
//	}
//	return 1;
//}


//unsigned long long fib(unsigned);
//
//int main()
//{
//	for (unsigned i = 0; i < 10; i++)
//	{
//		auto n = fib(i);
//		cout << n << "\t";
//	}
//	cout << endl;
//}
//
//unsigned long long fib(unsigned n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}


//unsigned long long factorial(unsigned);
//
//int main()
//{
//	unsigned n = 6;
//	cout << "Factorial of " << n << " is " << factorial(n) << endl;
//}
//
//unsigned long long factorial(unsigned n)
//{
//	unsigned long long result = 1;
//	for (unsigned i = 1; i <= n; i++)
//	{
//		result *= i;
//	}
//	return result;
//}


//void sort(int[], size_t, size_t);
//void swap(int[], size_t, size_t);
//
//int main()
//{
//	int nums[]{ 3, 0, 6, -2, 11, 3 };
//	sort(nums, 0, size(nums) - 1);
//	for (auto num : nums)
//	{
//		cout << num << "\t";
//	}
//	cout << endl;
//}
//
//
//void sort(int numbers[], size_t start, size_t end)
//{
//	if (start >= end)
//		return;
//	size_t current = start;
//	for (size_t i = start + 1; i <= end; i++)
//	{
//		if (numbers[i] < numbers[start])
//			swap(numbers, ++current, i++);
//	}
//
//	swap(numbers, start, current);
//	if (current > start)
//	{
//		sort(numbers, start, current - 1);
//	}
//	if (end > current + 1)
//	{
//		sort(numbers, current + 1, end);
//	}
//}
//
//void swap(int numbers[], size_t first, size_t second)
//{
//	auto temp{ numbers[first] };
//	numbers[first] = numbers[second];
//	numbers[second] = temp;
//}


//void hello();
//void goodbye();
//
//int main()
//{
//	void (*message)();
//	message = hello;
//	message();
//	message = goodbye;
//	message();
//}
//
//
//void hello()
//{
//	cout << "Hello!" << endl;
//}
//
//void goodbye()
//{
//	cout << "Goodbye!" << endl;
//}



//void hello();
//void goodbye();
//
//int main()
//{
//	void (*message)() = nullptr;
//	//auto message = hello;
//	//auto (*message)() = goodbye;
//	//auto message{ &hello };
//	message = hello;
//	message();
//	message = goodbye;
//	message();
//}
//
//
//void hello()
//{
//	cout << "Hello!" << endl;
//}
//
//void goodbye()
//{
//	cout << "Goodbye!" << endl;
//}


//int sum(int, int);
//int substract(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	int (*operation)(int, int) = sum;
//	int result = operation(a, b);
//	cout << "result = " << result << endl;
//
//
//	operation = substract;
//	result = operation(a, b);
//	cout << "result = " << result << endl;
//}
//
//
//int sum(int x, int y)
//{
//	return x + y;
//}
//
//int substract(int x, int y)
//{
//	return x - y;
//}


//void add(int, int);
//void subtract(int, int);
//void multiply(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 5;
//	void (*operations[3])(int, int) = { add, subtract, multiply };
//
//	unsigned lenght = size(operations);
//
//	for (unsigned i = 0; i < lenght; i++)
//	{
//		operations[i](a, b);
//	}
//}
//
//
//void add(int x, int y)
//{
//	std::cout << "x + y = " << x + y << std::endl;
//}
//void subtract(int x, int y)
//{
//	std::cout << "x - y = " << x - y << std::endl;
//}
//void multiply(int x, int y)
//{
//	std::cout << "x * y = " << x * y << std::endl;
//}


//int add(int, int);
//int subtract(int, int);
//int operation(int(*)(int, int), int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 6;
//	int result = operation(add, a, b);
//	cout << "result = " << result << endl;
//
//	result = operation(subtract, a, b);
//	cout << "result = " << result << endl;
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int subtract(int x, int y)
//{
//	return x - y;
//}
//
//int operation(int(*op)(int, int), int a, int b)
//{
//	return op(a, b);
//}


//bool isEven(int);
//bool isPositive(int);
//
//void action(bool(*)(int), int[], unsigned);
//
//
//int main()
//{
//	int numbers[]{ -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5 };
//	const unsigned n = size(numbers);
//
//	cout << "Even numbers: " << endl;
//	action(isEven, numbers, n);
//
//	cout << "Positive numbers: " << endl;
//	action(isPositive, numbers, n);
//}
//
//bool isEven(int x)
//{
//	return x % 2 == 0;
//}
//
//bool isPositive(int x)
//{
//	return x > 0;
//}
//
//void action(bool(*condition)(int), int numbers[], unsigned n)
//{
//	for (unsigned i = 0; i < n; i++)
//	{
//		if (condition(numbers[i]))
//		{
//			cout << numbers[i] << "\t";
//		}
//	}
//	cout << endl;
//}



//int sum(int, int);
//
//int main()
//{
//	int (*operation)(int, int) { sum };
//	cout << operation(3, 5) << endl;
//}
//
//int sum(int x, int y) { return x + y; }


//using BinaryOp = int(*)(int, int);
//
//int sum(int, int);
//int subtract(int, int);
//
//int main()
//{
//	BinaryOp operation = sum;
//	cout << operation(8, 5) << endl;
//	operation = subtract;
//	cout << operation(8, 5) << endl;
//}
//int sum(int x, int y) { return x + y; }
//int subtract(int x, int y) { return x - y; }



//using BinaryOp = int(*)(int, int);
//int sum(int, int);
//int subtract(int, int);
//void do_operation(int, int, BinaryOp);
//
//
//int main()
//{
//	do_operation(10, 5, sum);
//	do_operation(10, 5, subtract);
//}
//
//void do_operation(int a, int b, BinaryOp op)
//{
//	double result = op(a, b);
//	cout << result << endl;
//}
//
//int sum(int x, int y) { return x + y; }
//int subtract(int x, int y) { return x - y; }


//void goodmorning();
//void goodevening();
//void(*message(unsigned))();
//
//int main()
//{
//	void (*action)() { message(10) };
//	action();
//	action = message(16);
//	action();
//}
//
//void (*message(unsigned hour))()
//{
//	if (hour > 15)
//	{
//		return goodevening;
//	}
//	else return goodmorning;
//}
//
//void goodmorning()
//{
//	std::cout << "Good Morning!" << std::endl;
//}
//void goodevening()
//{
//	std::cout << "Good Evening!" << std::endl;
//}


//int add(int, int);
//int subtract(int, int);
//int multiply(int, int);
//int(*select(int))(int, int);
//
//int main()
//{
//	int (*action)(int, int) { select(1) };
//	cout << action(8, 5) << endl;
//
//	action = select(2);
//	cout << action(8, 5) << endl;
//
//	action = select(3);
//	cout << action(8, 5) << endl;
//
//}
//
//int (*select(int choice))(int, int)
//{
//	switch (choice)
//	{
//		case 2:
//			return subtract;
//		case 3:
//			return multiply;
//		default:
//			return add;
//	}
//}
//
//int add(int x, int y) { return x + y; }
//int subtract(int x, int y) { return x - y; }
//int multiply(int x, int y) { return x * y; }


//int add(int, int);
//int subtract(int, int);
//int multiply(int, int);
//int(*select(int))(int, int);
//
//int main()
//{
//	int (*action)(int, int) { select(2) };
//	if (action)
//	{
//		cout << action(8, 5) << endl;
//	}
//	else
//	{
//		cout << "Undefined" << endl;
//	}
//
//}
//
//int (*select(int choice))(int, int)
//{
//	int (*actions[])(int x, int y) = { add, subtract, multiply };
//
//	if (choice > 0 && choice <= size(actions))
//	{
//		return actions[choice - 1];
//	}
//	else return nullptr;
//}
//
//
//int add(int x, int y) { return x + y; }
//int subtract(int x, int y) { return x - y; }
//int multiply(int x, int y) { return x * y; }	


//#include "sum.h"
//int main()
//{
//	int result{ sum(5, 4) };
//	std::cout << "result = " << result << std::endl; 
//}


//extern const string message;
//extern unsigned times;
//
//int main()
//{
//	for (unsigned i = 0; i < times; i++)
//	{
//		cout << message << endl;
//	}
//}


//#include "objects.h"
//
//int main()
//{
//	for (unsigned i = 0; i < times; i++)
//	{
//		cout << message << endl;
//	}
//}