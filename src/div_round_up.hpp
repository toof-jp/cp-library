#pragma once
#include "template.hpp"

// return ceil(n/m)
inline ll div_round_up(ll n, ll m) {
  return (n+m-1) / m;
}
