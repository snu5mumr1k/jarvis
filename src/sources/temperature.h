#pragma once

#include "base.h"

class TTemperatureSource : public IEventsSource {
public:
    using IEventsSource::IEventsSource; 

    TEventsBatch GetEvents() final;

private:
    double UpdateTemperature();

    double CurrentTemperature;
};
