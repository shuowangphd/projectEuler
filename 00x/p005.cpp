#include<iostream>
#include<cmath>
using namespace std;
void getpf(int *pf,int n){
		int i=2;
		while(i*i<=n){
			for(int j=i*2;j<=n;j+=i)pf[j]=1;
			i++;
			while(pf[i]==1)i++;
		}
}
int main(){
	const int n=20;
	double logn=log(n);
	long long res=1;
	int pf[n+1]={};
	getpf(pf,n);
	for(int i=2;i<=n;i++){
		if(pf[i]==0){
			int a=logn/log(i);
			res*=pow(i,a);
			cout<<i<<" "<<a<<" "<<res<<endl;
		}
	}
	cout<<res<<endl;
	return 0;
}