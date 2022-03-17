#include<LaborkaConfig.h>
#include<trygonometria.h>
#include<cmath>
#include<iostream>
int main() {
	double sin = degreemath::sin(90);
	double cos = degreemath::cos(90);
	double tan = degreemath::tan(90);
	double ctg = degreemath::ctg(90);
#ifdef USE_TRIGONOMETRY_DEGREE
    double sinTT = degreemath::sin(90);
    double cosTT = degreemath::cos(90);
    double tanTT = degreemath::tan(90);
    double ctgTT = degreemath::ctg(90);
#else
    double sinTF = sin(90);
    double cosTF = cos(90);
    double tanTF = tan(90);
    double ctgTF = 1 / tan(90);
#endif
	return 0;
}