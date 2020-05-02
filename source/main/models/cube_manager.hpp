#pragma once

#include <main/core/shader/shader.hpp>
#include <main/models/cube.hpp>

#include <cooling/culling_manager.hpp>

#include <glm/glm.hpp>

#include <vector>

namespace
{
	constexpr size_t COUNT_OF_CUBES = 40000;
}

class CubeManager
{
public:
	CubeManager();

	void init(uint32_t count = COUNT_OF_CUBES);

	void setCullingManager(Cooling::CullingManager* manager);

	void draw();
private:
	void setupViewProjection();
private:
	Shader m_shader;
	std::vector<Cube> m_cubes;
	std::vector<Cooling::Object> m_objects;
	GLint m_transformLocation;

	Cooling::CullingManager* m_cullingManager;
};