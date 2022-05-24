#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<float>& vectorInput) {
    double sum = 0.0;
    Stats m_trStats;

    if (vectorInput.empty()) 
    {
        m_trStats.average = nan("0.0f");
        m_trStats.min = nan("0.0f");
        m_trStats.max = nan("0.0f");
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
