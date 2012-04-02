#ifndef __GENERATOR_H__
#define __GENERATOR_H__
#include <vector>

#define GENERATOR_TAB 1000

class Generator {
public:
	static Generator * egzemplarz ();
	double losuj(double wariancja);
private:
	Generator ();

	void wygeneruj ();

	std::vector<double> s_tab;
	unsigned int s_i;
	static Generator * s_egzemplarz;
};

#endif