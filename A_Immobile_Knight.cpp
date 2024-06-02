#include <bits/stdc++.h>
using namespace std;

void resolu() {
  long long n,m;
  cin>>n>>m;
  long long x = 0;
  if (n+m<=4 || n+m>6){
    cout<<"1 1"<<endl;
  }
  if (n+m==5 ){
    if(n==2 && m==3){
      cout<<"1 2"<<endl;
    }
    if(n==3 && m==2){
      cout<<"2 1"<<endl;
    }
    if(n!=3 && m!=2 && n!=2 && m!=3){
      cout<< "1 1"<<endl;
    }
    
  }
  if (n+m==6 ){
    if (n==3 && m==3){
      cout<< "2 2"<<endl;
    }
    else{
      cout<< "1 1"<<endl;
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