#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& vectorInput) {
    Stats m_trStats;
    if (vectorInput.empty()) 
    {
        m_trStats.average = 0;
        m_trStats.min = 0;
        m_trStats.max = 0;
    }
    else
    {
        m_trStats.average = accumulate(vectorInput.begin(), vectorInput.end(), 0.0/ vectorInput.size());
        m_trStats.min = *std::min_element(vectorInput.begin(), vectorInput.end());
        m_trStats.max = *max_element(vectorInput.begin(), vectorInput.end());
    }

    return m_trStats;
}
