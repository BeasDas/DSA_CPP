//Mini Integer Calculator using Switch Statement
#include<iostream>
using namespace std;
int main(){
    int input1, input2;
    char opt;
    cout<<"Enter a Number"<<endl;
    cin>>input1;
    cout<<"Available operations"<<endl;
    cout<<"1. +"<<endl;
    cout<<"2. -"<<endl;
    cout<<"3. *"<<endl;
    cout<<"4. /"<<endl;
    cout<<"Enter an Operator"<<endl;
    cin>>opt;
    switch (opt)
    {
     case '+':
        cout<<"Enter another Number"<<endl;
        cin>>input2;
        cout<<"The answer is "<<input1<<" + "<<input2<<" = "<< (input1+input2) <<endl;
        break;
     case '-':
        cout<<"Enter another Number"<<endl;
        cin>>input2;
        cout<<"The answer is "<<input1<<" - "<<input2<<" = "<< (input1-input2) <<endl;
        break;
     case '*':
        cout<<"Enter another Number"<<endl;
        cin>>input2;
        cout<<"The answer is "<<input1<<" * "<<input2<<" = "<< (input1*input2) <<endl;
        break;
     case '/':
        cout<<"Enter another Number"<<endl;
        cin>>input2;
        cout<<"The answer is "<<input1<<" / "<<input2<<" = "<< (input1/input2) <<endl;
        break;
    
     default:
        cout<<"Invalid Operation"<<endl;
        break;
    }
    return 0;
}
