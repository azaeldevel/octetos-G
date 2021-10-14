
#ifndef OCTETOS_SPACE_HH
#define OCTETOS_SPACE_HH

#include <GL/glew.h>

namespace oct::gl
{
	template<typename T> struct Color
	{
		T r;
		T g;
		T b;
		T a;

		Color()
		{
		}
		Color(T r,T g,T b,T a)
		{
			this->r = r;
			this->g = g;
			this->b = b;
			this->a = a;
		}
		Color(T r,T g,T b)
		{
			this->r = r;
			this->g = g;
			this->b = b;
			this->a = 1;//opaco
		}

		void clear()
		{
			glClearColor(r,g,b,a);
		}

		Color inverse() const
		{
			Color color;
			color.r = T(1) - r;
			color.g = T(1) - g;
			color.b = T(1) - b;
			color.a = a;
			return  color;
		}

		static const Color<T> white;
		static const Color<T> black;
		static const Color<T> red;
		static const Color<T> green;
		static const Color<T> blue;
		static const Color<T> purple;
		static const Color<T> brow;
		static const Color<T> yellow;
	};
	template<typename T> const Color<T> Color<T>::white = Color(1,1,1);
	template<typename T> const Color<T> Color<T>::black = Color(0,0,0);
	template<typename T> const Color<T> Color<T>::red = Color(1,0,0);
	template<typename T> const Color<T> Color<T>::green = Color(0,1,0);
	template<typename T> const Color<T> Color<T>::blue = Color(0,0,1);
	template<typename T> const Color<T> Color<T>::purple = Color(1,0,1);
	template<typename T> const Color<T> Color<T>::yellow = Color(1,1,0);
	template<typename T> const Color<T> Color<T>::brow = Color(0,1,1);

}
namespace oct::gl::d2
{
	template<typename T> struct Vertex
	{
		T x,y;
	};
}
namespace oct::gl::d3
{

	template<typename T> struct Vertex : public d2::Vertex<T>
	{
		T z;
	};

	template<typename T> struct Triangle
	{
		Vertex<T> vertex[3];//P1 es esquina inferior izquierda, luego la suoerior y al final la derecha

		void set(const Color<T>& color)
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

	template<typename T> struct Square
	{
		Triangle<T> triangles[2];//P1 es esquina inferior izquierda, luego la superior y al final la derecha

		Square()
		{
		}
		/**
		*\brief P1 es vertice inferior izquierdo, P2 es vertice superio derecho
		**/
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
		void set(const Color<T>& color)
		{
			triangles[0].set(color);
			triangles[1].set(color);
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
			square[3].set(x1,y1,z2,x1,y2,z1);
			//Lado 6 : abajo
			square[4].set(x1,y1,z1,x2,y1,z2);
			//Lado 5 : arriba
			square[5].set(x1,y2,z1,x2,y2,z2);
		}
		Cube(const Color<T> colors[6])
		{
			set(colors);
		}
		Cube(const Color<T>& color)
		{
			set(color);
		}
		void set(const Color<T> colors[6])
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
		void set(const Color<T>& color)
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