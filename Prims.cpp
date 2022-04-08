#include<bits/stdc++.h>
using namespace std;

class Graph{

private:
    int u=0,v=0;
public:
    void add_edge(int,int,int);

};

vector<pair<int,int>>arr[5];
vector<int>MST(5,false);
vector<int>parent(5,-1);
vector<float>key(5,INFINITY);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;


void Graph::add_edge(int x,int y,int z){
    u = x;
    v = y;
    arr[u].push_back({v,z});
    arr[v].push_back({u,z});
}



void MinimumSpanningTree(int N){
    for(int i=0;i<N;i++){
        int u = pq.top().second;
        pq.pop();
        MST[u] = true;

        for(auto it :arr[u]){
            int v = it.first;
            int weight = it.second;
            if(MST[v]==false && weight < key[v]){
                    parent[v] = u;
                    pq.push({key[v],v});
                    key[v] = weight;
            }
        }
    }

}



int main(){
    Graph S;
    int source = 0;
    key[source] = 0;
   // parent[0] = -1;
    pq.push({0,0});
    S.add_edge(0,1,2);
    S.add_edge(0,3,6);
    S.add_edge(1,2,3);
    S.add_edge(1,3,8);
    S.add_edge(1,4,5);
    S.add_edge(2,4,7);
    MinimumSpanningTree(5);

    for(int i=1;i<5;i++){
        cout<<parent[i]<<" - "<<i<<"\n";
    }
}

