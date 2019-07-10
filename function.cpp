#include<stdio.h>
#include<iostream>

using namespace std;

/***
a sample code to show the sample functions
***/


/**  function for sum **/
int sum(int a, int b, int c){
    return a+b+c;
}

/** function for multiply **/
int multiply(int a,int b){
    return a*b;
}


/** function for printing a number **/
void printValue(int n){
    printf("Value = %d\n",n);
}


int main(){

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int val = sum(a,b,c);
    printValue(val);
    int mul = multiply(val,d);
    printValue(mul);
}
