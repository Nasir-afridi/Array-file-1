#include<iostream>
#include<string>
using namespace std;
#define size 3

int main() { 
string names[size];
for(int i=0;i<size;i++){
    cout<<" enter the name of person : ";
    cin>>names[i];
}
for(int i=0;i<size;i++){
    cout<<"the name of person is "<<names[i]<<endl; 
}

    return 0;
} 