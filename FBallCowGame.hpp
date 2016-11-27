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
    
    FBullCowGame(); // Contructor
    
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;
    
    void Reset(); //TODO: Make a more rich return value
    bool CheckGuessValidity(std::string); //TODO: Make a more rich return
    
    
private:
    //See constructor for init
    int MyCurrentTry;
    int MyMaxTries;
};

#endif /* FBallCowGame_hpp */
