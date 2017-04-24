//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
#pragma once

#include "ChakraCore.h"
#include "Codex/Utf8Helper.h"

class JsrtExceptionMetadata
{
public:

    JsExceptionMetadata ToHandle() { return static_cast<JsExceptionMetadata>(this); }
    static JsrtExceptionMetadata * FromHandle(JsExceptionMetadata handle)
    {
        JsrtExceptionMetadata * metadata = static_cast<JsrtExceptionMetadata *>(handle);
        return metadata;
    }

    Js::Var lineNumber;
    Js::Var columnNumber;
    Js::Var length;

    Js::JavascriptString *sourceLine;
    Js::JavascriptString *sourceUrl;
};
