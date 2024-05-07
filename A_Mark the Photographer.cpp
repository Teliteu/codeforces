#include <bits/stdc++.h>
using namespace std;

void resolu(){
  int x,y;
  cin>>x>>y;
  int tamanho=x*2;
  vector <int> povo(tamanho);
  for (int i=0; i<tamanho; i++){
    cin>>povo[i];
  }
  sort(povo.begin(), povo.end());
  for (int i=0; i<x;i++){
    if (povo[x+i]-povo[i]<y){
      cout<<"NO"<<endl;
      return;
    }
  }
  cout<<"YES"<<endl;
}

int main(){
  int a;
  cin>>a;
  while (a--){
    resolu();
  }
}