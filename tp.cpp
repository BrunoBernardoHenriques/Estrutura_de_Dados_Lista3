#include <bits/stdc++.h>
using namespace std;

void orderna (int vet[], int n){
       for(int i=0; i<n; i++) {
   
        for(int j=i+1; j<n; j++) { 
                  if (vet[i] > vet[j]) {
                int temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
       }
              }

int busca (int vet[], int b){
    int ini=0, 
    fim=b-1, meio; 
	
	while(ini<=fim){
		
		meio=(ini+fim)/2;
		
		if(vet[meio]==b) return meio; 
		if(vet[meio]<b) ini=meio+1; 
		if(vet[meio]>b) fim=meio-1; 
	}
	
	return -1; 
}
   
int main(){
    int n;
    int b;
    cout<<"Tamanho do array"; 
    cin>>n;
    int vet[n];
    cout<<"\nDigite os número ";
    for(int i=0; i<n; i++){ 
        cin>>vet[i];
    }
    orderna (vet, n);
 
          cout<<"Digite um número para encontrar";
           cin>>b;
           
           
      cout<<"Posição de "<<b<<" é "<<busca(vet, b)<< " \n"; 
           
           for(int i=0; i<n; i++){
               cout<<vet[i]<<" ";
           }
    return 0;
}
