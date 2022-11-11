#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int color[200000];
int n,m;
int main()
{
	cin>>n>>m;
	for (int i=1;i<=m;++i)
	{
		int x,y,z;
		scanf("%d%d%d",&x,&y,&z);
		if (color[x])
		{
			for (int i=1;i<=3;++i)
			{
				int flag=false;
				for (int j=i+1;j<=3;++j)
					if (i!=j&&i!=color[x]&&j!=color[x])
					{
						color[y]=i,color[z]=j;
						flag=true;
						break;
					}
				if (flag) break;
			}
		}
		else if (color[y])
		{
			for (int i=1;i<=3;++i)
			{
				int flag=false;
				for (int j=i+1;j<=3;++j)
					if (i!=j&&i!=color[y]&&j!=color[y])
					{
						color[x]=i,color[z]=j;
						flag=true;
						break;
					}
				if (flag) break;
			}
		}
		else if (color[z])
		{
			for (int i=1;i<=3;++i)
			{
				int flag=false;
				for (int j=i+1;j<=3;++j)
					if (i!=j&&i!=color[z]&&j!=color[z])
					{
						color[y]=i,color[x]=j;
						flag=true;
						break;
					}
				if (flag) break;
			}
		}
		else 
		{ color[x]=1,color[y]=2,color[z]=3;}
	}
	for (int i=1;i<=n;++i)
		printf("%d ",color[i]);
	cout<<endl;
	return 0;
}
