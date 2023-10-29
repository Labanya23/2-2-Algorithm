//PRACTICE FROM CRAZYPROGRAMMER WEBSITE

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int cost[10][10],i,j,k,n,top,e,v,stk[20],visit[10],visited[10];
  cout<<"Enter the number of vertices in the Graph:\n";
  cout<<"edge\n";
  cin>>e;
  cout<<"start and the end vertex of the edge\n";
  for(k=1;k<=e;k++){
    cin>>i>>j;
    cost[i][j]=1;
  }
  cout<<"Enter the initial vertex to start DFS traversal\n";
  cin>>v;
  cout<<"In the DFS traversal given graph\n";
  cout<<v<<"";
  visited[v]=1;
  k=1;
  while(k<n){
    for(j=n;j>=1;j--){
        if(cost[v][j]!=0 && visited[j]!=1 && visited[j]!=1){
            visit[j]=1;
            stk[top]=j;
            top++;
        }
    }
    v=stk[--top];
    cout<<v<<"";
    k++;
    visit[v]=0;
    visited[v]=1;

  }
  cout<<"\n\n\n";
  return 0;
}






