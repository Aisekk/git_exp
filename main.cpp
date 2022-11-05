#include <iostream>

void f()
{
	std::cout << "feature 1 finished" << std::endl;
}

int main()
{
	std::cout << "master updated" << std::endl;
	std::cout << "feature 1" << std::endl;
	return 0;
}