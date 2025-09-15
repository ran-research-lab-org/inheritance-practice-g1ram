
#include "HourlyEmployee.h"
HourlyEmployee::HourlyEmployee() : Employee(), payPerHour(0), workedHours(0) {} //Constructor default
HourlyEmployee::HourlyEmployee( const std::string& name, int id,  
                                double payPerHour, double workedHours) : Employee(name, id, "Hourly"){ //Constructor con paramentros especificados
        this->payPerHour = payPerHour;
        this->workedHours = workedHours;
    }
//TODO: calculate Payment 
double HourlyEmployee::calculatePay() const { //Devuelve el calculo de pago bisemanal
    return payPerHour * workedHours * 2;
}

 //IMPLEMENT GETTERS
double HourlyEmployee::getpayPerHour() const { //Devuelve pago por hora
    return payPerHour;
}

double HourlyEmployee::getworkedHours() { //Devuelve horas laboradas
    return workedHours;
}

