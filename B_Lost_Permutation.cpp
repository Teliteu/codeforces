#include <bits/stdc++.h>
using namespace std;
void resolu() {
  int m;
  int s;
  int soma=0;
  int somat=0;
  cin>>m>>s;
  vector <int> bi(m);
  for (int i=0;i<m;i++){
    cin>>bi[i];
    soma=soma+bi[i];
  }
  somat=soma+s;
  sort(bi.begin(), bi.end());
  for (int i=0;i<1000;i++){
    somat=somat-i;
    if (somat==0 && i>=bi.back()){
      cout<<"YES"<<endl;
      break;
    }
    if (somat<0){
      cout<<"NO"<<endl;
      break;
    }
  }
}
int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}