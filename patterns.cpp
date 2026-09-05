#include<iostream>
using namespace std;

void p1(){
     for (int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p2(){
    for(int i=1;i<6;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void p3(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"";
        }
        cout<<endl;
    }
}

void p4(){
    for(int i=0;i<=5;i++){
        for(int j=0;j<5-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void p5(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    // p1();
    // p2();
    // p3();
    p4();
    // p5();
    return 0;


}