#include <queue>
#include <vector>
#include "Camera/camera.cpp"
#include "Object/Object.hpp"
#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Engine 
{
  Camera camera;
  std::queue<Object> render_queue;
  void framebuffer_size_callback(GLFWwindow* window, int width, int height);
  void mouse_callback(GLFWwindow* window, double xpos, double ypos);
  void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
  void processInput(GLFWwindow *window);
  //unsigned int loadTexture(const char *path);

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;
public:
    Engine();
    void init();
    void run();
    void destroy();
};