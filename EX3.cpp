
#include <iostream>

using namespace std;


 bool ano(int ano){

   if((ano %4==0 && ano %100!=0 ) || (ano %400==0 )){
       return true;
   }
   else{
          return false;
   }


}


int main()
{
    int n1;
    cin>>n1;
    cout<<ano(n1);

    return 0;
}
