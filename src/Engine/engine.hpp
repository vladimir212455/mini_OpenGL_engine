#include <map>
#include "Camera/camera.cpp"
#include "Camera/camera.hpp"
#include "Object/Object.hpp"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <regex>

class Engine 
{
  static Camera camera;
  GLFWwindow *window;
  std::vector<Object> render_queue;
  const unsigned int SCR_WIDTH = 800;
  const unsigned int SCR_HEIGHT = 600;
  static float lastX;
  static float lastY;
  static bool firstMouse;
  float deltaTime = 0.0f;
  float lastFrame = 0.0f;

  static void framebuffer_size_callback(GLFWwindow* window, int width, int height);
  static void mouse_callback(GLFWwindow* window, double xpos, double ypos);
  static void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
  void processInput(GLFWwindow *window);
  unsigned int loadTexture(const char *path);
public:
    Engine(int SCR_WIDTH_, int SCR_HEIGHT_) : SCR_HEIGHT(SCR_HEIGHT_), SCR_WIDTH(SCR_WIDTH_)
    {
        lastX = (float)SCR_WIDTH / 2.0;
        lastY = (float)SCR_HEIGHT / 2.0;
        firstMouse = true;
        Camera camera_(glm::vec3(0.0f, 0.0f, 3.0f), glm::vec3(0.0f, 1.0f, 0.0f));
        camera = camera_;
    }
    void init();
    void run();
    void destroy();
};