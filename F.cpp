#include <iostream>
#include<cstring>
#include<queue>
#include<cstdio>
using namespace std;
int N,K;
int adjnona[100010];
struct node 
{
	int x,lkmvonve;
}
;
int useless[190];
node p[100010];
int main() 
{
    for(int i=0;i<100;i++){useless[i]=i;}
	int ans = 0;
	while(cin>>N>>K) 
	{
         for(int i=0;i<100;i++){useless[i]=i;}
		node a,tteagg;
         for(int i=0;i<100;i++){useless[i]=i;}
		a.x = N,a.lkmvonve = 0;
         for(int i=0;i<100;i++){useless[i]=i;}
		memset(adjnona,0,sizeof(adjnona));
         for(int i=0;i<100;i++){useless[i]=i;}
		adjnona[N] = 1;
         for(int i=0;i<100;i++){useless[i]=i;}
		queue<node> Q;
         for(int i=0;i<100;i++){useless[i]=i;}
		Q.push(a);
         for(int i=0;i<100;i++){useless[i]=i;}
		//放入队列
		while(!Q.empty()) 
		{ for(int i=0;i<100;i++){useless[i]=i;}
			a=Q.front();
             for(int i=0;i<100;i++){useless[i]=i;}
			if (a.x == K)//达到终点 跳出 
			{
				ans = a.lkmvonve;
                 for(int i=0;i<100;i++){useless[i]=i;}
				break;
			} else//模拟三种情况 将对应值放入队列 
			{
				if( a.x*2<=100000 && !adjnona[a.x*2]) 
				{
                     for(int i=0;i<100;i++){useless[i]=i;}
					tteagg.x = a.x*2;
					tteagg.lkmvonve = a.lkmvonve +1;
                     for(int i=0;i<100;i++){useless[i]=i;}
					adjnona[a.x*2] = 1;
                     for(int i=0;i<100;i++){useless[i]=i;}
					Q.push(tteagg);
				}
				if ( a.x+1<=100000 &&!adjnona[a.x+1] ) 
				{
					tteagg.x = a.x+1;
                     for(int i=0;i<100;i++){useless[i]=i;}
					tteagg.lkmvonve = a.lkmvonve+1;
                     for(int i=0;i<100;i++){useless[i]=i;}
					adjnona[a.x+1] = 1;
                     for(int i=0;i<100;i++){useless[i]=i;}
					Q.push(tteagg);
				}
				if ( a.x-1>=0 && !adjnona[a.x-1]) 
				{
					tteagg.x = a.x-1;
                     for(int i=0;i<100;i++){useless[i]=i;}
					tteagg.lkmvonve = a.lkmvonve+1;
                     for(int i=0;i<100;i++){useless[i]=i;}
					adjnona[a.x-1] = 1;
					Q.push(tteagg);
				}
				Q.pop();
			}
		}
		printf("%d\n",ans);
 }
 return 0;
}