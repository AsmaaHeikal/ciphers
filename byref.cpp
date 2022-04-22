#include<bits/stdc++.h>
using namespace std;
int& byref(int& k)
{
    k+=1;
    return k;
}
int main()
{
    int x=0;
    x=byref(x);
    //byref(byref(x));
    cout << x;
}
