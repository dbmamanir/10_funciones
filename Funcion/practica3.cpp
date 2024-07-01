#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double ca1, ca2, h;
	cout<<"Ingrese los dos catetos:";
	cin>>ca1>>ca2;
	h = sqrt((pow(ca1,2))+(pow(ca2,2)));
	cout<<"La hipotenusa es:"<<h<<endl;
	return 0;
}

