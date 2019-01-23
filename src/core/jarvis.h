#pragma once

#include <string>

class TEventsDealer;

class TJarvis {
public:
    struct TOptions {
        std::string LordName;
    };

    TJarvis(const TOptions& options, TEventsDealer* eventsDealer);

    void SayHi() const;
    void MainLoop();

private:
    TOptions Options;

    TEventsDealer* EventsDealer;
};
