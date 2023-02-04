#include<bits/stdc++.h>
using namespace std;


int main(){
    unordered_map<int,list<pair<int,int>>> g;
    int n,e;
    cout<<"n,e"<<endl;
    cin>>n>>e;
    cout<<"u-v-w"<<endl;
    int u,v,w;
    for(int i=0;i<e;i++){
      cin>>u>>v>>w;
      g[u].push_back({v,w});
      g[v].push_back({v,w});
      
    }

    vector<bool> mst(n+1);
    vector<int> key(n+1);
    vector<int> parent(n+1);
    for(int i=0;i<=n;i++){
        mst[i]=false;
        key[i]=INT_MAX;
        parent[i]=-1;
    }
    key[1]=0;
   for(int i=1;i<n;i++){
    int mi=INT_MAX;
    int u;
    for(int j=1;j<=n;j++){
        if(mst[j]==false && key[j]<mi){
            mi=key[j];
            u=j;
        }
    }
    mst[u]=true;

    for(auto it:g[u]){
        if(mst[it.first]==false && it.second<key[it.first] ){
            parent[it.first]=u;
            key[it.first]=it.second;
        }
    }


   }

   unordered_map<int,list<pair<int,int>>> m;
int mini=0;
cout<<"ans-2"<<endl;
   for(int i=2;i<=n;i++){
    m[parent[i]].push_back({i,key[i]});
    mini+=key[i];
   }
   for(auto x:m){

    cout<<x.first<<" ";
    for(auto y:x.second){
        cout<<y.first<<" "<<y.second<<" "<<endl;
    }
    cout<<endl;
   }
   cout<<"ans"<<endl;
cout<<mini<<endl;
}