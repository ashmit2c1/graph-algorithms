#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<bool> &visited,vector<int>&ans,vector<int> adj[]){
    visited[node]=true;
    ans.push_back(node);
    int n = adj[node].size();
    for(int i = 0; i<n ; i++){
        if(visited[adj[node][i]]==false){
            dfs(adj[node][i],visited,ans,adj);
        }
    }
}

vector<int> DFSTraversl(int V, vector<int> adj[]){
    int start = 0;
    vector<bool> visited(V,false);
    vector<int> ans;
    dfs(start,visited,ans,adj);
    return ans; 
}

int main(){
    
}