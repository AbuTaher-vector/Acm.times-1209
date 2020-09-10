#include<bits/stdc++.h>
using namespace std;

int main()
{
      long long t,k,n;
      cin>>n;
      while(n--)
      {
          cin>>k;
          long long t=(sqrt(1+8*k)-1)/2;
          if(k==1 || k-(t*(t+1))/2==1) cout<<"1 ";
          else cout<<"0 ";
      }
      cout<<endl;

}
