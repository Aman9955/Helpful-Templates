#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
 return -1;
}

int main(){
    int arr[]={10,15,25,30,35,40,45,55,68,87};
    int n=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index=linear_search(arr,n,key);

    if(index!=-1){
        cout<<key<<" "<<index<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
return 0;
}