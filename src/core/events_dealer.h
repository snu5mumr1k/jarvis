#pragma once

#include "event.h"

#include <vector>

class IEventsSource;

class TEventsDealer {
public:
    using TEventsBatch = std::vector<TEvent>;

    TEventsBatch GetEvents();

    void AddSource(IEventsSource* newSource);

private:
    void Poll();

    TEventsBatch Queue;

    std::vector<IEventsSource *> Sources;
};
