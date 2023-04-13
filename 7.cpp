//Array reversal
#include<iostream>
using namespace std;

int reversal(int arr[], int arrSize){
    int arr2[arrSize];
    int i=arrSize-1;
    int j=0;
    while(i!=-1)
    {
        arr2[j]=arr[i];
        i--;
        j++;
    }

    for (int i = 0; i < arrSize; i++)
    {
         cout<< arr2[i]<<" " ;
    }
    return 0;
}
int main(){
    int arrSize;
    cout<<"Enter the size of the array"<<endl;
    cin>>arrSize;

    int arr[arrSize];
    for (int i = 0; i < arrSize; i++)
    {
        cout<<"Enter "<<i<<"th element"<<endl;
        cin>>arr[i];
    }
    reversal(arr, arrSize);
    return 0;
}