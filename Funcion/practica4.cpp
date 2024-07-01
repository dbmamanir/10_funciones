#include <iostream>
#include <cmath>

using namespace std;
int main (){
	double a,b,c;
	cout<<"Ingrese los 3 coeficientes:";
	cin>>a>>b>>c;
	
	double raiz1 = (-b + sqrt(pow (b,2)- 4 * a * c)) / (2 * a);
	double raiz2 = (-b - sqrt(pow (b,2)- 4 * a * c)) / (2 * a);
	
	cout<<"Las raices son:"<<raiz1<<" y "<<raiz2<<endl;
	return 0;
}
