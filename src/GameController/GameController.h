//
// Created by ahodges on 16/03/18.
//

#ifndef MULTIPLAYER_GAME_GAMECONTROLLER_H
#define MULTIPLAYER_GAME_GAMECONTROLLER_H

#include "src/Display/DisplayHandler.h"
#include "src/Input/UserInput.h"

struct GameController {

    GameController();

    DisplayHandler displayHandler;
    UserInput userInput;

};


#endif //MULTIPLAYER_GAME_GAMECONTROLLER_H
