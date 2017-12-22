#include <iostream>

using namespace std;

int main()
{
    int*q=new int[13];
    for(int i=1; i<14; i++){
        q[i]=i*i*i;
    }
    int n=1;
    int*a=new int[n];
    for(int i=0;i<n; i++){
        cin >> a[i];
        if (a[i]!=0) n++;
    }
    for(int i=0; i<n-1; i++){
        for (int j=1; j<n-1; j++){
                for(int w=0; w<13; w++){
            if (a[i]*a[j]==q[w]) cout << a[i] << " and " << a[j] << " made cube." << endl;
                }
        }
    }
    delete []a;
    delete []q;
    return 0;
}
