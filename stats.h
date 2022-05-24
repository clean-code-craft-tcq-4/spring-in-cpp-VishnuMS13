#include <vector>
#include <numeric>
#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

struct Stats
{
   float average;
   float max;
   float min;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& vectorInput);
}
