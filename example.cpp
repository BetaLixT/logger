#define BLT_DEBUG 2

#include "blt_logger.h"


int main()
{


    blt_error("This is an error ", " errors are serious ", " Error Code: ", 1234);
    blt_error("Something went terribly wrong :(");

    blt_warn("This is a warning ", "warnings are not as serious ", "Warning Code: ", 12);
    blt_warn("Something may be wrong :|");

    blt_info("This is inforamtion ", "inforamation is just information... ", "heh", "Information code?: ", 22);
    blt_info("Nothing wrong here, just information :)");

}