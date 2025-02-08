#include<iostream>
#include<vector>
using namespace std;


bool isPrime(int n){
    int count = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==1){
        return true;
        
    }
    else if(count==2){
        
        return true;
    }
    else{
        
        return false;
    }

};

vector<int> factorList(int n){
    vector<int> factor;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            factor.push_back(i);
        }
    }

    return factor;
    
};

int nextPrime(int n){
    n++;
    
    while(!isPrime(n)){
        n++;
    }
    return n;
};

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(isPrime(num)){
        cout<<"This number is prime"<<endl;
        int next = nextPrime(num);
        cout<<next<<endl;
        
    }
    else{
        cout<<"This number is not prime"<<endl;
        vector<int> factors = factorList(num);
        for(int i=0; i<factors.size();i++){
            cout<<factors[i]<<" ";
        }
        
    }

  

}