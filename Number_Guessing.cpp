#include <bits/stdc++.h>
using namespace std;

int main() {
    srand((unsigned int) time(NULL));
    int number = (rand()%100) + 1;
    int guess;
    do{
        cout<<"Enter the Number between 1 to 100"<<endl;
        cin>>guess; 
        if(guess==number){
            cout<<"Congratulation..You did it!!!!"<<endl;
            break;
        }
        else if(guess>number){
            cout<<"Enter the Smallest Number than Guess"<<endl;
        }
        else{
            cout<<"Enter the Biggest Number than Guess"<<endl;
        }

    }while(guess!=number);
    return 0;
}