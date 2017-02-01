/**
 * @file	osnfo.h
 * @brief	osnfo.h
 * @version	v.1
 * @date	01/28/2017 21:16:40
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

#ifndef	OSNFO_H
#define	OSNFO_H
#include <stdlib.h>
#include <string.h>

/* {{{1 Android */
#ifdef	__ANDROID__
#ifndef	OSID
#define	OSID	"ANDROID"
#endif	/* OSID */
#include <android/api-level.h>

#ifdef	__ANDROID_API__
#define	OS_ANDROID_API_LVL	__ANDROID_API__
#endif	/* __ANDROID_API__	*/
#endif	/* __ANDROID__		*/
/* }}}1 Android */

/* {{{1 Linux Kernel */
#ifdef	__linux__
#ifndef	OSID
#define	OSID	"linux"
#endif	/* OSID */
#endif	/* __linux__ */
/* }}}1 Linux Kernel */

/* {{{1 UNIX Environment		*/
#if (defined(__unix__)		\
		|| defined(__unix))
#ifndef	OSID
#define	OSID	"unix"
#endif	/* OSID */
#endif	/* __unix__ || __unix	*/
/* }}}1 UNIX Environment		*/

#ifdef	OSID
/**
 * @brief	operating system info
 *
 * Structure containing information on the current operating system.
 */
typedef struct
osnfo_s {
	const char		*osid;	/**< operating system identification			*/
#ifdef	API_LVL
	const uint8_t	apilvl;	/**< application programming instuction level	*/
#endif	/* API_LVL */
#ifdef	OS_CODE_NAME
	const char		*oscn;	/**< operating system code name					*/
#endif	/* OS_CODE_NAME */
#ifdef	OSVER
	const float		osver;	/**< operating system version					*/
#endif	/* VER */
} osnfo_t;

/**
 * \brief	operating system information
 *j
 * Retrieves information on the current operating system.
 */
osnfo_t
osnfo = {
	.osid	= OSID
#ifdef	API_LVL
,	.apilvl	= API_LVL
#endif	/* API_LVL			*/
#ifdef	OS_CODE_NAME
,	.oscn	= OS_CODE_NAME
#endif	/* OS_CODE_NAME		*/
#ifdef	OSVER
,	.osver	= OSVER
#endif	/* OSVER			*/
};

/**
 * get operating system identification
 */
const char*
getosid(void) { return OSID; }

#ifdef	API_LVL
/**
 * get application programming instruction level
 */
const uint8_t
getapilev(void) { return API_LVL; }
#endif	/* API_LVL */

#ifdef	OS_CODE_NAME
/**
 * get operating system code name
 */
const char*
getoscn(void) { return OS_CODE_NAME; }
#endif	/* OS_CODE_NAME */

#ifdef	OSVER
/**
 * get operating system version
 */
const char*
getosver(void) { return OSVER; }
#endif	/* OSVER	*/
#endif	/* OSID		*/

#endif	/* OSNFO_H	*/
