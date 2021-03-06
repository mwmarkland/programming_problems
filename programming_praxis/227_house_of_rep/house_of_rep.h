#ifndef __HOUSE_OF_REP_H__ /* INCLUDE GUARD */
#define __HOUSE_OF_REP_H__ 1

#include <list>
#include <string>
#include <cmath>

class State {
  friend class order_state;
 public:
  State(std::string nm,uint32_t pop);
  void update();
 private:
  std::string name;
  uint32_t    population;
  uint32_t    repCount;
  double      geometric_mean;
};


class order_state {
 public:
  bool operator()(const State& state1, const State& state2) const;
};

extern std::list<State> listOfStates;

#endif /* INCLUDE GUARD */
