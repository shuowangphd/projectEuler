#include<iostream>
using namespace std;
int main(){
    int lim=4000000,a=1,b=1,c=a+b,sum=0;
    while(c<=lim){
    	sum+=c;
    	a=b+c;
    	b=c+a;
    	c=a+b;
    }
    cout<<sum;
}