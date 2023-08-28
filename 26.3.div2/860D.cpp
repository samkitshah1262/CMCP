#include<iostream> 
#include<algorithm>
using namespace std;
long long x,y,a[5000005],n,t,sum,b[5000005],manx;
void sovel()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	manx=a[n]-a[1];
	if(manx==0)
	{
		cout<<"No"<<endl;
		return;
	}
	cout<<"Yes"<<endl;
	int l=1,r=n;
	while(l<=r)
	{
		if(sum<=0)
		{
			cout<<a[r]<<" ";
			sum+=a[r--];
		}
		else
		{
			cout<<a[l]<<" ";
			sum+=a[l++];
		}
	}
	cout<<endl;
}
int main()
{
	cin>>t;
	while(t--)
	{
		sovel();
	 } 
	return 0;
}
