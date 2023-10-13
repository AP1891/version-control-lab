#include <iostream>

int main()
{
  int num1;
  int num2;
  std::cout << "Please enter the two numbers: ";
  std::cin >> num1 >> num2;
  int sum = num1 + num2;
  int difference = num1 - num2;
  int product = num1 * num2;
  int distance = abs(difference);
  int mean = sum / 2;
  std::cout << "The sum of " << num1 << " and " << num2
	    << " is: "<< sum
	    << "\n The difference between " << num1 << " and " << num2
	    << " is: " << difference << "\n The product of " << num1 << " and "
	    << num2 << " is: " << product
	    << "\n The distance between " << num1 << " and " << num2 << " is: " << distance
	    << "\n The mean average between " << num1 << " and " << num2 << " is: " << mean;
}
