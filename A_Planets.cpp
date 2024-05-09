#include <bits/stdc++.h>
using namespace std;

void resolu() {
  int quantidade,custo2;
  cin>>quantidade>>custo2;
  vector <int> orbitas(quantidade);
  map<int, int> mapa;
  int x = 0;
  for (int i=0;i<quantidade;i++){
    cin>>orbitas[i];
    mapa[orbitas[i]]++;
    if(mapa[orbitas[i]] <= custo2){
      x++;
    }
  }
  cout << x << endl;
}
int main(){
  long long a;
  cin >> a;
  while (a--){
    resolu();
  }
}