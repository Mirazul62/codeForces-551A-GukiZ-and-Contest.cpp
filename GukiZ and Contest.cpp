#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[2000],b[2000],i,j,c[2000],k=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n,greater<int>());
    for(i=0; i<n; i++)
    {
        k=1;
        for(j=0; j<n; j++)
        {
            if(a[i]<b[j])
            {
                k++;
            }
        }
        cout<<k<<" ";
    }

}
