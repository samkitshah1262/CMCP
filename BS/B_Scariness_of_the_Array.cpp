#include<bits/stdc++.h>
using namespace std;
using ll=long long;

float nthRoot(float A, ll N)
{
    float xPre = rand() % 10;
    float eps = 1e-9;
    float delX = INT_MAX;
    float xK;
    while (delX > eps)
    {
        xK = ((N - 1.0) * xPre +
              (float)A/pow(xPre, N-1)) / (float)N;
        delX = abs(xK - xPre);
        xPre = xK;
    }
 
    return xK;
}

float power(float x, int N)
{
    float res=1;
    while(N)
    {
        if(N%2)
        {
            res*=x;
            N--;
        }
        else
        {
            x*=x;
            N/=2;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T=0;
    cin>>T;
    while(T--)
    {
        ll N=0;
        cin>>N;
        ll A[N]={0},i=0,temp=N,j=0,maximumm=INT_MIN;
        float poww=1,sum=0,ans=0,y=0,x=0;
        for(i=0;i<N;i++)
            cin>>A[i];    
        maximumm=*max_element(A,A+N);    

        if(maximumm==0)
            cout<<0<<"\n";
        else
        {
            for(i=0;i<N;i++)  
            {
                x=A[i];
                x/=maximumm;
                sum+=power(x,N);
            }  
           // cout<<maximumm*nthRoot(sum,N)<<"\n";
            ans=sum;
            x=1.0/N;
            y=ans;
            ans=pow(y,x);
            ans*=maximumm;

            //cout<<fixed<<maximumm*nthRoot(sum,N)<<setprecision(5)<<"\n";
            cout<<fixed<<ans<<setprecision(5)<<"\n";
        }    
    }
    return 0;
}


