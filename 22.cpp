//pattern printing

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}