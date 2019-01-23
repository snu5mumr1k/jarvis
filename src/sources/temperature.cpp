#include "temperature.h"

IEventsSource::TEventsBatch TTemperatureSource::GetEvents() {
    TEventsBatch events;

    events.push_back({TEvent::EType::Temperature, 1.2});

    return events;
}
