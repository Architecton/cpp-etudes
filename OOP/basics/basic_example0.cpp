#include <iostream>
using namespace std;

// Define a class
class Test
{
	// Private members
	private:
		int data1;
		double data2;
	// Public members
	public:

		// Constructor
		Test(int data1, double data2)
		{
			this->data1 = data1;
			this->data2 = data2;
		}

		// Getters and setters
		void setInteger(int val)
		{
			this->data1 = val;
		}
		void setDouble(double val)
		{
			this->data2 = val;
		}
		int getInteger()
		{
			return this->data1;
		}
		double getDouble()
		{
			return this->data2;
		}
};

int main()
{
	// Initialize two instances of the Test class.
	Test o1(0, 0.0), o2(0, 1.3);
	o1.setInteger(1);
	o1.setDouble(0.2);
	o2.setInteger(3);

	// Test gettes and setters.
	cout << o1.getInteger() << endl;
	cout << o1.getDouble() << endl;
	cout << o2.getInteger() << endl;
	cout << o2.getDouble() << endl;

	return 0;
}
