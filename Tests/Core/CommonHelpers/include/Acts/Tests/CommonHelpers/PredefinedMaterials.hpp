// This file is part of the Acts project.
//
// Copyright (C) 2019 CERN for the benefit of the Acts project
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

/// @file
/// @brief Predefined materials for test

#pragma once

#include "Acts/Material/Material.hpp"
#include "Acts/Utilities/Units.hpp"

namespace Acts {
namespace Test {

constexpr Material makeBeryllium() {
  using namespace UnitLiterals;
  return {35.28_cm, 42.10_cm, 9.012, 4, 1.848_g / 1_cm3};
}

constexpr Material makeSilicon() {
  using namespace UnitLiterals;
  return {9.370_cm, 46.52_cm, 28.0855, 14, 2.329_g / 1_cm3};
}

}  // namespace Test
}  // namespace Acts
