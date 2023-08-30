

#include <iostream>

using namespace std;

float fahre_para_celso(float entrada){
    float celso;
     celso=(entrada-32)* 5/9;
     return celso;
}

float celso_para_fahre(float entrada2){
    float fahre;
     fahre=(entrada2 * 9/5) + 32;
     return fahre;
}


int main()
{
    cout<<"Digite uma temperatura em Fahrenheit";
    float n1;
     cin>>n1;
    cout<<n1<<"ºF são"<<fahre_para_celso(n1)<<" ºC \n";

    cout<<"Digite uma temperatura em Celsius";
    float n2;
     cin>>n2;
    cout<<n2<<"ºC são "<<celso_para_fahre(n2)<<" ºF";

    return 0;
}
