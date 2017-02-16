#include "sample_class.h"

#ifndef CPP_LEARNING_INHERITANCE_SAMPLE_CLASS_H
#define CPP_LEARNING_INHERITANCE_SAMPLE_CLASS_H

namespace sn {

    class InheritanceSampleClass : public sn::SampleClass {

        int inheritance_int;

    public:
        InheritanceSampleClass();

        int getInheritanceInt();
        void setInheritanceInt(int number);
    };

}

#endif //CPP_LEARNING_INHERITANCE_SAMPLE_CLASS_H
