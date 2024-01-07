// KinematicModel.h
#ifndef KINEMATIC_MODEL_H
#define KINEMATIC_MODEL_H

class KinematicModel {
public:
    // Constructor
    KinematicModel(double initialPosition, double initialVelocity, double acceleration);

    // Update method to calculate new position, velocity, and acceleration
    void update(double deltaTime);

    // Getters
    double getPosition() const;
    double getVelocity() const;
    double getAcceleration() const;

private:
    double position;
    double velocity;
    double acceleration;
};

#endif // KINEMATIC_MODEL_H
