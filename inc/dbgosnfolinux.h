/**
 * @file	dbgosnfolinux.h
 * @brief	dbgosnfolinux.h
 * @version	v.1
 * @date	02/11/2017 20:28:36
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

#ifndef DBGOSNFOLINUX_H
#define DBGOSNFOLINUX_H /**< Include guard for 'dbgosnfolinux.h'. */
/**
 * @brief   debug format uname
 * @details Used upoon failure of retriving system information via \b uname.
 */
#define DBGF_UNAME  "%s:%s:%u\terrno:%d\tFailed to retrive system information."

/**
 * @brief   debug format unamex
 * @details Used when #getutsname returns \c 0 while trying to retrive
 *            information on \e x.
 * @note    \e x is a member from struct \b utsname of which information was
 *            trying to be retrieved on prior to #getutsname returning \c 0.
 */
#define DBGF_UNMX  "%s:%s:%u\tFailed to retrive '%s'.  'osnfo' is 0."
#endif  /* DBGOSNFOLINUX_H */
