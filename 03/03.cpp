#include <bits/stdc++.h>
using namespace std;

main() {
    int s1,s2,s3;
    float a,b,c;
    cin >> s1 >> s2 >> s3;
    float ar = (float)s1/s2;
    c = sqrt((float)s3/ar);
    b = (float)c*ar; a = (float)s1/b;
    cout << a << " " << b << " " << c;
}