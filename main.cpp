//
//  main.cpp
//  BullCowGame
//
//  Created by Corey Baines on 27/11/16.
//  Copyright © 2016 Corey Baines. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//Introduce the game functions
void PrintInto();
void PlayGame();
string GetGuessAndPrint();

//Entry point for app
int main() {
    
    PrintInto();
    PlayGame();
    
    return 0;
}

void PlayGame() {
    
    //Loop for number of turns for user guesses
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
        GetGuessAndPrint();
        cout << endl;
    }
    return;
    
}

//Introduce the game function implimentation
void PrintInto() {
    
    constexpr int WORD_LENGTH = 5;

    cout << "This is the Bull Cow Game.\n";
    cout << "Can you guess the " << WORD_LENGTH;
    cout << " letters isogram I'm thinking of?\n";
    
    return;
    
}

string GetGuessAndPrint() {
    
    //    get the guess from the user
    cout << "Enter your guess: ";
    string Guess = "";
    getline(cin,Guess);
    
    //    repeat the guess back to them
    cout << "Your guess was: " << Guess << endl;
    
    return Guess;
    
}

