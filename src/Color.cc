
#include "gl.hh"


namespace oct::gl
{

		Color::Color()
		{
		}
		Color::Color(real r,real g,real b,real a)
		{
			this->r = r;
			this->g = g;
			this->b = b;
			this->a = a;
		}
		Color::Color(real r,real g,real b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
			this->a = 1;//opaco
		}

		void Color::clear()
		{
			glClearColor(r,g,b,a);
		}

		Color Color::inverse() const
		{
			Color color;
			color.r = real(1) - r;
			color.g = real(1) - g;
			color.b = real(1) - b;
			color.a = a;
			return  color;
		}

	const Color Color::white = Color(1,1,1);
	const Color Color::black = Color(0,0,0);
	const Color Color::red = Color(1,0,0);
	const Color Color::green = Color(0,1,0);
	const Color Color::blue = Color(0,0,1);
	const Color Color::purple = Color(1,0,1);
	const Color Color::yellow = Color(1,1,0);
	const Color Color::brow = Color(0,1,1);
}