#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  int tamanho;
  cin>>str;
  string final;
  sort(str.begin(),str.end());
  vector <char> string(str.begin(),str.end());
  tamanho=str.size();
  for (long long i=0;i<tamanho;i++){
    if (int(string[i]-48)==1){
      final=final+"+"+"1";
    }
    if (int(string[i]-48)==2){
      final=final+"+"+"2";
    }
    if (int(string[i]-48)==3){
      final=final+"+"+"3";
    }
  }
  final.erase(final.begin());
  cout<<final;
}	