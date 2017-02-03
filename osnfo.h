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

#define	DEBUG_OUT(fmt, ...)																					\
	{																																	\
		if (DEBUG)																											\
		{																																\
			fprintf(stdout, "%s:%s:%d\t", __FILE__, __func__, __LINE__);	\
			fprintf(stdout, (fmt), __VA_ARGS__);													\
		}																																\
	}

/* {{{1 Android							*/
#ifdef	__ANDROID__
#ifndef	OSID
#define	OSID	"ANDROID"
#include <android/api-level.h>

#ifdef	__ANDROID_API__
#define	API_LVL	__ANDROID_API__
#define	OSVER	getosverx()
#endif	/* __ANDROID_API__	*/
#endif	/* OSID							*/
#endif	/* __ANDROID__			*/
/* }}}1 Android							*/

/* {{{1 Amdahl UTS	*/
#ifdef	UTS
#ifndef	OSID
#define	OSID	"Amdahl UTS"
#endif	/* OSID			*/
#endif	/* UTS			*/
/* }}}1 Amdahl UTS	*/

/* {{{1 AmigaOS					*/
#if (defined AMIGA				\
		|| defined __amigaos__)
#ifndef	OSID
#define	OSID	"AmigaOS"
#endif	/* OSID					*/
#endif	/* AMIGA || __amigaos__	*/
/* }}}1 AmigaOS					*/

/* {{{1 Apollo AEGIS	*/
#ifdef	aegis
#ifndef	OSID
#define	OSID	"Apollo AEGIS"
#endif	/* OSID			*/
#endif	/* aegis		*/
/* }}}1 Apollo AEGIS	*/

/* {{{1 Apollo Domain/OS	*/
#ifdef	apollo
#ifndef	OSID
#define	OSID	"Apollo Domain/OS"
#endif	/* OSID				*/
#endif	/* apollo			*/
/* }}}1 Apollo Domain/OS	*/

/* {{{1 BeOS		*/
#ifdef	__BeOS__
#ifndef	OSID
#define	OSID	"BeOS"
#endif	/* OSID		*/
#endif	/* __BeOS__	*/
/* }}}1 BeOS		*/

/* {{{1 BSD/OS		*/
#ifdef	__bsdi__
#ifndef	OSID
#define	OSID	"BSD/OS"
#endif	/* OSID		*/
#endif	/* __bsdi__	*/
/* }}}1 BSD/OS		*/

/* {{{1 ConvexOS	*/
#ifdef	__convex__
#ifndef	OSID
#define	OSID	"ConvexOS"
#endif	/* OSID			*/
#endif	/* __convex__	*/
/* }}}1 ConvexOS		*/

/* {{{1 Cygwin Environment	*/
#ifdef	__CYGWIN__
#ifndef	OSID
#define	OSID	"Cygwin Environment"
#endif	/* OSID				*/
#endif	/* __CYGWIN__		*/
/* }}}1 Cygwin Enviornment	*/

/* {{{1 DG/UX							*/
#if (defined DGUX			\
		|| defined __DGUX__	\
		|| defomed __dgux__)
#ifndef	OSID
#define	OSID	"DG/UX"
#endif	/* OSID							*/
#endif	/* DGUX || __DGUX__ || __dgux__	*/
/* }}}1 DG/UX							*/

/* {{{1 DragonFly			*/
#ifdef	__DragonFly__
#ifndef	OSID
#define	OSID	"DragonFly"
#endif	/* OSID				*/
#endif	/* __DragonFly__	*/
/* }}}1 DragonFly			*/

/* {{{1 DYNIX/ptx				*/
#if (defined _SEQUENT_		\
		|| defined sequent)
#ifndef	OSID
#define	OSID	"DYNIX/ptx"
#endif	/* OSID					*/
#endif	/* _SEQUENT_ || sequent	*/
/* }}}1 DYNIX/ptx				*/

/* {{{1 eCos		*/
#ifdef	__ECOS
#ifndef	OSID
#define	OSID	"eCos"
#endif	/* OSID		*/
#endif	/* __ECOS	*/
/* }}}1 eCos		*/

/* {{{1 EMX Environment	*/
#ifdef	__EMX__
#ifndef	OSID
#define	OSID	"EMX Environment"
#endif	/* OSID			*/
#endif	/* __EMX__		*/
/* }}}1 EMX Environment	*/

