#ifndef COMPLEXNUMB_H
#define COMPLEXNUMB_H

#include <iostream>
#include <math.h>

template <typename T>
class ComplexNumb{
public:
    ComplexNumb();
    ~ComplexNumb();

    void print_num();
    void num_values(T re, T im);
    float modul();

    ComplexNumb operator +(ComplexNumb num2);
    ComplexNumb operator -(ComplexNumb num2);
    ComplexNumb operator *(ComplexNumb num2);
    bool operator ==(ComplexNumb num2);
    bool operator !=(ComplexNumb num2);

public:
    T re_, im_;

};

template <typename T>
ComplexNumb<T>::ComplexNumb(){
    re_ = 0;
    im_ = 0;
}

template <typename T>
ComplexNumb<T>::~ComplexNumb(){}

template <typename T>
void ComplexNumb<T>::print_num(){
//    std::cout << re_ << " + " << im_ << "*i" << std::endl;
    if(re_ != 0){
        std::cout << re_;
        if(im_ > 0){
            std::cout << " + " << im_ << "*i" << std::endl;
        }
        else if(im_ < 0){
               std::cout << " - " << pow(im_*im_, 0.5) << "*i" << std::endl;
        }
        else{
            std::cout << std::endl;
        }

    }
    else{
        if(im_ != 0){
            std::cout << im_ << "*i" << std::endl;
        }
        else{
            std::cout << 0 << std::endl;
        }
    }

}

template <typename T>
void ComplexNumb<T>::num_values(T re, T im){
    re_ = re;
    im_ = im;
}

template <typename T>
float ComplexNumb<T>::modul(){
    float a = pow(re_*re_ + im_*im_, 0.5);
    a = round(a*100)/100;
    std::cout << "|num| = " << a << std::endl;
}

template <typename T>
ComplexNumb<T> ComplexNumb<T>::operator +(ComplexNumb num2){
    ComplexNumb num3;
    T a = this->re_ + num2.re_;
    T b = this->im_ + num2.im_;
    num3.num_values(a, b);
    return num3;
}

template <typename T>
ComplexNumb<T> ComplexNumb<T>::operator -(ComplexNumb num2){
    ComplexNumb num3;
    T a = this->re_ - num2.re_;
    T b = this->im_ - num2.im_;
    num3.num_values(a, b);
    return num3;
}

template <typename T>
ComplexNumb<T> ComplexNumb<T>::operator *(ComplexNumb num2){
    ComplexNumb num3;
    T a = (this->re_ * num2.re_) - (this->im_ * num2.im_);
    T b = (this->re_ * num2.im_) + (this->im_ * num2.re_);
    num3.num_values(a, b);
    return num3;
}

template <typename T>
bool ComplexNumb<T>::operator ==(ComplexNumb num2){
    return((this->re_ == num2.re_) && (this->im_ == num2.im_));
}

template <typename T>
bool ComplexNumb<T>::operator !=(ComplexNumb num2){
    return(!((this->re_ == num2.re_) && (this->im_ == num2.im_)));
}

#endif // COMPLEXNUMB_H
