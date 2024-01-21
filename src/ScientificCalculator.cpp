#include "ScientificCalculator.h"
#include <cmath>
#include <stdexcept>

double ScientificCalculator::add(double a, double b) {
    double result = a + b;
    return result;
}

double ScientificCalculator::subtract(double a, double b) {
    return a - b;
}

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

double ScientificCalculator::sin(double value) {
	return std::sin(value);
}

double ScientificCalculator::cos(double value) {
	return std::cos(value);
}

double ScientificCalculator::tan(double value) {
	return std::tan(value);
}

double ScientificCalculator::log(double value) {
	return std::log(value);
}

double ScientificCalculator::factorial(double value) {
    if (value < 0) {
		throw std::invalid_argument("Cannot calculate factorial of a negative number");
	}
    if (value == 0) {
		return 1;
	}
	return value * factorial(value - 1);
}

double ScientificCalculator::absolute(double value) {
	return std::abs(value);
}

double ScientificCalculator::inverse(double value) {
    if (value == 0) {
		throw std::invalid_argument("Cannot calculate inverse of zero");
	}
	return 1 / value;
}

// Path: src/ScientificCalculator.cpp