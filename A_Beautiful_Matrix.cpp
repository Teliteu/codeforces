#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int>a(25);
  int um=0;
  int uau=0;
  int uauu=0;
  for(int i=0;i<25;i++){
    cin>>a[i];
    if (a[i]==1){
      um=a[i];
      uauu=i;
    }
  }
  vector<int>b(5);
  b[0]=2;
  b[1]=7;
  b[2]=12;
  b[3]=17;
  b[4]=22;
  for(int i=0;i<5;i++){
    b[i]=abs(b[i]-uauu);
  }
  int min=0;
  min=*min_element(b.begin(),b.end());
  for(int i=0;i<5;i++){
    uau=uau+1;
    if(min==b[i]){
      break;
    }
  }
  uau=uau-1;
  if(uau-1==2){
    cout<<min+abs(uau-2);
  }
  else{
    cout<<abs(uau-2)+min;
  }
}