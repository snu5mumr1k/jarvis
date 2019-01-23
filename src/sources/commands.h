#pragma once

#include "base.h"

class TCommandsSource : public IEventsSource {
public:
    using IEventsSource::IEventsSource;

    TEventsBatch GetEvents() final;
};
