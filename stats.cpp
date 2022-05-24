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
        for (const float &i: vectorInput)
        {
            sum += (double)i;
        }
        m_trStats.average = sum / vectorInput.size();
        m_trStats.min = *std::min_element(vectorInput.begin(), vectorInput.end());
        m_trStats.max = *max_element(vectorInput.begin(), vectorInput.end());
    }

    return m_trStats;
}
