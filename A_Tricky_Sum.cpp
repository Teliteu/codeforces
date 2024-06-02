#include <iostream>
#include <math.h>
using namespace std;

int main() {
  long long int uau=0;
  cin>>uau;
  for (long long int k=0;k<uau;k++){
    long long int z=0;
    long long int somatoria=0;
    long long int b=0;
    cin>>z;
    b=((z*(z+1))/2);
    for(long long int a=0; a<z; a++){
      if (somatoria<z){
        somatoria=somatoria+(pow(2,a));
      }
      else{
        break;
      }
    }
    long long int resul=b-somatoria*2;
    cout<<fixed<<resul<<"\n";
  }
}