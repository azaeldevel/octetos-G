
#ifndef OCTETOS_SPACE_HH
#define OCTETOS_SPACE_HH

#include <GL/glew.h>

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

template<typename T> struct Vertex2D
{
	T x,y;
};

template<typename T> struct Vertex3D : public Vertex2D<T>
{
	T z;
};


template<typename T> struct Triangle
{
	Vertex3D<T> vertex[3];//P1 es esquina inferior izquierda, luego la suoerior y al final la derecha
};

template<typename T> struct Square
{
	Triangle<T> triangles[2];//P1 es esquina inferior izquierda, luego la superior y al final la derecha

	Square()
	{
	}
	Square(T x1,T y1,T z1,T x2,T y2,T z2)
	{
		set(x1,y1,z1,x2,y2,z2);
	}
	void set(T x1,T y1,T z1,T x2,T y2,T z2)
	{
		//T1
		triangles[0].vertex[0].x = x1;
		triangles[0].vertex[0].y = y1;
		triangles[0].vertex[0].z = z1;
		triangles[0].vertex[1].x = x1;
		triangles[0].vertex[1].y = y2;
		triangles[0].vertex[1].z = z1;
		triangles[0].vertex[2].x = x2;
		triangles[0].vertex[2].y = y1;
		triangles[0].vertex[2].z = z1;

		//T2
		triangles[1].vertex[0].x = x1;
		triangles[1].vertex[0].y = y2;
		triangles[1].vertex[0].z = z1;
		triangles[1].vertex[1].x = x2;
		triangles[1].vertex[1].y = y2;
		triangles[1].vertex[1].z = z2;
		triangles[1].vertex[2].x = x2;
		triangles[1].vertex[2].y = y1;
		triangles[1].vertex[2].z = z2;
	}
};

template<typename T> struct Cube
{
	Square<T> square[6];

	/**
	*\brief P1 es el punto izquierdo tracero inferior, P2 es punto superior derecho frontal
	**/
	Cube(T x1,T y1,T z1,T x2,T y2,T z2)
	{
		//Lado 1 : atras
		square[0].set(x1,y1,z1,x2,y2,z1);
		//Lado 2 : derecho
		square[1].set(x2,y1,z1,x2,y2,z2);		
		//Lado 3 : frente
		square[2].set(x2,y1,z2,x1,y2,z2);
		//Lado 4 : izquierdo
		square[3].set(x1,y1,z1,x1,y2,z2);
		//Lado 6 : abajo
		square[4].set(x1,y1,z1,x2,y1,z2);
		//Lado 5 : arriba
		square[5].set(x1,y2,z1,x2,y2,z2);
	}
};

}

#endif