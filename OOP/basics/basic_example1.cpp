#include <iostream>
#include <cstring>
using namespace std;

class Person
{
	private:
		char *name;
		char *surname;
		int age;
		char sex;
	public:
		Person(char *name, char *surname, int age, char sex)
		{
			this->name = name;
			this->surname =surname;
			this->age = age;
			this->sex = sex;
		}

		void increment_age()
		{
			this->age++;
		}

		char *to_string()
		{
			char *buff = new char[17 + strlen(this->name) + strlen(this->surname)];
			sprintf(buff, "name: %s, surname: %s", this->name, this->surname);
			return buff;
		}
};

int main()
{
	Person p1((char*)"Julia", (char*)"Smith", 25, 'f');
	cout << p1.to_string() << endl;
	return 0;
}

