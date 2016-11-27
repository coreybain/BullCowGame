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

class FBullCowGame {
    
public:
    void Reset(); //TODO: Make a more rich return value
    int GetMaxTries();
    int GetCurrentTry();
    bool IsGameWon();
    bool CheckGuessValidity(std::string); //TODO: Make a more rich return
    
    
private:
    int MyCurrentTry;
    int MyMaxTries;
};

#endif /* FBallCowGame_hpp */
