/////-----------------------------------Product of Array Except Self--------------------------------------//


// #include<iostream>
// using namespace std;
// int main(){
//         int nums[5] = {-1,1,0,-3,0};
//         // int n = nums.size();
//         int n = 5;
//         int product =1;
//       //  vector<int>S;
//         bool iszero = false;
//         int zerocount = 0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==0){
//                 iszero = true;
//                 zerocount++;
//             }
//             else
//             product = product*nums[i];
//         }
//         // if(zerocount>1){
//         //  for(int i=0;i<n;i++){
            
//         //    // S.push_back(0);
//         //      nums[i]=0;
//         // }
       
//         // }
//          if(zerocount==1){
//             for(int i=0;i<n;i++){
//                 if(nums[i]!=0){
//                    // S.push_back(0);
//                     nums[i] = 0;
//                 }
//                 else
//                 //S.push_back(product);
//                     nums[i] = product;
//         }
//         }
//         else{
//           for(int i=0;i<n;i++){
//                 //S.push_back(product/nums[i]);
//               nums[i] = product/nums[i];
//           }
//         }

//         for(int i=0;i<n;i++){
//             cout<<nums[i]<<" ";
//         }
    
// }




//-----------------------------------------------------------------------------------------------//

// #include<iostream>
// using namespace std;

// template <typename T>

// T Mymax(T x , T y){
//     return (x>y)? x : y;  
// }

// int main(){
//     cout<<Mymax<int>(4,3) << endl;
//     cout<<Mymax<float>(3.0,4.0);
// }






// #include<iostream>
// #include<string>
// #include<vector>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string,int>S;
//     pair<string,int>p;
//     vector<string>x;
//     string dict[20] = {"are","gfg","of","is","a","coding","weather","platform","apple","mask"};
//     string str = "gfg is a good coding platform";
//     string word = "";
//     for(auto y:str){
//         if(y ==' '){
//             x.push_back(word);
//             word = "";
//         }
//         else{
//             word = word + y;
//         }
//     }

//     for(int i =0;i<10;i++){
//        p.first = dict[i];
//        p.second = 1;
//        S.insert(p);
//     }
//     bool check = true;
//     for(int i=0;i<x.size();i++){
//         if(!S.count(x[i])>0){
//             check = false;
//             break;
//         }
        
//     }
//     if(check){
//         cout<<"yes";
//     }
//     else{
//         cout<<"false";
//     }
// }




// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int lis(int* arr,int n){
//     vector<int>seq;
//     seq.push_back(arr[0]);

//     for(int i=1;i<n;i++){
//         if(seq.back()<arr[i]){
//             seq.push_back(arr[i]);
//         }
//         else{
//             auto x = lower_bound(seq.begin(),seq.end(),arr[i]);
//             int ind = x - seq.begin();
//             seq[ind] = arr[i];
//         }
//     }
//     return seq.size();
// }

// int main(){
//     int arr[] = {2,5,3,7,10,8,11,13,6};
//     int n = 9;
//     //sort(arr,arr+n);
//     cout<<lis(arr,n);

// }


// #include<iostream>
// #include<string>
// #include<unordered_map>
// using namespace std;

// int CountAnagram(string arr,string S,int k,int m){
//     int i=0,j=-1,count=0;
//     unordered_map<char,int>A;
//     pair<char,int>p;
//     while(j!=m){
//         if(j-i+1<k){
//             j++;
//             p.first = arr[j];
//             p.second = 1;
//             A.insert(p);
            
//         }
//         else if(j-i+1==k){     
//                 if(A.)
//         }
//     }
//     return count;
// }





// int main(){
//     string arr = "forxxorfxdofr";
//     int m=0;
//     string S = "for";
//     int n  = S.length();
//     m = arr.length();
//     cout << CountAnagram(arr,S,n,m);
// }







//----------     CHECK WHETHER STRINGS ARE ANAGRAM OR NOT ------------//


// #include<iostream>
// #include<unordered_map>
// using namespace std;
//   unordered_map<char,int>M;
//     pair<char,int>P;

// bool check(string S1,string S2){

//     if(S1.length()!=S2.length()){
//         return false;
//     }

//     for(int i=0;i<S1.length();i++){ 
        
//         if(M.count(S1[i])>0){
//             M.at(S1[i])++;
//         }

//         else{
//         P.first = S1[i];
//         P.second = 1;
//         M.insert(P);
//         }
//  }
//  for(int i=0;i<S2.length();i++){

//      if(M.count(S2[i])){
//           M.at(S2[i])--;
//      }

//      if(M.at(S2[i])<0){
//          return false;
//      }

      

// }

//   return true;
// }


// int main(){
  

//     string S1 = "abbc";
//     string S2 = "abbc";
//    cout<<check(S1,S2);

// }






//---------- GROUP ANAGRAMS --------------//


