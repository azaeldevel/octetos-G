
#include "window.hh"

namespace oct::gl
{

	Window::Window(int w, int h, const char *t, GLFWmonitor *m, GLFWwindow *s)
	{
		window = glfwCreateWindow(w,h,t,m,s);
	}
	Window::Window(int w, int h, const char *t)
	{
		window = glfwCreateWindow(w,h,t,NULL,NULL);
	}
	void Window::set_input(int m, int v)
	{
		glfwSetInputMode(window, m, v);
	}
	void Window::swap_buffer()
	{
		glfwSwapBuffers(window);
	}
	int Window::getKey(int key)
	{
		return glfwGetKey(window,key);
	}
	
	Window::operator GLFWwindow*()
	{
		return window;
	}

	void Window::create(int w, int h, const char *t, GLFWmonitor *m, GLFWwindow *s)
	{
		window = glfwCreateWindow(w,h,t,m,s);
	}
	void Window::current()
	{
		glfwMakeContextCurrent(window);
	}
}