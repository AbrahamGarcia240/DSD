#include <iostream>
using namespace std;

const double PI=3.1415926;
int main(int argc, char const *argv[])
{
	cout<<"Please type the value of the radius:\n";
	float radius;
	cin>>radius;

	cout<<"The value of the area will be:"<<PI*radius*radius<<"\n";
	return 0;
}