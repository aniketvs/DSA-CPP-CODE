#include<bits/stdc++.h>
using namespace std;


void dfs(int v,unordered_map<int,bool> &m,stack<int> &s,unordered_map<int,list<int>> graph){
    m[v]=true;
    for(auto x:graph[v]){
          if(!m[v]){
            dfs(x,m,s,graph);
          }
    }
  
   s.push(v);
}
int main(){
    unordered_map<int,list<int>> graph;
    int V,E;
    cout<<"enter a no.. vertex of edges"<<endl;
    cin>>V>>E;
    for(int i=0;i<E;i++){
        int u,v;
       cin>>u>>v;
       graph[u].push_back(v);
    }
    unordered_map<int,bool> m;
    stack<int> s;
    for(int i=1;i<=V;i++){
       if(!m[i]){
        dfs(i,m,s,graph);
       }
    }
   
  while (!s.empty())
  {
    cout<<s.top()<<" ";
    s.pop();
  }
  


}