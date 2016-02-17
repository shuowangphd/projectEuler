#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
	if(n<2)return false;
	if(n<4)return true;//2,3
	if(n%2==0||n%3==0)return false;
	if(n<9)return true;//5,7
	int sr=sqrt(n),ft=5;
	while(ft<=sr){
		if(n%ft==0 || n%(ft+2)==0)return false;
		ft+=6;
	}
	return true;
}
int main(){
	int n=10001,cnt=1,i=1;
	while(cnt<n){
		i+=2;
		cnt+=isPrime(i);
	}
	cout<<i<<endl;
}