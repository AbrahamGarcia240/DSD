#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	cout<<"Please select the operation to make:\n"<<"1.-integer / integer \n2.- integer / float\n";
	int selection;
	cin>>selection;

	switch(selection){
		case 1:
			cout<<"Please type the values of the 2 integers: ";
			int num1,num2;
			cin>> num1 >> num2;

			cout<<"\nThe result is:"<<num1/num2<<"\n";

			break;
		default:
			cout<<"Please type the values of one integer and one float: ";
			int numa;
			float numb;
			cin>> numa >> numb;

			cout<<"\nThe result is:"<<numa/numb<<"\n";
			break;
	}

	cout<<"Each time you divide 2 integers, the result will be stored as an integer, therefore some information could get lost\n";
	return 0;
}