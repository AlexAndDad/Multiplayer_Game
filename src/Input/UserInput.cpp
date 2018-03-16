//
// Created by ahodges on 16/03/18.
//

#include "UserInput.h"

UserInput::UserInput(GLFWwindow *window_)
{
    window = window_;

    //Set callbacks
    glfwSetKeyCallback(window, &UserInput::getInput);
}

void UserInput::getInput(GLFWwindow *window, int key, int scancode, int action, int mods)
{
    auto pv = glfwGetWindowUserPointer(window);
    auto self = reinterpret_cast<UserInput*>(pv);

    auto pressed=[](int action)
    {
        return action == GLFW_PRESS || action == GLFW_REPEAT;
    };

    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
    if (key == GLFW_KEY_S)
    {
       self->keys_pressed[CameraBack] = pressed(action);
    }
    if (key == GLFW_KEY_W)
    {
       self->keys_pressed[CameraForward] = pressed(action);
    }
    if (key == GLFW_KEY_A)
    {
        self->keys_pressed[CameraLeft] = pressed(action);
    }
    if (key == GLFW_KEY_D)
    {
        self->keys_pressed[CameraRight] = pressed(action);
    }

}