//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
#include "JsrtPch.h"
#include "JsrtExceptionMetadataType.h"
//    Js::SimplePropertyDescriptor const ExceptionMetadataPropertyDescriptors[6] =
//        {
//            Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::exception), PropertyWritable),
//            Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::source), PropertyWritable),
//            Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::line), PropertyWritable),
//            Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::column), PropertyWritable),
//            Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::length), PropertyWritable),
//            Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::url), PropertyWritable)
//        };
//
//Js::SimpleTypeHandler<6> Js::ExceptionMetadataTypeHandler(NO_WRITE_BARRIER_TAG(ExceptionMetadataPropertyDescriptors));


namespace Js {
    Js::SimplePropertyDescriptor const ExceptionMetadataPropertyDescriptors[6] =
    {
        Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::exception), PropertyWritable),
        Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::source), PropertyWritable),
        Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::line), PropertyWritable),
        Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::column), PropertyWritable),
        Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::length), PropertyWritable),
        Js::SimplePropertyDescriptor(NO_WRITE_BARRIER_TAG(Js::BuiltInPropertyRecords::url), PropertyWritable)
    };


    SimpleTypeHandler<6> JsrtExceptionMetdataTypeHandler::ExceptionMetadataTypeHandler(NO_WRITE_BARRIER_TAG(ExceptionMetadataPropertyDescriptors));
}