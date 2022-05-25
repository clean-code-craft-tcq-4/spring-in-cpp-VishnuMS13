#include <vector>
#include <numeric>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

class IAlerter
{
public:
    bool emailSent;
    bool ledGlows;
};

class EmailAlert : public IAlerter
{
public:
    bool emailSent{false};
};

class LEDAlert : public IAlerter
{
public:
    bool ledGlows{false};
};

class StatsAlerter
{
    std::vector<IAlerter *> mAlerters;
    float thresholdValue;

public:
    EmailAlert *emailAlert;
    LEDAlert *ledAlert;

    StatsAlerter(float maxThreshold, const std::vector<IAlerter *> alerters);
    void checkAndAlert(const std::vector<float> &vectorInput);
};

struct Stats
{
    float average;
    float max;
    float min;
};

namespace Statistics
{
    Stats ComputeStatistics(const std::vector<float> &vectorInput);
}
