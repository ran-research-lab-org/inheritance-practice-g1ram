#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment)
//TODO:
    : Employee(name, id, "Salaried"){
        this->yearlyPayment = yearlyPayment;
    }
/*TODO: calculate Payment */
    double SalariedEmployee::calculatePay() const {
    return yearlyPayment / 26.0;

}

/* IMPLEMENT GETTERS*/
double SalariedEmployee::getyearlyPayment() const {
    return yearlyPayment;
}