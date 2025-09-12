#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee( const std::string& name, int id, 
                                double payPerHour, double workedHours)
  //TODO:                              
    : Employee(name, id, "Hourly"){
        this->payPerHour = payPerHour;
        this->workedHours = workedHours;
    }
/*TODO: calculate Payment */
double HourlyEmployee::calculatePay() const {
    return payPerHour * workedHours * 2;
}

/* IMPLEMENT GETTERS*/
double HourlyEmployee::getpayPerHour() const {
    return payPerHour;
}

double HourlyEmployee::getworkedHours() {
    return workedHours;
}

