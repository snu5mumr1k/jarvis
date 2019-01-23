#include "events_dealer.h"

#include "sources/base.h"

void TEventsDealer::AddSource(IEventsSource* newSource) {
    Sources.push_back(newSource);
}

TEventsDealer::TEventsBatch TEventsDealer::GetEvents() {
    Poll();

    TEventsBatch result;
    std::swap(result, Queue);
    return result;
}

void TEventsDealer::Poll() {
    for (auto source : Sources) {
        auto events = source->GetEvents();
        Queue.insert(Queue.end(), events.begin(), events.end());
    }
}
