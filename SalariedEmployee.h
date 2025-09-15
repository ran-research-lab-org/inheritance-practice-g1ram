
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

//Clase Hija SalariedEmployee
class SalariedEmployee : public Employee {
private:
    double yearlyPayment; //Paga anual

public:
    SalariedEmployee(); //Constructor default
    SalariedEmployee(const std::string& name, int id, double yearlyPayment); //Constructor con name, id, yearlyPayment especifico 
    
    double calculatePay() const override; // Calcula la paga anual del empleado
    double getyearlyPayment() const; //Devuelve la paga anual
};

#endif

