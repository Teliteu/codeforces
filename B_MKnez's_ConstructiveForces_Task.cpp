#include <bits/stdc++.h>
using namespace std;

void resolu() {
  int n;
  cin>>n;
  if(n==3){
    cout<<"NO"<<endl;
  }
  else if(n%2==0){
    cout<<"YES"<<endl;
    for(int i=0;i<n/2;i++){
      cout<<"1 -1 ";
    }
    cout<<endl;
  }
  else{
    cout<<"YES"<<endl;
    int x=n/2;
    for(int i=0;i<n/2;i++){
      cout<<1-x<<" "<<x<<" ";
    }
    cout<<1-x<<endl;
  }
}
int main(){
  long long t;
  cin >> t;
  while (t--){
    resolu();
  }
}