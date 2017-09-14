/* Copyright (C) Gabor Karsay 2016 <gabor.karsay@gmx.at>
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PT_APP_H
#define PT_APP_H

#include "config.h"
#include <gtk/gtk.h>

#define PT_APP_TYPE		(pt_app_get_type())
#define PT_APP(obj)		(G_TYPE_CHECK_INSTANCE_CAST((obj), PT_APP_TYPE, PtApp))

typedef struct _PtApp		PtApp;
typedef struct _PtAppClass	PtAppClass;

GType		pt_app_get_type		(void) G_GNUC_CONST;
PtApp		*pt_app_new		(void);

#endif