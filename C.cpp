#include<iostream>
#include<stack>

using namespace std;

char map[8][8]={0};
int _map,_n;
int realMap[8][8]={0};
int foot[8][8]={0};

int main()
{
    cin>>_map>>_n;
    for(int i=0;i<_map;i++)
    {
        for(int j=0;j<_map;j++)
        {
            cin>>map[i][j];
        }
    }

    for(int i=0;i<_map;i++)
    {
        for(int j=0;j<_map;j++)
        {
            if(map[i][j]='#'){realMap[i][j]=1;}
            if(map[i][j]='.'){realMap[i][j]=1;}
        }
    }

    //DFS:

    
}