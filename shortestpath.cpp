//----------------------------- UNDIRECTED GRAPH --------------------------//

// #include<iostream>
// #include<vector>
// #include<queue>
// #include<math.h>
// using namespace std;
// class Graph{
// private:
//     int u=0,v=0;
// public:
//     void add_edge(int,int);
// };

// vector<pair<int,int>>arr[20];
// float dist[10];
// queue<int>Q;

// void Graph::add_edge(int x,int y){
//     u = x;
//     v = y;
//    arr[u].push_back({v,1});
//    arr[v].push_back({u,1});
    
// }

// void setinfinity(float*dist){
//     for(int i=0;i<10;i++){
//         if(i==0){
//             dist[i] = 0;
//         }
//         else{
//             dist[i] = INFINITY;
//         }
        
//     }
// }

// void shortPath(int x){
//     Q.push(x);
//     while(!Q.empty()){
//         int n = Q.front();
//         for(auto y:arr[n]){
//             int a = y.first;
//             int z = y.second;
//             if(dist[n] + z < dist[a]){
//                 dist[a] = z + dist[n];
//                 Q.push(a);
//             }
//         }
//         Q.pop();
//     }
// }


// int main(){
//     Graph S;
//     S.add_edge(0,1);
//     S.add_edge(0,3);
//     S.add_edge(1,2);
//     S.add_edge(1,3);
//     S.add_edge(2,6);
//     S.add_edge(3,4);
//     S.add_edge(4,5);
//     S.add_edge(5,6);
//     S.add_edge(6,7);
//     S.add_edge(6,8);
//     S.add_edge(7,8);
//     int edge = 11;
//     setinfinity(dist);
//     shortPath(0);
//     for(int i=0;i<9;i++){
//     cout<<dist[i]<<" ";
// }

// }

   