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
		void region_set(int i)
		{
			region = i;
		}
		void del()
		{
			delete this;
		}

		void print()
		{
			if (value == NULL)
			{
				cout << "Error! h not can value null" << endl;
			}
			else if (value == region)
			{
				cout << value << endl;
			}
			else if (value != region)
			{
				cout << "Error region!" << endl;
			}

		}

	private:
		int value;
		int region;

};

int main()
{
	h a = 0;

	return 0;
}