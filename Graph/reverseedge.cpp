#include<bits/stdc++.h>
using namespace std;



int solve(unordered_map<int,list<int>> g,int v,int e,int src,int dst){
    unordered_map<int,list<pair<int,int>>> graph;
    for(int i=0;i<v;i++){
        for(auto x:g[i]){
            graph[i].push_back({x,0});
            graph[x].push_back({i,1});
        }
    }
    vector<int> ans(v+1,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,src});
        ans[src]=0;
        while(!pq.empty()){
            int fst=pq.top().first;
            int snd=pq.top().second;
            pq.pop();
            for(auto x:graph[snd]){
               
                if(x.second+ans[snd]<ans[x.first]){
                    ans[x.first]=x.second+ans[snd];
                    pq.push({ans[x.first],x.first});
                }
            }
        }
if(ans[dst]==INT_MAX)return -1;
  return ans[dst];
}

int main(){
    int v,e;
    cin>>v;
    cin>>e;

    unordered_map<int,list<int>> g;
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    int src,dst;
    cout<<"enter src + dst"<<endl;
    cin>>src>>dst;
    cout<<"ans"<<solve(g,v,e,src,dst)<<endl;
}