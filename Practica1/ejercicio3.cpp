
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	double c =20;
    double f;
    f =((float)9/(float)5) * c + 32.0;
    static_cast<double>(f);
   	cout<<f<<endl;
    return 0;
}
