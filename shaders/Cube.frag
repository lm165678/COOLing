#version 330 core

in vec3 outputColor;
out vec4 color;

void main()
{
	color = vec4(outputColor, 1.f);
}