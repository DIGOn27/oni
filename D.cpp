#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int d=0;
    for(int i = 2 ; a > i ; i++){
    if(a%i ==0 ){ d = d+1;
    }
  }
  if(d == 0){cout << a << " e primo" << endl;
  }  
    if(d !=0 ){cout << a << " nao e primo" << endl;
    }
}
