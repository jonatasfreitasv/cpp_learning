#ifndef CPP_LEARNING_SAMPLE_CLASS_H
#define CPP_LEARNING_SAMPLE_CLASS_H

#include <string>

namespace sn{

    class SampleClass
    {

        int any_int;
        std::string any_text;

    public:
        int setAny_int(int any_int);
        int getAny_int();

        std::string setAny_text(std::string any_int);
        std::string getAny_text();
    };

}

#endif //CPP_LEARNING_SAMPLE_CLASS_H
