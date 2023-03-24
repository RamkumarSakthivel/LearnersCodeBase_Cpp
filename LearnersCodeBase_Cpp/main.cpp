#include<iostream>

#include "variadic_templates.h"


int main() {

	std::cout << "Hello Ram!" << std::endl;
	std::cout << "******************************************************************************************************************" << std::endl;

	// Testing Variadic Templates:
	std::cout << "Variadic Templates Tests:" << std::endl;
	variadic_templates_print(1, "Anything", 5*5, 7.525);
	std::cout << "******************************************************************************************************************" << std::endl;

}