/* {{{1 GNU aka GNU/Hurd			*/
#if (defined __GNU__			\
		|| defined __gnu_hurd__)
#ifndef	OSID
#define	OSID	"GNU aka GNU/Hurd"
#endif	/* OSID						*/
#endif	/* __GNU__ || __gnu_hurd__	*/
/* }}}1 GNU aka GNU/Hurd			*/

/* {{{1 GNU/kFreeBSD						*/
#if (defined __FreeBSD_kernel__	\
		&& defined __GLIBC__)
#ifndef	OSID
#define	OSID	"GNU/kFreeBSD"
#endif	/* OSID								*/
#endif	/* __FreeBSD_kernel && __GLIBC__	*/
/* }}}1 GNU/kFreeBSD						*/

/* {{{1 GNU/Linux			*/
#ifdef	__gnu_linux__
#ifndef	OSID
#define	OSID	"GNU/Linux"
#endif	/* OSID				*/
#endif	/* __gnu_linux__	*/
/* }}}1 GNU/Linux			*/

/* {{{1 HI-UX MPP		*/
#ifdef	__hiuxmpp
#ifndef	OSID
#define	OSID	"HI-UX MPP"
#endif	/* OSID			*/
#endif	/* __hiuxmpp	*/
/* }}}1 HI-UX MPP		*/

/* {{{1 HP-UX						*/
#if (defined _hpux			\
		|| defined hpux		\
		|| defined __hpux)
#ifndef	OSID
#define	OSID	"HP-UX"
#endif	/* OSID						*/
#endif	/* _hpux || hpux || __hpux	*/
/* }}}1 HP-UX						*/

/* {{{1 IBM OS/400		*/
#ifdef	__OS400__
#ifndef	OSID
#define	OSID	"IBM OS/400"
#endif	/* OSID			*/
#endif	/* __OS400__	*/
/* }}}1 IBM OS/400		*/

/* {{{1 INTEGRITY		*/
#ifdef	__INTEGRITY
#ifndef	OSID
#define	OSID	"INTEGRITY"
#endif	/* OSID			*/
#endif	/* __INTEGRITY	*/
/* }}}1 INTEGRITY		*/

/* {{{1 Interix Environment	*/
#ifdef	__INTERIX
#ifndef	OSID
#define	OSID	"Interix Environment"
#endif	/* OSID				*/
#endif	/* __INTERIX		*/
/* }}}1 Interix Environment	*/

/* {{{1 IRIX			*/
#if (defined sgi			\
		|| defined __sgi)
#ifndef	OSID
#define	OSID	"IRIX"
#endif	/* OSID			*/
#endif	/* sgi || __sgi	*/
/* }}}1 IRIX			*/

/* {{{1 Linux Kernel */
#ifdef	__linux__
#ifndef	OSID
#define	OSID	"linux"
#endif	/* OSID */
#endif	/* __linux__ */
/* }}}1 Linux Kernel */

/* {{{1 LynxOS		*/
#ifdef	__Lynx__
#ifndef	OSID
#define	OSID	"LynxOS"
#endif	/* OSID		*/
#endif	/* __Lynx__	*/
/* }}}1 LynxOS		*/

/* {{{1 MacOS												*/
#if (defined macintosh				\
		|| defined Macintosh		\
		|| (defined __APPLE			\
			&& defined __MACH__))
#ifndef	OSID
#define	OSID	"MacOS"
#endif	/* OSID												*/
#endif	/* macintosh || Macintosh || (__APPLE && __MACH__)	*/
/* }}}1 MacOS												*/

/* {{{1 Microware OS-9		*/
#if (defined __OS9000	\
		|| defined _OSK)
#ifndef	OSID
#define	OSID	"Microware OS-9"
#endif	/* OSID				*/
#endif	/* __OS9000 || _OSK	*/
/* }}}1 Microware OS-9		*/

/* {{{1 MINIX		*/
#ifdef	__minix
#ifndef	OSID
#define	OSID	"MINIX"
#endif	/* OSID		*/
#endif	/* __minix	*/
/* }}}1 MINIX		*/

/* {{{1 MorphOS			*/
#ifdef	__MORPHOS__
#ifndef	OSID
#define	OSID	"MorphOS"
#endif	/* OSID			*/
#endif	/* __MORPHOS__	*/
/* }}}1 MorphOS			*/

