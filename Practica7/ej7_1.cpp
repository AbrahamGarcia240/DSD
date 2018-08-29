#include<iostream>
#include<string>
using namespace std;

int main(){

int n;
cin >> n;

string line ("");
getline(cin.ignore(INT_MAX), line);

cout<<n<<" "<<line<<endl;
return 0;
}