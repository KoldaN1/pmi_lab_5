#include <iostream>
#include <cmath>

int main() 
{		
	long double floatNumbers[] = {3.52, 63.2, 5.121, 565.34, 1.1, 3,2, 0.1543, 6546.2354, 23, 656.4, -34, -1.235, 65.3, -912.1233, -14, -21};
	int N = 234123775;

	int multiplication = 1;
	long double negativeSum = 0;
	long double maxNumber = -10000000;
	long double idNumber = -1;

	for (int i = 0; i < std::size(floatNumbers); i++ ) {
		long double arrElem = floatNumbers[i];
		if ((!(arrElem < 0)) || (fmod(arrElem, 7)) != 0.0) continue;
		negativeSum += arrElem;
		if (arrElem > maxNumber) {
			maxNumber = arrElem;
			idNumber = i;
		}
	}

	while (N > 1) {
		int digit = N % 10;
		multiplication *= digit;
		N /= 10;
	}

	// 1
	std::cout << "Sum: " << negativeSum << ", maxNumber: " << maxNumber << ", idNumber: " << idNumber << std::endl;

	//2
	std::cout << "Multiplication: " << multiplication << std::endl;

	return 0;
}