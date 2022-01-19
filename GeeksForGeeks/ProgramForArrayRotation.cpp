/*
// Method 1 Using temp Array
#include<iostream>
using namespace std;
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int d = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[d];
    //Store first d element in a temp array
    for(int i=0;i<d;i++){
    	temp[i]= arr[i];
	}
	//Shift rest of arr[]
	for(int i=0;i<n-d;i++){
		arr[i]=arr[i+d];
	}
	//Store back the d element
	for(int i=0;i<d;i++){
		arr[n-d+i]=temp[i];
	}
	//Print all the element
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}


//Method 2 Rotate One by One
#include<iostream>
using namespace std;
//Function to leftRotate arr[] of size n by 1
void leftRotatebyOne(int arr[],int n){
	int temp = arr[0];
	for(int i=0;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}
// Function to left rotate arr[] of size n by d
void leftRotate(int arr[],int d,int n){
	for(int i=0;i<d;i++){
		leftRotatebyOne(arr,n);
	}
}
//Driver Program
int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	//function calling
	leftRotate(arr,2,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

//Method 3 : A Juggling Algorithm
#include<bits/stdc++.h>
using namespace std;
//function to get gcd of a and b
int gcd(int a,int b){
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
//Function to leftRotate arr[] of size n by d
void leftRotate(int arr[],int d,int n){
	//To handle if d>n
	d = d%n;
	int g_c_d = gcd(d,n);
	for(int i=0;i<g_c_d;i++){
		//Move ith value to blocks
		int temp = arr[i];
		int j=i;
		while(1){
			int k = j+d;
			if(k>=n)
				k = k-n;
			if(k==i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}
//Driver Program
int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	leftRotate(arr,2,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


//Method 4 : The Reversal Algorithm
#include<bits/stdc++.h>
using namespace std;
//Function to reverse arr[] from index start to end
void reverseArray(int arr[],int start, int end){
	while(start<end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
void leftRotate(int arr[],int d,int n){
	if(d==0)
		return;
	d = d%n;
	reverseArray(arr,0,d-1);
	reverseArray(arr,d,n-1);
	reverseArray(arr,0,n-1);
}
//Driver Program
int main(){
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int d = 2;
	leftRotate(arr,d,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
*/

//Method 5 Block Swap Algorithm
//Recursive Implementation

