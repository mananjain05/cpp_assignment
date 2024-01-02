#include<iostream>
#include<cmath>
using namespace std;
void square_root(int n){
    for (int i=1;i<=n;i++){
        cout<<sqrt(i)<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    square_root(n);
    
}