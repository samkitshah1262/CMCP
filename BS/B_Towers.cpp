#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#define forl(i,n) for(int i=0;i<(int)n;i++)
#define pb(x) push_back(int x)
#define lld long long int
#define pii pair<int,int>
#define mem(x,y) memset(x,y,sizeof(x))

using namespace std;
int main()
{
    int t[110],f_a[1010],t_a[1010],mx=-1,mn1=101010,mn2=101010,ind1,ind2,dis,c=0,d,e;
    int n,k;
    cin>>n>>k;
    forl(i,n)
    {
        cin>>t[i];
    }
    forl(i,n)
    {

        if(t[i]>mx)
        {
            mx=t[i];
            ind1=i;
        }
        if(t[i]<mn1)
        {
            mn1=t[i];
            ind2=i;
        }

    }
    dis=mx-mn1;
    f_a[0]=ind1+1;
    t_a[0]=ind2+1;
    t[ind1]--;
    t[ind2]++;
    e=ind2;
    mx=-1;
    mn1=101010;
    forl(j,k)
    {
        forl(i,n)
        {

            if(t[i]>mx)
            {
                mx=t[i];
                ind1=i;
            }
            if(t[i]<mn1)
            {
                mn1=t[i];
                ind2=i;
            }

        }
        d=mx-mn1;
        if(d<dis||(d==dis&&t[ind1]!=t[e]))
        {
            f_a[j+1]=ind1+1;
            t_a[j+1]=ind2+1;
            t[ind1]--;
            t[ind2]++;
            c++;
            e=ind2;
            dis=d;
            mx=-1;
            mn1=101010;
        }
        else break;
    }
    cout<<d<<" "<<c<<endl;
    forl(i,c)
    {
        cout<<f_a[i]<<" "<<t_a[i]<<endl;
    }
    return 0;
}

