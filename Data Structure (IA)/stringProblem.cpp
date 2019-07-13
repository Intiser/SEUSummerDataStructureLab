#include<iostream>
#include<stdio.h>

using namespace std;

int stringCounter(string a, string b){
    int sizOfA = a.size();
    int sizOfB = b.size();

    int frequencyA[130];
    int frequencyB[130];

    for(int i=0;i<=128;i++){
        frequencyA[i] = 0;
        frequencyB[i] = 0;
    }

    for(int i=0;i<sizOfA;i++){
        char c = a[i];
        frequencyA[c]++;
    }

    for(int i=0;i<sizOfB;i++){
        char c = b[i];
        frequencyB[c]++;
    }

    int mn = 1000000000;

    for(int i=0;i<=128;i++){
        if(frequencyB[i] > 0){
            int val = frequencyA[i] / frequencyB[i];
            if( mn > val) mn = val;
            printf("%c = ", i);
            cout<<frequencyA[i]<<" "<<frequencyB[i]<<endl;
        }
    }


    return mn;
}


int main(){



    string a,b;
    cin>>a>>b;
    int ans = stringCounter(a,b);
    cout<<" result = "<<endl;
    cout<<ans<<endl;
}
