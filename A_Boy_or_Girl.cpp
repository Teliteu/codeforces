#include <bits/stdc++.h>
using namespace std;

int main() {
  string strr;
  cin>>strr;
  vector <char> str(strr.begin(),strr.end());
  int tamanho;
  tamanho=str.size();
  sort(str.begin(), str.end());
  for (int i=1; i<str.size(); i++){
    if(str[i-1]==str[i]){
      tamanho=tamanho-1;
    }
  }
  if(tamanho%2==0){
    cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!";
  }
}	