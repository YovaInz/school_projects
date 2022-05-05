#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string c_j;
    string c_1;
    string c_2;
    stringstream comando;
    char select;

    cout << "Desea ingresar las coordenadas por separado (S) o juntas (J): ";

    cin >> select;
    if(toupper(select) == 83){
        system("cls");
        cout << "Ingrese la coordenada X: ";
        cin >> c_1;
        cout << endl <<"Ingrese la coordenada Y: ";
        cin >> c_2;

        comando << "start https://www.google.com.mx/maps/place/" << c_1 <<","<<c_2;

    }else if(toupper(select) == 74){
        system("cls");
        cout << "Ingrese las coordenadas deseadas JUNTAS: ";
        cin >> c_j;
        comando << "start https://www.google.com.mx/maps/place/" << c_j;
    }
    system(comando.str().c_str());
    system("exit");
    return 0;
}
