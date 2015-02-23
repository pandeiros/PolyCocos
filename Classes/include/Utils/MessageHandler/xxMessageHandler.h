#ifndef __XX_MESSAGE_HANDLER_H__
#define __XX_MESSAGE_HANDLER_H__

#define xxMSG MessageHandler

#include "../../xxConfig.h"

#include <iostream>
#include <iomanip>
#include <string>
#include <map>

NS_XX_BEGIN

/**
    Non-instantiable class for displaying formatted message results.
    Provides 4 message types: errors, warnings, information and elapsed time messages.
    Contains predefined templates for popular messages.
*/
class XX_DLL MessageHandler {
public:
    // Message type
    enum Type {
        _UNKNOWN,
        _NO_FORMAT,
        _INFO,
        _WARNING,
        _ERROR,
        _TIME
    };

    // TODO Implement later.
    // Message type headers.
    //static const std::map <Type, std::string> ErrorHeaders;

    // Prints custom message.
    // \param string message : Message to be display
    // \param (opt) Type type : Type of the message.
    // \see MessageHandler::Type
    static void printMessage (const std::string message, Type type = Type::_UNKNOWN);

    // Prints custom debug section indicator.
    // \param string title : Debug section title.
    // \param bool isBegin : True if start of the sectiom, false if end.
    static void printDebugSection (const std::string title, bool isBegin);
};

NS_XX_END

#endif  // __XX_MESSAGE_HANDLER_H__
