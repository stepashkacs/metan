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