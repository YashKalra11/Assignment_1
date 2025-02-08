#include<iostream>
using namespace std;

int* numArray(int n){
    int* arr = new int[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    return arr;
}

int* revArray(int* arr,int n){
    int* rev = new int[n];

    for(int i=0; i<n; i++){
        rev[i] = arr[n-i-1];
    }

    return rev;
}






int main(){

    int* hello = numArray(5);

    int* rev = revArray(hello,5);

    for(int i=0; i<5; i++){
        cout<<rev[i]<<" ";
    }


    
    

}