#include<iostream>
using namespace std;

int main(){
    float n1, n2, n3, n4, avg = 0;
    cout << "Enter N1: ";
    cin>> n1;
    cout << "Enter N2: ";
    cin>> n2;
    cout << "Enter N3: ";
    cin>> n3;
    cout << "Enter N4: ";
    cin>> n4;
    avg=((n1+n2+n3+n4)/400)*100;
    cout<<"AVG = "<<avg;

    if(avg < 50){
        cout<<" Grade F";
    } else if(avg >= 50 && avg < 60){
        cout<<" Grade D";
    } else if(avg >= 60 && avg < 70){
        cout<<" Grade C";
    } else if(avg >= 70 && avg < 80){
        cout<<" Grade B";
    } else if(avg >= 80 && avg < 90){
        cout<<" Grade A";
    }else if(avg >= 90 && avg <= 100){
        cout<<" Grade A+";
    } else{
        cout<< " Invalid marks please enter correct marks";
    }
    cout<<endl;
    return 0;
}