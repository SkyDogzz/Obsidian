#include "Window.hpp"
#include <GLFW/glfw3.h>

namespace Core {

Window::Window(const WindowSpecification specification)
{
    m_Specification = specification;

    if (!glfwInit()) {
        std::cerr << "Couldnt init glfw" << std::endl;
        return;
    }

    m_Handle = glfwCreateWindow(specification.Width, specification.Height, specification.Title.data(), NULL, NULL);
    if (!m_Handle) {

        std::cerr << "Couldnt create new window" << std::endl;
        return;
    }
    if (!m_Handle) {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(m_Handle);

    while (!glfwWindowShouldClose(m_Handle)) {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(m_Handle);

        glfwPollEvents();
    }

    glfwTerminate();
}

Window::~Window() { }

}
