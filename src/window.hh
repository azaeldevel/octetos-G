

#ifndef OCTETOS_SPACE_WINDOW_HH
#define OCTETOS_SPACE_WINDOW_HH

#include <GLFW/glfw3.h>

namespace oct::space
{

	class Window
	{
	public:
		Window(int width, int height, const char *title, GLFWmonitor *monitor, GLFWwindow *share);
		void set_input_mode(int mode, int value);
		
		operator GLFWwindow*();
		
		void create(int width, int height, const char *title, GLFWmonitor *monitor, GLFWwindow *share);
		void current();


	private:
		GLFWwindow* window;
	};


}

#endif
