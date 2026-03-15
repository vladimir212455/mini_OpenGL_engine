#include <glm/fwd.hpp>
#include "Camera/camera.cpp"
#include "Camera/camera.hpp"
#include "Object/Model/shader.hpp"
#include "Object/Object.hpp"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <memory>
#include <vector>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Engine 
{
    std::unique_ptr<Shader> shader;
    std::unique_ptr<Shader> skyboxShader;
    unsigned int cubeVAO, cubeVBO;
    unsigned int skyboxVAO, skyboxVBO;
    std::vector<std::string> faces;
    unsigned int cubeTexture;
    unsigned int cubemapTexture;
  GLFWwindow *window;
  std::vector<Object> render_queue;
  float deltaTime = 0.0f;
  float lastFrame = 0.0f;

  static void framebuffer_size_callback(GLFWwindow* window, int width, int height);
  static void mouse_callback(GLFWwindow* window, double xpos, double ypos);
  static void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
  void processInput(GLFWwindow *window);
  unsigned int loadTexture(const char *path);
  unsigned int loadCubemap(std::vector<std::string> faces);
public:

    int init();
    int run();
    int destroy();
};