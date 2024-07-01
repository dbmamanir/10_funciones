#include <iostream>
#include <cmath>

using namespace std;
double areacirculo();

int main (){
	double a = areacirculo();
	cout << "El area del circulo es: " <<a<< endl;
	return 0;
}

double areacirculo(){
	double ra, area;
	cout<<"Ingrese el radio:"<<endl;
	cin>>ra;
	
	area = M_PI * pow(ra,2);
	return area;
}
