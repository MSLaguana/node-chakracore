//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
#pragma once
#include "Types/SimplePropertyDescriptor.h"
#include "Types/SimpleTypeHandler.h"

namespace Js{
    class JsrtExceptionMetdataTypeHandler {
    public:
        static Js::SimpleTypeHandler<6> ExceptionMetadataTypeHandler;
    };
};