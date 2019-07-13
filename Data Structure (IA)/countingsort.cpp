#include<iostream>
#include<stdio.h>

using namespace std;

#define MAX_COUNT 100000+10 // maximum value of N
#define MAX_VALUE 100+10 // maximum value of each element

int n;
int arr[MAX_COUNT];
int countingArray[MAX_VALUE];
int sortedArray[MAX_COUNT];

int main(){

    // input
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // counting

    for(int i=1;i<=100;i++){
        countingArray[i] = 0;
    }

    for(int i=0;i<n;i++){
        int index = arr[i];
        countingArray[index]++;
    }

    // test
    for(int i=1;i<=100;i++){
        cout<<i<<" came "<<countingArray[i]<<" number of times "<<endl;
    }

    // sorting
    int sortedIndex = 0;
    for(int i=0;i<=100;i++){
        int countIndex = countingArray[i];
        while(countIndex > 0){
            countIndex--;
            sortedArray[sortedIndex] = i;
            sortedIndex++;
        }
    }



}
