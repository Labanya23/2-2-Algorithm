//PRACTICE FROM Study tonight

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
vector<bool>v;
vector<vector<int>>g;
void bfsTraversal(int b){

  queue<int>q;
  q.push(b);
  v[b]=true;
  cout<<"\n\n The BFS traversal is\n";
  while(!q.empty())
  {
      int a=q.front();
      q.pop();
      for(auto j=g[a].begin();j!=g[a].end();j++)
      {
          if(!v[*j])
          {
              v[*j]=true;
              {
                  v[*j]=true;
                  q.push(*j);
              }
          }
          cout<<a<<"";
      }
      void markEdge(int a,int b);
      {
          g[a].push_back(b);
      }
      int main()
      {
          cout<<"the vertices are numbeered from 0 to n-1===\n\n";
          int n,e;
          cout<<"Enter the number of vertices\n"
          cin>>n;
          cout<<"Enter the edge\n";
          cin>>e;
          v.assign(n,false);
          g.assign(n,vector<int>());
          int a,b,i;
          cout<<"Enter the edges with source and target vertex:\n";
          for(i=0;i<e;i++){
            cin>>a>>b;
            makeEdge(a,b);
          }
          for(i=0;i<n;i++){
            if(!v[i])
            {
                bfsTraversal(i);
            }
          }
          cout<<"\n\n\n";
          return 0;

      }
 // }
  //cout<<"\n\n\n";
 // return 0;
  //}
  //I AM MAKING SOME MISTAKE FOR REASON GET COMPAILER ERROR
