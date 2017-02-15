#include "sample_class.h"

using namespace sn;

SampleClass::SampleClass() {
    this->any_protected_int = 777;
    total_sample_class++;
}

SampleClass::SampleClass(int any_protected_int) {
    this->any_protected_int = any_protected_int;
    total_sample_class++;
}

SampleClass::~SampleClass() {
}

int SampleClass::getTotalSample()
{
    return total_sample_class;
}

int SampleClass::getAny_protected_int() {
    return this->any_protected_int;
}

int SampleClass::getAny_int() {
    return this->any_int;
}

int SampleClass::setAny_int(int any_int) {
    this->any_int = any_int;
    return this->any_int;
}

std::string SampleClass::getAny_text() {
    return this->any_text;
}

std::string SampleClass::setAny_text(std::string any_text) {
    this->any_text = any_text;
    return this->any_text;
}