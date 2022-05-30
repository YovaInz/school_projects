#include <iostream>
#include <windows.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

bool checkrep(int n, int num[])
{
    for(int i=0; i<53; i++)
        if(n == num[i])
            return true;
    return false;
}

int main()
{
    int k, t, seg, min;
    string baraja[] = { "1 - El gallo", 
                        "2 - El diablo", 
                        "3 - La dama", 
                        "4 - El catrin", 
                        "5 - El paraguas", 
                        "6 - La sirena", 
                        "7 - La escalera", 
                        "8 - La botella", 
                        "9 - El barril", 
                        "10 - El arbol", 
                        "11 - El melon", 
                        "12 -  El valiente", 
                        "13 - El gorrito", 
                        "14 - La muerte", 
                        "15 - La pera", 
                        "16 - La bandera", 
                        "17 - El bandolon", 
                        "18 - El violoncello", 
                        "19 - La garza", 
                        "20 - El pajaro", 
                        "21 - La mano", 
                        "22 - La bota",
                        "23 - La luna",
                        "24 - El cotorro",
                        "25 - El borracho",
                        "26 - El negrito",
                        "27 - El corazon",
                        "28 - La sandia",
                        "29 - El tambor",
                        "30 - El camaron",
                        "31 - Las jaras",
                        "32 - El musico",
                        "33 - La arana",
                        "34 - El soldado",
                        "35 - La estrella",
                        "36 - El cazo",
                        "37 - El mundo",
                        "38 - El apache",
                        "39 - El nopal",
                        "40 - El alacran",
                        "41 - La rosa",
                        "42 - La calavera",
                        "43 - La campana",
                        "44 - El cantarito",
                        "45 - El venado",
                        "46 - El sol",
                        "47 - La corona",
                        "48 - La chalupa",
                        "49 - El pino",
                        "50 - El pescado",
                        "51 - La palma",
                        "52 - La maceta",
                        "53 - El arpa",
                        "54 - La rana"
                    };

    srand(time(NULL));
    int n, num[53];

    for (int i = 0; i < 53; ++i){
        do{
            n = 0 + rand() % 53;
        }while(checkrep(n, num));
        num[i] = n;
    }
//--------------------------------------------------------------
    cout << "Bienvenido a la loteria mexicana :) "<<endl<< "Presione cualquier tecla para iniciar el juego:)" << endl;
    system("pause");
    system("cls");
    cout << "BIEN, COMENCEMOS EL JUEGO :)";
    Sleep(1000);
    system("cls");
    for (int j = 0; j < 53;){
        for (int seg = 0; seg <= 60; ++seg){
            if (seg%10 == 0){
                system("cls");
                k = num[j];
                cout << baraja[k] << endl;
                j++;
                if(seg == 60){
                    seg = 0;
                }
                Sleep(10000);
            }
        }
    }
    cout << "GAME OVER" << endl;
    
    
    system("pause");

    return 0;
}
