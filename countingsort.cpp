#include<stdio.h>
#include<iostream>

using namespace std;

/***
a simple code to show the implement of counting sort
***/

/***

Problem Preview:

You will be given N numbers. You have to sort them in ascending order.

Suppose you are given 5 numbers :
4 5 3 2 1
Your our output should be :
1 2 3 4 5

Ranges :
1 <= N <= 100000
1 <= each number ( Xi) <= 100

**/
#define countLimit 100
int n;
int arr[100010];          // input N numbers
int counting[countLimit + 5];        // for counting each number
int sortedArray[100010];  // output N numbers

void takeInput(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
}

void resetCounter(){
    for(int i=1;i<=countLimit;i++){
        counting[i] = 0;
    }
}

void countInputs(){
    for(int i=0;i<n;i++){
        int index = arr[i];
        counting[index]++;
    }
}

void sortAndStore(){
    int index = 0;
    for(int i=1;i<=countLimit;i++){
        for(int j=0;j<counting[i];j++){
            sortedArray[index] = i;
            index++;
        }
    }
}


void printResult(){
    for(int i=0;i<n;i++){
        cout<<sortedArray[i]<<" ";
    }
    cout<<endl;
}

int main(){

    takeInput();
    resetCounter();
    countInputs();
    sortAndStore();
    printResult();

}

