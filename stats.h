#include <vector>
#include <numeric>
#include <iostream>
#include <bits/stdc++.h>

struct Stats
{
   float average;
   float max;
   float min;
};

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& vectorInput);
}
