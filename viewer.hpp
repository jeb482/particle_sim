#include <iostream>
#include <memory>

#include <glad\glad.h>
#include <GLFW\glfw3.h>

#include "simulation.hpp"
#include "snapshot.hpp"

class Viewer {

protected:
	
	GLFWwindow* m_window;
	std::shared_ptr<Snapshot> m_current_snapshot;
	std::shared_ptr<Simulation> m_simulation;

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
			m_snapshot = m_simulation->estimateFrameFromTime(m_current_snapshot, 0)
			draw();
			// Keep running
		}
	}


	void draw(const Snapshot& snap) {

	}



	



};