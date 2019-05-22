#include <iostream>

int main() {
	int num, temp, count = 0;

	std::cout << "Enter the number: ";
	std::cin >> num;
	temp = num;
	while (temp != 0) {
		if (temp % 10 == 1)
			count++;
		temp = temp / 10;
	}
	std::cin.get(); 
	std::cout << "The number of once in: " << num << " is " << count << std::endl;

	std::cin.get();
	return 0;

}