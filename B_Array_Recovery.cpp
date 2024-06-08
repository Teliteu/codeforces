#include <bits/stdc++.h>
using namespace std;

void resolu() {
  int n;
  cin>>n;
  vector <int> lista2(n);
  vector <int> lista1(n);
  for (int i=0;i<n;i++){
    cin>>lista2[i];
  }
  lista1[0]=lista2[0];
  string a = to_string(lista1[0]);
  string x=a + " ";
  for (int i=1;i<n;i++){
    lista1[i]=lista2[i]+lista1[i-1];
    string str = to_string(lista1[i]); 
    x=x+str + " ";
    if (lista1[i-1]+lista2[i]>=0 && lista1[i-1]-lista2[i]>=0 && lista1[i-1]+lista2[i] != lista1[i-1]-lista2[i]){
      x="-1";
      break;
    }
  }
  cout<<x<<endl;
  
}
int main(){
  int t;
  cin >> t;
  while (t--){
    resolu();
  }
}