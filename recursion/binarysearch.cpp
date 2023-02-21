#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int l,int r,int key){
	int mid = (l+r)/2 ;
	if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]>key){
		return search(arr,l,mid-1,key);
	}
	else{
		return search(arr,mid+1,r,key);
	}
}


int main(){
	int key=5;
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = 9;
	int ans = search(arr,0,n,key);
	cout<<ans ;
}