/* {{{1 MPE/iX					*/
#if (defined mpeix			\
		|| defined __mpexl)
#ifndef	OSID
#define	OSID	"MPE/iX"
#endif	/* OSID					*/
#endif	/* __mpeix || __mpexl	*/
/* }}}1 MPE/iX					*/

/* {{{1 MSDOS										*/
#if (defined MSDOS				\
		|| defined __MSDOS__	\
		|| defined _MSDOS		\
		|| defined __DOS__)
#ifndef	OSID
#define	OSID	"MSDOS"
#endif	/* OSID										*/
#endif	/* MSDOS || __MSDOS__ || _MSDOS || __DOS__	*/
/* }}}1 MSDOS										*/

/* {{{1 NonStop		*/
#ifdef	__TANDEM
#ifndef	OSID
#define	OSID	"NonStop"
#endif	/* OSID		*/
#endif	/* __TANDEM	*/
/* }}}1 NonStop		*/

/* {{{1 Nucleus RTOS	*/
#ifdef	__nucleus__
#ifndef	OSID
#define	OSID	"Nucleus RTOS"
#endif	/* OSID			*/
#endif	/* __nucleus__	*/
/* }}}1 Nucleus RTOS	*/

/* {{{1 OS/2										*/
#if (defined OS2				\
		|| defined _OS2			\
		|| defined __OS2__		\
		|| defined __TOS_OS2__)
#ifndef	OSID
#define	OSID	"OS/2"
#endif	/* OSID										*/
#endif	/* OS2 || _OS2 || __OS2__ || __TOS_OS2__	*/
/* }}}1 OS/2										*/

/* {{{1 Palm OS			*/
#ifdef	__palmos__
#ifndef	OSID
#define	OSID	"Palm OS"
#endif	/* OSID			*/
#endif	/* __palmos__	*/
/* }}}1 Palm OS			*/

/* {{{1 Plan 9		*/
#ifdef	EPLAN9
#ifndef	OSID
#define	OSID	"Plan 9"
#endif	/* OSID		*/
#endif	/* EPLAN9	*/
/* }}}1 Plan 9		*/

/* {{{1 Pyramid DC/OSx	*/
#ifdef	pyr
#ifndef	OSID
#define	OSID	"Pyramid DS/OSx"
#endif	/* OSID			*/
#endif	/* pyr			*/
/* }}}1 Pyramid DS/OSx	*/

/* {{{1 Reliant UNIX	*/
#ifdef	sinux
#ifndef	OSID
#define	OSID	"Reliant UNIX"
#endif	/* OSID			*/
#endif	/* sinux		*/
/* }}}1 Reliant UNIX	*/

/* {{{1 SCO OpenServer						*/
#if (defined M_I386			\
		|| defined M_XENIX	\
		|| defined _SCO_DS)
#ifndef	OSID
#define	OSID	"SCO OpenServer"
#endif	/* OSID								*/
#endif	/* M__I386 || M_XENIX || _SCO_DS	*/
/* }}}1 SCO OpenServer						*/

/* {{{1 SVR4 Environment									*/
#if (defined __sysv__				\
		|| defined __SVR4			\
		|| defined __svr4__			\
		|| defined _SYSTYPE_SVR4)
#ifndef	OSID
#define	OSID	"SVR4 Environment"
#endif	/* OSID												*/
#endif	/* __sysv__ || __SVR4 || __svr4 || _SYSTYPE_SVR4	*/
/* }}}1 SVR4 Environment									*/

/* {{{1 Syllable		*/
#ifdef	__SYLLABLE__
#ifndef	OSID
#define	OSID	"Syllable"
#endif	/* OSID			*/
#endif	/* __SYLLABLE__	*/
/* }}}1 Syllable		*/

/* {{{1 Symbian OS			*/
#ifdef	__SYMBIAN32__
#ifndef	OSID
#define	OSID	"Symbian OS"
#endif	/* OSID				*/
#endif	/* __SYMBIAN32__	*/
/* }}}1 Symbian OS			*/

/* {{{1 Tru64 (OSF/1)		*/
#if (defined __osf__		\
		|| defined __osf)
