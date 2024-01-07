// KinematicModel.cpp
#include "KinematicModel.h"

// Constructor
KinematicModel::KinematicModel(double initialPosition, double initialVelocity, double acceleration)
    : position(initialPosition), velocity(initialVelocity), acceleration(acceleration) {}

// Update method
void KinematicModel::update(double deltaTime) {
    // Using constant acceleration model: s = ut + (1/2)at^2, v = u + at
    position += velocity * deltaTime + 0.5 * acceleration * deltaTime * deltaTime;
    velocity += acceleration * deltaTime;
}

// Getter for position
double KinematicModel::getPosition() const {
    return position;
}

// Getter for velocity
double KinematicModel::getVelocity() const {
    return velocity;
}

// Getter for acceleration
double KinematicModel::getAcceleration() const {
    return acceleration;
}
