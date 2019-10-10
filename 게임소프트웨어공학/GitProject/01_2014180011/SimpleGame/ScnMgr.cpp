#include "stdafx.h"
#include "ScnMgr.h"
#include "Object.h"


ScnMgr::ScnMgr()
{
	// Initialize Renderer
	m_Renderer = new Renderer(500, 500);
	if (!m_Renderer->IsInitialized())
	{
		std::cout << "Renderer could not be initialized.. \n";
	}

	//Init Test Object
	m_TestObject = new Object();
	m_TestObject->SetColor(1, 1, 1, 1);
	m_TestObject->SetPos(0, 0, 0);
	m_TestObject->SetVol(10, 10, 10);

	//Init Objects
	for (int i = 0; i < MAX_OBJECTS; i++)
	{
		m_Object[i] = NULL;
	}

	//Add Test Object
	m_TestIdx = AddObjects(0, 0, 0, 1, 1, 1, 1, 1, 1, 1);
	for (int i = 0; i < MAX_OBJECTS; i++)
	{
		m_TestIdxArray[i] = AddObjects(i*1, i*1, 0, 1, 1, 1, 1, 1, 1, 1);
	}
}


ScnMgr::~ScnMgr()
{
	delete m_Renderer;
	m_Renderer = NULL;
}

void ScnMgr::Update(float eTime)
{
	for (int i = 0; i < MAX_OBJECTS; i++)
	{
		if (m_Object[i] != NULL)
		{
			m_Object[i]->Update(eTime);
		}
	}
}

void ScnMgr::RenderScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0f, 0.3f, 0.3f, 1.0f);

	// Renderer Test
	for (int i = 0; i < MAX_OBJECTS; i++)
	{
		float x, y, z = 0.f;
		float sx, sy, sz = 0.f;
		float r, g, b, a = 0.f;

		if (m_Object[i] != NULL)
		{
			m_Object[m_TestIdx]->GetPos(&x, &y, &z);
			x = x * 100.f;
			y = y * 100.f;
			z = z * 100.f;
			m_Object[m_TestIdx]->GetVol(&sx, &sy, &sz);
			sx = sx * 100.f;
			sy = sy * 100.f;
			sz = sz * 100.f;
			m_Object[m_TestIdx]->GetColor(&r, &g, &b, &a);
			m_Renderer->DrawSolidRect(x, y, z, sz, r, g, b, a);
		}
	}
}

int ScnMgr::AddObjects(float x, float y, float z, float sx, float sy, float sz, float r, float g, float b, float a)
{
	//Search empty slot
	int idx = -1;
	for (int i = 0; i < MAX_OBJECTS; i++)
	{
		if (m_Object[i] == NULL)
		{
			idx = i;
			break;
		}
	}
	if (idx == -1)
	{
		std::cout << "No more remaining object. \n";
		return -1;
	}
	m_Object[idx] = new Object();
	m_Object[idx]->SetColor(r, g, b, a);
	m_Object[idx]->SetPos(x, y, z);
	m_Object[idx]->SetVol(sx, sy, sz);
	m_Object[idx]->SetVel(0.5, 0, 0);

	return idx;
}
void ScnMgr::DeleteObject(int idx)
{
	if (idx < 0)
	{
		std::cout << "Negative idx does not allowed. \n";
		return;
	}
	if (idx >= MAX_OBJECTS)
	{
		std::cout << "Requested idx exceeds MAX_OBJECTS count. \n";
		return;
	}
	if (m_Object[idx] != NULL)
	{
		delete m_Object[idx];
		m_Object[idx] = NULL;
	}
}