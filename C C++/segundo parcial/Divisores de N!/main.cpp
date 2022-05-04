#include <iostream>
#include <windows.h>

using namespace std;


int main() {
  int N=0, O=0, Factorial=0, r=0, a=1;
  cin >> N;
  O = N;
  Factorial = N;
  //Factorial
  for(int i = 0; i <= N; i++){
    O = O-1;
    if(O > 1){
        Factorial = Factorial*O;
    }
  }
  //Divisores
  for (int j = 1; j < Factorial; j++){
    r=Factorial%j;
    if (r == 0){
      a++;
    }
  }
  cout << a;
  system("pause");
  return 0;
}