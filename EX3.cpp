
#include <iostream>
using namespace std;

bool primo(int numero){
    int countador=0; 
    
 for (int i= 1; i<=numero; i++){
   
     if(numero%i == 0 ){
         countador ++;
     }
     
 }
    if (countador==2){
    return true;
  
    }else
    
    return false;
}

int main()
{
    
    for(int i=0; i<=97; i++){
          cout<<primo(i);
    }
    
    return 0;
}
