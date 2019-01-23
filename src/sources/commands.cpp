#include "commands.h"

#include "core/event.h"

#include <iostream>
#include <string>

IEventsSource::TEventsBatch TCommandsSource::GetEvents() {
    TEventsBatch result;
    std::string command;
    std::cin >> command;
    if (std::cin >> command) {
        result.push_back({TEvent::EType::Command, command});
    } else {
        result.push_back({TEvent::EType::Quit, "quit"});
    }

    return result;
}
