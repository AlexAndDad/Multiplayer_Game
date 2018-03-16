#version 330 core
    layout(location = 1) in vec2 pos;

    void main()
    {
        gl_Position = vec4(pos, 0.0, 1.0);
    }