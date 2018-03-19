#include "PID.h"

using namespace std;

PID::PID() {
	this->_Kp = 0;
	this->_Ki = 0;
	this->_Kd = 0;
	this->p_error = 0;
  	this->i_error = 0;
  	this->d_error = 0;
}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->_Kp = Kp;
	this->_Ki = Ki;
	this->_Kd = Kd;
}

void PID::UpdateError(double cte) {

	this->d_error = cte - this->p_error;
	this->p_error = cte;
  	this->i_error += cte;

}

double PID::TotalError() {

	// double error = -(this->_Kp*this->p_error+this->_Ki*this->i_error+this->_Kd*this->d_error);

	// if (error<-1.0){
	// 	error = -1.0;
	// } else if (error>1.0){
	// 	error = 1.0;
	// }

	return (this->_Kp*this->p_error+this->_Ki*this->i_error+this->_Kd*this->d_error);
}

