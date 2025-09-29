#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int getRandomNumber(){
    return rand()%100 + 1;
}
string giveHint(int user_guess, int secretNumber){
    if(user_guess == secretNumber){
        return "Right";
    }
    else if(abs(user_guess - secretNumber) <= 10){
        return "Very Hot!";
    }
    else if(abs(user_guess - secretNumber) <= 20){
        return "Hot!";
    }
    else if(abs(user_guess - secretNumber) <= 30){
        return "Warm!";
    }
    else if(abs(user_guess - secretNumber) <= 50){
        return "Cold!";
    }
    else{
        return "Ice Cold!";
    }

}
void runGuess(){
    int scretNumber = getRandomNumber(); 
    int user_guess;
    string hint;
    int attempts = 0;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    do{
        cout<<"Enter your guess: ";
        cin>>user_guess;
        attempts++;

        hint=giveHint(user_guess,scretNumber);

        if(hint=="Right"){
            cout<<"Congratulations! You've guessed the number "<<scretNumber<<" in "<<attempts<<" attempts."<<endl;
        }
        else{
            cout<<hint<<endl;
        }
    }while(hint!="Right");

}
int main(){
    srand(time(0));
    runGuess();
    return 0;
}
