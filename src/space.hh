
#ifndef OCTETOS_SPACE_HH
#define OCTETOS_SPACE_HH

namespace oct::space
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
};

template<typename T> void clear(const Color<T>& color)
{
	glClearColor(color.red,color.green,color.blue,color.alpha);
}


}

#endif