#pragma once

#include <string>

struct TEvent {
    enum class EType {
        Quit,
        Help,
        Command,
        TemperatureUpdate
    };

    EType Type;

    std::string Order;
    double Temperature;
};
