#include "random.h"

uint32_t _seed;
uint32_t _iter = 0;

uint32_t Randomizer(uint32_t x, uint32_t i, uint32_t m)
{
  return (v0[(x + i) % 256] ^ v1[(x/256 + i) % 256]) % m;	
}

uint32_t Rand(uint32_t m) 
{
  return Randomizer(_seed, _iter++, m);	
}

void iRand(uint32_t s)
{
	_seed = s;
}
