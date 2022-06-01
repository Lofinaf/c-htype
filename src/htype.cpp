#include <string>
#include <iostream>


using namespace std;

class h
{

	friend void hroots()
	{

	}

	public:
		h(int i)
		{

			value = i;
		}
		void del()
		{
			delete this;
		}
	private:
		int value;

		void print()
		{
			if (value == NULL)
			{
				cout << "Error! h not can value null" << endl;
			}
			else
			{
				cout << value << endl;
			}

		}

};

int main()
{
	h a = 0;

	return 0;
}