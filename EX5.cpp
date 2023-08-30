
#include <iostream>

using namespace std;
  
  int fator(int n1){
   int n, fatorial;
    fatorial = 1;
    
        for (int y = 1; y <= n1; y++) {
            fatorial *= y;
        }

return fatorial;
}

int main()
{
    cout<<"Digite um numero";
    int n;
    cin>>n;
    cout<<"Fatorial de "<<n<<"é :"<<fator(n);

    return 0;
}
