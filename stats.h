#include <vector>
#include <numeric>
#include <iostream>
#include <bits/stdc++.h>

typedef struct ComputedStats
{
   float average;
   float max;
   float min;
} Stats;

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& vectorInput);
    Stats m_trStats;
}
