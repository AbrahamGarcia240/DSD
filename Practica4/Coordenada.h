#ifndef __COORDENADA_H__
#define __COORDENADA_H__

class Coordenada
{
	private:
		double r;
		double teta;
	public:
		Coordenada(double = 0, double = 0);
		double obtenerX();
		double obtenerY();
};

#endif