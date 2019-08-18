#include <iostream>
#include "viewer.hpp"
#include <glfw/glfw3.h>


int main() {

	if (!glfwInit())
	{
		std::cout << "GLFW Failed to Initialize" << std::endl;
		return 0;
	}


	Viewer* viewer = new Viewer();
	viewer->run();




	glfwTerminate();
	return 0;
}