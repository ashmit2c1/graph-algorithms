#include<bits/stdc++.h>
using namespace std;

vector<int> BFSTraversal(int V, vector<int> adj[]){
    queue<int> q;
    vector<int> ans;
    q.push(0);
    vector<bool> visited(V,false);
    visited[0]=true;
    while(q.empty()==false){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        int n = adj[node].size();
        for(int i = 0; i<n ; i++){
            if(visited[adj[node][i]==false]){
                visited[adj[node][i]]=true;
                q.push(adj[node][i]);
            }
        }
    }
    return ans;
}

int main(){
    
}