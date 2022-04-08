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
// char visited[10] = {'9','9','9','9','9','9','9','9','9','9'};


// void Graph::add_edge(int x,int y){
//     u = x;
//     v = y;
//     arr[u].push_back(v);
// }

// void setTrue(int x,int temp){
//     if(x==1){
//         visited[x] = 0;
//     }
//    else if(visited[x]!=0 && visited[x]!=1){
//        if(visited[temp]==0){
//            visited[x] = 1;
//        }
//        else{
//            visited[x] = 0;
//        }
//    }
// }


// bool cycledfs(vector<int>arr1[],int x){
//     int parent = 0;
//                 for(auto y:arr1[x]){
//                     if(visited[y]!=0 && visited[y]!=1){
//                         parent = x;
//                         setTrue(y,parent);
//                         if(cycledfs(arr1,y)) return true;
//                     }
//                     else{
//                         return false;
//                     }
                    

//                 }
//      return false;
// }

// bool iscyclic(vector<int>arr1[],int x){
//     int parent = 0;
//         for(int i=1;i<=x;i++){
//             if(visited[i]!=0 && visited[i]!=1){
//                 setTrue(i,parent);
//                 if(cycledfs(arr1,i)){
//                     return true;
//                 }
//             }
//         }
//         return false;
// }




// int main()
// {
//     Graph S;
//     S.add_edge(1, 2);
//     S.add_edge(2, 3);
//     S.add_edge(3, 4);
//     S.add_edge(3, 6);
//     S.add_edge(4, 5);
//     S.add_edge(6, 5);
//     S.add_edge(7, 2);
//     S.add_edge(7, 8);
//     S.add_edge(8, 9);
//     S.add_edge(9, 7);

//     int edges = 10,parent = -1;
   
//     if(iscyclic(arr,edges)){
//         cout<<"it is a cyclic graph\n";
//     }
//     else{
//         cout<<"it is not a cyclic graph\n";
//     }
// }

