/*
 * Copyright (c) 2020, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

#ifndef __TFM_VERSION_H__
#define __TFM_VERSION_H__

/*
 * Defines for TFM version.
 */
#define VERSION_MAJOR    1
#define VERSION_MINOR    1
#define VERSION_STRING   ""

#define VERSTR(x)      #x
#define VERCON(major, minor) VERSTR(major)"."VERSTR(minor)

#define VERSION_FULLSTR VERCON(VERSION_MAJOR, VERSION_MINOR)""VERSION_STRING



#endif /* __TFM_VERSION_H__ */
