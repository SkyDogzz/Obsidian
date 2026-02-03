#include "Vector.hpp"
#include "Window.hpp"
#include <iostream>

int main(void)
{
    Vec2 a = Vec2(2, 2);

    std::cout << a << std::endl;

    Core::WindowSpecification specification;
    specification.Title = "Easy window";
    Core::Window window = Core::Window(specification);
}
