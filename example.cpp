#define BLT_DEBUG 2

#include "blt_logger.h"


int main()
{

    //std::string same = std::string("a message") + std::string(3);


    blt_error("This is an error ", "errors are serious ", "please notice me senpai");
    blt_warn("This is a warning ", "warnings are not as serious ", "its not like I love you or anything ba-baka!!");
    blt_info("This is inforamtion ", "inforamation is just information... ", "idiot");

}