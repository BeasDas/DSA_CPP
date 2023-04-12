//Functions
#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for (int i = 0; i < b; i++)
    {
        ans = ans*a;
    }
    return ans;
}
int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    int result=power(a,b);
    cout<<result<<endl;
    return 0;
}