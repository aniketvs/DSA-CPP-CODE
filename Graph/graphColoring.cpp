#include<bits/stdc++.h>
using namespace std;

int color(unordered_map<int,list<int>> g,int n,int e){
   int res[n];
   int av[n];
   for(int i=0;i<n;i++){
    res[i]=-1;
    av[i]=false;
   }

   res[0]=0;
   int cn=0;
   for(int i=1;i<n;i++){
    for(auto x:g[i]){
       if(res[x]!=-1){
        av[res[x]]=true;
       }
    }
    int cr;
    for(cr=0;cr<n;cr++){
        if(av[cr]==false){
            break;
        }
    }
    res[i]=cr;
    cn=max(cn,cr+1);
     for(auto x:g[i]){
       if(res[x]!=-1){
        av[res[x]]=false;
       }
    }
   }
   return cn;
}

int main(){
    int n,e;
    cin>>n>>e;
    unordered_map<int,list<int>> g;
    for (int i = 0; i <e; i++)
    {
      int u,v;
      cin>>u>>v;
      g[u].push_back(v);
       g[v].push_back(u);
    }

    cout<<"ans:-"<<color(g,n,e);

    
}