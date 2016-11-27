//
//  main.cpp
//  BullCowGame
//
//  This is the console exe, that makes use of BullCowClass,
//  this acts as the view of the MVC pattern, and is responsible
//  for all user interaction. for game logic see FBullCowGame class.
//
//  Created by Corey Baines on 27/11/16.
//  Copyright © 2016 Corey Baines. All rights reserved.
//

#include <iostream>
#include <string>
#include "FBallCowGame.hpp"

using FText = std::string;
using int32 = int;

//Introduce the game functions
void PrintInto();
void PlayGame();
FText GetGuessAndPrint();
bool AskToPlayAgain();

FBullCowGame BCGame;

//Entry point for app
int main() {
    
    bool bPlayAgain = false;
    do {
        PrintInto();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    }
    while (bPlayAgain);
    
    return 0;
    
}

void PlayGame() {
    
    BCGame.Reset();
    
    //Loop for number of turns for user guesses
    for (int32 count = 1; count <= BCGame.GetMaxTries(); count++) {
        
        FText Guess = GetGuessAndPrint();
        std::cout << "Your guess was: " << Guess << std::endl;
        std::cout << std::endl;
    }
    
    return;
    
}

//Introduce the game function implimentation
void PrintInto() {
    
    constexpr int32 WORD_LENGTH = 9;

    std::cout << "This is the Bull Cow Game.\n";
    std::cout << "Can you guess the " << WORD_LENGTH;
    std::cout << " letters isogram I'm thinking of?\n";
    
    return;
    
}

FText GetGuessAndPrint() {
    
    int32 CurrentTry = BCGame.GetCurrentTry();
    
    //    get the guess from the user
    std::cout << "Try " << CurrentTry << ". Enter your guess: ";
    FText Guess = "";
    getline(std::cin,Guess);
    
    return Guess;
    
}

bool AskToPlayAgain() {
    
    std::cout << "Do you want to play again? (y/n): ";
    FText Response = "";
    getline(std::cin,Response);
    std::cout << std::endl;
    return (Response[0] == 'y') || (Response[0] == 'Y');
    
}

