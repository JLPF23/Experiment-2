#include <iostream>


using namespace std;

int main()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;


    cout << "Fibonacci numbers: " << endl;
	cout << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        nextTerm = t2 + nextTerm;
        
    }
    return 0;
}


