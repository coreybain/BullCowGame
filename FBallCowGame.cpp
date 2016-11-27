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
    
    constexpr int MAX_TRIES = 8;
    
    MyMaxTries = MAX_TRIES;
    MyCurrentTry = 1;
    
    return;
}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }

int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const {
    return false;
}

bool FBullCowGame::CheckGuessValidity(std::string) {
    return false;
}
