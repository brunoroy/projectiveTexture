#ifndef SHADERSOURCES_H
#define SHADERSOURCES_H

#include <string>

struct ShaderSources
{
    /**
     * Default vertex shader
     */
    const std::string VERTEX_SHADER_DEFAULT {R"(
        #version 330 core

        layout(location = 0) in vec3 position;
        uniform mat4 matrix;

        void main()
        {
            gl_Position =  matrix * vec4(position, 1.0);
        }
    )"};

    /**
    * Default fragment shader
    */
    const std::string FRAGMENT_SHADER_DEFAULT {R"(
        #version 330 core

        layout(location = 0) out vec4 color;

        void main()
        {
            color = vec4(1.0, 1.0, 1.0, 1.0);
        }
    )"};
};

#endif // SHADERSOURCES_H
