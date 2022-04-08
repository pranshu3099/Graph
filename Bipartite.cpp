// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// class Graph
// {
// private:
//     int u = 0, v = 0;

// public:
//     void add_edge(int, int);
// };

// vector<int> arr[10];
// queue<pair<int, int>> Q;
// char color[10] = {'9','9','9','9','9','9','9','9','9','9'};



// void Graph::add_edge(int x, int y)
// {
//     u = x;
//     v = y;
//     arr[u].push_back(v);
//     arr[v].push_back(u);
// }

// void setTrue(int x, int parent)
// {
//    if(parent == -1){
//        color[x] = 0;
//        return;
//    }
//    else if(color[x]==0 || color[x]==1){
//        return;
//    }

//     else if (color[x] != 0 || color[x] != 1)
//     {
//         if (color[parent] == 0)
//         {
//             color[x] = 1;
//               Q.push({x, parent});
       
            
//         }
//         else
//         {
//             color[x] = 0;
//               Q.push({x, parent});
//         }
//     }
// }

// bool checkBipartite(int x,int parent)
// {
//     Q.push({x, parent});
//     while (!Q.empty())
//     {
//         int node = Q.front().first;
//         // int parent = Q.front().second;
//         for (auto y : arr[node])
//         {
//             setTrue(y, node);
//             if (color[y] == color[node])
//             {
//                 return false;
//             }
           
//         }
//         Q.pop();
//     }
//     return true;
// }

// int main()
// {
//     Graph S;
//     S.add_edge(1, 2);
//     S.add_edge(2, 3);
//     S.add_edge(2, 7);
//     S.add_edge(3, 4);
//     S.add_edge(4,5);
//     S.add_edge(8, 5);
//     S.add_edge(5, 6);
//     S.add_edge(6, 7);
//     int edges = 8,parent = -1;
//     bool check = false;
//     for (int i = 1; i <= edges; i++)
//     {
//         if(color[i]!=0|| color[i]!=1){
//                     setTrue(i,parent);
//                    if( checkBipartite(i,parent)){
//                         check = true;
//                         break;
//                    }
//                    else{
//                        check = false;
//                        break;
//                    }
//         }
//     }
//     if(check){
//         cout<<"it is a bipartite graph\n";
//     }
//     else{
//         cout<<"it is not a bipartite graph\n";
//     }
// }

