#ifndef SCIENTIFIC_CALCULATOR_H
#define SCIENTIFIC_CALCULATOR_H

class ScientificCalculator {
public:
    static double add(double a, double b);
    static double subtract(double a, double b);
    static double multiply(double a, double b);
    static double divide(double a, double b);
    static double power(double base, double exponent);
    static double squareRoot(double value);
    static double sin(double value);
    static double cos(double value);
    static double tan(double value);
    static double log(double value);
    static double factorial(double value);
    static double absolute(double value);
    static double inverse(double value);
};

#endif // SCIENTIFIC_CALCULATOR_H
