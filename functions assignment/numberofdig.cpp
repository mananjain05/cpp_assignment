#include<iostream>
using namespace std;
int square(int n){
    int temp=n;
    int i=0;
    while(n>0){
        n=n/10;
        i++;
    }
    cout<<i<<" ";
    return temp*temp;


}
int main(){
    int n;
    cin>>n;
    cout<<square(n);
}