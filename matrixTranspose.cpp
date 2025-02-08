#include<iostream>
using namespace std;

int main(){
     int arr[3][3], i , j;
        cout<<"Enter the elements of the matrix: ";
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                cin>>arr[i][j];
            }
        }

        cout<<"The matrix is: "<<endl;

        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    cout<<endl;

    int transpose[3][3], k , l;
    for(k=0; k<3; k++){
        for(l=0; l<3; l++){
            transpose[k][l] = arr[l][k];
        }
    }

    for(k=0; k<3; k++){
        for(l=0; l<3; l++){
            cout<<transpose[k][l]<<" ";
        }
        cout<<endl;
    }
}