#include <iostream> // #include tells the preprocessor to make everything from the header available here.
int main()
{
	std:count << "Hello world!" << std::endl;
	return 0;  // Return status.
}

// The <iostream> header declares the input and output mechanisms provided by C++.
// if the program did not include it, it would be unable to perform its only task
// of outputting text.

/* Some of the most common preprocessor directives:
 *
 * #include [file]
 *
 * -------------------------------------------
 * The specified file is inserted into the code at the location of the
 * directive. Almost always used to include header files so that code can make use of 
 * functionality defined elsewhere.
 * -------------------------------------------
 *
 * #define [key] [value]
 *
 * -------------------------------------------
 * Every occurrence of the specified key is replaced with the specified value.
 * -------------------------------------------
 *
 * #ifdef [key]
 *
 * # endif
 *
 * # ifndef [key]
 * # endif
 *
 * -------------------------------------------
 * Code within the ifdef or ifndef blocks are conditionally included
 * or omitted based on whether the specified key as been defined with #define.
 * -------------------------------------------
 *
 * #pragma [xyz]
 *
 * -------------------------------------------
 * xyz varies from compiler to compiler. Often allows the programmer to display a warning or
 * error if the directive is reached during preprocessing.
 * -------------------------------------------
 *
 *
 * One example of using preprocessor directives is to avoid multiple includes.
 *
 * #ifndef MYHEADER_H
 * #define MYHEADER_H
 * // ... the contents of this header file
 * #endif
 *
 *
 * If your compiler supports the #pragma once directive, this can be rewritten as follows:
 *
 * #pragma once
 * // ... the contents of this header file
 *
 */


/*
 * The main() function either takes no parameters, or takes two parameters as follows:
 *
 * int main(int argc, char* argv[])
 *
 * argc gives the number of arguments passed to the program, and argv contains those
 * arguments. Note that argv[0] might be the program name, but you should not rely on it
 * and you should never use it. */

/* While printf() can still be used in C++, it's recommended to use
 * the streams library.
 */


/*
