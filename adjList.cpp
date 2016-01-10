#include<bits/stdc++.h>
using namespace std;
#define max 100000
vector <int> edges[max];
vector <int> cost[max];
int main()
{
    int node,edge;
    scanf("%d%d",&node,&edge);
    for(int i=1;i<=edge;i++)
    {
	    int x,y;
	    scanf("%d%d",&x,&y);
	    edges[x].push_back(y);
    
    }
    for(int j=1;j<=node;j++)
    {
	   int size = edges[j].size();
	   printf("edge:  %d   size:  %d\n",j,size);
	   for(int k=0;k<size;k++)
	   {
		   printf("%d ",edges[j][k]);
	   }
	   printf("\n\n");
    }
}
