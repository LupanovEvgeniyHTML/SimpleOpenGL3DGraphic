#ifndef CAMERA_H
#define CAMERA_H

#include <iostream>

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/string_cast.hpp>

using namespace std;

class Camera
{
    public:
        glm::vec3 position;
        glm::vec3 angles;
        glm::vec3 directionFront;
        glm::vec3 directionUp;
        glm::vec3 directionRight;

        glm::vec3 speedMovement;
        glm::vec3 speedRotation;

        GLfloat mass;
        GLfloat resistanceMovement;
        GLfloat momentInertia;
        GLfloat resistanceRotation;

        Camera(glm::vec3 position);
        glm::mat4 getViewMatrix();
        void update(glm::vec3 offsetPosition, glm::vec2 offsetDirection);

    private:
        void updateDirection();
};

#endif
