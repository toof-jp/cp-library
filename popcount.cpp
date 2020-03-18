#pragma once
#include "template.cpp"

int popcount(int n) {
  return __builtin_popcount(n);
}

ll popcount(ll n) {
  return __builtin_popcountll(n);
}
