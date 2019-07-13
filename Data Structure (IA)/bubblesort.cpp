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

void bubblesort(){
    bool swapped = false;
    while(true){
            swapped = false;
            for(int i=0;i<n-1;i++){
                if(arr[i] > arr[i+1]){
                    int tmp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = tmp;
                    swapped = true;
                }
            }
            if(swapped == false) break;
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
    bubblesort();
    output();
}
