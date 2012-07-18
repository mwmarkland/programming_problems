#include "house_of_rep.h"
  
State::State(std::string nm, uint32_t pop) : name(nm), population(pop),
                                             repCount(1)
{
  geometric_mean = population / sqrt(repCount * (repCount + 1));
}

void State::update(void)
{
  repCount += 1;
  geometric_mean = population / sqrt(repCount * (repCount + 1));
}

