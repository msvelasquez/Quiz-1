#include <iostream>

using namespace std;

int enesimoPrimo(unsigned int a);
int cantColatz(int a);
bool esPrimo(unsigned int a);
void printColatz(int a);

int main()
{
    unsigned int positionPrimo = 6; //Variable de la posicion del numero primo


    //Salidas
    cout << "El numero primo en la posicion " << positionPrimo << " es: " << enesimoPrimo(positionPrimo) << ", y su serie colatz tiene: " << cantColatz(enesimoPrimo(positionPrimo)) << " terminos." << endl;
    cout << "Su serie es: ";
    printColatz(enesimoPrimo(positionPrimo));

}


int enesimoPrimo(unsigned int n){ //Returna el numero primo en la posicion n

    unsigned int primo = 1; //Numero primo en la posicion n

    while(n > 0){
        primo++;
        if(esPrimo(primo)){
            n -= 1;
        }

    }

return primo;
 }

bool esPrimo(unsigned int a){ //Retorna verdadero si el numero es primo y falso si no lo es
    bool buleano = 1;
    for(unsigned int b = 2; b<= a/2; b++){
        if(a%b == 0){
            buleano = 0;
            break;
        }
    }

    return buleano;
}

int cantColatz(int a){
    int rep = 0;
    while(a != 1){
        if(a%2==0){
            a = a/2;
        }else{ a = (3*a)+1; }
        rep += 1;
    }
    return rep+1;
}

void printColatz(int a){
    cout << a;
    while(a != 1){
        cout << ",";
        if(a%2==0){
            a = a/2;
            cout << a;
        }else{
            a = (3*a)+1;
            cout << a;
        }
    }
    cout << "." << endl;
}
