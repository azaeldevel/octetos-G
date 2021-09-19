
#include "window.hh"

namespace oct::space
{

	Window::Window(int w, int h, const char *t, GLFWmonitor *m, GLFWwindow *s)
	{
		window = glfwCreateWindow(w,h,t,m,s);
	}
	void Window::set_input(int m, int v)
	{
		glfwSetInputMode(window, m, v);
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