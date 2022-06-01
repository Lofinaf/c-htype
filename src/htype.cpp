#include <string>
#include <iostream>


using namespace std;

class h
{

	friend void hroots()
	{

	}

public:
	string comment;

	h(int i)
	{

		value = i;
	}
	void region_set(int i)
	{
		region = i;
	}
	void comment_set(string i)
	{
		comment = i;
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
	h a = 1;
	a.comment_set("this variable need to delete :)");
	a.region_set(1);
	cout << a.comment;

	return 0;
}