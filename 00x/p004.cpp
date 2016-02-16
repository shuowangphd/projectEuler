#include<iostream>
using namespace std;
int reverse(int a){
    int b=0;
    while(a>0){
        b=b*10+a%10;
        a/=10;
    }
    return b;
}
bool isP(int a){
    return a==reverse(a);
}
int main() {
    int res=0,c;
    for(int i=999;i>99;i--){
        for(int j=999;j>=i;j--){
            c=i*j;
            if(c<res)break;
            if(isP(c))res=max(res,c);
        }
    }
    cout<<res<<endl;
    return 0;
}