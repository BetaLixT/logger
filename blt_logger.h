/*
 * blt_logger.h
 * 
 * DESC  : Logging Functions that leave next to no code over 
 *         when not enabled
 * 
 * USAGE : To enable the logger define BLT_DEBUG and the value
 *         determines the log levels, i.e. 0 for errors, 1 for
 *         warnings and 2 for (verbose) informative logs 
 *         ex: #define BLT_DEBUG 2 will enable logging at
 *         verbose level
 *       
 *
 * AUTHOR     : Alphin Edgar D'cruz (BetaLixT)
 * START DATE : August 2019
 *
 */

#ifndef BLT_LOGGER_H
#define BLT_LOGGER_H




#ifdef BLT_DEBUG

    #define BLT_DEBUG_ERROR 0
    #define BLT_DEBUG_WARN  1
    #define BLT_DEBUG_VERB  2

    #include <iostream>

    /*     Single parameter functions that act as an exit for the Variadic Template Functions below     */

    template <class T>
    inline void blt_error(T message)
    {
        std::cout << message;
    }


    template <class T>
    inline void blt_warn(T message)
    {
        std::cout << message;
    }



    template <class T>
    inline void blt_info(T message)
    {
        std::cout << message;
    }


    /*     Variadic Template Functions that prints the logs     */

    /*
	* Function: blt_error
	* 
	* IN   : message: template class, args: template class...
	* OUT  : -
	* DESC : This function prints error messages
	*/
    template <class T, class... Args> 
    inline void blt_error(T message, Args... args)
    {
        std::cout << message;
        blt_error(args...);
    }




    /*
	* Function: blt_warn
	* 
	* IN   : message: template class, args: template class...
	* OUT  : -
	* DESC : This function prints warning messages
	*/
    template <class T, class... Args>
    inline void blt_warn(T message, Args... args)
    {
        std::cout << message;
        blt_warn(args...);
    }




    /*
	* Function: blt_info
	* 
	* IN   : message: template class, args: template class...
	* OUT  : -
	* DESC : This function prints informative messages
	*/
    template <class T, class... Args>
    inline void blt_info(T message, Args... args)
    {
        std::cout << message;
        blt_info(args...);
    }
        




    /*    Logger level checks    */
    #if BLT_DEBUG >= BLT_DEBUG_ERROR
        #define blt_error(x, ...) std::cout << "[ERROR]"; blt_error(x, ##__VA_ARGS__); std::cout << " [From] " << __FILE__ << ':' << __LINE__ << std::endl
    #else
        #define blt_error (x, ...)
    #endif

    #if BLT_DEBUG >= BLT_DEBUG_WARN
        #define blt_warn(x, ...) std::cout << "[WARN]"; blt_warn(x, ##__VA_ARGS__); std::cout << " [From] " << __FILE__ << ':' << __LINE__ << std::endl
    #else
        #define blt_warn(x, ...) 
    #endif

    #if BLT_DEBUG >= BLT_DEBUG_VERB
        #define blt_info(x, ...) std::cout << "[INFO]"; blt_info(x, ##__VA_ARGS__); std::cout << " [From] " << __FILE__ << ':' << __LINE__ << std::endl
    #else
        #define blt_info(x, ...) 
    #endif

#else

    #define blt_error(x, ...)
    #define blt_warn(x, ...) 
    #define blt_info(x, ...) 

#endif // BLT_DEBUG

#endif //BLT_LOGGER_H