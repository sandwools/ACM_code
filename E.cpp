#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main()
{
    int maze[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>maze[i][j];
        }
    }

    int foot[5][5]={0};
    int outputX[20];
    int outputY[20];
    for(int i=0;i<20;i++){outputY[i]=-4399;}
    for(int j=0;j<20;j++){outputX[j]=-4399;}

    stack<int> $x;
    stack<int> $y;
    queue<int> finalOut;


    //start
    int x=0,y=0;
    while( !(x==4&&y==4) )
    {
        foot[x][y]=1;

        if(x-1>0&&foot[x-1][y]==0)
           {
               if(maze[x-1][y]==0)
                  {
                      $x.push(x);
                      $y.push(y);
                      x=x-1;
                      //cout<<"$"<<x<<y<<endl;
                      continue;
                  }
           }

        if(x+1<5&&foot[x+1][y]==0)
           {
               if(maze[x+1][y]==0)
                  {
                      $x.push(x);
                      $y.push(y);
                      x=x+1;
                      //cout<<"$"<<x<<y<<endl;
                      continue;
                  }   
           }

        if(y-1>0&&foot[x][y-1]==0)
        {
            {
               if(maze[x][y-1]==0)
                  {
                      $x.push(x);
                      $y.push(y);
                      y=y-1;
                      //cout<<"$"<<x<<y<<endl;
                      continue;
                  }   
           }
        }

        if(y+1>0&&foot[x][y+1]==0)
        {
            {
               if(maze[x][y+1]==0)

                  {
                      $x.push(x);
                      $y.push(y);
                      y=y+1;
                      //cout<<"$"<<x<<y<<endl;
                      continue;
                  }   
           }
        }

       

        if($x.size()!=0)
        {
            x=$x.top();
            y=$y.top();
            $x.pop();
            $y.pop();
        }
         //cout<<x<<" "<<y<<endl;
        // system("pause");


    }

    int len=$x.size();

    for(int i=0;i<len;i++){outputX[i]=$x.top();$x.pop();}
    for(int i=0;i<len;i++){outputY[i]=$y.top();$y.pop();}

    for(int i=len-1;i>=0;i--)
       {cout<<"("<<outputX[i]<<", "<<outputY[i]<<")"<<endl;}
       cout<<"(4, 4)"<<endl;


system("pause");
}