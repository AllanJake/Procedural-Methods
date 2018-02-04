#ifndef PERLINNOISE_H
#define PERLINNOISE_H

#include <vector>
#include <numeric>
#include <random>
#include <algorithm>
#include <math.h>

class PerlinNoise
{
	std::vector<int> p;
public:
	// Initialise with reference valuse for the permutation vector
	PerlinNoise();
	// Generate new permutation value based on seed given.
	PerlinNoise(unsigned int seed);
	~PerlinNoise();

	// Get a value for the noise
	double noise(double x, double y, double z);

private:
	double fade(double t);
	double lerp(double t, double a, double b);
	double grad(int hash, double x, double y, double z);
};

#endif // !PERLINNOISE_H