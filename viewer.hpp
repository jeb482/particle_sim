#include <iostream>
#include "snapshot.hpp"
#include <glad\glad.h>
#include <GLFW\glfw3.h>
#include <memory>

class Viewer {

protected:
	
	GLFWwindow* m_window;

public:

	Viewer() {
		 m_window = glfwCreateWindow(400,300,"Particle System Viewer",nullptr, nullptr);
		 if (!m_window) {
			 std::cout << "Failed to Create Window" << std::endl;
		 }
		 glfwMakeContextCurrent(m_window);
		 gladLoadGL();
	}

	~Viewer() {
		delete m_window;
	}

	void run() {
		while (!glfwWindowShouldClose(m_window))
		{

			draw();
			// Keep running
		}
	}


	void draw(const Snapshot& snap) {

	}



	



};