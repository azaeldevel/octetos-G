

#ifndef OCTETOS_GPP_SHADER
#define OCTETOS_GPP_SHADER

#include <string>
#include <GL/glew.h>

namespace oct::gl
{

class Shader
{
public:
	Shader(const std::string& fn,GLenum type);
	operator GLuint();

private:
	GLuint shader;
};

}

#endif