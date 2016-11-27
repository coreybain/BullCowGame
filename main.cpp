//
//  main.cpp
//  BullCowGame
//
//  Created by Corey Baines on 27/11/16.
//  Copyright © 2016 Corey Baines. All rights reserved.
//

#include <iostream>
#include <string>


//Introduce the game functions
void PrintInto();
void PlayGame();
std::string GetGuessAndPrint();
bool AskToPlayAgain();

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
    
    //Loop for number of turns for user guesses
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 1; count <= NUMBER_OF_TURNS; count++) {
        
        std::string Guess = GetGuessAndPrint();
        std::cout << "Your guess was: " << Guess << std::endl;
        std::cout << std::endl;
    }
    
    return;
    
}

//Introduce the game function implimentation
void PrintInto() {
    
    constexpr int WORD_LENGTH = 9;

    std::cout << "This is the Bull Cow Game.\n";
    std::cout << "Can you guess the " << WORD_LENGTH;
    std::cout << " letters isogram I'm thinking of?\n";
    
    return;
    
}

std::string GetGuessAndPrint() {
    
    //    get the guess from the user
    std::cout << "Enter your guess: ";
    std::string Guess = "";
    getline(std::cin,Guess);
    
    return Guess;
    
}

bool AskToPlayAgain() {
    
    std::cout << "Do you want to play again? (y/n): ";
    std::string Response = "";
    getline(std::cin,Response);
    std::cout << std::endl;
    return (Response[0] == 'y') || (Response[0] == 'Y');
    
}

