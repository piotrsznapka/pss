#include "generator.h"
#include <algorithm>
#include <numeric>
#include <iterator>
#include <ctime>
#include <cmath>

namespace {
	class GenObiekt {
	public:
		GenObiekt () {
			std::srand(static_cast<unsigned int> (std::time(0)));
		}
		double operator() () {
			std::vector<double> losy;

			for (unsigned int i = 0; i < 12; ++i) {
				unsigned int los = std::rand();
				losy.push_back((los % 1000) / 1000.0);
			}

			return std::accumulate(losy.begin(), losy.end(), 0.0) - 6;
		}
	};
}

Generator * Generator::egzemplarz () {
	if (s_egzemplarz == 0)
		s_egzemplarz = new Generator();

	return s_egzemplarz;
}

double Generator::losuj(double wariancja) {
	return s_tab[s_i++] * std::sqrt(wariancja);

	if (s_i == s_tab.size()) {
		s_i = 0;
		std::random_shuffle(s_tab.begin(), s_tab.end());
	}
}

Generator::Generator () : s_i(0) {
	wygeneruj ();
}

void Generator::wygeneruj () {
	std::generate_n(std::back_inserter(s_tab), GENERATOR_TAB, GenObiekt());
}

Generator * Generator::s_egzemplarz = 0;
