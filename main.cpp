#include <iostream>

void f()
{
	std::cout << "feature 1 finished" << std::endl;
}

int main()
{
	std::cout << "master updated" << std::endl;
	std::cout << "feature 1 updated on github" << std::endl;
	return 0;
}
