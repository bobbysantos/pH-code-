#include <iostream>
#include <thread>
#include <chrono>

int calculate_interval(float pH) {
    // Assuming normal skin pH is around 5.5 to 6.5
    if (pH < 5.5) {
        return 30; // More acidic, hydrate every 30 minutes
    } else if (pH >= 5.5 && pH <= 7.5) {
        return 60; // Normal, hydrate every 60 minutes
    } else {
        return 90; // More basic, hydrate every 90 minutes
    }
}

void hydration_reminder(int interval) {
    while (true) {
        std::this_thread::sleep_for(std::chrono::minutes(interval));
        std::cout << "Reminder: It's time to hydrate! Please drink a glass of water.\n";
    }
}

int main() {
    float skin_pH;
    std::cout << "Enter your skin pH level: ";
    std::cin >> skin_pH;

    int interval = calculate_interval(skin_pH);
    std::cout << "Based on your skin pH level (" << skin_pH << "), you will be reminded every " << interval << " minutes to hydrate.\n";

    hydration_reminder(interval);

    return 0;
}
