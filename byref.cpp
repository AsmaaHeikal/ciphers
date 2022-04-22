#include<bits/stdc++.h>
using namespace std;
int& byref(int& k)
{
    k+=1;
    return k;
}
int main()
{
    int x=10;
    x=byref(x);
    cout << x;
}
