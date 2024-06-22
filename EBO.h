#pragma once
#ifndef EB_CLASS_H
#define EB_CLASS_H

#include <glad/glad.h>

class EBO
{
	public:
		GLuint ID;
		EBO(GLuint* indices, GLsizeiptr size);
		void Bind();
		void Unbind();
		void Delete();
};

#endif // !EB_CLASS_H