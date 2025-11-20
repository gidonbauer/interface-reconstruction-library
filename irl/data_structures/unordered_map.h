// This file is part of the Interface Reconstruction Library (IRL),
// a library for interface reconstruction and computational geometry operations.
//
// Copyright (C) 2019 Robert Chiodi <robert.chiodi@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at https://mozilla.org/MPL/2.0/.

#ifndef IRL_DATA_STRUCTURES_UNORDERED_MAP_H_
#define IRL_DATA_STRUCTURES_UNORDERED_MAP_H_

#if 1

#include "external/flat_hash_map.hpp"
namespace IRL {
template <class KeyType, class ValueType>
using unordered_map = ska::flat_hash_map<KeyType, ValueType>;

}  // namespace IRL

#else

#include <unordered_map>
namespace IRL {
template <class KeyType, class ValueType>
using unordered_map = std::unordered_map<KeyType, ValueType>;
}  // namespace IRL

#endif

#endif  // IRL_DATA_STRUCTURES_UNORDERED_MAP_H_
