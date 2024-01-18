//// KinematicModelTest.cpp
//#include <gtest/gtest.h>
//#include "KinematicModel.h"
//
//// Test the constructor
//TEST(KinematicModelTest, Constructor) {
//	// Test the constructor of KinematicModel
//
//	KinematicModel model(0.0, 5.0, 2.0);
//
//	// Check the initial position, velocity, and acceleration
//	EXPECT_DOUBLE_EQ(model.getPosition(), 0.0);
//	EXPECT_DOUBLE_EQ(model.getVelocity(), 5.0);
//	EXPECT_DOUBLE_EQ(model.getAcceleration(), 2.0);
//}
//TEST(KinematicModelTest, Update) {
//    // Test the update method of KinematicModel
//
//    KinematicModel model(0.0, 5.0, 2.0);
//
//    // Update for a duration of 2 seconds
//    model.update(2.0);
//
//    // Check the final position, velocity, and acceleration
//    EXPECT_DOUBLE_EQ(model.getPosition(), 20.0);
//    EXPECT_DOUBLE_EQ(model.getVelocity(), 9.0);
//    EXPECT_DOUBLE_EQ(model.getAcceleration(), 2.0);
//}
//
//// Add more tests as needed
//TEST(KinematicModelTest, Update2) {
//	// Test the update method of KinematicModel
//
//	KinematicModel model(0.0, 5.0, 2.0);
//
//	// Update for a duration of 2 seconds
//	model.update(2.0);
//
//	// Check the final position, velocity, and acceleration
//	EXPECT_DOUBLE_EQ(model.getPosition(), 20.0);
//	EXPECT_DOUBLE_EQ(model.getVelocity(), 9.0);
//	EXPECT_DOUBLE_EQ(model.getAcceleration(), 2.0);
//}
