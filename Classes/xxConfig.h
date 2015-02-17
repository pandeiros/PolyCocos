#ifndef __XX_CONFIG_H__
#define __XX_CONFIG_H__

// Exclude rarely-used stuff from Windows headers
#define WIN32_LEAN_AND_MEAN

#include "cocos2d.h"

// Shared, useful macros.
#include "xxMacros.h"

#ifdef XX_EXE
    // Windows Header Files:
    #include <windows.h>
    #include <tchar.h>

    // C RunTime Header Files
    #include "CCStdC.h"
#endif  // XX_EXE


// Versions
#define XX_VERSION 0x00000104
#define MIN_REQUIRED_CC_VERSION 0x00030400
#define MAX_TESTED_CC_VERSION 0x00030400

#if (MIN_REQUIRED_CC_VERSION > COCOS2D_VERSION)
    #error  "Minimum cocos2d-x version requirements are not met."
#endif
#if (MAX_TESTED_CC_VERSION < COCOS2D_VERSION)
    #error  "Currently used cocos2d-x version is not yet compatible."
#endif

// Namespaces
#define NS_XX_BEGIN                     namespace xx {
#define NS_XX_END                       }
#define USING_NS_XX                     using namespace xx
#define NS_XX                           ::xx

// DLL Export
#ifdef XX_EXE
    #define XX_DLL
#else
    #define XX_DLL __declspec(dllexport)
#endif


#endif  // __XX_CONFIG_H__