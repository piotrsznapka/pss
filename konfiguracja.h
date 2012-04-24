/* 
 * File:   konfiguracja.h
 * Author: piotr
 *
 * Created on 2 kwiecień 2012, 22:12
 */

#ifndef KONFIGURACJA_H
#define	KONFIGURACJA_H

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/ini_parser.hpp>
#include <boost/algorithm/string.hpp>
#include <vector>

using namespace std;
using namespace boost;
using namespace boost::property_tree;

class konfiguracja {
public:
    int k, Td, Ti, N;
    vector<double> A, B;
    void czytaj(string plik);
private:
    vector<double> czytajWektor(string zmienna);
    ptree pt;

};

#endif	/* KONFIGURACJA_H */

