/* $Id: Intel_8086.h $ */
/** @file
 * CPU database entry "Intel 8086".
 * Handcrafted.
 */

/*
 * Copyright (C) 2013-2023 Oracle and/or its affiliates.
 *
 * This file is part of VirtualBox base platform packages, as
 * available from https://www.virtualbox.org.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation, in version 3 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <https://www.gnu.org/licenses>.
 *
 * SPDX-License-Identifier: GPL-3.0-only
 */

#ifndef VBOX_CPUDB_Intel_8086_h
#define VBOX_CPUDB_Intel_8086_h
#ifndef RT_WITHOUT_PRAGMA_ONCE
# pragma once
#endif

#ifndef CPUM_DB_STANDALONE
/**
 * Fake CPUID leaves for Intel(R) 8086.
 *
 * We fake these to keep the CPUM ignorant of CPUs wihtout CPUID leaves
 * and avoid having to seed CPUM::GuestFeatures filling with bits from the
 * CPUMDBENTRY.
 */
static CPUMCPUIDLEAF const g_aCpuIdLeaves_Intel_8086[] =
{
    { 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x756e6547, 0x6c65746e, 0x49656e69, 0 },
    { 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000100, 0x00000000, 0x00000000, 0 },
    { 0x80000000, 0x00000000, 0x00000000, 0x80000008, 0x00000000, 0x00000000, 0x00000000, 0 },
    { 0x80000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0 },
    { 0x80000002, 0x00000000, 0x00000000, 0x65746e49, 0x2952286c, 0x38303820, 0x20202036, 0 },
    { 0x80000003, 0x00000000, 0x00000000, 0x20202020, 0x20202020, 0x20202020, 0x20202020, 0 },
    { 0x80000004, 0x00000000, 0x00000000, 0x20202020, 0x20202020, 0x20202020, 0x20202020, 0 },
    { 0x80000005, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0 },
    { 0x80000006, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0 },
    { 0x80000007, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0 },
    { 0x80000008, 0x00000000, 0x00000000, 0x00001414, 0x00000000, 0x00000000, 0x00000000, 0 },
};
#endif /* !CPUM_DB_STANDALONE */

/**
 * Database entry for Intel(R) 8086.
 */
static CPUMDBENTRY const g_Entry_Intel_8086 =
{
    /*.pszName          = */ "Intel 8086",
    /*.pszFullName      = */ "Intel(R) 8086",
    /*.enmVendor        = */ CPUMCPUVENDOR_INTEL,
    /*.uFamily          = */ 2,
    /*.uModel           = */ 0,
    /*.uStepping        = */ 0,
    /*.enmMicroarch     = */ kCpumMicroarch_Intel_8086,
    /*.uScalableBusFreq = */ CPUM_SBUSFREQ_UNKNOWN,
    /*.fFlags           = */ CPUMDB_F_EXECUTE_ALL_IN_IEM,
    /*.cMaxPhysAddrWidth= */ 20,
    /*.fMxCsrMask       = */ 0,
    /*.paCpuIdLeaves    = */ NULL_ALONE(g_aCpuIdLeaves_Intel_8086),
    /*.cCpuIdLeaves     = */ ZERO_ALONE(RT_ELEMENTS(g_aCpuIdLeaves_Intel_8086)),
    /*.enmUnknownCpuId  = */ CPUMUNKNOWNCPUID_DEFAULTS,
    /*.DefUnknownCpuId  = */ { 0x00000000, 0x00000000, 0x00000000, 0x00000000 },
    /*.fMsrMask         = */ 0,
    /*.cMsrRanges       = */ 0,
    /*.paMsrRanges      = */ NULL,
};

#endif /* !VBOX_CPUDB_Intel_8086_h */
