// cpd - Coherent Point Drift
// Copyright (C) 2016 Pete Gadomski <pete.gadomski@gmail.com>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

/// \file
/// Compute correpondence proabilities between two datasets.

#pragma once

#include <cpd/matrix.hpp>

namespace cpd {

/// Probabilities of correspondence between two datasets.
struct Probabilities {
    /// The probablity matrix times a column vector of all ones.
    Vector p1;
    /// The tranpsosed probability matrix times a column vector of all ones.
    Vector pt1;
    /// The probability matrix times the fixed matrix.
    Matrix px;
    /// The total accumulated error.
    double l;
    /// Corrsepondence vector between the two datasets.
    ///
    /// Only produced by the DirectProbabilityComputer.
    IndexVector correspondence;
};
}
