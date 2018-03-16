#include <cstdlib>
#include <GL/glew.h>
#include <glm/glm.hpp>

#if __has_include(<OpenGL/gl.h>)
#include <OpenGL/gl.h>
#else

#include <GL/gl.h>

#endif

#include <GLFW/glfw3.h>
#include <iostream>

//Source files
#include "src/GameController/GameController.h"
#include "src/Rendering/ShaderGen/Shaders.h"




int main(int argc, char* argv[])
{
    GameController gameController;


    //Geometry shader test
    Shaders shader("/home/ahodges/alex_dad/Multiplayer_Game/Shaders/Shapes/vertexShader.glsl","/home/ahodges/alex_dad/Multiplayer_Game/Shaders/Shapes/geometryShader.glsl","/home/ahodges/alex_dad/Multiplayer_Game/Shaders/Shapes/fragmentShader.glsl");
    //Shaders shader("/home/ahodges/alex_dad/Multiplayer_Game/Shaders/Shapes/vertexShader.glsl","/home/ahodges/alex_dad/Multiplayer_Game/Shaders/Shapes/fragmentShader.glsl");
    shader.use();

    GLuint VAO, VBO;
    glGenVertexArrays(1,&VAO);
    glGenBuffers(1,&VBO);



    float points[] = {
            -0.45f,  0.45f,
             0.45f,  0.45f,
             0.45f, -0.45f,
            -0.45f, -0.45f,
    };

    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER,VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(points),points,GL_STATIC_DRAW);


    glVertexAttribPointer(1,2,GL_FLOAT,GL_FALSE,0,0);
    glEnableVertexAttribArray(1);

    glBindVertexArray(0);





    while (!glfwWindowShouldClose(gameController.displayHandler.window)) {
        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glBindVertexArray(VAO);
        glDrawArrays(GL_POINTS, 0 , 4);



        glfwSwapBuffers(gameController.displayHandler.window);
        glfwPollEvents();
    }

}