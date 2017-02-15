#ifndef CPP_LEARNING_SAMPLE_CLASS_H
#define CPP_LEARNING_SAMPLE_CLASS_H

#include <string>

namespace sn{

    class SampleClass
    {

        int any_int;
        std::string any_text;

    protected:
        int any_protected_int;
        static int total_sample_class;

    public:
        SampleClass();
        SampleClass(int any_protected_int);

        ~SampleClass();

        int getTotalSample();

        int setAny_int(int any_int);
        int getAny_int();

        int getAny_protected_int();

        std::string setAny_text(std::string any_int);
        std::string getAny_text();
    };

}

#endif //CPP_LEARNING_SAMPLE_CLASS_H
