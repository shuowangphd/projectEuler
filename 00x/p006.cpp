#include<iostream>
#include<cmath>
using namespace std;
int main(){
	const int n=100;
	long long sum=0,sumsq=0,sqsum=0;
	for(int i=1;i<=n;i++)sqsum+=i*i;
	sum=n*(n+1)/2;
	sumsq=sum*sum;
	cout<<sumsq-sqsum<<endl;
	return 0;
}