// Max_Min in an array
#include<iostream>
using namespace std;
int sizeofArray;
int isMin(int arr[]){
 int min=arr[0];
 for (int i = 0; i < sizeofArray; i++)
 {
    if (arr[i]<min)
    {
        min=arr[i];
    }
    
 }
 
    return min;

}

int isMax(int arr[]){
 int max=INT_MIN;
 for (int i = 0; i < sizeofArray; i++)
 {
    if (arr[i]>max)
    {
        max=arr[i];
    }
    
 }

    return max;

}
int main(){
    cout<<"Enter the size of the array"<<endl;
    cin>>sizeofArray;
    int arr[sizeofArray];
    for (int i = 0; i < sizeofArray; i++)
    {
        cin>>arr[i];
    }
    int min_Num=isMin(arr);
    int max_Num=isMax(arr);
    cout<<min_Num<<endl;
    cout<<max_Num<<endl;
}