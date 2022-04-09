#include<iostream>
#include<stack>

using namespace std;

char map[8][8]={0};
int map_len,_n;
int foot[8][8]={0};
int canMap[8]={0};
int res=0;

void dfs(int num,int cnt)
{
    if(cnt==_n)
       {
           res++;
           return;
       }

    if(num==map_len)return;

    for(int i=0;i<map_len;i++)
    {
        if(map[num][i]=='#'&&!canMap[i])
        {
            canMap[i]=1;
            dfs(num+1,cnt+1);
            canMap[i]=0;
        }
    }
    dfs(num+1,cnt);
}

int sol(int need)
{
    int k=0;
    if(need==0){return 1;}

    {
        for(int i=0;i<map_len;i++)
           for(int j=0;j<map_len;j++)
           {
               if(canMap[i]==0)
               {canMap[i]==0;k+=sol(need-1);}
           }
    }

    return k;
}

int main()
{
    while(1)
    
    {
    cin>>map_len>>_n;
    if(map_len==-1){system("pause");return 0;}
    for(int i=0;i<map_len;i++)
    {
        for(int j=0;j<map_len;j++)
        {
            cin>>map[i][j];
        }
    }

    sol(_n);

    dfs(0,0);

    

    cout<<res<<endl;
    char map[8][8]={0};
    foot[8][8]={0};
    canMap[8]={0};
    res=0;
    }
    system("pause");

}