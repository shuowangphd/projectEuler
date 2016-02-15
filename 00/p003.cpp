#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n=600851475143,p=3;
    while(n%2==0)n=n>>1;
    while(p<sqrt(n)){
    	while(n%p==0)n/=p;
    	p+=2;
    }
    cout<<n;
}