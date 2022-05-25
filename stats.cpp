#include <math.h>
#include "stats.h"

StatsAlerter::StatsAlerter(float maxThreshold, const std::vector<IAlerter *> alerters)
{
    thresholdValue = maxThreshold;
    mAlerters = alerters;
}

void StatsAlerter::checkAndAlert(const std::vector<float> &vectorInput)
{
    if (*max_element(vectorInput.begin(), vectorInput.end()) > thresholdValue)
    {
        mAlerters.at(0)->emailSent = true;
        emailAlert = reinterpret_cast<EmailAlert *>(mAlerters.at(0));
        ledAlert = reinterpret_cast<LEDAlert *>(mAlerters.at(1));
        emailAlert->emailSent = true;
        ledAlert->ledGlows = true;
    }
}

Stats Statistics::ComputeStatistics(const std::vector<float> &vectorInput)
{
    double sum = 0.0;
    Stats m_trStats;

    if (vectorInput.empty())
    {
        m_trStats.average = NAN;
        m_trStats.min = NAN;
        m_trStats.max = NAN;
    }
    else
    {
        for (const float &i : vectorInput)
        {
            sum += (double)i;
        }
        m_trStats.average = sum / vectorInput.size();
        m_trStats.min = *std::min_element(vectorInput.begin(), vectorInput.end());
        m_trStats.max = *max_element(vectorInput.begin(), vectorInput.end());
    }

    return m_trStats;
}
