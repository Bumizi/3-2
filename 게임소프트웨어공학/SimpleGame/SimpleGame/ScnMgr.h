#pragma once
#include "Renderer.h"
class ScnMgr
{
public:
	ScnMgr();
	~ScnMgr();

	void RenderScene();

private:
	Renderer * m_Renderer = NULL;
};

