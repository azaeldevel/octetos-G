

#include <fstream>
#include <octetos/core/shell.hh>

#include "Shader.hh"


namespace oct::gl
{

	Shader::Shader(const std::string& fn,GLenum type)
	{
		oct::core::Shell shell;
		if(not shell.exists(fn))
		{
			std::string str;
			str = "No se encontro el archivo '";
			str += fn + "'.";
			throw oct::core::Exception(str,__FILE__,__LINE__);
		}
		std::ifstream fnShader(fn,std::ios::in);
		if(not fnShader.is_open())
		{
			std::string str;
			str = "Fallo la apertura de '";
			str += fn + "'.";
			throw oct::core::Exception(str,__FILE__,__LINE__);			
		}

		std::string strShader = "";
		std::string line = "";
		while(getline(fnShader, line)) strShader += "\n" + line;
		fnShader.close();
		shader = glCreateShader(type);
		char const * strcShader = strShader.c_str();
		glShaderSource(shader, 1, &strcShader, NULL);
		glCompileShader(shader);
	}

	Shader::operator GLuint()
	{
		return shader;
	}

}