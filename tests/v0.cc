
#include <CUnit/Basic.h>

#include <iostream>
#include "../src/gl.hh"


int init(void)
{
	return 0;
}
int clean(void)
{
	return 0;
}

void testDevelop()
{
	oct::gl::Vertex2D<GLfloat> vertex2D;
	if(sizeof(vertex2D) == sizeof(GLfloat) * 2) 
	{
		CU_ASSERT(true);
	}
	else 
	{
		CU_ASSERT(false);
	}
	
	oct::gl::Vertex3D<GLfloat> vertex3D;
	if(sizeof(oct::gl::Vertex3D<GLfloat>) == sizeof(GLfloat) * 3) 
	{
		CU_ASSERT(true);
	}
	else 
	{
		CU_ASSERT(false);
	}
	
	oct::gl::Triangle<GLfloat> triangle1;
	if(sizeof(triangle1) == sizeof(oct::gl::Vertex3D<GLfloat>) * 3) 
	{
		CU_ASSERT(true);
	}
	else 
	{
		CU_ASSERT(false);
	}
	triangle1.vertex[0].x = 8.0f;
	triangle1.vertex[0].y = 7.0f;
	triangle1.vertex[0].z = 6.0f;
	triangle1.vertex[1].x = 5.0f;
	triangle1.vertex[1].y = 4.0f;
	triangle1.vertex[1].z = 3.0f;
	triangle1.vertex[2].x = 2.0f;
	triangle1.vertex[2].y = 1.0f;
	triangle1.vertex[2].z = 0.0f;
	GLfloat* triangle1_buffer = &triangle1.vertex[0].x;
	for(unsigned int i = 0; i < 9; i++)
	{
		//std::cout << "triangle1_buffer[" << i << "] = " << (unsigned int)triangle1_buffer[i] << "\n";
		if((unsigned int)triangle1_buffer[i] == 8-i) CU_ASSERT(true)
		else CU_ASSERT(false)
 	}
 	
 	oct::gl::Squared<GLfloat> squared1;
 	//std::cout << "sizeof(oct::gl::Triangle<GLfloat>) = " << sizeof(oct::gl::Triangle<GLfloat>) << "\n";
 	//std::cout << "sizeof(squared1) = " << sizeof(squared1) << "\n";
	if(sizeof(squared1) == sizeof(oct::gl::Triangle<GLfloat>) * 2) 
	{
		CU_ASSERT(true);
	}
	else 
	{
		CU_ASSERT(false);
	}
	squared1.triangles[0].vertex[0].x = 17.0f;
	squared1.triangles[0].vertex[0].y = 16.0f;
	squared1.triangles[0].vertex[0].z = 15.0f;
	squared1.triangles[0].vertex[1].x = 14.0f;
	squared1.triangles[0].vertex[1].y = 13.0f;
	squared1.triangles[0].vertex[1].z = 12.0f;
	squared1.triangles[0].vertex[2].x = 11.0f;
	squared1.triangles[0].vertex[2].y = 10.0f;
	squared1.triangles[0].vertex[2].z = 9.0f;
	squared1.triangles[1].vertex[0].x = 8.0f;
	squared1.triangles[1].vertex[0].y = 7.0f;
	squared1.triangles[1].vertex[0].z = 6.0f;
	squared1.triangles[1].vertex[1].x = 5.0f;
	squared1.triangles[1].vertex[1].y = 4.0f;
	squared1.triangles[1].vertex[1].z = 3.0f;
	squared1.triangles[1].vertex[2].x = 2.0f;
	squared1.triangles[1].vertex[2].y = 1.0f;
	squared1.triangles[1].vertex[2].z = 0.0f;
	
	GLfloat* squared1_buffer = &squared1.triangles[0].vertex[0].x;
	for(unsigned int i = 0; i < 18; i++)
	{
		//std::cout << "squared1_buffer[" << i << "] = " << (unsigned int)squared1_buffer[i] << "\n";
		if((unsigned int)squared1_buffer[i] == 17 - i) CU_ASSERT(true)
		else CU_ASSERT(false)
 	}
}


int main(int argc, char *argv[])
{  
	
	/* initialize the CUnit test registry */
	if (CUE_SUCCESS != CU_initialize_registry()) return CU_get_error();
	
	CU_pSuite pSuite = NULL;
	pSuite = CU_add_suite("Testing OpenGL C++", init, clean);
	if (NULL == pSuite) 
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
	
	if ((NULL == CU_add_test(pSuite, "developing", testDevelop)))
	{
		CU_cleanup_registry();
		return CU_get_error();
	}
	
	/* Run all tests using the CUnit Basic interface */
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();
	CU_cleanup_registry();
	return CU_get_error();	
}
