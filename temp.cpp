#include<iostream>
#include<vector>
using namespace std;

int*getNewarr(int m){
    int*arr = new int[m];
    for(int i = 0;i<m;i++){
        arr[i] = 1;
    }
    return arr;
}

void calculateIncreasing(vector<int>&A,int n,int*incr){
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(A[i]>A[j] && incr[i]<incr[j]+1){
                    incr[i] = incr[j]+1;
                }
            }
        }
}

void calculateDecreasing(vector<int>&A,int n,int*dcr){
    for (int i = n-2; i >= 0; i--){
	    for (int j = n-1; j > i; j--){
		if (A[i] > A[j] && dcr[i] < dcr[j] + 1){
			
            dcr[i] = dcr[j] + 1;

        }

        }

    }
}

int solution(vector<int>&A){
    int n = A.size();
    int*incr = getNewarr(n);
    int*dcr = getNewarr(n);
    calculateIncreasing(A,n,incr);
    calculateDecreasing(A,n,dcr);

int max = 1;
for(int i = 0 ; i < n ; i++){
    cout<<incr[i] << " ";
}
cout<<"\n";
for(int i = 0 ; i < n ; i++){
    cout<<dcr[i] << " ";
}
for (int i = 0; i < n; i++){
    if (incr[i] + dcr[i] - 1 > max){
        max = incr[i] + dcr[i];
    }
		
}
	
return max;

}


int main()
{
vector<int>arr = {2,5,3,2,4,1};
//int n = sizeof(arr)/sizeof(arr[0]);
printf("size of LBS is %d\n", solution(arr) );
return 0;
}