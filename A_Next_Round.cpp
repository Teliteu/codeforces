#include <bits/stdc++.h>
using namespace std;


int main(){
  vector <int> a(2);
  int contador=0;
  for (int i=0;i<2;i++){
    cin>>a[i];
  }
  vector <int> b(a[0]);
  for (int i=0;i<a[0];i++){
    cin>>b[i];
  }
  for (int i=0;i<a[0];i++){
    if (b[i]>=b[a[1]-1] && b[i]!=0){
      contador=contador+1;
    }
  }
  cout<<contador;
}