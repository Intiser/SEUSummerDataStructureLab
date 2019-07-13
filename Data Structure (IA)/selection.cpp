#include<stdio.h>
#include<iostream>

using namespace std;

#define number 100000

int arr[number+10];
int n;

void input(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void selectionsort(){
    for(int i=0;i<n;i++){
        int mx = arr[i];
        int ind = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] > mx){
                mx = arr[j];
                ind = j;
            }
        }
        swap(arr[i],arr[ind]);

    }
}

void output(){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    input();
    selectionsort();
    output();
}
