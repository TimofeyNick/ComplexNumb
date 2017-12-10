//#include <iostream>

//#include "complexnumb.h"

//ComplexNumb::ComplexNumb(){
//    re_ = 0;
//    im_ = 0;
//}


//ComplexNumb::~ComplexNumb(){}

//void ComplexNumb::print_num(){
////    std::cout << re_ << " + " << im_ << "*i" << std::endl;
//    if(re_ != 0){
//        std::cout << re_;
//        if(im_ > 0){
//            std::cout << " + " << im_ << "*i" << std::endl;
//        }
//        else if(im_ < 0){
//               std::cout << " - " << pow(im_*im_, 0.5) << "*i" << std::endl;
//        }
//        else{
//            std::cout << std::endl;
//        }

//    }
//    else{
//        if(im_ != 0){
//            std::cout << im_ << "*i" << std::endl;
//        }
//        else{
//            std::cout << 0 << std::endl;
//        }
//    }

//}

//void ComplexNumb::num_values(float re, float im){
//    re_ = re;
//    im_ = im;
//}

//float ComplexNumb::modul(){
//    float a = pow(re_*re_ + im_*im_, 0.5);
//    a = round(a*100)/100;
//    std::cout << "|num| = " << a << std::endl;
//}

//ComplexNumb ComplexNumb::operator +(ComplexNumb num2){
//    ComplexNumb num3;
//    float a = this->re_ + num2.re_;
//    float b = this->im_ + num2.im_;
//    num3.num_values(a, b);
//    return num3;
//}

//ComplexNumb ComplexNumb::operator -(ComplexNumb num2){
//    ComplexNumb num3;
//    float a = this->re_ - num2.re_;
//    float b = this->im_ - num2.im_;
//    num3.num_values(a, b);
//    return num3;
//}

//ComplexNumb ComplexNumb::operator *(ComplexNumb num2){
//    ComplexNumb num3;
//    float a = (this->re_ * num2.re_) - (this->im_ * num2.im_);
//    float b = (this->re_ * num2.im_) + (this->im_ * num2.re_);
//    num3.num_values(a, b);
//    return num3;
//}

//bool ComplexNumb::operator ==(ComplexNumb num2){
//    return((this->re_ == num2.re_) && (this->im_ == num2.im_));
//}

//bool ComplexNumb::operator !=(ComplexNumb num2){
//    return(!((this->re_ == num2.re_) && (this->im_ == num2.im_)));
//}


