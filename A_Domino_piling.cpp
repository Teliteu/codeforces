#include <bits/stdc++.h>
using namespace std;

int main(){
  int soma=0;
  vector <int> a(2);
  for (int i=0;i<2;i++){
    cin>>a[i];
  }
  soma=(a[0]*a[1])/2;
  cout<<soma;
}