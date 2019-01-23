#include <core/jarvis.h>
#include <core/events_dealer.h>
#include <sources/commands.h>

int main() {
    TEventsDealer dealer;
    TCommandsSource commandsSource;

    dealer.AddSource(&commandsSource);

    TJarvis jarvis({"Andru"}, &dealer);

    jarvis.SayHi();
    jarvis.MainLoop();

    return 0;
}
