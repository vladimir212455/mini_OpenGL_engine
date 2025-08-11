#include "Object.hpp"

class Object_Vertices : Object{
    float vertices[];
public:
    void SetVertices(float vertices_[]);
    unsigned int loadTexture(char const * path);
};