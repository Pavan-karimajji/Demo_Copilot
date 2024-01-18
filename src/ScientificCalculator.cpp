#include "ScientificCalculator.h"
#include <cmath>

double ScientificCalculator::add(double a, double b) {
    // QAC: Implicit conversion from int to double
    int intValue = 5; // or any integer value
    double result = a + b + intValue;
    return result;
}

double ScientificCalculator::subtract(double a, double b) {
    return a - b;
}

#include <stdexcept>

double ScientificCalculator::multiply(double a, double b) {
    return a * b;
}

double ScientificCalculator::divide(double a, double b) {
    if (b == 0) {
        throw std::invalid_argument("Cannot divide by zero");
    }
    return a / b;
}

double ScientificCalculator::power(double base, double exponent) {
    return std::pow(base, exponent);
}

double ScientificCalculator::squareRoot(double value) {
    if (value < 0) {
        throw std::invalid_argument("Cannot calculate square root of a negative number");
    }
    return std::sqrt(value);
}

double ScientificCalculator::log(double value) {
    if (value <= 0) {
		throw std::invalid_argument("Cannot calculate log of a non-positive number");
	}
	return std::log(value);
}
