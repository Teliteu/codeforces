#include <bits/stdc++.h>
using namespace std;


int main(){
  int vezes=0;
  cin>>vezes;
  int contador=0;
  string str;
  for (long long i=0;i<vezes;i++){
    cin>>str;
    if (str=="++X" || str=="X++"){
      contador=contador+1;
    }
    else{
      contador=contador-1;
    }
  }
  cout<<contador;
  
}