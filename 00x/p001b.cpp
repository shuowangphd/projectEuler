#include<iostream>
using namespace std;
int sumDivisible(int target,int num){
	target/=num;
	return num*target*(target+1)/2;
}
int main(){
    int res,target=999;
    res=sumDivisible(target,3)+sumDivisible(target,5)-sumDivisible(target,15);
    cout<<res;
    return 0;
}