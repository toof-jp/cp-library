#pragma once
#include "template.hpp"

template<class T>
struct Vector : public std::vector<T> {
  const ll l, r;

  // [0, r)
  Vector(ll r_) : vector<T>(r_), l(0), r(r_) {};

  // [l, r)
  Vector(ll l_, ll r_, const T& value = T())
    : vector<T>(r_-l_, value), l(l_), r(r_) {};

  T& operator[](ll i) {
    return vector<T>::operator[](i-l);
  }
};
