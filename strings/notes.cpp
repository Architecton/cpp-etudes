// C++ contains several functions from the C language that operate on strings. These functions are defined in the <cstring> header.
// These functions do not handle memory allocation.
//
// The following code attempts to build a wrapper around strcpy() that allocates the correct amount of memory
// and returns the result, instead of taking in an already allocated string.
//
// The caller is responsible for freeing the memory allocated by copyString().
char *copyString(const char *str)
{
	char* result = new char[strlen(str)+1];  // Remember to allocate a byte for the null terminator.
	strcpy(result, str);
	return result;
}

// The following code concatenates two strings.

char *appendStrings(const char *str1, const char *str2)
{
	char *result = new char[strlen(str1) + strlen(str2) + strlen(str3) + 1];
	strcpy(result, str1);
	strcat(result, str2);
	strcat(result, str3);
	return result;
}

// The sizeof() operator in C and C++ can be used to get the size of a certain data type of variable.
//
// For example, sizeof(char) returns 1 because a char has a size of 1 byte. However, in the context of C-style strings, sizeof() is not the same as strlen().
// you should never use sizeof() to try to get the size of a string. If the C-style string is stored as a char[], then sizeof() returns the actual
// memory used by the string, including the '\0' character. Howerer, if the C-style string is stored as a char*, then sizeof() returns the size of a pointer.
//
// In the preceding line, "hello" is a string literal because it is written as a value, not a variable. The
// actual memory associated with a string literal is in a read-only part of memory. This allows the
// compiler to optimize memory usage by reusing references to equivalent string literals. That is, even
// if your program uses the string literal "hello" 500 times, the compiler is allowed to create just one
// instance of hello in memory. This is called literal pooling.
//
// String literals can be assigned to variables, but because string literals are in a read-only part of memory and because of the
// possibility of literal pooling, assigning them to variables can be risky.
//
// Example of undefined behaviour:
//
/*
 * char *ptr = "hello";
 * ptr[1] = 'a';
 *
 */
 
 // A much safer way is to use a pointer to const characters when referring to string literals. The following
 // code contains the same bug but in this case, it will be caught by the compiler.
 
 /*
  *
  * const char* ptr = "hello";
  *  ptr[1] = 'a'
  */


 // You can also use a string literal as an initial value for a character array (char[]). In this case, the
 // compiler creates an array that is big enough to hold the string and copies the string to this array. So,
 // the compiler will not put the literal in read-only memory and will not do any literal pooling.

 char arr[] = "hello";
 arr[i] = 'a';


 // Continue on page 51.
