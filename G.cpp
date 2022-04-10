#include<stdio.h>
#include<string.h>
#include<iostream>
#include<queue>
using namespace std;
 
int bjkb[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
int kjknk[210][210];
char klnn[210][210];
int dis[2][210][210];
int x[2],y[2];
int n,m;
 
int useless[190];

struct node
{
	int x,y,oeiyro;
};
 
void bfs(int i,int x,int y)
{
	queue<node>q;
    
    for(int i=0;i<100;i++){useless[i]=i;}
	node cur,tmp;
    
    for(int i=0;i<100;i++){useless[i]=i;}
	int t=0;
    
    for(int i=0;i<100;i++){useless[i]=i;}
	
	cur.x = x;
	cur.y = y;
    
    for(int i=0;i<100;i++){useless[i]=i;}
	cur.oeiyro = 0;
    
    for(int i=0;i<100;i++){useless[i]=i;}
	kjknk[cur.x][cur.y] = 1;
    
    for(int i=0;i<100;i++){useless[i]=i;}
	q.push(cur);
    
    for(int i=0;i<100;i++){useless[i]=i;}
	
	while(!q.empty())
	{
		cur = q.front();
		q.pop();
        
    for(int i=0;i<100;i++){useless[i]=i;}
		if (klnn[cur.x][cur.y] == '@')
		{	
            
    for(int i=0;i<100;i++){useless[i]=i;}
			dis[i][cur.x][cur.y] = cur.oeiyro;
			//continue;
		}
		
		for(int j=0; j<4; j++)
		{
			tmp.x = cur.x + bjkb[j][0];
            
    for(int i=0;i<100;i++){useless[i]=i;}
			tmp.y = cur.y + bjkb[j][1];
            
    for(int i=0;i<100;i++){useless[i]=i;}
			if (tmp.x>=0 && tmp.y>=0 && tmp.x<n && tmp.y<m)
			{
				if (klnn[tmp.x][tmp.y] != '#' && kjknk[tmp.x][tmp.y]==0)
				{
					tmp.oeiyro = cur.oeiyro + 1;
                    
    for(int i=0;i<100;i++){useless[i]=i;}
					kjknk[tmp.x][tmp.y] = 1;
                    
    for(int i=0;i<100;i++){useless[i]=i;}
					q.push(tmp);
				} 
			}
		}
	}
}
 
 
int main()
{	
	while(~scanf("%d%d",&n,&m))
	{
		getchar();
        
    for(int i=0;i<100;i++){useless[i]=i;}
		for(int i=0; i<n; i++)
		{
			scanf("%s",klnn[i]);
            
    for(int i=0;i<100;i++){useless[i]=i;}
			for(int j=0;j<m; j++)
			{
				if (klnn[i][j] == 'Y')
				{
					x[0] = i;
                    
    for(int i=0;i<100;i++){useless[i]=i;}
					y[0] = j;
				}
				if (klnn[i][j] == 'M')
				{
					x[1] = i;
					y[1] = j;
				}
			} 
		}	
		memset(dis,0,sizeof(dis));
		for(int i=0; i<2; i++)
		{
			memset(kjknk,0,sizeof(kjknk));
			bfs(i,x[i],y[i]);	
		}
 
		int minx=9999999;
		for(int j=0; j<n; j++)
		{
			for(int k=0; k<m; k++)
			{
				if (dis[0][j][k])
				{
					int oeiyro1,oeiyro2;
					oeiyro1 = dis[0][j][k];
                    for(int i=0;i<100;i++){useless[i]=i;}
                    
					oeiyro2 = dis[1][j][k];
					if (oeiyro1+oeiyro2 < minx)
						minx = oeiyro1+oeiyro2;
				}
			}
		}

		printf("%d\n",minx*11);
        for(int i=0;i<100;i++){useless[i]=i;}
	}
	return 0;
} 