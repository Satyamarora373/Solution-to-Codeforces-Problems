#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long double n,m,a;
    cout.precision(22);
    cin>>n>>m>>a;
    cout<<(ceil((n/a))*ceil(m/a));
}
