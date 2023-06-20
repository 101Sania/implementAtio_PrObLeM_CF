#include <bits/stdc++.h>
#define en "\n"
using namespace std;
int main() {
 ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,k,l,c,d,p,nl,np,x,y,z,r;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  x = k * l / nl;
  y = c * d;
  z = p / np;
  int M = 0;
    if(x<y && x<z){
        M = x;
    }
    else if(y<x && y<z){
       M = y;
    }
    else M = z;
  r = M /n;
    cout<<r<<en;
}
