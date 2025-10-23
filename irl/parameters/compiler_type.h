// This file is part of the Interface Reconstruction Library (IRL),
// a library for interface reconstruction and computational geometry operations.
//
// Copyright (C) 2019 Robert Chiodi <robert.chiodi@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef IRL_PARAMETERS_COMPILER_TYPE_H_
#define IRL_PARAMETERS_COMPILER_TYPE_H_

#if defined(__INTEL_COMPILER) || defined(__INTEL_LLVM_COMPILER)
#define USING_INTEL_COMPILER
#elif defined(__NVCOMPILER)
#define USING_NVIDIA_COMPILER
#elif defined(__GNUC__)
#define USING_GNU_COMPILER
#endif

#endif  // IRL_PARAMETERS_COMPILER_TYPE_H_
