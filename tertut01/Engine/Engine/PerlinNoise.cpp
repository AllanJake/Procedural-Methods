#include "PerlinNoise.h"



PerlinNoise::PerlinNoise()
{
}

PerlinNoise::PerlinNoise(unsigned int seed)
{
	p.resize(256);

	// Fill the vector with random values between 0, 255
	std::iota(p.begin(), p.end(), 0);
	// Create a random engine with the seed
	std::default_random_engine engine(seed);
	// Shuffle using the random engine above
	std::shuffle(p.begin(), p.end(), engine);
	// Duplicate the permutation vector
	p.insert(p.end(), p.begin(), p.end());
}

PerlinNoise::~PerlinNoise()
{
}
