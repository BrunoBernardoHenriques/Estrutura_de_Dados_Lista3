
#include <iostream>
using namespace std;

int soma(float a, float b){
        
    int r;
    r=a+b;
    return r;
}
int sub(float a, float b){
        
    int r;
    r=a-b;
    return r;
}
int mult(float a, float b){
        
    int r;
    r=a*b;
    return r;
}
float divi(float a, float b){
    int r;
    r=a/b;
    return r;
}


int main()
{
    float n1, n2;
    int op;
    cout<<"Digite o primeiro numero\n";
    cin>>n1;
        cout<<"Digite o segundo numero\n";
        cin>>n2;
      cout<<"Digite a operação desejada \n 1: Multiplicação \n 2: Adição \n 3: Divisão \n 4: Subtração \n 5: Fechar\n";
     cin>>op;

  switch(op){
          case 1: 
         cout<<mult(n1,n2); 
          break;
          case 2: 
         cout<<soma(n1,n2); 
          break;
          case 3: 
         cout<<divi(n1,n2); 
          break;
          case 4: 
         cout<<sub(n1,n2); 
          break;
          default:
          cout<<"Encerrando";
      }
       

    return 0;
}
