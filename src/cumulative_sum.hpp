#pragma once
#include "template.hpp"

template<class T>
struct CumulativeSum {
  vector<T> v;

  CumulativeSum(size_t n) : v(n+1) {};
  CumulativeSum(vector<T> v_) {
    v.resize(v_.size()+1);
    rep(i, v_.size())
      v[i+1] = v_[i];
  };

  void add(size_t i, T x) {
    v[i+1] += x;
  }

  // O(N)
  void build() {
    if (v.size() == 0) return;
    rep(i, v.size()-1)
      v[i+1] += v[i];
  }

  // O(1) sum [l, r]
  T sum(size_t l, size_t r) const {
    return l == 0 ? v[r+1] : v[r+1]-v[l];
  }

  // O(1) sum [0, r]
  T sum(size_t r) const {
    return v[r+1];
  }

  T& operator[](size_t i) {
    return v[i];
  }

  const T& operator[](size_t i) const {
    return v[i];
  }
};
