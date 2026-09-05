#include<iostream>
using namespace std;

void name(int n){
    if(n==0){
        return;
    }

    cout<<"arjun"<<endl;
    name(n-1);
}

void num(int n){
    if(n==0){
        return;
    }

    num(n-1);
    cout<<n<<endl;
}

int sumN(int n){
    if(n==0){
        return 1;
    }
    return n+sumN(n-1);
    
}

int main(){
    name(3);
    num(3);
    return 0;

}