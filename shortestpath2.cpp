//--------------- SHORTEST PATH IN DIRECTED ACYCLIC GRAPH -----------------//

#include<bits/stdc++.h>
using namespace std;
stack<int>S;
vector<pair<int,int>>arr[10];
float dist[10] = {INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY,INFINITY};
bool visited[10];

class Graph{
private:
   int u = 0;
   int v = 0;

public:
    void add_edge(int,int,int);

};

void Graph:: add_edge(int x ,int y,int z){

    u = x;
    v = y;
    arr[u].push_back({v,z});

}



void findtopoSort(vector<pair<int,int>>adj[],int node,bool vis[]){
    vis[node] = 1;
    //int z =0;
    for(auto x : adj[node]){
        int y = x.first;
        if(!visited[y]){
            findtopoSort(adj,y,vis);
        }

       
    }

        S.push(node);  
}

vector<int> toposort(vector<pair<int,int>>adj[],int N){
    for(int i=0;i<=N;i++){
        if(!visited[i]){
            findtopoSort(adj,i,visited);
        }
    }

    vector<int>R;
    while(!S.empty()){
        R.push_back(S.top());
        S.pop();
    }
    return R;
}


void ShortestPath(vector<int>&st,int N){
    for(int i=0;i<N;i++){
        if(dist[st[i]]!=INFINITY){
            for(auto x : arr[st[i]]){
                float z = dist[st[i]]+x.second;
                if(z<dist[x.first]){
                    dist[x.first] = z;
                }
            }
        }
    }
       

}


int main(){
    Graph G;
    G.add_edge(0,1,2);
    G.add_edge(0,4,1);
    G.add_edge(1,2,3);
    G.add_edge(2,3,6);
    G.add_edge(4,2,2);
    G.add_edge(4,5,4);
    G.add_edge(5,3,1);
vector<int>res =toposort(arr,5);

    int source = 0;
    dist[source] = 0;
    ShortestPath(res,res.size());

}


