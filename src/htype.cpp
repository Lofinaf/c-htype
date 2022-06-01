#include <string>
#include <iostream>


using namespace std;

class h
{

	public:
		let(int i)
		{
			value = i;
		}
		void print()
		{
			if (value == NULL)
			{
				cout << "Error! Error code 01" << endl;
			}
			else
			{
				cout << value << endl;
			}
			
		}
		void del()
		{
			delete this;
		}
	private:
		int value;

};

int main()
{
	h a = 0;

	return 0;
}