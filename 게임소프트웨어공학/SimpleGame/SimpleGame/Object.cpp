#include "stdafx.h"
#include "Object.h"


Object::Object()
{
}


Object::~Object()
{
}


void Object::GetLocation(float *x, float *y, float *z)
{
	*x = m_x;
	*y = m_y;
	*z = m_z;
}
void Object::GetSize(float *sx, float *sy, float *sz)
{
	*sx = m_sx;
	*sy = m_sy;
	*sz = m_sz;
}
void Object::GetColor(float *r, float *g, float *b, float *a)
{
	*r = m_r;
	*g = m_g;
	*b = m_b;
	*a = m_a;
}

void Object::SetLocation(float x, float y, float z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}
void Object::SetSize(float sx, float sy, float sz)
{
	m_sx = sx;
	m_sy = sy;
	m_sz = sz;
}
void Object::SetColor(float r, float g, float b, float a)
{
	m_r = r;
	m_g = g;
	m_b = b;
	m_a = a;
}