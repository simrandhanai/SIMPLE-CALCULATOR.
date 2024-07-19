#include<iostream>
using namespace std;

int main(){
    float n1;
    cout<<"enter number 1: ";
    cin>>n1;

    char op;
    cout<<"enter an operator (+,-,/,*,%): ";
    cin>>op;

    float n2;
    cout<<"enter number 2: ";
    cin>>n2;

    switch(op){

        case '+':
            cout<<n1<<"+"<<n2<<"="<<n1+n2;
          break;

        case '-':
            cout<<n1<<"-"<<n2<<"="<<n1-n2;
            break;

        case '*':
            cout<<n1<<"*"<<n2<<"="<<n1*n2;
            break;

        case '/':
            cout<<n1<<"/"<<n2<<"="<<n1/n2;
            break;

        default:
            cout<<"ERORR.!! envalid operator";
            break;



    }
    return 0;

}