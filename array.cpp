#include<iostream> 
using namespace std;
#define size 5

int main () {
int mymarks[size];
for(int i=0;i<size;i++){
    cout<<"enter marks of student";
    cin>>mymarks[i];
}

cout <<"***********************showing my numbers in array***************************************** : \n";
for(int i=0;i<size;i++){
    cout<<"boy says my marks is " <<mymarks[i]<<endl;
} 

    return 0;
}  