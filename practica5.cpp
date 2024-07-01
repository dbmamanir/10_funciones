#include <iostream>
#include <cmath>

using namespace std;

void calcularRaices(double a, double b, double c);

int main() {
    double a, b, c;
    cout << "Ingrese los tres coeficientes de la ecuacion:";
    cin>>a>>b>>c;

    calcularRaices(a, b, c);

    return 0;
}

void calcularRaices(double a, double b, double c) {
    double discriminante = pow (b,2)- 4 * a * c;

    if (discriminante > 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las raices son reales y diferentes:" << endl;
        cout << "Raiz 1 = " << raiz1 << endl;
        cout << "Raiz 2 = " << raiz2 << endl;
    } else {
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        cout << "Las raices son complejas:" << endl;
        cout << "Raiz 1 = " << parteReal << " + " << parteImaginaria << "i" << endl;
        cout << "Raiz 2 = " << parteReal << " - " << parteImaginaria << "i" << endl;
    }
}

