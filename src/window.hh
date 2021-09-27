

#ifndef OCTETOS_SPACE_WINDOW_HH
#define OCTETOS_SPACE_WINDOW_HH

#include <GLFW/glfw3.h>
#include <string>


namespace oct::gl
{

	class Window
	{
	public:
		Window(int width, int height, const char *title, GLFWmonitor *monitor, GLFWwindow *share);
		Window(int width, int height, const char *title);
		//>>wrappeds
		void set_input(int mode, int value);
		void swap_buffer();
		int getKey(int key);
		//<<wrappeds
		
		operator GLFWwindow*();
		
		void create(int width, int height, const char *title, GLFWmonitor *monitor, GLFWwindow *share);
		void create(int width, int height, const char *title);
		void create(int width, int height, const std::string& title);
		void current();


	private:
		GLFWwindow* window;
	};


}

#endif
