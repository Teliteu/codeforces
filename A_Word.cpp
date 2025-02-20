#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  cin>>str;
  string aa="";
  int contagemU=0;
  int contagemD=0;
  vector <char> string(str.begin(),str.end());
  for(int i=0; string.size()>i;i++){
    if(string[i]==toupper(string[i])){
      contagemU=contagemU+1;
    }
    else{
      contagemD=contagemD+1;
    }
  }
  if (contagemU>contagemD){
    for(int i=0; string.size()>i;i++){
      string[i]=toupper(string[i]);
    }
  }
  else{
    for(int i=0; string.size()>i;i++){
      string[i]=tolower(string[i]);
    }
  }
  for(int i=0; string.size()>i;i++){
    aa=aa+string[i];
  }
  cout<<aa;
}