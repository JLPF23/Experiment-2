#include <iostream>
#include <string>

using namespace std;
int main()
{
	float price;
	float time;
	string package;
	
	cout << "Package :"<<endl;
	cin >> package;	
	
	if ((package == "A") || (package == "B") ||(package == "C"))
	cout << "Number of Hours:";
	cin >> time

	if (package == "A")
	{
		if (time > 10)
		{
			price = 995 + (time - 10)*20;
		}
		else 
		{
			price = 995;
		}
	}
	else if (package == "B")
	{
		if (time > 20)
		{
			price = 1495 + (time -20 )*10;
		}
		else 
		{
			price = 1495;
		}
	else
	{
		price = 1995;
	}
	else
	{
		cout << "Invalid Package";
	}
	cout << "Price:"<<price;
	}
	return 0;
	
}
