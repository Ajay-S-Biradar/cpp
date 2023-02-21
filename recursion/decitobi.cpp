#include<bits/stdc++.h>
using namespace std;
void convert(int n,string &result){
	if(n==0){
		return;
	}
	result += n%2 +'0';
	convert(n/2 ,result);
}

int main(){
	string result ="";
	int n = 9;
	convert(n,result) ;
	cout<<result ;
}
