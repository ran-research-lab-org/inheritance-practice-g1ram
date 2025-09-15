
#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee() : Employee(), yearlyPayment(0) {} //Constructor default
SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment) // Constructor con parametros especificos
//TODO:
    : Employee(name, id, "Salaried"){ 
        this->yearlyPayment = yearlyPayment;
    }
//TODO: calculate Payment 
    double SalariedEmployee::calculatePay() const { //Paga anual bisemanal
    return yearlyPayment / 26.0;

}

// IMPLEMENT GETTERS
double SalariedEmployee::getyearlyPayment() const { //Devuelve la paga anual
    return yearlyPayment;
}

