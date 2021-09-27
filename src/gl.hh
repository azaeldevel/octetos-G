
#ifndef OCTETOS_SPACE_HH
#define OCTETOS_SPACE_HH

namespace oct::gl
{

template<typename T> struct Color
{
	T red;
	T green;
	T blue;
	T alpha;

	Color()
	{
	}
	Color(T r,T g,T b,T a)
	{
		red = r;
		green = g;
		blue = b;
		alpha = a;
	}

	void clear()
	{
		glClearColor(red,green,blue,alpha);
	}
};


}

#endif