#include "inheritance_sample_class.h"

using namespace sn;

InheritanceSampleClass::InheritanceSampleClass() : SampleClass() {}

int InheritanceSampleClass::getInheritanceInt() {
    return this->inheritance_int + this->getAny_int();
}

void InheritanceSampleClass::setInheritanceInt(int number) {
    this->inheritance_int = number;
}