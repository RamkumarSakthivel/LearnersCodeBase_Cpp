#pragma once

/**
Header File that just declares all the function headers.

This is a special case of defining the functions in the header file itself.

Whenever using templates, the template functions / classes / etc. cannot be defined in a separate cpp file as the compiler wants to know the template
types while compiling and linking. So we get a linker error whenever templates are defined in separate cpp files. We can resolve this by either
defining the templates in the header file itself,or by just declaring all possible values that the template type can take in that separate cpp file.

Here since we cant declare all possible combination of variadic template types we are defining the functions in this header file itself.
*/



// Function Declarations

void variadic_templates_print();

template<typename T>
void variadic_templates_print(const T& t);

template<typename T, typename... Us>
void variadic_templates_print(const T& first, const Us&... rest);




// Function Definitions

void variadic_templates_print() {
	std::cout << std::endl;
}

template<typename T>
void variadic_templates_print(const T& t) {
	std::cout << t << std::endl;
}

template<typename T, typename... Us>
void variadic_templates_print(const T& first, const Us&... rest) {
	std::cout << first << ", ";
	variadic_templates_print(rest...); //recursive call using pack expansion syntax
}


