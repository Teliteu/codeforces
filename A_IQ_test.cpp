#include <bits/stdc++.h>
using namespace std;


int main(){
  int vezes=0;
  cin>>vezes;
  int contadorp=0;
  int contadori=0;
  int np=0;
  int ni=0;
  vector <int> a(vezes);
  for (long long i=0;i<vezes;i++){
    cin>>a[i];
    if (a[i]%2==0){
      contadorp=contadorp+1;
      np=i;
    }
    else{
      contadori=contadori+1;
      ni=i;
    }
  }
  if (contadori>contadorp){
    cout<<np+1;
  }    
  else{
    cout<<ni+1;
  }
}