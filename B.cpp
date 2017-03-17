#include <iostream>
using namespace std;

int main() {
    float a;
    cin >> a;
    if(0 <= a && a < 50){cout << "Nao Satisfaz" << endl;
  } 
    if(50 <= a && a < 75){cout << "Satisfaz" << endl;
  } 
    if(75 <= a && a < 90){cout << "Satisfaz Bastante" << endl;
  } 
    if(90 <= a && a <= 100 ){cout << "Excelente" << endl;
  } 
    if(0 > a || a > 100){cout << "Nota Invalida" << endl;
  } 
}
