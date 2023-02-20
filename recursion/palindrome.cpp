#include<bits/stdc++.h>
using namespace std;
int check(string str){
	if(str.length()==0 || str.length()==1){
		return 1;
	}
	if(str[0] == str[str.length()-1] ){
	//cout<<'j' ;
		return check(str.substr(1,str.length()-2));
	}
	//cout<<'j' ;
	return 0;
}

int main(){
	string str;
	str = "racecar";
	int ans = check(str);
	cout<<ans<<endl;
	str = "ajay";
	ans = check(str);
	cout<<ans<<endl;
	return 0;
}
