#include<bits/stdc++.h>
int add(int arr[],int n){
	if(n==0){
	return 0;
	}
	if(n==1)
	return arr[0];
	//sum+=arr[0];
	int remaining = add(arr+1,n-1);
	int sum = arr[0] + remaining;
	std::cout<<sum<<"   " ;
	return sum;
}


int main(){
int arr[] = {1,2,3,4,5,6,74,9};
int n = 8;
int sum = add(arr,n);
std::cout<<sum ;
}
