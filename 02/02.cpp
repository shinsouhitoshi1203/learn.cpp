#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,s,i,c;
    cin>>n>>s;
    i = n;
    c = 0;
    while(s>0) {
        if (s - i < 0) {
            i--;
        } else {
            c++; s-=i;
        } 
    }
    cout << c; 
    return 0;
}