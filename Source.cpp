#include <iostream>
#include <string>

using namespace std;



int main()
{
	setlocale(LC_ALL, "ru");

	class Animals
	{
	private:

		int age;
		string name;


	public:

		void Print()
		{
			cout << "Name -" " " << name << "\nAge -" " " << age << endl;
		}

		void SetAge(int valueAge)
		{
			age = valueAge;
		}

		int GetAge()
		{
			return age;
		}
				
		string GetName()
		{
			return name;
		}

		void SetName(string valueName)
		{
			name = valueName;
		}

	};

	Animals One;

	One.SetAge(10);
	One.SetName("Bober");
	One.Print();
}