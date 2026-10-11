#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    int arr[]={1,2,3,2,4};
    unordered_set<int> s;
    for (int i=0; i<5;i++){
        if (s.find(arr[i]) != s.end()){
            cout<<arr[i]<<" is repeated"<<endl;
            return false;
        }
        s.insert(arr[i]);
    }
    cout<<"No elements repeated"<<endl;
    return 0;
}