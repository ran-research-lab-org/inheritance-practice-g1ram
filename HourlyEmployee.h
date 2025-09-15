
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"
//Clase Hija HourlyEmployee
class HourlyEmployee : public Employee {
private:
    double payPerHour; //Pago por hora
    double workedHours; //Horas trabajadas
public: 
    HourlyEmployee(); //Constructor default
    HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours); //Constructor con name, id, payPerHour, workedHours especificas
    
    double calculatePay() const override; //Funcion que calcula la paga del empleado
    double getpayPerHour() const; //Funcion que devuelve el pago por hora
    double getworkedHours() ; //Funcion que devuelve las horas trabajadas
};

#endif

