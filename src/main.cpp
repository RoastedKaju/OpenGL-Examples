#include <iostream>

#include "GL/glew.h"
#include "GLFW/glfw3.h"

int main()
{
	auto result = glfwInit();

	if (result == GLFW_TRUE)
	{
		std::cout << "GLFW is successful." << std::endl;
	}
	// Window
	GLFWwindow* window = glfwCreateWindow(800, 600, "window", NULL, NULL);
	if (!window) return EXIT_FAILURE;
	// Window hints
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);
	// Window context
	glfwMakeContextCurrent(window);


	// GLEW
	if (glewInit() != GLEW_OK) return EXIT_FAILURE;

	// Viewport
	glViewport(0, 0, 800, 600);

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		glClear(GL_COLOR_BUFFER_BIT);
		glClearColor(1.0f, 0.0f, 0.0f, 1.0f);

		glfwSwapBuffers(window);
	}

	std::cout << "Hello World." << std::endl;
	return EXIT_SUCCESS;
}