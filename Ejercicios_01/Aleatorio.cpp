#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){
    //inicializa el generador de numeros enteros
    srand(time(0));
    int numeroMagico = rand() % 100 +1;
    int intento;

    cout<<"Adivina en numero magico entre 1 y 100:";

    while (true){
        cin>>intento;
        if (intento > numeroMagico){
            cout<<"Muy alto. \nIntenta de nuevo.";
        } else if (intento < numeroMagico){
            cout<<"Muy bajo. \nIntenta de nuevo.";
        } else {
            cout<<"CORRECTO\nEl numero magico es:"<<numeroMagico<<endl;
            break;
        }
    }
    return 0;
}