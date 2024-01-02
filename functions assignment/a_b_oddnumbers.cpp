#include<iostream>
using namespace std;
void oddnum(int a,int b){
    for(int i=min(a,b);i<=max(a,b);i++){
        if (i%2!=0) cout<<i<<endl;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    oddnum(a,b);
}