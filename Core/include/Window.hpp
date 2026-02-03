#pragma once

#include <GLFW/glfw3.h>
#include <iostream>
#include <string>

namespace Core {

struct WindowSpecification {
    std::string Title;
    uint32_t Width = 1280;
    uint32_t Height = 720;
};

class Window {
private:
    WindowSpecification m_Specification;
    GLFWwindow* m_Handle;

public:
    Window(const WindowSpecification specification = WindowSpecification());
    Window(const Window& other) = delete;
    Window& operator=(const Window& other) = delete;
    ~Window();
};

}
