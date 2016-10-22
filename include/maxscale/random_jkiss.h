#pragma once
#ifndef _MAXSCALE_RANDOM_JKISS_H
#define _MAXSCALE_RANDOM_JKISS_H
/*
 * Copyright (c) 2016 MariaDB Corporation Ab
 *
 * Use of this software is governed by the Business Source License included
 * in the LICENSE.TXT file and at www.mariadb.com/bsl.
 *
 * Change Date: 2019-07-01
 *
 * On the date above, in accordance with the Business Source License, use
 * of this software will be governed by version 2 or later of the General
 * Public License.
 */

/*
 * File:   random_jkiss.h
 * Author: mbrampton
 *
 * Created on 26 August 2015, 15:34
 */

#include <maxscale/cdefs.h>

MXS_BEGIN_DECLS

extern unsigned int random_jkiss(void);

MXS_END_DECLS

#endif  /* RANDOM_H */