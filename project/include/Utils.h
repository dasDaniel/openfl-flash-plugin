/*************************************************************************
* ADOBE CONFIDENTIAL
* ___________________
*
*  Copyright [2013] Adobe Systems Incorporated
*  All Rights Reserved.
*
* NOTICE:  All information contained herein is, and remains
* the property of Adobe Systems Incorporated and its suppliers,
* if any.  The intellectual and technical concepts contained
* herein are proprietary to Adobe Systems Incorporated and its
* suppliers and are protected by all applicable intellectual 
* property laws, including trade secret and copyright laws.
* Dissemination of this information or reproduction of this material
* is strictly forbidden unless prior written permission is obtained
* from Adobe Systems Incorporated.
**************************************************************************/

/**
 * @file  Utils.h
 *
 * @brief This file contains few utility functions.
 */

#ifndef UTILS_H_
#define UTILS_H_

#include "FCMTypes.h"
#include "FCMPluginInterface.h"
#include "Utils/DOMTypes.h"
#include <string>
#include "FillStyle/IGradientFillStyle.h"
#include "IFCMStringUtils.h"


/* -------------------------------------------------- Forward Decl */


/* -------------------------------------------------- Enums */


/* -------------------------------------------------- Macros / Constants */

#ifdef _DEBUG

    #define ASSERT(cond)                    \
    {                                       \
        if (!(cond))                        \
        {                                   \
            assert(0);                      \
        }                                   \
    }

#else
    
    #define ASSERT(cond)

#endif

/* -------------------------------------------------- Structs / Unions */


/* -------------------------------------------------- Class Decl */

namespace OpenFL
{
    class Utils
    {
    public:

        static std::string ToString(const FCM::FCMGUID& in);

        static std::string ToString(const double& in);

        static std::string ToString(const float& in);

        static std::string ToString(const FCM::U_Int32& in);

        static std::string ToString(const FCM::S_Int32& in);

        static std::string ToString(const DOM::Utils::MATRIX2D& matrix);

        static std::string ToString(const DOM::Utils::CapType& capType);

        static std::string ToString(const DOM::Utils::JoinType& joinType);
        
        static std::string ToString(FCM::CStringRep16 pStr16, FCM::PIFCMCallback pCallback);
        
        static FCM::StringRep16 ToString16(const std::string& str, FCM::PIFCMCallback pCallback);

        static std::string ToString(const DOM::FillStyle::GradientSpread& spread);

        static std::string ToString(const DOM::Utils::COLOR& color);

        static void TransformPoint(
            const DOM::Utils::MATRIX2D& matrix, 
            DOM::Utils::POINT2D& inPoint,
            DOM::Utils::POINT2D& outPoint);

        static void GetParent(const std::string& path, std::string& parent);

        static void GetFileName(const std::string& path, std::string& fileName);

        static void GetModuleFilePath(std::string& path, FCM::PIFCMCallback pCallback);
        
        static FCM::AutoPtr<FCM::IFCMCalloc> GetCallocService(FCM::PIFCMCallback pCallback);
        
        static FCM::AutoPtr<FCM::IFCMStringUtils> GetStringUtilsService(FCM::PIFCMCallback pCallback);
        
    };
};

#endif // UTILS_H_