// #include<bits/stdc++.h>
// using namespace std;
// map<string,vector<string>>M;
// string X;
// void Group(string* arr,int x){
// for(int i=0;i<x;i++){

// if(M.empty()){
//      X = arr[i];
//     sort(X.begin(),X.end());
//     M[X].push_back(arr[i]);
// }


// else{
//       X = arr[i];
//     sort(X.begin(),X.end());
//     if(M.count(X)){
//          M[X].push_back(arr[i]);
//     }

//     else{
//           M[X].push_back(arr[i]);
//     }

// }

// }

// }



// int main(){
//     string S[6] =  {"cat","dog","tac","god","act"};
//     int x = sizeof(S)/sizeof(S[0]);
//     Group(S,x);
    
   
//        for(auto y : M){
//           for(int i=0;i<y.second.size();i++){
//             cout<<y.second[i] << " ";
//           }
//        }
   

// }








// C++ code to print all anagrams together
// #include <bits/stdc++.h>
// using namespace std;

// void solver(vector<string> my_list)
// {
	
// 	// Inner hashmap counts frequency
// 	// of characters in a string.
// 	// Outer hashmap for if same
// 	// frequency characters are present in
// 	// in a string then it will add it to
// 	// the vector.
// 	map<map<char, int>, vector<string>> my_map;
	
// 	// Loop over all words
// 	for(string str : my_list)
// 	{
		
// 		// Counting the frequency of the
// 		// characters present in a string
// 		map<char, int> temp_map;
// 		vector<string> temp_my_list;
// 		for(int i = 0; i < str.length(); ++i)
// 		{
// 			++temp_map[str[i]];
// 		}
		
// 		// If the same frequency of characters
// 		// are already present then add that
// 		// string into that arraylist otherwise
// 		// created a new arraylist and add that
// 		// string
// 		auto it = my_map.find(temp_map);
// 		if (it != my_map.end())
// 		{
// 			it->second.push_back(str);
// 		}
// 		else
// 		{
// 			temp_my_list.push_back(str);
// 			my_map.insert({ temp_map, temp_my_list });
// 		}
// 	}
	
// 	// Stores the result in a vector
// 	vector<vector<string>> result;

// 	for(auto it = my_map.begin();
// 			it != my_map.end(); ++it)
// 	{
// 		result.push_back(it->second);
// 	}

// 	for(int i = 0; i < result.size(); ++i)
// 	{
// 		cout << "[";
// 		for(int j = 0; j < result[i].size(); ++j)
// 		{
// 			cout << result[i][j] << ", ";
// 		}
// 		cout << "]";
// 	}
// }

// // Driver code
// int main()
// {
// 	vector<string> my_list = { "cat", "dog", "ogd",
// 							"god", "atc" };
// 	solver(my_list);
// 	return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// map<char,int>Hash;
// map<char,int>P_hash;
// vector<int>Result;

// void Find(string S,string P){
// 	int x =S.length();
// 	int y = P.length();
// 	for(int i=0;i<y;i++){
// 		P_hash.insert({P[i],1});
// 	}
// 	int j=0,k=0,i=0;
// 	while(i!=x){
//         if(Hash.find(S[i])!=Hash.end()){
//             Hash.at(S[i])++;
//         }
//    else{

     
//    Hash.insert({S[i],1});

// 		if(i-j+1<y){

// 			i++;
// 		}
// 		else if(i-j+1==y){
// 			if(Hash == P_hash){
// 				Result.push_back(k);
// 				//i++;
// 				j++;
// 				Hash.at(S[k])--;
// 				k++;

// 			}

// 			else{
// 				//i++;
// 				j++;
// 				Hash.at(S[k])--;
// 				k++;
// 			}
// 		}
// 	}
//     }
// }


// int main(){

// 	string S = "abcdebacb";
// 	string P = "cab";
// 		Find(S,P);

// }







// #include<bits/stdc++.h>
// using namespace std;
// multiset<long long>M;



// int main(){
//     int t=1,k=3,n=5;
//     long long x = 0,total = 0;
//   while(t--){
//     for(int i=0;i<n;i++){
//         cin>>x;
//         M.insert(x);
//     }

//     for(int i=0;i<k;i++){
//         auto it = (--M.end());
//         total += *(it);
//         M.erase(it);//earse is Normally O(1) in case of an interator  but if we provide value the O(logn)
//         M.insert(*(it)/2); //insert is O(logn)operation in multiset
//     }

//     cout<<total<<endl;
//   }


// }




// #include<bits/stdc++.h>
// using namespace std;

// #define MAX 1000

// bool hashTable[MAX+1][2];

// bool search(int x){
//   if(x>=0){
//     if(hashTable[x][0]==1){
//       return true;
//     }
//     else return false;
//   }

//   else{
//     x = abs(x);
//     if(hashTable[x][1]==1){
//       return true;
//     }
//     else return false;
//   }
// }


