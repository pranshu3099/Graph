// #include <bits/stdc++.h>
// using namespace std;

// class Graph{
// private:
//     int u=0,v=0;
// public:
//     void add_edge(int,int);
// };

// vector<int>arr[10];
// bool visited[10];

// void Graph::add_edge(int x, int y){
//     u = x;
//     v = y;
//     arr[u].push_back(v);
// }


// void findtopoSort(int node,bool vis[],stack<int>&st,vector<int>adj[]){
//     vis[node] = 1;
//     for(auto y:adj[node]){
//         if(!vis[y]){
//             findtopoSort( y, vis,st,adj);
//         }
//     }
//     st.push(node);
// }

// vector<int>topoSort(vector<int>adj[] , int N){
//         stack<int>st;
//         for(int i=0;i<=N;i++){
//             if(!visited[i]){
//                 findtopoSort(i,visited,st,arr);
//             }
//     }
//     vector<int>topo;
//     while(!st.empty()){
//         topo.push_back(st.top());
//         st.pop();
//     }
//     return topo;
// }

// int check(int V, vector <int> &res, vector<int> adj[]) {
//     vector<int> s[10];
//     int i=0;
//     for (i = 0; i <=V; i++) {
//         s[res[i]].push_back(i);
//     }
//     for (int i = 0; i < V; i++) {
//         for (int v : adj[i]) {
//             if (s[i] > s[v]) return 0;
//         }
//     }
//     return 1;
// }



// int main(){
//     Graph G;
//     G.add_edge(2,3);
//     G.add_edge(3,1);
//     G.add_edge(2,3);
//     G.add_edge(4,1);
//     G.add_edge(4,0);
//     G.add_edge(5,0);
//     G.add_edge(5,2);
//     int N=5;
//  vector <int> res = topoSort(arr, N);

// cout << check(N, res, arr) << endl;
  
// }


#include<bits/stdc++.h>
using namespace std;
  set<int>M;
int main(){
    M.insert(9);
     M.insert(1);
      M.insert(-3);
       M.insert(2);
        M.insert(4);
         M.insert(8);
         M.insert(3);
         M.insert(-1);
         M.insert(6);
         M.insert(-2);
         M.insert(-4);
        M.insert(7);

       int count=1;
        int z = 0;
        for(auto it = M.begin();it!=M.end();++it){
          
         if(*it + 1 == *(++it)){
            
            count++;
            --it;
        }
        
          else{
              
              if(count>z){
                  z = count;
                  count = 1;
                  --it;
              }
              else{
                count =1;
                --it;
              }
              
              
          } 
        
        }  
}
    





















        