#include <glm/fwd.hpp>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "Model/shader.hpp"

class Object
{
protected:
    Shader shader;
    glm::mat4 model_shader;
    glm::vec3 scale = glm::vec3(0.5);
    glm::vec3 position = glm::vec3(0, 0, 0);
public:
    void SetShader(const char *path_v, const char *path_f);
    void SetScale(float scale);
    void SetPosition(float x, float y, float z);
    glm::vec3 GetPosition();
    void virtual Draw()
    {
        std::cout << "Object::Draw" << std::endl;
    }
};