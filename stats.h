#include <vector>

typedef struct ComputedStats
{
   float average;
   float max;
   float min;
} trComputedStats;

namespace Statistics {
    Stats ComputeStatistics(const std::vector<float>& vectorInput);
    trComputedStats m_trComputedStats;
}
