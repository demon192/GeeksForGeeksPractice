//Program for Array Rotation
//Method 1(Using temp array) 

#include<iostream>
using namespace std;
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int d = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[d];
    for(int i=0;i<d;i++){
    	temp[i]= arr[i];
	}
	for(int i=0;i<n-d;i++){
		arr[i]=arr[i+d];
	}
	for(int i=0;i<d;i++){
		arr[n-d+i]=temp[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

//Method 2 (Rotate one by one)


