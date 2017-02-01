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

/** {{{1
 * AIX
 */
#ifdef	_AIX
#define	OSID
const char *osid	= "AIX";

/** {{{2
 * _AIXx
 */
#ifdef	_AIX9
#define	VER
const uint16_t ver	= 9;

/** {{{3
 * _AIX9x
 */
#ifdef	_AIX99
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX98
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX97
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX96
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX95
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX94
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX93
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX92
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX91
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX9x */

#elif	defined _AIX8
#define	VER
const uint16_t ver	= 8;

/** {{{3
 * _AIX8x
 */
#ifdef	_AIX89
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX88
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX87
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX86
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX85
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX84
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX83
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX82
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX81
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX8x */

#elif	defined _AIX7
#define	VER
const uint16_t ver	= 7;

/** {{{3
 * _AIX7x
 */
#ifdef	_AIX79
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX78
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX77
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX76
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX75
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX74
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX73
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX72
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX71
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX7x */

#elif	defined _AIX6
#define	VER
const uint16_t ver	= 6;

/** {{{3
 * _AIX6x
 */
#ifdef	_AIX69
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX68
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX67
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX66
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX65
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX64
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX63
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX62
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX61
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX6x */

#elif	defined _AIX5
#define	VER
const uint16_t ver	= 5;

/** {{{3
 * _AIX5x
 */
#ifdef	_AIX59
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX58
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX57
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX56
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX55
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX54
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX53
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX52
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX51
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX5x */

#elif	defined _AIX4
#define	VER
const uint16_t ver	= 4;

/** {{{3
 * _AIX4x
 */
#ifdef	_AIX49
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX48
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX47
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX46
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX45
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX44
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX43
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX42
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX41
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX4x */

#elif	defined _AIX3
#define	VER
const uint16_t ver	= 3;

/** {{{3
 * _AIX3x
 */
#ifdef	_AIX39
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX38
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX37
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX36
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX35
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX34
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX33
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX32
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX31
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX3x */

#elif	defined _AIX2
#define	VER
const uint16_t ver	= 2;

/** {{{3
 * _AIX2x
 */
#ifdef	_AIX29
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX28
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX27
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX26
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX25
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX24
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX23
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX22
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX21
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX2x */

#elif	defined _AIX1
#define	VER
const uint16_t ver	= 1;

/** {{{3
 * _AIX1x
 */
#ifdef	_AIX19
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX18
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX17
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX16
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX15
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX14
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX13
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX12
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX11
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX1x */

#else
#define	VER
const uint16_t ver	= 0;

/** {{{3
 * _AIX0x
 */
#ifdef	_AIX09
#define	REV
const uint16_t rev	= 9;
#elif	defined	_AIX08
#define	REV
const uint16_t rev	= 8;
#elif	defined	_AIX07
#define	REV
const uint16_t rev	= 7;
#elif	defined	_AIX06
#define	REV
const uint16_t rev	= 6;
#elif	defined	_AIX05
#define	REV
const uint16_t rev	= 5;
#elif	defined	_AIX04
#define	REV
const uint16_t rev	= 4;
#elif	defined	_AIX03
#define	REV
const uint16_t rev	= 3;
#elif	defined	_AIX02
#define	REV
const uint16_t rev	= 2;
#elif	defined	_AIX01
#define	REV
const uint16_t rev	= 1;
#else
#define	REV
const uint16_t rev	= 0;
#endif	/* }}}3 _AIX0x */
#endif	/* }}}2 _AIXx */

#endif	/* }}}1 _AIX */

#ifdef	__TOS_AIX__
#define	OSID
const char *osid	= "AIX";
#endif	/* __TOS_AIX__ */

#ifdef	__ANDROID__
#define	OSID
const char *osid	= "ANDROID";

#include <android/api-level.h>
#ifdef	__ANDROID_API__
#define	STRVER
const char *strver	= __ANDROID_API__;
#endif	/* __ANDROID_API__ */
const
#endif	/* __ANDROID__ */
#endif	/* OSNFO_H */
