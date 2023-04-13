//Linear Search
#include<iostream>
using namespace std;
int arrSize;
bool linerSearch(int arr[]){
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    for (int i = 0; i < arrSize; i++)
    {
        if (key==arr[i])
        {
           return 0;
        }
    }
    return 1;
}
int main(){
    cout<<"Enter the size of the array"<<endl;
    cin>>arrSize;

    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout<<"Enter "<<i<<"th element"<<endl;
        cin>>arr[i];
    }
    bool keyFind = linerSearch(arr);
    // for (int i = 0; i < arrSize; i++)
    // {
    //     cout<< arr[i]<<" " ;
    // }
    if (keyFind!=0)
    {
        cout<<"Key not found"<<endl;
    }else
    {
        cout<<"Key Found"<<endl;
    }
    
    
    return 0;
    
}