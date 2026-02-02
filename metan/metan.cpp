#include <iostream>

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