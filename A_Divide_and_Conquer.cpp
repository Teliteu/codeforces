#include <bits/stdc++.h>
using namespace std;

void resolu() {
  int n=0;
  cin>>n;
  int sum=0;
  int cont=0;
  vector <long long> a(n);
  for (int i=0;i<n;i++){
    cin>>a[i];
    sum=sum+a[i];
  }
  if (sum%2==0){
    cout<<0<<endl;
  }
  else{
    for (int i=0;i<n;i++){
      if (a[i]%2==0){
        cont=0;
        while (a[i]%2!=1){
          a[i]=a[i]/2;
          cont=cont+1;
        }
        a[i]=cont;
      }
      else{
        cont=0;
        while(a[i]%2!=0){
          a[i]=a[i]/2;
          cont=cont+1;
        }
        a[i]=cont;
      }
    }
    sort(a.begin(), a.end());
    cout<<a[0]<<endl;
  }
}

int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}