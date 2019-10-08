#pragma once
#include "Renderer.h"
#include "Object.h"
#include "Globals.h"
class ScnMgr
{
public:
	ScnMgr();
	~ScnMgr();

	void RenderScene();
	int AddObjects(float x, float y, float z, float sx, float sy, float sz, float r, float g, float b, float a);
	void DeleteObject(int idx);
	void Update(float eTime);

private:
	Renderer * m_Renderer = NULL;
	Object * m_TestObject = NULL;
	int m_TestIdx = -1;
	int m_TestIdxArray[MAX_OBJECTS];
	Object * m_Object[MAX_OBJECTS];
};

