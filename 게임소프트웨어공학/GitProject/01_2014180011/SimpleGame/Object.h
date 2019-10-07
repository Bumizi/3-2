#pragma once
class Object
{
private:
	float m_posX, m_posY, m_posZ;
	float m_velX, m_velY, m_velZ;	
	float m_accX, m_accY, m_accZ;
	float m_volX, m_volY, m_volZ;
	float m_mass;
	float m_r, m_g, m_b, m_a;
public:
	Object();
	~Object();

	void GetPos(float *x, float *y, float *z);
	void SetPos(float x, float y, float z);

	void GetVel(float *x, float *y, float *z);
	void SetVel(float x, float y, float z);

	void GetAcc(float *x, float *y, float *z);
	void SetAcc(float x, float y, float z);

	void GetVol(float *x, float *y, float *z);
	void SetVol(float x, float y, float z);

	void GetMass(float *mass);
	void SetMass(float mass);

	void GetColor(float *r, float *g, float *b, float *a);
	void SetColor(float r, float g, float b, float a);
};

