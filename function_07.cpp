#include <iostream>
#include <cmath>
using namespace std;

float plus_ab(float a, float b) {
	return a + b;
}

float multi(float a, float b) {
	return a * b;
}

float power_ab(float a, float b) {
	return pow(a, b);
}

int main() {

	float a, b;

	cout << "Enter First Number..." << endl << endl;
	cin >> a;
	cout << "^ Is the Number you have entered" << endl << endl;
	cout << "Now, enter the Second Number..." << endl << endl;
	cin >> b;
	cout << "^ Is the Number you have entered" << endl << endl;

	cout << "N1 + N2 will be " << plus_ab(a, b) << endl;
	cout << "N1 Muliplied by N2 will be " << multi(a, b) << endl;
	cout << "N1 in power of N2 will be " << power_ab(a, b) << endl;

	cout << "N1 + N2 X N2 will be " << plus_ab(a, multi(b, b)) << endl;
	cout << "N2 + N2 + N2 will be " << plus_ab(b, plus_ab(b, b)) << endl;
	cout << "( ( ( N2 in power of N1 ) in Power of N2 ) in power of N1 ) will be "
	<< power_ab(a, power_ab(b, power_ab(b, a))) << endl;

	return 0;
}
