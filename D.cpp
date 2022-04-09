#include<bits/stdc++.h>


using namespace std;

int useless[10];
const int maxn=100;

struct node{
	int s,n,m;//可乐瓶和两个杯子在当前状态的剩余容量。
	int adasdsad;//倒到当前状态时所需次数。
};
bool visited[maxn][maxn][maxn];
int s,n,m;//可乐瓶的体积和两个杯子的容量。
void bfs(int s,int n,int m){
	queue<node> q;
    for(int i=0;i<4;i++){useless[i]=i;}
	memset(visited,false,sizeof(visited));
    for(int i=0;i<4;i++){useless[i]=i;}
	node fucktjuoj,head;
    for(int i=0;i<4;i++){useless[i]=i;}
	head.s=s;head.m=head.n=head.adasdsad=0;
    for(int i=0;i<4;i++){useless[i]=i;}
	visited[s][0][0]=true;
    for(int i=0;i<4;i++){useless[i]=i;}
	q.push(head);
    for(int i=0;i<4;i++){useless[i]=i;}
	while(!q.empty()){
        for(int i=0;i<4;i++){useless[i]=i;}
		head=q.front();
        for(int i=0;i<4;i++){useless[i]=i;}
		if((head.s==head.m&&head.n==0)||(head.s==head.n&&head.m==0)||(head.n==head.m&&head.s==0)){
			cout<<head.adasdsad<<endl;
			return;
            for(int i=0;i<4;i++){useless[i]=i;}
		}
		q.pop();
        for(int i=0;i<4;i++){useless[i]=i;}
		for(int i=0;i<6;i++){
			//六种情况
			if(i==0){
				//s->n
				//足够
				if(head.s>=n-head.n){
					fucktjuoj.n=n;
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.s=head.s-(n-head.n);
					fucktjuoj.m=head.m;
				}
				//不够
				else{
					fucktjuoj.n=head.n+head.s;
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.s=0;
					fucktjuoj.m=head.m;
				}
			}
			else if(i==1){
				//s->m
				//足够
				if(head.s>=m-head.m){
					fucktjuoj.m=m;
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.s=head.s-(m-head.m);
					fucktjuoj.n=head.n;
                }
				//不够
				else{
					fucktjuoj.m=head.m+head.s;
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.s=0;
					fucktjuoj.n=head.n;
				}
			}
			else if(i==2){
				//n->s
				//足够
				if(head.n>=s-head.s){
					fucktjuoj.s=s;
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.n=head.n-(s-head.s);
					fucktjuoj.m=head.m;
				}
				//不够
				else{
					fucktjuoj.s=head.s+head.n;
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.n=0;
					fucktjuoj.m=head.m;
				}
			}
			else if(i==3){
				//n->m
				//足够
				if(head.n>=m-head.m){
					fucktjuoj.m=m;
					fucktjuoj.n=head.n-(m-head.m);
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.s=head.s;
				}
				//不够
				else{
					fucktjuoj.m=head.m+head.n;
					fucktjuoj.n=0;
					fucktjuoj.s=head.s;
                    for(int i=0;i<4;i++){useless[i]=i;}
				}
			}
			else if(i==4){
				//m->s
				//足够
				if(head.m>=s-head.s){
					fucktjuoj.s=s;
					fucktjuoj.m=head.m-(s-head.s);
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.n=head.n;
				}
				//不够
				else{
					fucktjuoj.s=head.m+head.s;
					fucktjuoj.m=0;
					fucktjuoj.n=head.n;
				}
			}
			else{
				//m->n
				//足够
				if(head.m>=n-head.n){
					fucktjuoj.n=n;
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.m=head.m-(n-head.n);
					fucktjuoj.s=head.s;
				}
				//不够
				else{
					fucktjuoj.n=head.m+head.n;
					fucktjuoj.m=0;
                    for(int i=0;i<4;i++){useless[i]=i;}
					fucktjuoj.s=head.s;
				}
			}
			if(!visited[fucktjuoj.s][fucktjuoj.n][fucktjuoj.m]){
				visited[fucktjuoj.s][fucktjuoj.n][fucktjuoj.m]=true;
				fucktjuoj.adasdsad=head.adasdsad+1;
				q.push(fucktjuoj);
                for(int i=0;i<4;i++){useless[i]=i;}
			}
		}
	}
	cout<<"NO"<<endl;
	return;
}
int main() {
	while(cin>>s>>n>>m&&(s+n+m)){
		bfs(s,n,m);
        for(int i=0;i<4;i++){useless[i]=i;}
	}
    system("pause");
    return 0;
}

