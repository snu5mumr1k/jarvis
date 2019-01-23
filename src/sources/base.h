#pragma once

#include "core/event.h"

#include <vector>

class IEventsSource {
public:
    using TEventsBatch = std::vector<TEvent>;

    virtual TEventsBatch GetEvents() = 0;

    virtual ~IEventsSource() = default;
};
