#include <iostream>

using namespace std;
int main ()
{
	float balance, bill, gallon;
	
	cout << "Unpaid balance";
	cin >> balance;
	cout << "Gallons consumed";
	cin >> gallon;
	
	bill = (35+(1.10*gallon));
	
	if (balance > 0)
	cout << "Your water bill is: P"<< bill + balance +20;
	else 
	cout << "Your water bill is: P"<< bill;
	
return 0;
}
