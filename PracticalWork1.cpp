#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	
	// int
	cout << "\x1b[91mТип данных: int\x1b[0m (диапазон : от -2 147 483 648 до 2 147 483 647)\n\n";

	int intNumber1 = 10;
	cout << "\x1b[91mintNumber1\x1b[0m = " << intNumber1 << " | тип: \x1b[91mint\x1b[0m, размер: \x1b[91m4 байт\x1b[0m.\n";
	int intNumber2 = 24;
	cout << "\x1b[91mintNumber2\x1b[0m = " << intNumber2 << " | тип: \x1b[91mint\x1b[0m, размер: \x1b[91m4 байт\x1b[0m.\n";
	int intNumber3 = -57;
	cout << "\x1b[91mintNumber3\x1b[0m = " << intNumber3 << " | тип: \x1b[91mint\x1b[0m, размер: \x1b[91m4 байт\x1b[0m.\n";
	int intNumber4 = 160004;
	cout << "\x1b[91mintNumber4\x1b[0m = " << intNumber4 << " | тип: \x1b[91mint\x1b[0m, размер: \x1b[91m4 байт\x1b[0m.\n";
	int intNumber5 = -499999;
	cout << "\x1b[91mintNumber5\x1b[0m = " << intNumber5 << " | тип: \x1b[91mint\x1b[0m, размер: \x1b[91m4 байт\x1b[0m.\n\n\n";

	// short
	cout << "\x1b[93mТип данных: short\x1b[0m (диапазон: от -32768 до 32767)\n\n";

	short shortNumber1 = 15;
	cout << "\x1b[93mshortNumber1\x1b[0m = " << shortNumber1 << " | тип: \x1b[93mshort\x1b[0m, размер: \x1b[93m2 байт\x1b[0m.\n";
	short shortNumber2 = 88;
	cout << "\x1b[93mshortNumber2\x1b[0m = " << shortNumber2 << " | тип: \x1b[93mshort\x1b[0m, размер: \x1b[93m2 байт\x1b[0m.\n";
	short shortNumber3 = -590;
	cout << "\x1b[93mshortNumber3\x1b[0m = " << shortNumber3 << " | тип: \x1b[93mshort\x1b[0m, размер: \x1b[93m2 байт\x1b[0m.\n";
	short shortNumber4 = 32767;
	cout << "\x1b[93mshortNumber4\x1b[0m = " << shortNumber4 << " | тип: \x1b[93mshort\x1b[0m, размер: \x1b[93m2 байт\x1b[0m.\n";
	short shortNumber5 = -32768;
	cout << "\x1b[93mshortNumber5\x1b[0m = " << shortNumber5 << " | тип: \x1b[93mshort\x1b[0m, размер: \x1b[93m2 байт\x1b[0m.\n\n\n";

	// float
	cout << "\x1b[95mТип данных: float\x1b[0m (диапазон: 3.4E + / -38 (семь цифр))\n";

	float floatNumber1 = 15;
	cout << "\x1b[95mfloatNumber1\x1b[0m = " << floatNumber1 << " | тип: \x1b[95mfloat\x1b[0m, размер: \x1b[95m4 байт\x1b[0m.\n";
	float floatNumber2 = 88;
	cout << "\x1b[95mfloatNumber2\x1b[0m = " << floatNumber2 << " | тип: \x1b[95mfloat\x1b[0m, размер: \x1b[95m4 байт\x1b[0m.\n";
	float floatNumber3 = -590;
	cout << "\x1b[95mfloatNumber3\x1b[0m = " << floatNumber3 << " | тип: \x1b[95mfloat\x1b[0m, размер: \x1b[95m4 байт\x1b[0m.\n";
	float floatNumber4 = 32767;
	cout << "\x1b[95mfloatNumber4\x1b[0m = " << floatNumber4 << " | тип: \x1b[95mfloat\x1b[0m, размер: \x1b[95m4 байт\x1b[0m.\n";
	float floatNumber5 = -32768;
	cout << "\x1b[95mfloatNumber5\x1b[0m = " << floatNumber5 << " | тип: \x1b[95mfloat\x1b[0m, размер: \x1b[95m4 байт\x1b[0m.\n\n\n";

	// char
	cout << "\x1b[92mТип данных: char\x1b[0m (диапазон: От -128 до 127)\n";

	float charExample1 = '!';
	cout << "\x1b[92mcharExample1\x1b[0m = " << charExample1 << " | тип: \x1b[92mchar\x1b[0m, размер: \x1b[92m1 байт\x1b[0m.\n";
	float charExample2 = '8';
	cout << "\x1b[92mcharExample2\x1b[0m = " << charExample2 << " | тип: \x1b[92mchar\x1b[0m, размер: \x1b[92m1 байт\x1b[0m.\n";
	float charExample3 = '-';
	cout << "\x1b[92mcharExample3\x1b[0m = " << charExample3 << " | тип: \x1b[92mchar\x1b[0m, размер: \x1b[92m1 байт\x1b[0m.\n";
	float charExample4 = '@';
	cout << "\x1b[92mcharExample4\x1b[0m = " << charExample4 << " | тип: \x1b[92mchar\x1b[0m, размер: \x1b[92m1 байт\x1b[0m.\n";
	float charExample5 = 'j';
	cout << "\x1b[92mcharExample5\x1b[0m = " << charExample5 << " | тип: \x1b[92mchar\x1b[0m, размер: \x1b[92m1 байт\x1b[0m.\n\n";

	// string
	cout << "\x1b[96mТип данных: string\x1b[0m (диапазон: зависит от системы). Требует использования '\x1b[96musing namespace std;\x1b[0m'\n";

	string stringExample1 = "Привет!";
	cout << "\x1b[96mstringExample1\x1b[0m = " << stringExample1 << " | тип: \x1b[96mstring\x1b[0m, размер: \x1b[96mзависит от системы\x1b[0m.\n";
	string stringExample2 = "вставить текст";
	cout << "\x1b[96mstringExample2\x1b[0m = " << stringExample2 << " | тип: \x1b[96mstring\x1b[0m, размер: \x1b[96mзависит от системы\x1b[0m.\n";
	string stringExample3 = "Я Чмокси.";
	cout << "\x1b[96mstringExample3\x1b[0m = " << stringExample3 << " | тип: \x1b[96mstring\x1b[0m, размер: \x1b[96mзависит от системы\x1b[0m.\n";
	string stringExample4 = "Помогите.";
	cout << "\x1b[96mstringExample4\x1b[0m = " << stringExample4 << " | тип: \x1b[96mstring\x1b[0m, размер: \x1b[96mзависит от системы\x1b[0m.\n";
	string stringExample5 = "канцерт кишлака тутв??";
	cout << "\x1b[96mstringExample5\x1b[0m = " << stringExample5 << " | тип: \x1b[96mstring\x1b[0m, размер: \x1b[96mзависит от системы\x1b[0m.\n\n";

	cout << "\nВведите что-нибудь для \x1b[91mзавершения программы\x1b[0m.";
	int endProgram; cin >> endProgram;
	return 0;
}