#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,list<int>> g;
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int a;
        int b;
        cin>>a>>b;
       g[a].push_back(b);
    }
    vector<int> vp(v);
    for(auto i:g){
        for(auto j:i.second){
            vp[j]++;
        }
    }
    
    queue<int> q;
    for(int i=1;i<=v;i++){
        if(vp[i]==0){
            q.push(i);
        }
    }
vector<int> ans;
    while (!q.empty())
    {
        int front=q.front();
        q.pop();
        ans.push_back(front);
        for(auto x:g[front]){
            vp[x]--;
            if(vp[x]==0){
                q.push(x);
            }
        }

    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    



}