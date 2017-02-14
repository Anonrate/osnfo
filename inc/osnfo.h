/**
 * @file	osnfo.h
 * @brief	osnfo.h
 * @version	v.1
 * @date	02/11/2017 15:02:10
 * @author	Anonrate
 * @copyright	
 * 	\parblock
 * 		GNU General Public License
 *
 * 		Copyright (C) 2017 Anonrate
 *
 * 		This program is free software: you can redistribute it and/or modify 
 * 		it under the terms of the GNU General Public License as published by 
 * 		the Free Software Foundation, either version 3 of the License, or 
 * 		(at your option) any later version.
 *
 * 		This program is distributed in the hope that it will be useful, 
 * 		but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * 		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * 		GNU General Public License for more details.
 *
 * 		You should have received a copy of the GNU General Public License
 * 		along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 	\endparblock
 */

#ifndef OSNFO_H
#define OSNFO_H /**< Include guard for 'osnfo.h'. */
#define DEBUG 1 /**< Required to use 'dbgr.h'     */
#include  <stdlib.h>
#include  <errno.h>

#include  "../../dbgr/inc/dbgr.h"
#ifdef  __linux__
#include "osnfolinux.h"
#endif  /* __linux__  */

#ifdef  SPRTD_OS

/**
 * @brief   get operating system name
 * @details Gets the name of the current operating system.
 * @return  Returns the name of the current operating system.
 */
char*
getosname(void) { return getsysname(); }

#endif  /* SPRTD_OS   */
#endif  /* OSNFO_H    */
