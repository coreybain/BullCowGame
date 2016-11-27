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

class FBullCowGame {
    
public:
    
    FBullCowGame(); // Contructor
    
    int32 GetMaxTries() const;
    int32 GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); //TODO: Make a more rich return value
    bool CheckGuessValidity(FString); //TODO: Make a more rich return
    
    
private:
    //See constructor for init
    int32 MyCurrentTry;
    int32 MyMaxTries;
};

#endif /* FBallCowGame_hpp */
