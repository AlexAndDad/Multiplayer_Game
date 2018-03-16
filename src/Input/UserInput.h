//
// Created by ahodges on 16/03/18.
//

#ifndef MULTIPLAYER_GAME_USERINPUT_H
#define MULTIPLAYER_GAME_USERINPUT_H
#include <boost/noncopyable.hpp>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <array>

struct UserInput :boost::noncopyable {

    UserInput(GLFWwindow * window_);
    static void getInput(GLFWwindow* window,int key, int scancode, int action, int mods);

    GLFWwindow * window;



    enum GameKey{
        Quit,
        CameraBack,
        CameraForward,
        CameraLeft,
        CameraRight,
        GameKeySize
    };
    std::array<bool,GameKeySize> keys_pressed = {};
};


#endif //MULTIPLAYER_GAME_USERINPUT_H
