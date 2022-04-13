#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int n,m;
int startX,startY;

int map[401][401]={0};
//int foot[401][401]={0};

int main()
{


    cin>>n>>m;
    cin>>startX>>startY;
    //int * map = new int [n][m];

    for(int i=0;i<401;i++)
       for(int j=0;j<401;j++)
       {
           map[i][j]=-9999;
       }

    for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++)
       {
           map[i][j]=-1;
           //foot[i][j]=0;
       }
    
    queue<int> $x;
    queue<int> $y;

    int x=startX;
    int y=startY;

    map[startX][startY]=0;
    queue<int> times;


    

    //.................

    for(;;)
    {
        int t=0;
        
        

        if($x.size()!=0)
        {
            x=$x.front();
            y=$y.front();

            $x.pop();
            $y.pop();

            t=times.front();

            map[x][y]=times.front();

            times.pop();
        }

        cout<<"x "<<x<<"   y "<<y<<endl;
        //if(x==startX&&y==startY){cout<<"fuck"<<endl;}
        

        

        //foot[x][y]=1;
        //map[x][y]=0;
        int ifBreak=0;
        
        if(map[x+1][y+2]==-1)
        {
            $x.push(x+1);
            $y.push(y+2);
            ifBreak++;
            map[x+1][y+2]=-4;
            times.push(t+1);
            //map[x+1][y+2]=t;
        }

        if(map[x+2][y+1]==-1)
        {
            $x.push(x+2);
            $y.push(y+1);
            ifBreak++;
            map[x+2][y+1]=-4;
            times.push(t+1);
            //map[x+2][y+1]=t;
        }

        if(map[x+2][y-1]==-1)
        {
            $x.push(x+2);
            $y.push(y-1);
            ifBreak++;
            map[x+2][y-1]=-4;
            times.push(t+1);
            //map[x+2][y-1]=t;
        }

        if(map[x+1][y-2]==-1)
        {
            $x.push(x+1);
            $y.push(y-2);
            ifBreak++;
            map[x+1][y-2]=-4;
            times.push(t+1);
            //map[x+1][y-2]=t;
        }

        if(map[x-1][y+2]==-1)
        {
            $x.push(x-1);
            $y.push(y+2);
            ifBreak++;
            map[x-1][y+2]=-4;
            times.push(t+1);
            //map[x-1][y+2]=t;
        }

        if(map[x-2][y+1]==-1)
        {
            $x.push(x-2);
            $y.push(y+1);
            ifBreak++;
            map[x-2][y+1]=-4;
            times.push(t+1);
            //map[x-2][y+1]=t;
        }

        if(map[x-2][y-1]==-1)
        {
            $x.push(x-2);
            $y.push(y-1);
            ifBreak++;
            map[x-2][y-1]=-4;
            times.push(t+1);
            //map[x-2][y-1]=t;
        }

        if(map[x-1][y-2]==-1)
        {
            $x.push(x+1);
            $y.push(y-2);
            ifBreak++;
            map[x-1][y-2]=-4;
            times.push(t+1);
            //map[x-1][y-2]=t;
        }

        if(!$x.size())
        {
            break;
        }

        cout<<"next:  time:"<<times.front()<<" xy: "<<$y.front()<<" "<<$x.front()<<endl;

        cout<<"time: "<<times.size()<<endl;
        cout<<"x: "<<$x.size()<<endl;
        
         for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=m;j++)
       {
           cout<<map[i][j]<<"  ";
       }

       cout<<endl<<endl;
    }
    system("pause");

    }

    //.......................

    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=m;j++)
       {
           cout<<map[i][j]<<" ";
       }

       cout<<endl;
    }

    // cout<<"foot"<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //    for(int j=1;j<=m;j++)
    //    {
    //        cout<<foot[i][j]<<" ";
    //    }

    //    cout<<endl;
    // }

    system("pause");
}


// #include <bits/stdc++.h>

// using namespace std;
// time_t start;
// time_t endss;


// struct node
// {
//     int x;
//     int y;
//     int step;
//     // 记录步数
// };
// int n,m,x,y;
// int myMap[410][410];
// int X[8]={1,-1,2,-2,2,-2,1,-1};
// int Y[8]={2,2,1,1,-1,-1,-2,-2};
// // 8个方向z
// bool judge(int p,int q){
//     // 判断是否可走
//     if(p<1||p>n||q<1||q>m){
//         return false;
//     }else if(myMap[p][q]!=-1){
//         return false;
//     }else{
//         return true;
//     }
// }

// void BFS(){
   
// }

// int main(){
//     for(int i=0;i<410;i++){
//         for(int j=0;j<410;j++){
//             myMap[i][j]=-1;
//         }
//     }
//     scanf("%d%d%d%d",&n,&m,&x,&y);

//     start=clock();
//     queue<node> q;
//     node t1={x,y,0};
//     q.push(t1);
//     myMap[x][y]=0;
//     while(!q.empty()){
//         t1=q.front();
//         q.pop();
//         for(int i=0;i<8;i++){
//             if(judge(t1.x+X[i],t1.y+Y[i])){
//                 node t2={t1.x+X[i],t1.y+Y[i],t1.step+1};
//                 q.push(t2);
//                 myMap[t2.x][t2.y]=t2.step;
//             }
//         }
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             cout<<myMap[i][j]<<" ";
//         }
//         printf("\n");
//     }
//     endss=clock();
//     cout<<"#"<<endss-start<<endl;
//     system("pause");
//     return 0;
//}