// void insert(int a[],int n){

//   for(int i=0;i<n;i++){
//     if(a[i]>=0){
//       hashTable[a[i]][0] = 1;
//     }

//     else{
//       hashTable[abs(a[i])][1] = 1;
//     }
//   }


// }


// int main(){
//   int arr[] = {-1,9,2,-5,3,1};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   insert(arr,n);
  
//   int find = -3;

//   if(search(find)){
//     cout<<"Element is present\n";
//   }

//   else {
//     cout<<"Element is not present\n";
//   }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   map<int,multiset<string>>marks_map;
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//     int marks;
//     string name;
//     cin>>name>>marks;
//     marks_map[marks].insert(name);
//   }

//   auto cur_it = --marks_map.end();
//   while(true){
//     auto &students = (*cur_it).second;
//     int marks = (*cur_it).first;
//     for(auto student : students){
//       cout<<student<<" "<<marks;
//     }
//     if(cur_it==marks_map.begin()) break;
//     cur_it--;
//   }


// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// multiset<char>M;
//   string s;
//   cin>>s;
//   int k;
//   cin>>k;
//   char* t = new char[s.size()+1];
//   int i=0,j=0;
//   while(j!=s.size()){
//     if(M.size()!=k){
//       M.insert(s[i]);
//       i++;
//     }
//     else if(M.size()==k){
//         auto it = M.begin();
//         t[j] = *(it);
//         j++;
//         M.erase(it);
//     }
//   }
//   j--;
//   auto c = M.begin();
//   t[j] = *(c);

//   for(int i=0;t[i]!='\0';i++){
//     cout<<t[i];
//   } 
// }






// #include<bits/stdc++.h>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node*left;
//     Node*right;

// };

// Node*root=NULL;

// Node*addNewNode(int x){
//     Node*newNode = new Node();
//     newNode->data = x;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;


// }



// bool check(Node*root){
// static Node*prev = NULL;
// if(root){

//     if(!check(root->left)){
//     return false;
//     }

//     if(prev!=NULL && root->data<=prev->data){
//         return false;
//     }
//     prev = root;
//     return check(root->right);





// }


// return true;

// }


// int main(){
 
//  root = addNewNode(3);
//  root->left = addNewNode(1);
//  root->right = addNewNode(4);
//  root->right->left = addNewNode(2);
//  //root->right->right = addNewNode(6);
//  cout << check(root);
//  return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node*left;
//     Node*right;

// };

// Node*root=NULL;
// Node*temp = new Node();

// Node*addNewNode(int x){
//     Node*newNode = new Node();
//     newNode->data = x;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;


// }



// void check(Node*root){
// static Node*prev = NULL;
// if(root){

//     check(root->left);

//     if(prev!=NULL && root->data<=prev->data){
//         //return false;
//         temp->data = prev->data;
//         prev->data = root->data;
//         root->data = temp->data;

//     }
//     else{
//      prev = root;
//      check(root->right);
//     }
    

// }

// }


// int main(){
 
//  root = addNewNode(1);
//  root->left = addNewNode(3);
//  root->left->right = addNewNode(2);
//  //root->right = addNewNode(4);
//  //root->right->left = addNewNode(2);
//  //root->right->right = addNewNode(6);
// check(root);
//  return 0;
// }

#include<iostream>
#include<stack>
using namespace std;


class Node{
public:
    int data;
    Node*left;
    Node*right;
};
stack<Node*>s;
Node*p = NULL;
Node*q=NULL;

Node*GetNewNode(int x){
Node*newNode = new Node();
newNode->data = x;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}




void Traverse(Node*root){
int Level = 1;
s.push(root);

while(!s.empty()){
    cout<<s.top()->data<<" ";
    s.pop();
    if(Level%2!=0){
        if(s.top()->right!=NULL){
            s.push(s.top()->right);
        }

        if(s.top()->left!=NULL){
            s.push(s.top()->left);
           
        }
     
         Level++;
       
        
      
    }
    else{
         if(s.top()->left!=NULL){
            s.push(s.top()->left);
           
        }
           if(s.top()->right!=NULL){
            s.push(s.top()->right);
        }
        Level++;
    }
    //   s.pop();
}

}


// bool isSameTree(Node*p,Node*q){

// if(p==NULL||q==NULL) return (p==q);

// return (p->data == q->data) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right);

// }











int main(){
    // p  = GetNewNode(1);
    // p->left = GetNewNode(2);
    // p->right = GetNewNode(3);
    // p->right->left = GetNewNode(4);
    // p->right->right = GetNewNode(5);


    q  = GetNewNode(1);
    q->left = GetNewNode(2);
    q->right = GetNewNode(3);
    q->right->right = GetNewNode(6);
    q->left->left = GetNewNode(4);
    q->left->right = GetNewNode(5);

    Traverse(q);
    //cout << isSameTree(p,q);



}


