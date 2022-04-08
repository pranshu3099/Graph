// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// class Graph{
// private:
//     int u=0,v=0;
// public:
//     void add_edge(int,int);
// };

// vector<int>arr[10];



// void Graph::add_edge(int x,int y){
//     u = x;
//     v = y;
// arr[u].push_back(v);
// }

// vector<int>topo(int N,vector<int>adj[]){
//     int count = 0;
//     queue<int>S;
//     vector<int>Indegree(N,0);
//     for(int i=0;i<N;i++){
//         for(auto it : adj[i]){
//             Indegree[it]++;
//         }
//     }

//     for(int i=0;i<N;i++){
//         if(Indegree[i]==0){
//             S.push(i);
//         }
//     }

//     vector<int>topos;
//     while(!S.empty()){
//         int node = S.front();
//         S.pop();
//         topos.push_back(node);
//         for(auto it: adj[node]){
//             Indegree[it]--;
//             if(Indegree[it]==0){
//                 S.push(it);
              
//             }
//         }
//           count++;
//     }
//     if(count!=N){
//         cout<<"cycle"<<" ";
//     }
//     return topos;
// }


// int main(){
//     int i = 0;
//     Graph S;
//     S.add_edge(4,0);
//     S.add_edge(4,1);
//     S.add_edge(5,0);
//     S.add_edge(5,2);
//     S.add_edge(2,3);
//     S.add_edge(3,1);
//     vector<int>Q;
//     Q = topo(6,arr);
//     for(int i=0;i<6;i++){
//         cout<<Q[i]<<" ";
//     }
// }


