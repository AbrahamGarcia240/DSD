#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double precio=78.7;
	cout<<"The first impression is: "<<precio<<endl;
    cout<<"The second impression is: ";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<precio<<endl;
	return 0;
}