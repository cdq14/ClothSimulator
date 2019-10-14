#pragma once

#include <csGL3DObject.h>

class cs3DContext {
public:
	cs3DContext();
	~cs3DContext();

	int init();

	// camera / view
	void resize(int width, int height);

	// grid
	void setGrid(float width, float depth, float major);
	// 2D
	// 3D
	int addRectangle(float x1, float y1, float z1, float x2, float y2, float z2);
	void removeRectangle(int id);

	// model

	// render
	void render();

private:
	bool m_initialized;
	
	GLint m_programID;

	std::vector< csGL3DObject* > m_rendered_objects;
};