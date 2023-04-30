// Swapping alternative elements in an array
#include<iostream>
using namespace std;

int arrSize;

int swapAlt(int arr[]){
    int temp=0;
    int sizeFinal=0;
    if (arrSize %2==0)
    {
        sizeFinal=arrSize;
    }else{
        sizeFinal=arrSize-1;
    }
    
    for (int i = 0; i < sizeFinal; i+=2)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }

    for (int i = 0; i <arrSize; i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
    return 0;
    
}
int main(){
    int arr[arrSize];
    cout<<"Enter the size of the array"<<endl;
    cin>>arrSize;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0; i<arrSize; i++){
        cout<<"Enter an element"<<endl;
        cin>>arr[i];
    }
    swapAlt(arr);
    return 0;
}