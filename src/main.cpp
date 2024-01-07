#include <iostream>
#include "KinematicModel.h"

int main() {
    // Create a KinematicModel object with initial values
    KinematicModel model(0.0, 5.0, 2.0);

    // Update the model for a duration of 2 seconds
    model.update(2.0);

    // Print the results
    std::cout << "Final Position: " << model.getPosition() << " meters" << std::endl;
    std::cout << "Final Velocity: " << model.getVelocity() << " meters/second" << std::endl;
    std::cout << "Acceleration: " << model.getAcceleration() << " meters/second^2" << std::endl;

    return 0;
}
