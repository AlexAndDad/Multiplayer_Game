//
// Created by ahodges on 16/03/18.
//

#ifndef MULTIPLAYER_GAME_DISPLAYHANDLER_H
#define MULTIPLAYER_GAME_DISPLAYHANDLER_H

#include <GL/glew.h>
#include <glm/glm.hpp>

#if __has_include(<OpenGL/gl.h>)
#include <OpenGL/gl.h>
#else

#include <GL/gl.h>

#endif

#include <GLFW/glfw3.h>

struct DisplayHandler {

    DisplayHandler();


    float SCR_WIDTH,SCR_HEIGHT;
    GLFWwindow* window;
    GLFWmonitor* monitor;

};


#endif //MULTIPLAYER_GAME_DISPLAYHANDLER_H
