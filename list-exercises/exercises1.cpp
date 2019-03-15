#include <iostream>
using namespace std;

// Function declarations
int first(int list[]);
int first1(int list[]);
int third(int list[]);
int nth(int list[], int n);
int last(int *list, int len);
int right(int *list, int el, int len);
int **split(int *list, int len);
bool is_sublist(int *xs, int len_xs, int *ys, int len_ys);
bool remainder(int *xs, int len_xs, int *ys, int len_ys);

// TODO: Make sure to free memory allocated with news!


// main function
int main()
{
	// test functions
	int test_list[] = {2, 3, 1, 4};
	int len = 4;

	cout << first(test_list) << endl;			// first
	cout << first1(test_list) << endl;			// alternate version
	cout << third(test_list) << endl;			// third
	cout << last(test_list, len) << endl;		// last
	cout << right(test_list, 3, len) << endl; 	// right

	int **split_list = split(test_list, 4);		// split
	cout << *split_list[0] << endl;
	for (int i = 0; i < len-1; i++)
	{
		cout << *(split_list[1]+i) << " "; 
	}
	cout << endl;

	// Test list
	int ys[] = {4, 5, 3, 1, 2, 3, 7};
	// Test sublist
	int xs[] = {1, 2, 3};

	cout << is_sublist(xs, 3, ys,  7) << endl; 	// is_sublist


	return 0;
}

// (* Construct a function first which returns the first element in a list of integers *)
int first(int list[])
{
	if (list) 
	{
		return list[0];
	}
   	else 
	{
		return -1;
	}
}

int first1(int *list)
{
	if (list) 
	{
		return list[0];
	} 
	else 
	{
		return -1;
	}
}

// (* Construct a function third which returns the third element in a list of integers*)

int third(int list[])
{
	return nth(list, 2);
}

// nth: auxiliary function that returns the nth element in the array.
int nth(int list[], int n)
{
	if (list)
	{
		if (n == 0)
		{
			return list[0];
		}
		else
		{
			return nth(list+1, n-1);
		}
	}
	else
	{
		return -1;
	}
}

// (* Construct a function last which returns the last element in a list of integers *)

int last(int *list, int len)
{
	if (list)
	{
		if (len == 1)
		{
			return list[0];
		}
		else
		{
			return last(list+1, len-1);
		}
	}
	else
	{
		return -1;
	}
}

// (* Construct a function nth which returns the n-th element in a list of integers *)

// see above

// (* construct a function right which returns the element which is to the right of element el *)

int right(int *list, int el, int len)
{
	if (list && len >= 2 && list[0] == el)
	{
		return list[1];
	}
	else if (list && len >= 3)
	{
		return right(list+1, el, len-1);
	}
	else
	{
		return -1;
	}
}


// (* Construct a function split which splits a list of integers into a list containing the head and the tail as separate lists *)

int **split(int *list, int len)
{
	if (list && len >= 2)
	{
		// Allocate array of pointers of length 2 to int* of lengths 1 and len-1.
		int **result = new int*[2];
		int *hd = new int[1];
		result[0] = &list[0];
		result[1] = list+1;
		return result;
	}
}


// (** Construct a function is_sublist which checks if xs is a sublist of ys *)

bool is_sublist(int *xs, int len_xs, int *ys, int len_ys)
{
	if (len_xs == 0)
	{
		return true;
	}
	else if (xs[0] == ys[0]) 
	{
		return remainder(xs+1, len_xs-1, ys+1, len_ys-1); 
	}
	else if (len_ys > 1)
	{
		return is_sublist(xs, len_xs, ys+1, len_ys-1);
	}
	else
	{
		return false;
	}
}

// remainder: auxiliary function that checks if remainder of sublist candidate xs
// lies sequentially in the list ys.
bool remainder(int *xs, int len_xs, int *ys, int len_ys)
{
	if (len_xs == 0)
	{
		return true;
	}
	else if (xs[0] == ys[0] && len_ys > 1)
	{
		return remainder(xs+1, len_xs-1,  ys+1, len_ys-1);
	}
	else
	{
		return false;
	}
}


// (* Construct a function add_start which adds integer el to the beginning of a list of integers l *)

// (* Construct a function add_end which adds integer el to the end of the list of integers xs *)

// (* Construct a function delete_one which deletes first instance of integer el from the list of integers xs *)

// (* Construct a function delete_all which deletes all instances of integer el from the list of integers xs *)


// (* Construct a function all_equal which returns true if all integers in the list of integers xs are equal and false otherwise *)

// (* Construct a function is_longer that checks if list of integers xs is longer than list of integers ys *)


// (* Construct a function list_length which returns the length of the list of integers xs *)
// (* Construct a function expand which returns a list of n integers el *)
// (* Construct a function sum_list which returns the sum of all the integers in the list xs *)

// (* Construct a function reverse_list which reverses the list of integers l*)

// (* Construct a function equal which returns true if the lists of integers l1 and l2 are equal *)



// (* Construct a function is_palindrome which returns true if the list of integers l is a palindrome *)


// (* Construct a function combine_integers which takes a list of integers and combines the digits into a single integer *)


// (* Construct a function is_sorted_asc which returns true if the list of integers xs is sorted in ascending order *)

// (* Construct a function is_sorted_desc which returns true if the list of integers xs is sorted in ascending order *)

// (* Construct a function all_primes which returns true if all elements of the list of integers l are prime numbers *)


// (* Construct a function every_second that returns every second element in the list of integers l *)

// (* Construct a function every_nth that returns every nth element in the list of integers xs *)

// (* Construct a function intersection which returns a list of elements that are both in list of integers l1 and list of integers l2 *)


// (* Construct a funtion difference which returns a list of integers that are in l1 but not also in l2 *)


// ** (* Construct a function swap that swaps elements at indices i and j in the list of integers xs *)


// (* Construct a function index which returns the index of element el in list *)

// ** (* Construct a function max which finds the maximum element in an int list *)


// (* Connstruct a function min which finds the minimum element in an int list *)


// ** (* Construct a function index_max which returns the index of the largest element in the list of integers xs *)

// (* Construct a function index_min which returns the index of the smallest element in the list of integers xs *)


// Construct a function rle which encodes a list of characters using the run-length encoding algorithm.*)

// Construct a function mat_multiply which takes two matrices represented as lists of lists and returns their matrix product.*)
