#include<iostream>
using namespace std;
int main(){
    int lim=4000000,a=1,b=1,c=a+b,sum=c;
    while(c<=lim){
    	a=b;
    	b=c;
    	c=a+b;
    	if(c%2==0)sum+=c;
    }
    cout<<sum;
}