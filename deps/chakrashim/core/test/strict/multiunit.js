//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

"use strict";
//
// Some non-ascii comments
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
// 中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文中文
//
// Win8 816660: Scanner error helper incorrectly changes m_cMultiUnits,
//      causing CharacterOffsetToUnitOffset read overflow.
// This test asserts on chk.
//
function foo(a, a) {
}
