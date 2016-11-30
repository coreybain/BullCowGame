//
//  FBallCowGame.hpp
//  BullCowGame
//
//  Created by Corey Baines on 27/11/16.
//  Copyright © 2016 Corey Baines. All rights reserved.
//

#ifndef FBallCowGame_hpp
#define FBallCowGame_hpp

#include <stdio.h>
#include <string>

using FString = std::string;
using int32 = int;

struct FBullCowCount {
    int32 Bulls = 0;
    int32 Cows = 0;
};

enum class EGuessStatus {
    OK,
    Not_Isogram,
    Wrong_Length,
    Not_Lower_Case
};

class FBullCowGame {
    
public:
    
    FBullCowGame(); // Contructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    int32 GetHiddenWordLength() const;
    bool IsGameWon() const;
    
    EGuessStatus CheckGuessValidity(FString) const; //TODO: Make a more rich return
    void Reset(); //TODO: Make a more rich return value
    
    FBullCowCount SubmitGuess(FString);
    
private:
    //See constructor for init
    int32 MyCurrentTry;
    int32 MyMaxTries;
    FString MyHiddenWord;
};

#endif /* FBallCowGame_hpp */
