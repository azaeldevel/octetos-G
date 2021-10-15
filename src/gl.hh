
#ifndef OCTETOS_SPACE_HH
#define OCTETOS_SPACE_HH

#include <GL/glew.h>


namespace oct::gl
{
#ifdef OCTETOS_G_LOW 
	typedef GLfloat real;
#elif OCTETOS_G_HIGH
	typedef GLfdouble real;
#else 
	#error "No se definio la presicion."
#endif

	struct Color
	{
		real r;
		real g;
		real b;
		real a;

		Color();
		Color(real r,real g,real b,real a);
		Color(real r,real g,real b);

		void clear();

		Color inverse() const;

		static const Color white;
		static const Color black;
		static const Color red;
		static const Color green;
		static const Color blue;
		static const Color purple;
		static const Color brow;
		static const Color yellow;
	};

}
namespace oct::gl::d2
{
	struct Vertex
	{
		real x,y;
	};
}
namespace oct::gl::d3
{

	struct Vertex : public d2::Vertex
	{
		real z;
	};

	struct Triangle
	{
		Vertex vertex[3];//P1 es esquina inferior izquierda, luego la suoerior y al final la derecha

		void set(const Color& color)
		{
			vertex[0].x = color.r;
			vertex[0].y = color.g;
			vertex[0].z = color.b;
			vertex[1].x = color.r;
			vertex[1].y = color.g;
			vertex[1].z = color.b;
			vertex[2].x = color.r;
			vertex[2].y = color.g;
			vertex[2].z = color.b;
		}
	};

	struct Square
	{
		Triangle triangles[2];//P1 es esquina inferior izquierda, luego la superior y al final la derecha

		Square()
		{
		}
		/**
		*\brief P1 es vertice inferior izquierdo, P2 es vertice superio derecho
		**/
		Square(real x1,real y1,real z1,real x2,real y2,real z2)
		{
			set(x1,y1,z1,x2,y2,z2);
		}
		void set(real x1,real y1,real z1,real x2,real y2,real z2)
		{
			//T1
			triangles[0].vertex[0].x = x1;
			triangles[0].vertex[0].y = y1;
			triangles[0].vertex[0].z = z1;
			triangles[0].vertex[1].x = x1;
			triangles[0].vertex[1].y = y2;
			triangles[0].vertex[1].z = z2;
			triangles[0].vertex[2].x = x2;
			triangles[0].vertex[2].y = y1;
			triangles[0].vertex[2].z = z2;

			//T2
			triangles[1].vertex[0].x = x2;
			triangles[1].vertex[0].y = y2;
			triangles[1].vertex[0].z = z2;
			triangles[1].vertex[1].x = x2;
			triangles[1].vertex[1].y = y1;
			triangles[1].vertex[1].z = z1;
			triangles[1].vertex[2].x = x1;
			triangles[1].vertex[2].y = y2;
			triangles[1].vertex[2].z = z1;
		}
		void set(const Color& color)
		{
			triangles[0].set(color);
			triangles[1].set(color);
		}
	};

	struct Cube
	{
		Square square[6];

		/**
		*\brief P1 es el punto izquierdo tracero inferior, P2 es punto superior derecho frontal
		**/
		Cube(real x1,real y1,real z1,real x2,real y2,real z2)
		{
			//Lado 1 : atras
			square[0].set(x1,y1,z1,x2,y2,z1);
			//Lado 2 : derecho
			square[1].set(x2,y1,z1,x2,y2,z2);		
			//Lado 3 : frente
			square[2].set(x2,y1,z2,x1,y2,z2);
			//Lado 4 : izquierdo
			square[3].set(x1,y1,z2,x1,y2,z1);
			//Lado 6 : abajo
			square[4].set(x1,y1,z1,x2,y1,z2);
			//Lado 5 : arriba
			square[5].set(x1,y2,z1,x2,y2,z2);
		}
		Cube(const Color colors[6])
		{
			set(colors);
		}
		Cube(const Color& color)
		{
			set(color);
		}
		void set(const Color colors[6])
		{
			//Lado 1 : atras
			square[0].set(colors[0]);
			//Lado 2 : derecho
			square[1].set(colors[1]);		
			//Lado 3 : frente
			square[2].set(colors[2]);
			//Lado 4 : izquierdo
			square[3].set(colors[3]);
			//Lado 6 : abajo
			square[4].set(colors[4]);
			//Lado 5 : arriba
			square[5].set(colors[5]);
		}
		void set(const Color& color)
		{
			//Lado 1 : atras
			square[0].set(color);
			//Lado 2 : derecho
			square[1].set(color);		
			//Lado 3 : frente
			square[2].set(color);
			//Lado 4 : izquierdo
			square[3].set(color);
			//Lado 6 : abajo
			square[4].set(color);
			//Lado 5 : arriba
			square[5].set(color);
		}
	};

}

#endif