#include "jarvis.h"

#include "events_dealer.h"

#include <iostream>

TJarvis::TJarvis(const TJarvis::TOptions& options, TEventsDealer* eventsDealer)
    : Options(options)
    , EventsDealer(eventsDealer)
{
}

void TJarvis::SayHi() const {
    std::cout << "Hi, " << Options.LordName << "! I'm Jarvis" << std::endl;
}

void TJarvis::MainLoop() {
    bool quit = false;
    while (!quit) {
        for (const auto& event : EventsDealer->GetEvents()) {
            switch (event.Type) {
                case TEvent::EType::Quit:
                    std::cout << "Bye, " << Options.LordName << std::endl;
                    quit = true;
                    break;
                case TEvent::EType::Help:
                    SayHi();
                    break;
                case TEvent::EType::Command:
                    std::cout << "Got command: " << event.Order << std::endl;
                    if (event.Order == "quit") {
                        quit = true;
                    }
            }
        }
    }
}
