
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


template<typename T> struct Shape
{
};

template<typename T> struct Triangle
{
	Vertex3D<T> vertex[3];//P1 es esquina inferior izquierda, luego la suoerior y al final la derecha
};

template<typename T> struct Squared
{
	Triangle<T> triangles[2];//P1 es esquina inferior izquierda, luego la superior y al final la derecha

	Squared()
	{
	}
	Squared(T x1,T y1,T z1,T x2,T y2,T z2)
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

template<typename T> struct Cube : public Shape<T>
{
	Triangle<T> triangles[12];

	/**
	*\brief P1 es el punto izquierdo tracero inferior, P2 es punto superior derecho frontal
	**/
	Cube(T x1,T y1,T z1,T x2,T y2,T z2)
	{
		//Lado 1 : atras
		//T1
		triangles[0].vertex[0] = x1;
		triangles[0].vertex[1] = y1;
		triangles[0].vertex[2] = z1;
		triangles[0].vertex[3] = x1;
		triangles[0].vertex[4] = y2;
		triangles[0].vertex[5] = z1;
		triangles[0].vertex[6] = x2;
		triangles[0].vertex[7] = y1;
		triangles[0].vertex[8] = z1;
		//T2
		triangles[1].vertex[0] = x1;
		triangles[1].vertex[1] = y2;
		triangles[1].vertex[2] = z1;
		triangles[1].vertex[3] = x2;
		triangles[1].vertex[4] = y2;
		triangles[1].vertex[5] = z1;
		triangles[1].vertex[6] = x2;
		triangles[1].vertex[7] = y1;
		triangles[1].vertex[8] = z1;

		//Lado 2 : derecho
		//T3
		triangles[2].vertex[0] = x2;
		triangles[2].vertex[1] = y1;
		triangles[2].vertex[2] = z2;
		triangles[2].vertex[3] = x2;
		triangles[2].vertex[4] = y2;
		triangles[2].vertex[5] = z2;
		triangles[2].vertex[6] = x2;
		triangles[2].vertex[7] = y1;
		triangles[2].vertex[8] = z1;
		//T4
		triangles[3].vertex[0] = x2;
		triangles[3].vertex[1] = y2;
		triangles[3].vertex[2] = z2;
		triangles[3].vertex[3] = x2;
		triangles[3].vertex[4] = y2;
		triangles[3].vertex[5] = z1;
		triangles[3].vertex[6] = x2;
		triangles[3].vertex[7] = y1;
		triangles[3].vertex[8] = z1;
		
		//Lado 3 : frente
		//T5
		triangles[4].vertex[0] = x1;
		triangles[4].vertex[1] = y1;
		triangles[4].vertex[2] = z2;
		triangles[4].vertex[3] = x1;
		triangles[4].vertex[4] = y2;
		triangles[4].vertex[5] = z2;
		triangles[4].vertex[6] = x2;
		triangles[4].vertex[7] = y1;
		triangles[4].vertex[8] = z2;
		//T6
		triangles[5].vertex[0] = x1;
		triangles[5].vertex[1] = y2;
		triangles[5].vertex[2] = z2;
		triangles[5].vertex[3] = x2;
		triangles[5].vertex[4] = y2;
		triangles[5].vertex[5] = z2;
		triangles[5].vertex[6] = x2;
		triangles[5].vertex[7] = y1;
		triangles[5].vertex[8] = z2;

		//Lado 4 : izquierdo
		//T7
		triangles[6].vertex[0] = x1;
		triangles[6].vertex[1] = y1;
		triangles[6].vertex[2] = z2;
		triangles[6].vertex[3] = x1;
		triangles[6].vertex[4] = y2;
		triangles[6].vertex[5] = z2;
		triangles[6].vertex[6] = x1;
		triangles[6].vertex[7] = y1;
		triangles[6].vertex[8] = z1;
		//T8
		triangles[7].vertex[0] = x1;
		triangles[7].vertex[1] = y2;
		triangles[7].vertex[2] = z2;
		triangles[7].vertex[3] = x1;
		triangles[7].vertex[4] = y2;
		triangles[7].vertex[5] = z1;
		triangles[7].vertex[6] = x1;
		triangles[7].vertex[7] = y1;
		triangles[7].vertex[8] = z1;

		//Lado 5 : arriba
		//T9
		triangles[8].vertex[0] = x1;
		triangles[8].vertex[1] = y2;
		triangles[8].vertex[2] = z2;
		triangles[8].vertex[3] = x1;
		triangles[8].vertex[4] = y2;
		triangles[8].vertex[5] = z1;
		triangles[8].vertex[6] = x2;
		triangles[8].vertex[7] = y2;
		triangles[8].vertex[8] = z2;
		//T10
		triangles[9].vertex[0] = x2;
		triangles[9].vertex[1] = y2;
		triangles[9].vertex[2] = z2;
		triangles[9].vertex[3] = x1;
		triangles[9].vertex[4] = y2;
		triangles[9].vertex[5] = z1;
		triangles[9].vertex[6] = x2;
		triangles[9].vertex[7] = y2;
		triangles[9].vertex[8] = z1;

		//Lado 6 : abajo		
		//T11
		triangles[10].vertex[0] = x1;
		triangles[10].vertex[1] = y1;
		triangles[10].vertex[2] = z2;
		triangles[10].vertex[3] = x1;
		triangles[10].vertex[4] = y1;
		triangles[10].vertex[5] = z1;
		triangles[10].vertex[6] = x2;
		triangles[10].vertex[7] = y1;
		triangles[10].vertex[8] = z2;
		//T10
		triangles[11].vertex[0] = x2;
		triangles[11].vertex[1] = y1;
		triangles[11].vertex[2] = z2;
		triangles[11].vertex[3] = x1;
		triangles[11].vertex[4] = y1;
		triangles[11].vertex[5] = z1;
		triangles[11].vertex[6] = x2;
		triangles[11].vertex[7] = y1;
		triangles[11].vertex[8] = z1;
	}
	virtual void buffer(GLenum usage)
	{
		glBufferData(GL_ARRAY_BUFFER, sizeof(triangles), triangles, usage);
	}
};

}

#endif