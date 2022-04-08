#include<bits/stdc++.h>
using namespace std;

class Graph{
private:
    int u=0,v=0;
public:
    void add_edge(int,int);

};

vector<int>Parent(8,0);
vector<int>Rank(7,0);




int Find(int x){


    if(Parent[x]!=x){
        Parent[x] = Find(Parent[x]);
    
    }

    return Parent[x];

}


void Union(int x,int y){
    int xset = Find(x);
    int yset = Find(y);

        if(xset == yset){
            return;
        }


        if(Rank[xset]<Rank[yset]){
            Parent[xset] = yset;
        }

        else if(Rank[yset]<Rank[xset]){
            Parent[yset] = xset;
        }
        else{
            Parent[yset] = xset;
            Rank[xset] = Rank[xset] + 1;
        }


}



int main(){
    for(int i=1;i<=7;i++){
        Parent[i] = i;
    }

    Union(1,2);
    Union(2,3);
    Union(4,5);
    Union(6,7);
    Union(5,6);
    Union(3,7);

}