#pragma once
#ifndef TEXTURE_CLASS_H
#define TEXTURE_CLASS_H

#include <glad/glad.h>
#include <stb/stb_image.h>

#include "ShaderClass.h"

class Texture
{
	public:
		GLuint ID;
		GLenum type;
		GLuint unit;

		Texture(const char* img, GLenum texType, GLuint slot, GLenum format, GLenum pixelType);

		void texUnit(Shader& shader, const char* uniform, GLuint unit);
		void Bind();
		void Unbind();
		void Delete();
};

#endif // !TEXTURE_CLASS_H