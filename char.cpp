#include<iostream>
using namespace std;
#define size 2 
int main(){
char gender[size];
for (int i=0;i<size;i++){
    cout <<"enter your gender "<<i<<" : "<<endl;
    cin>>gender[i];
}
for(int i=0;i<size;i++){
    cout <<"the gender of "<<i<<" is a "<<gender[i]<<endl;
}
    return 0;
}  