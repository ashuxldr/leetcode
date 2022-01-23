#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    long d = x;
     long r,s=0;
     while (d!=0){
        r = d%10;
        s = s*10+r;
        d = d/10;
     }   
     
     if (x==s && x>=0)
     cout<< true;
     else
     cout<< false;
    return 0;
}