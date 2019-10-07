#include "stdafx.h"
#include "Object.h"


Object::Object()
{
}


Object::~Object()
{
}


void Object::GetPos(float *x, float *y, float *z)
{
	*x = m_posX;
	*y = m_posY;
	*z = m_posZ;
}
void Object::SetPos(float x, float y, float z)
{
	m_posX = x;
	m_posY = y;
	m_posZ = z;
}

void Object::GetVol(float *x, float *y, float *z)
{
	*x = m_volX;
	*y = m_volY;
	*z = m_volZ;
}
void Object::SetVol(float x, float y, float z)
{
	m_volX = x;
	m_volY = y;
	m_volZ = z;
}

void Object::GetVel(float *x, float *y, float *z)
{
	*x = m_velX;
	*y = m_velY;
	*z = m_velZ;
}
void Object::SetVel(float x, float y, float z)
{
	m_velX = x;
	m_velY = y;
	m_velZ = z;
}

void Object::GetAcc(float *x, float *y, float *z)
{
	*x = m_accX;
	*y = m_accY;
	*z = m_accZ;
}
void Object::SetAcc(float x, float y, float z)
{
	m_accX = x;
	m_accY = y;
	m_accZ = z;
}

void Object::GetMass(float *mass)
{
	*mass = m_mass;
}
void Object::SetMass(float mass)
{
	m_mass = mass;
}

void Object::GetColor(float *r, float *g, float *b, float *a)
{
	*r = m_r;
	*g = m_g;
	*b = m_b;
	*a = m_a;
}
void Object::SetColor(float r, float g, float b, float a)
{
	m_r = r;
	m_g = g;
	m_b = b;
	m_a = a;
}