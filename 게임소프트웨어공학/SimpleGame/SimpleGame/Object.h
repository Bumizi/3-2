#pragma once
class Object
{
private:
	float m_x,m_y,m_z;
	float m_sx, m_sy, m_sz;
	float m_r, m_g, m_b, m_a;
public:
	Object();
	~Object();

	void GetLocation(float *x, float *y, float *z);
	void GetSize(float *sx, float *sy, float *sz);
	void GetColor(float *r, float *g, float *b, float *a);

	void SetLocation(float x, float y, float z);
	void SetSize(float sx, float sy, float sz);
	void SetColor(float r, float g, float b, float a);
};

