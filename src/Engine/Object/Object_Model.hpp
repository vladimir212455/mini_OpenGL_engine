#include "Model/model.hpp"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Object.hpp"
class Object_Model : Object{
    Model model;
public:
    void Draw();
    void SetModel(const char *path);
    void SetShader(const char *path_v, const char *path_f);
    void SetScale(float scale);
    void SetPosition(float x, float y, float z);
};