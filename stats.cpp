#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& vectorInput) {
    if (vectorInput.empty()) 
    {
        return 0;
    }
    m_trComputedStats.average = accumulate( vectorInput.begin(), vectorInput.end(), 0.0/ vectorInput.size());
    m_trComputedStats.min = *min_element(a.begin(), a.end());
    m_trComputedStats.max = *max_element(a.begin(), a.end());

    return m_trComputedStats;
}
