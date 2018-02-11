/*
 * FLASHMON flash memory monitoring tool (Version 2.1)
 * Revision Authors: Pierre Olivier<pierre.olivier@univ-ubs.fr>, Jalil Boukhobza <boukhobza@univ-brest.fr>
 * Contributors: Pierre Olivier, Ilyes Khetib, Crina Arsenie
 *
 * Copyright (c) of University of Occidental Britanny (UBO) <boukhobza@univ-brest.fr>, 2010-2012.
 *
 *	This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 * NO WARRANTY. THIS SOFTWARE IS FURNISHED ON AN "AS IS" BASIS.
 * UNIVERSITY OF OCCIDENTAL BRITANNY MAKES NO WARRANTIES OF ANY KIND, EITHER
 * EXPRESSED OR IMPLIED AS TO THE MATTER INCLUDING, BUT NOT LIMITED
 * TO: WARRANTY OF FITNESS FOR PURPOSE OR MERCHANTABILITY, EXCLUSIVITY
 * OF RESULTS OR RESULTS OBTAINED FROM USE OF THIS SOFTWARE. 
 * See the GNU General Public License for more details.
 *
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FLASHMON_H
#define FLASHMON_H

#include <linux/mtd/mtd.h>

#define PRINT_PREF          KERN_INFO "Flashmon : "

#define P_TRACE /* printk(PRINT_PREF "%s %d traced\n", __FUNCTION__, __LINE__); */


#ifdef __LP64__
# define INTCAST(expr)    (int)((uint64_t)(expr))
# define VOIDPNT(addr)    (void *)(0xffffffff00000000 | addr)
#else
# define INTCAST(expr)    (int)(expr)
# define VOIDPNT(addr)    (void *)(addr)
#endif

/* Struct coming from mtd */
struct mtd_part {
	struct mtd_info mtd;
	struct mtd_info *master;
	uint64_t offset;
	struct list_head list;
};

#define PART(x)             ((struct mtd_part *)(x))



#endif /* FLASHMON_H */
