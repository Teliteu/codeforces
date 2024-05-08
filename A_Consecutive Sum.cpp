#include <bits/stdc++.h>
using namespace std;

int resolu() {
  long long quantidade,vezes;
  long long para=0;
  cin>>quantidade>>vezes;
  vector <long long> lista(quantidade);
  for (int i=0;i<quantidade;i++){
    cin>>lista[i];
  }
  vector<vector<long long>> lista2(vezes);
  for(int i=0;i<quantidade;i++){
    lista2[i%vezes].push_back(lista[i]);
  }
  for(int i=0;i<lista2.size();i++){
    para += *max_element(lista2[i].begin(), lista2[i].end());
  }
  cout<<para<<endl;
}

int main(){
  long long a;
  cin >> a;
  while (a--){
    resolu();
  }
}