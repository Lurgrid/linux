/* SPDX-License-Identifier: GPL-2.0-only */
/*
 *
 *  Copyright (C) 2005 Mike Isely <isely@pobox.com>
 *  Copyright (C) 2004 Aurelien Alleaume <slts@free.fr>
 */

#ifndef __PVRUSB2_CX2584X_V4L_H
#define __PVRUSB2_CX2584X_V4L_H

/*
 *
 * This module connects the pvrusb2 driver to the I2C chip level
 * driver which handles combined device audio & video processing.
 * This interface is used internally by the driver; higher level code
 * should only interact through the interface provided by
 * pvrusb2-hdw.h.
 *
 */

#include "pvrusb2-hdw-internal.h"

void pvr2_cx25840_subdev_update(struct pvr2_hdw *, struct v4l2_subdev *sd);

#endif /* __PVRUSB2_CX2584X_V4L_H */
