#pragma once
#include "template.hpp"

// https://codeforces.com/blog/entry/68809
void debug_print(int x) {cerr << x;}
void debug_print(long x) {cerr << x;}
void debug_print(long long x) {cerr << x;}
void debug_print(unsigned x) {cerr << x;}
void debug_print(unsigned long x) {cerr << x;}
void debug_print(unsigned long long x) {cerr << x;}
void debug_print(float x) {cerr << x;}
void debug_print(double x) {cerr << x;}
void debug_print(long double x) {cerr << x;}
void debug_print(char x) {cerr << '\'' << x << '\'';}
void debug_print(const char *x) {cerr << '\"' << x << '\"';}
void debug_print(const string &x) {cerr << '\"' << x << '\"';}
void debug_print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V> void debug_print(const pair<T, V> &x) {cerr << '{'; debug_print(x.first); cerr << ','; debug_print(x.second); cerr << '}';}
template<typename T> void debug_print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), debug_print(i); cerr << "}";}

void debug_print_() {cerr << "]\n";}
template <typename T, typename... V>
void debug_print_(T t, V... v) {debug_print(t); if (sizeof...(v)) cerr << ", "; debug_print_(v...);}

#ifdef LOCAL
#define debug(x...) cerr << "[" << #x << "] = ["; debug_print_(x)
#else
#define debug(x...)
#endif
