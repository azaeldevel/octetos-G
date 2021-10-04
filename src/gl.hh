
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
	Triangle<T> triangles[12];

	/**
	*\brief P1 es el punto izquierdo tracero inferior, P2 es punto superior derecho frontal
	**/
	Cube(T x1,T y1,T z1,T x2,T y2,T z2)
	{
		//Lado 1 : atras
		//T1
		//T2

		//Lado 2 : derecho
		//T3
		//T4
		
		//Lado 3 : frente
		//T5;
		//T6

		//Lado 4 : izquierdo
		//T7
		//T8

		//Lado 5 : arriba
		//T9
		//T10

		//Lado 6 : abajo		
		//T11
		//T10
	}
	virtual void buffer(GLenum usage)
	{
		glBufferData(GL_ARRAY_BUFFER, sizeof(triangles), triangles, usage);
	}
};

}

#endif