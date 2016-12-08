//
//  FBallCowGame.cpp
//  BullCowGame
//
//  Created by Corey Baines on 27/11/16.
//  Copyright © 2016 Corey Baines. All rights reserved.
//

#include "FBallCowGame.hpp"

FBullCowGame::FBullCowGame() {
    
    Reset();
}

void FBullCowGame::Reset() {
    
    constexpr int32 MAX_TRIES = 8;
    const FString HIDDEN_WORD = "tomorrow";
    
    MyMaxTries = MAX_TRIES;
    MyHiddenWord = HIDDEN_WORD;
    
    MyCurrentTry = 1;
    return;
}

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }

int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

int32 FBullCowGame::GetHiddenWordLength() const { return MyHiddenWord.length(); }

bool FBullCowGame::IsGameWon() const {
    return false;
}

EGuessStatus FBullCowGame::CheckGuessValidity(FString Guess) const {
    if (false) { //If guess isnt isogram
        return EGuessStatus::Not_Isogram;
    } else if (false) { //if guess isnt lowercase
        return EGuessStatus::Not_Lower_Case;
    } else if (Guess.length() != GetHiddenWordLength()) { //if word guess is wrong
        return EGuessStatus:: Wrong_Length;
    } else {
        return EGuessStatus::OK;
    }
}

// Count bulls and cows and incument turns then return count
FBullCowCount FBullCowGame::SubmitValidGuess(FString Guess) {
    
    MyCurrentTry++;
    
    //Setup return variable
    FBullCowCount BullCowCount;
    
    int32 WordLength = MyHiddenWord.length(); // assuming same length as guess
    
    //Loop through all letters in the Hidden word
    for (int32 GChar = 0; GChar < WordLength; GChar++) {
        //Compare letters against guess
        for (int32 MHWChar = 0; MHWChar < WordLength; MHWChar++) {
            
            if (Guess[GChar] == MyHiddenWord[MHWChar]) {
                if (MHWChar == GChar) {
                    BullCowCount.Bulls++;
                } else {
                    BullCowCount.Cows++;
                }
            }
        }
        
    }
    
    return BullCowCount;
}
