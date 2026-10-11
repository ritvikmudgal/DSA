#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of elements- ";
    cin>>n;
    int* arr= new int[n];
    for (int i=0;i<n;i++){
        cout<<"Enter element "<<i<<" - ";
        cin>>arr[i];
    }
    for (int i=1; i<n;i++){
        arr[i]=arr[i]+ arr[i-1];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}