#ifndef	OSID
#define	OSID	"Tru64 (OSF/1)"
#endif	/* OSID				*/
#endif	/* __osf__ || __osf	*/
/* }}}1 TRU64 (OSF/1)		*/

/* {{{1 Ultrix													*/
#if (defined ultrix				\
		|| defined __ultrix		\
		|| defined __ultrix__	\
		|| (defined unix		\
			&& wax))
#ifndef	OSID
#define	OSID	"Ultrix"
#endif	/* OSID													*/
#endif	/* ultrix || __ultrix || __ultrix__ || (unix && wax)	*/
/* }}}1 Ultrix													*/




/* {{{1 UNIX Environment		*/
#if (defined(__unix__)		\
		|| defined(__unix))
#ifndef	OSID
#define	OSID	"unix"
#endif	/* OSID */
#endif	/* __unix__ || __unix	*/
/* }}}1 UNIX Environment		*/

#ifdef	OSID
inline const char*
getosverx(void)
{
#ifdef	__ANDROID_API__
	if (__ANDROID_API__ == 3)
	{
#define	OS_CODE_NAME	"Cupcake"
		return "1.5";
	}
	else if (__ANDROID_API__ == 4)
	{
#define	OS_CODE_NAME	"Donut"
		return "1.6";
	}
	else if (__ANDROID_API__ == 8)
	{
#define	OS_CODE_NAME	"Froyo"
		return "2.2.x";
	}
	else if (__ANDROID_API__ == 19)
	{
#define	OS_CODE_NAME	"KitKat"
		return "4.4 - 4.4.4";
	}
	else if (__ANDROID_API__ == 23)
	{
#define	OS_CODE_NAME	"Marshmallow"
		return "6.0";
	}

	switch (__ANDROID_API__)
	{
		case 1:
		case 2:
			return (__ANDROID_API__ == 1 ? "1.0" : "1.1");
		case 5:
		case 6:
		case 7:
#define	OS_CODE_NAME	"Eclair"
			return (__ANDROID_API__ == 5
					? "2.0"
					: (__ANDROID_API__ == 6
						? "2.0.1"
						: "2.1"));
		case 9:
		case 10:
#define	OS_CODE_NAME	"Gingerbread"
			return (__ANDROID_API__ == 9
					? "2.3 - 2.3.2"
					: "2.3.3 - 2.3.7");
		case 11:
		case 12:
		case 13:
#define	OS_CODE_NAME	"Honeycomb"
			return (__ANDROID_API__ == 11
					? "3.0"
					: (__ANDROID_API__ == 12
						? "3.1"
						: "3.2.x"));
		case 14:
		case 15:
#define	OS_CODE_NAME	"Ice Cream Sandwich"
			return (__ANDROID_API__ == 14
					? "4.0.1 - 4.0.2"
					: "4.0.3 - 4.0.4");
		case 16:
		case 17:
		case 18:
#define	OS_CODE_NAME	"Jelly Bean"
			return (__ANDROID_API__ == 16
					? "4.1.x"
					: (__ANDROID_API__ == 17
						? "4.2.x"
						: "4.3.x"));
		case 21:
		case 22:
#define	OS_CODE_NAME	"Lollipop"
			return (__ANDROID_API__ == 21
					? "5.0"
					: "5.1");
		case 24:
		case 25:
#define	OS_CODE_NAME	"Nougat"
			return (__ANDROID_API__ == 24
					? "7.0"
					: "7.1");
		default:
			DEBUG_OUT("%d is not a valid Android API Level.\n",
					  __ANDROI_API__);
			return 0;
	}
#endif	/* __ANDROID_API__ */
}

/**
 * @brief	operating system info
 *
 * Structure containing information on the current operating system.
 */
typedef struct
osnfo_s {
	const char	*osid;		/**< operating system identification			*/
#ifdef	API_LVL
	const char	*apilvl;	/**< application programming instuction level	*/
#endif	/* API_LVL */
#ifdef	OS_CODE_NAME
	const char	*oscn;		/**< operating system code name					*/
#endif	/* OS_CODE_NAME */
#ifdef	OSVER
	const char	*osver;		/**< operating system version					*/
#endif	/* VER */
} osnfo_t;

/**
 * @brief	operating system information
 *
 * Retrieves information on the current operating system.
 */
const osnfo_t
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
const char*
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
