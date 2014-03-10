/*
 * Copyright (c) 2013, Christian Gehring, Hannes Sommer, Paul Furgale, Remo Diethelm
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Autonomous Systems Lab, ETH Zurich nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL Christian Gehring, Hannes Sommer, Paul Furgale,
 * Remo Diethelm BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
 * OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
*/
#ifndef KINDR_PHYS_QUANT_PHYSICALTYPE_HPP_
#define KINDR_PHYS_QUANT_PHYSICALTYPE_HPP_



namespace kindr {
//! Physical quantities
namespace phys_quant {

/*! \class PhysicalType
 * \brief Physical type of a vector.
 *
 * This enum class contains all possible physical type a vector can have in kindr.
 * \ingroup phys_quant
 */
enum class PhysicalType {
  Undefined, // 0

  Time, // 1
  Mass, // 2
  Inertia, // 3
  Energy, // 4

  Acceleration, // 5
  Velocity, // 6
  Length, // 7
  Jerk, // 8
  Force, // 9
  Momentum, // 10

  AngularAcceleration, // 11
  AngularVelocity, // 12
  Angle, // 13
  AngularJerk, // 14
  Torque, // 15
  AngularMomentum // 16
};


} // namespace phys_quant
} // namespace kindr





#endif /* KINDR_PHYS_QUANT_PHYSICALTYPE_HPP_ */
