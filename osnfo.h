/**
 * @file  osnfo.h
 * @brief osnfo.h
 * @version v.1
 * @date  01/28/2017 21:16:40
 * @author  Anonrate
 * @copyright 
 *  \parblock
 *    GNU General Public License
 *
 *    Copyright (C) 2017 Anonrate
 *
 *    This program is free software: you can redistribute it and/or modify 
 *    it under the terms of the GNU General Public License as published by 
 *    the Free Software Foundation, either version 3 of the License, or 
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful, 
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of 
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *  \endparblock
 */

#ifndef OSNFO_H
#define OSNFO_H
#include <stdlib.h>
#include <string.h>
#define DEBUG_OUT(fmt, ...)                                               \
    {                                                                     \
        if (DEBUG)                                                        \
        {                                                                 \
            fprintf(stdout, "%s:%s:%d\t", __FILE__, __func__, __LINE__);  \
            fprintf(stdout, (fmt), __VA_ARGS__);                          \
        }                                                                 \
    }
/** \def  OSID
 * @brief   Operating System identification
 * @details The operating system id will vary depnding on what macros are
 *            defined.  Here are some code snipets for the current supported
 *            operating system id's and how the id is defined.
 *  \par  Amdahl UTS 
 *    \code{.h}
 *      #ifdef  UTS
 *      #define OSID  "Amdahl UTS"
 *    \endcode
 *  \par  ANDROID
 *    \code{.h}
 *      #ifdef  __ANDROID__
 *      #ifndef OSID
 *      #define OSID  "ANDROID"
 *    \endcode
 *  \par  AmigaOS
 *    \code{.h}
 *      #if (defined AMIGA            \
 *           || defined __amigaos__)
 *      #ifndef OSID
 *      #define OSID  "AmigaOS"
 *    \endcode
 *    \c __amigaos defined by <b>GNU C</b>. 
 *  \par  Apollo REGIS
 *    \code{.h}
 *      #ifdef  aegis
 *      #ifndef OSID
 *      #define OSID  "Apollo AEGIS"
 *    \endcode
 *  \par  Apollo Domain/OS
 *    \code{.h}
 *      #ifdef  apollo
 *      #ifndef OSID
 *      #define OSID  "Apollo Domain/OS"
 *    \endcode
 *  \par  BeOS
 *    \code{.h}
 *      #ifdef  __BeOS__
 *      #ifndef OSID
 *      #define OSID  "BeOS"
 *    \endcode
 *  \par  BSD/OS
 *    \code{.h}
 *      #ifdef  __bsdi__
 *      #ifndef OSID
 *      #define OSID  "BSD/OS"
 *    \endcode
 *  \par  ConvexOS
 *    \code{.h}
 *      #ifdef  __convex__
 *      #ifndef OSID
 *      #define OSID  "ConvexOS"
 *    \endcode
 *  \par  Cygwin Environment
 *    \code{.h}
 *      #ifdef  __CYGWIN__
 *      #ifndef OSID
 *      #define OSID  "Cygwin Environment"
 *    \endcode
 *  \par  DG/UX
 *    \code{.h}
 *      #if (defined DGUX         \
 *           || defined __DGUX__  \
 *           || defomed __dgux__)
 *      #ifndef OSID
 *      #define OSID  "DG/UX"
 *    \endcode
 *  \par  DragonFly
 *    \code{.h}
 *      #ifdef  __DragonFly__
 *      #ifndef OSID
 *      #define OSID  "DragonFly"
 *    \endcode
 *  \par  DYNIX/ptx
 *    \code{.h}
 *      #if (defined _SEQUENT_    \
 *           || defined sequent)
 *      #ifndef OSID
 *      #define OSID  "DYNIX/ptx"
 *    \endcode
 *  \par  eCos
 *    \code{.h}
 *      #ifdef  __ECOS
 *      #ifndef OSID
 *      #define OSID  "eCos"
 *    \endcode
 *  \par  EMX Environment
 *    \code{.h}
 *      #ifdef  __EMX__
 *      #ifndef OSID
 *      #define OSID  "EMX Environment"
 *    \endcode
 *  \par  GNU aka GNU/Hurd
 *    The official name of this operating system is \b GNU.  \b Hurd is the 
 *      kernel in the \b GNU operating system.  It is often listed as 
 *      \b GNU/Hurd since there is also \b GNU/Linux and \b GNU/kFreeBSD, which
 *      are most of the \b GNU operating system with the \b Linux and 
 *      \b FreeBSD kernels respectively.
 *    \code{.h}
 *      #if (defined __GNU__          \
 *           || defined __gnu_hurd__)
 *      #ifndef OSID
 *      #define OSID  "GNU aka GNU/Hurd"
 *    \endcode
 *  \par  GNU/kFreeBSD
 *    \b GNU/kFreeBSD is one of the \b Debian distros that is based on the 
 *      \b FreeBSD kernel rather than the \b Linux or \b Hurd kernels.
 *    \code{.h}
 *      #if (defined __FreeBSD_kernel__ \
 *           && defined __GLIBC__)
 *      #ifndef OSID
 *      #define OSID  "GNU/kFreeBSD"
 *    \endcode
 *    Notice that \b FreeBSD also defines \c __FreeBSD_kernel__ so the 
 *      \c __GLIBC__ macro must be checked to distinguish it.
 *  \par  GNU/Linux
 *    \code{.h}
 *      #ifdef  __gnu_linux__
 *      #ifndef OSID
 *      #define OSID  "GNU/Linux"
 *    \endcode
 *  \par  HI-UX MPP
 *    \code{.h}
 *      #ifdef  __hiuxmpp
 *      #ifndef OSID
 *      #define OSID  "HI-UX MPP"
 *    \endcode
 *  \par  HP-UX
 *    \code{.h}
 *      #if (defined _hpux      \
 *           || defined hpux    \
 *           || defined __hpux)
 *      #ifndef OSID
 *      #define OSID  "HP-UX"
 *    \endcode
 *    \c _hpux defined by <b>GP UPC</b>.
 *  \par  IBM OS/400
 *    \code{.h}
 *      #ifdef  __OS400__
 *      #ifndef OSID
 *      #define OSID  "IBM OS/400"
 *    \endcode
 *  \par  INTEGRITY
 *    \code{.h}
 *      #ifdef  __INTEGRITY
 *      #ifndef OSID
 *      #define OSID  "INTEGRITY"
 *    \endcode
 *  \par  Interix Environment
 *    \code{.h}
 *      #ifdef  __INTERIX
 *      #ifndef OSID
 *      #define OSID  "Interix Environment"
 *    \endcode
 *    \c __INTERIX defined by <b>GNU C</b> and <b>Visual Studio</b>.
 *  \par  IRIX
 *    \code{.h}
 *      #if (defined sgi        \
 *           || defined __sgi)
 *      #ifndef OSID
 *      #define OSID  "IRIX"
 *    \endcode
 *  \par  Linux Kernel
 *    Systems based on the <b>Linux Kernel</b> define these macros.  There are 
 *      two major Linux-based operating systems: \b GNU/Linux, \b Android, and 
 *      numerous others like <b>Ångström</b> or \b OpenEmbedded.
 *    \code{.h}
 *      #ifdef  __linux__
 *      #ifndef OSID
 *      #define OSID  "Linux Kernel"
 *    \endcode
 *    \c linux \b OBSOLETE (Not \b POSIX compliant)\n
 *    \c __linux \b OBSOLETE (Not \b POSIX compliant)
 *  \par  LynxOS
 *    \code{.h}
 *      #ifdef  __Lynx__
 *      #ifndef OSID
 *      #define OSID  "LynxOS"
 *    \endcode
 *  \par  MacOS
 *    \code{.h}
 *      #if (defined macintosh          \
 *           || defined Macintosh       \
 *           || (defined __APPLE        \
 *               && defined __MACH__))
 *      #ifndef OSID
 *      #define OSID  "MacOS"
 *    \endcode
 *    <tt>__APPLE__</tt> and <tt>__MACH__</tt> are defined by <b>GNU C</b> and 
 *      <b>Intel C++</b>.
 *  \par  Microware OS-9
 *    \code{.h}
 *      #if (defined __OS9000 \
 *           || defined _OSK)
 *      #ifndef OSID
 *      #define OSID  "Microware OS-9"
 *    \endcode
 *    \c __OS9000 defined by <b>Ultimate C/C++</b>.\n
 *    \c _OSK defined by <b>Ultimate C/C++</b>.
 *  \par  MINIX
 *    \code{.h}
 *      #ifdef  __minix
 *      #ifndef OSID
 *      #define OSID  "MINIX"
 *    \endcode
 *  \par  MorphOS
 *    \code{.h}
 *      #ifdef  __MORPHOS__
 *      #ifndef OSID
 *      #define OSID  "MorphOS"
 *    \endcode
 *  \par  MPE/iX
 *    \code{.h}
 *      #if (defined mpeix        \
 *           || defined __mpexl)
 *      #ifndef OSID
 *      #define OSID  "MPE/iX"
 *    \endcode
 *  \par  MSDOS
 *    \code{.h}
 *      #if (defined MSDOS        \
 *           || defined __MSDOS__ \
 *           || defined _MSDOS    \
 *           || defined __DOS__)
 *      #ifndef OSID
 *      #define OSID  "MSDOS"
 *    \endcode
 *  \par  NonStop
 *    \code{.h}
 *      #ifdef  __TANDEM
 *      #ifndef OSID
 *      #define OSID  "NonStop"
 *    \endcode
 *  \par  Nucleus RTOS
 *    \code{.h}
 *      #ifdef  __nucleus__
 *      #ifndef OSID
 *      #define OSID  "Nucleus RTOS"
 *    \endcode
 *  \par  OS/2
 *    \code{.h}
 *      #if (defined OS2              \
 *           || defined _OS2          \
 *           || defined __OS2__       \
 *           || defined __TOS_OS2__)
 *      #ifndef OSID
 *      #define OSID  "OS/2"
 *    \endcode
 *  \par  Palm OS
 *    \code{.h}
 *      #ifdef  __palmos__
 *      #ifndef OSID
 *      #define OSID  "Palm OS"
 *    \endcode
 *    <tt>__palmos__</tt> defined by <b>GNU C</b> in \e PRC-Tools.
 *  \par  Plan 9
 *    \code{.h}
 *      #ifdef  EPLAN9
 *      #ifndef OSID
 *      #define OSID  "Plan 9"
 *    \endcode
 *  \par  Pyramid DS/OSx
 *    \code{.h}
 *      #ifdef  pyr
 *      #ifndef OSID
 *      #define OSID  "Pyramid DS/OSx"
 *    \endcode
 *  \par  Reliant UNIX
 *    \code{.h}
 *      #ifdef  sinux
 *      #ifndef OSID
 *      #define OSID  "Reliant UNIX"
 *    \endcode
 *  \par  SCO OpenServer
 *    \code{.h}
 *      #if (defined M_I386       \
 *           || defined M_XENIX   \
 *           || defined _SCO_DS)
 *      #ifndef OSID
 *      #define OSID  "SCO OpenServer"
 *    \endcode
 *    \c M_I386 defined by <b>GNU C</b>.\n
 *    \c M_XENIX defined by <b>GNU C</b>.
 *  \par  SVR4 Environment
 *    \code{.h}
 *      #if (defined __sysv__          \
 *           || defined __SVR4         \
 *           || defined __svr4__       \
 *           || defined _SYSTYPE_SVR4)
 *      #ifndef OSID
 *      #define OSID  "SVR4 Environment"
 *    \endcode
 *    \c _SYSTYPE_SVR4 defined on \b IRIX.
 *  \par  Syllable
 *    \code{.h}
 *      #ifdef  __SYLLABLE__
 *      #ifndef OSID
 *      #define OSID  "Syllable"
 *    \endcode
 *  \par  Symbian OS
 *    \code{.h}
 *      #ifdef  __SYMBIAN32__
 *      #ifndef OSID
 *      #define OSID  "Symbian OS"
 *    \endcode
 *  \par  Tru64 (OSF/1)
 *    \code{.h}
 *      #if (defined __osf__    \
 *           || defined __osf)
 *      #ifndef OSID
 *      #define OSID  "Tru64 (OSF/1)"
 *    \endcode
 *  \par  Ultrix
 *    \code{.h}
 *      #if (defined ultrix        \
 *           || defined __ultrix   \
 *           || defined __ultrix__ \
 *           || (defined unix      \
 *               && wax))
 *      #ifndef OSID
 *      #define OSID  "Ultrix"
 *    \endcode
 *  \par  UNICOS/mp
 *    \code{.h}
 *      #if (defined _CRAY        \
 *           || defined __crayx1)
 *      #ifndef OSID
 *      #define OSID  "UNICOS/mp"
 *    \endcode
 *  \par  UNIX Environment
 *    \code{.h}
 *      #if (defined(__unix__)    \
 *           || defined(__unix))
 *      #ifndef OSID
 *      #define OSID  "UNIX Environment"
 *    \endcode
 *    Notice that not all compilers defines these macros, e.g. the \b xlC or 
 *      the <b>DEC C/C++ compiler</b>, so it may be better to use the \b POSIX 
 *      or \b X/Open standard macros instead.
 *  \par  UnixWare
 *    \code{.h}
 *      #if (defined sco    \
 *           || _UNIXWARE7)
 *      #ifndef OSID
 *      #define OSID  "UnixWare"
 *    \endcode
 *  \par  U/Win Environment
 *    \code{.h}
 *      #ifdef  _UWIN
 *      #ifndef OSID
 *      #define OSID  "U/Win Environment"
 *    \endcode
 *  \par  Windows
 *    \code{.h}
 *      #if (defined _WIN16         \
 *           || defined _WIN32      \
 *           || defined _WIN64      \
 *           || defined __WIN32__   \
 *           || defined __TOS_WIN__ \
 *           || defined __WINDOWS__)
 *      #ifndef OSID
 *      #define OSID    "Windows"
 *    \endcode  
 *    \c _WIN16 defined for 16-bit environments.\n
 *    \c _WIN32 defined for both 32-bit and 64-bit environments.\n
 *    \c _WIN64 defined for 64-bit environments.\n
 *    <tt>__WIN32__</tt> defined by <b>Borland C++</b>.\n
 *    <tt>__TOS_WIN__</tt> defined by \b xIC.\n
 *    <tt>__WINDOWS__</tt> defined by <b>Watcom C/C++</b>.
 *  \par  z/OS
 *    \code{.h}
 *      #if (defined __MVS__          \
 *           || defined __HOS_MCS__   \
 *           || defined __TOS_MVS__)
 *      #ifndef OSID
 *      #define OSID  "z/OS"
 *    \endcode
 *    <tt>__MVS__</tt> host.\n
 *    <tt>__HOS_MVS__</tt> host.\n
 *    <tt>__TOS_MVS__</tt> target.
 */

/*
 * ANDROID
 */
#ifdef  __ANDROID__
#ifndef OSID
#define OSID  "ANDROID"
#include <android/api-level.h>
#ifdef  __ANDROID_API__
#define API_LVL __ANDROID_API__
#define OSVER getosverx()
#endif  /* __ANDROID_API__  */
#endif  /* OSID             */
#endif  /* __ANDROID__      */

/*
 * Amadahl UTS
 */
#ifdef  UTS
#ifndef OSID
#define OSID  "Amdahl UTS"
#endif  /* OSID */
#endif  /* UTS  */

/*
 * AmigaOS
 */
#if (defined AMIGA            \
     || defined __amigaos__)
#ifndef OSID
#define OSID  "AmigaOS"
#endif  /* OSID                 */
#endif  /* AMIGA || __amigaos__ */

/*
 * Apollo AEGIS
 */
#ifdef  aegis
#ifndef OSID
#define OSID  "Apollo AEGIS"
#endif  /* OSID   */
#endif  /* aegis  */

/*
 * Apollo Domain/OS
 */
#ifdef  apollo
#ifndef OSID
#define OSID  "Apollo Domain/OS"
#endif  /* OSID   */
#endif  /* apollo */

/*
 * BeOS
 */
#ifdef  __BeOS__
#ifndef OSID
#define OSID  "BeOS"
#endif  /* OSID     */
#endif  /* __BeOS__ */

/*
 * BSD/OS
 */
#ifdef  __bsdi__
#ifndef OSID
#define OSID  "BSD/OS"
#endif  /* OSID     */
#endif  /* __bsdi__ */

/*
 * ConvexOS
 */
#ifdef  __convex__
#ifndef OSID
#define OSID  "ConvexOS"
#endif  /* OSID       */
#endif  /* __convex__ */

/*
 * Cygwin Environment
 */
#ifdef  __CYGWIN__
#ifndef OSID
#define OSID  "Cygwin Environment"
#endif  /* OSID       */
#endif  /* __CYGWIN__ */

/*
 * DG/UX
 */
#if (defined DGUX         \
     || defined __DGUX__  \
     || defined __dgux__)
#ifndef OSID
#define OSID  "DG/UX"
#endif  /* OSID                         */
#endif  /* DGUX || __DGUX__ || __dgux__ */

/*
 * DragonFly
 */
#ifdef  __DragonFly__
#ifndef OSID
#define OSID  "DragonFly"
#endif  /* OSID           */
#endif  /* __DragonFly__  */

/*
 * DYNIX/ptx
 */
#if (defined _SEQUENT_    \
     || defined sequent)
#ifndef OSID
#define OSID  "DYNIX/ptx"
#endif  /* OSID                 */
#endif  /* _SEQUENT_ || sequent */

/*
 * eCos
 */
#ifdef  __ECOS
#ifndef OSID
#define OSID  "eCos"
#endif  /* OSID   */
#endif  /* __ECOS */

/*
 * EMX Environment
 */
#ifdef  __EMX__
#ifndef OSID
#define OSID  "EMX Environment"
#endif  /* OSID     */
#endif  /* __EMX__  */

/*
 * GNU aka GNU/Hurd
 */
#if (defined __GNU__          \
     || defined __gnu_hurd__)
#ifndef OSID
#define OSID  "GNU aka GNU/Hurd"
#endif  /* OSID                     */
#endif  /* __GNU__ || __gnu_hurd__  */

/*
 * GNU/kFreeBSD
 */
#if (defined __FreeBSD_kernel__ \
     && defined __GLIBC__)
#ifndef OSID
#define OSID  "GNU/kFreeBSD"
#endif  /* OSID                           */
#endif  /* __FreeBSD_kernel && __GLIBC__  */

/*
 * GNU/Linux
 */
#ifdef  __gnu_linux__
#ifndef OSID
#define OSID  "GNU/Linux"
#endif  /* OSID           */
#endif  /* __gnu_linux__  */

/*
 * HI-UX MPP
 */
#ifdef  __hiuxmpp
#ifndef OSID
#define OSID  "HI-UX MPP"
#endif  /* OSID       */
#endif  /* __hiuxmpp  */

/*
 * HP-UX
 */
#if (defined _hpux      \
     || defined hpux    \
     || defined __hpux)
#ifndef OSID
#define OSID  "HP-UX"
#endif  /* OSID                     */
#endif  /* _hpux || hpux || __hpux  */

/*
 * IBM OS/400
 */
#ifdef  __OS400__
#ifndef OSID
#define OSID  "IBM OS/400"
#endif  /* OSID       */
#endif  /* __OS400__  */

/*
 * INTEGRITY
 */
#ifdef  __INTEGRITY
#ifndef OSID
#define OSID  "INTEGRITY"
#endif  /* OSID         */
#endif  /* __INTEGRITY  */

/*
 * Interix Environment
 */
#ifdef  __INTERIX
#ifndef OSID
#define OSID  "Interix Environment"
#endif  /* OSID       */
#endif  /* __INTERIX  */

/*
 * IRIX
 */
#if (defined sgi        \
     || defined __sgi)
#ifndef OSID
#define OSID  "IRIX"
#endif  /* OSID         */
#endif  /* sgi || __sgi */

/*
 * linux
 */
#ifdef  __linux__
#ifndef OSID
#define OSID  "linux"
#endif  /* OSID       */
#endif  /* __linux__  */

/*
 * LynxOS
 */
#ifdef  __Lynx__
#ifndef OSID
#define OSID  "LynxOS"
#endif  /* OSID     */
#endif  /* __Lynx__ */

/*
 * MacOS
 */
#if (defined macintosh          \
     || defined Macintosh       \
     || (defined __APPLE        \
         && defined __MACH__))
#ifndef OSID
#define OSID  "MacOS"
#endif  /* OSID                                             */
#endif  /* macintosh || Macintosh || (__APPLE && __MACH__)  */

/*
 * Microware OS-9
 */
#if (defined __OS9000     \
        || defined _OSK)
#ifndef OSID
#define OSID  "Microware OS-9"
#endif  /* OSID             */
#endif  /* __OS9000 || _OSK */

/*
 * MINIX
 */
#ifdef  __minix
#ifndef OSID
#define OSID  "MINIX"
#endif  /* OSID     */
#endif  /* __minix  */

/*
 * MorphOS
 */
#ifdef  __MORPHOS__
#ifndef OSID
#define OSID  "MorphOS"
#endif  /* OSID         */
#endif  /* __MORPHOS__  */

/*
 * MPE/iX
 */
#if (defined mpeix        \
     || defined __mpexl)
#ifndef OSID
#define OSID  "MPE/iX"
#endif  /* OSID               */
#endif  /* __mpeix || __mpexl */

/*
 * MSDOS
 */
#if (defined MSDOS        \
     || defined __MSDOS__ \
     || defined _MSDOS    \
     || defined __DOS__)
#ifndef OSID
#define OSID  "MSDOS"
#endif  /* OSID                                     */
#endif  /* MSDOS || __MSDOS__ || _MSDOS || __DOS__  */

/*
 * NonStop
 */
#ifdef  __TANDEM
#ifndef OSID
#define OSID  "NonStop"
#endif  /* OSID     */
#endif  /* __TANDEM */

/*
 * Nucleus RTOS
 */
#ifdef  __nucleus__
#ifndef OSID
#define OSID  "Nucleus RTOS"
#endif  /* OSID         */
#endif  /* __nucleus__  */

/*
 * OS/2
 */
#if (defined OS2              \
     || defined _OS2          \
     || defined __OS2__       \
     || defined __TOS_OS2__)
#ifndef OSID
#define OSID  "OS/2"
#endif  /* OSID                                   */
#endif  /* OS2 || _OS2 || __OS2__ || __TOS_OS2__  */

/*
 * Palm OS
 */
#ifdef  __palmos__
#ifndef OSID
#define OSID  "Palm OS"
#endif  /* OSID       */
#endif  /* __palmos__ */

/*
 * Plan 9
 */
#ifdef  EPLAN9
#ifndef OSID
#define OSID  "Plan 9"
#endif  /* OSID   */
#endif  /* EPLAN9 */

/*
 * Pyramid DS/OSx
 */
#ifdef  pyr
#ifndef OSID
#define OSID  "Pyramid DS/OSx"
#endif  /* OSID */
#endif  /* pyr  */

/*
 * Reliant UNIX
 */
#ifdef  sinux
#ifndef OSID
#define OSID  "Reliant UNIX"
#endif  /* OSID   */
#endif  /* sinux  */

/*
 * SCO OpenServer
 */
#if (defined M_I386       \
     || defined M_XENIX   \
     || defined _SCO_DS)
#ifndef OSID
#define OSID  "SCO OpenServer"
#endif  /* OSID                           */
#endif  /* M__I386 || M_XENIX || _SCO_DS  */

/*
 * SVR4 Environment
 */
#if (defined __sysv__             \
        || defined __SVR4         \
        || defined __svr4__       \
        || defined _SYSTYPE_SVR4)
#ifndef OSID
#define OSID  "SVR4 Environment"
#endif  /* OSID                                           */
#endif  /* __sysv__ || __SVR4 || __svr4 || _SYSTYPE_SVR4  */

/*
 * Syllable
 */
#ifdef  __SYLLABLE__
#ifndef OSID
#define OSID  "Syllable"
#endif  /* OSID         */
#endif  /* __SYLLABLE__ */

/*
 * Symbian OS
 */
#ifdef  __SYMBIAN32__
#ifndef OSID
#define OSID  "Symbian OS"
#endif  /* OSID           */
#endif  /* __SYMBIAN32__  */

/*
 * Tru64 (OSF/1)
 */
#if (defined __osf__      \
        || defined __osf)
#ifndef OSID
#define OSID  "Tru64 (OSF/1)"
#endif  /* OSID             */
#endif  /* __osf__ || __osf */

/*
 * Ultrix
 */
#if (defined ultrix           \
        || defined __ultrix   \
        || defined __ultrix__ \
        || (defined unix      \
            && wax))
#ifndef OSID
#define OSID  "Ultrix"
#endif  /* OSID                                               */
#endif  /* ultrix || __ultrix || __ultrix__ || (unix && wax)  */

/*
 * UNICOS/mp
 */
#if (defined _CRAY            \
        || defined __crayx1)
#ifndef OSID
#define OSID  "UNICOS/mp"
#endif  /* OSID               */
#endif  /* _CRAY || __crayx1  */

/*
 * UNIX Environment
 */
#if (defined(__unix__)      \
        || defined(__unix))
#ifndef OSID
#define OSID  "UNIX Environment"
#endif  /* OSID               */
#endif  /* __unix__ || __unix */

/*
 * UnixWare
 */
#if (defined sco        \
        || _UNIXWARE7)
#ifndef OSID
#define OSID  "UnixWare"
#endif  /* OSID               */
#endif  /* sco || _UNIXWARE7  */

/*
 * U/Win Environment
 */
#ifdef  _UWIN
#ifndef OSID
#define OSID  "U/Win Environment"
#endif  /* OSID   */
#endif  /* _UWIN  */

/*
 * Windows
 */
#ifdef  WIN16
#ifndef OSID
#define OSID  "Windows"
#endif  /* OSID                                                       */
#define OS_ARCH 16
#elif defined _WIN32
#ifndef OSID
#define OSID  "Windows"
#endif  /* OSID                                                       */
#define OS_ARCH 32
#elif defined _WIN64
#ifndef OSID
#define OSID  "Windows"
#endif  /* OSID                                                       */
#define OS_ARCH 64
#elif (__WIN32__                \
       || defined __TOS_WIN__   \
       || defined __WINDOWS__)
#ifndef OSID
#define OSID  "Windows"
#endif  /* OSID                                                       */
#endif  /* _WIN32 || _WIN64 || __WIN32 || __TOS_WIN__ || __WINDOWS__  */

/*
 * z/OS
 */
#if (defined __MVS__          \
     || defined __HOS_MCS__   \
     || defined __TOS_MVS__)
#ifndef OSID
#define OSID  "z/OS"
#endif  /* OSID                                   */
#endif  /* __MVS__ || __TOS_MVS__ || __TOS_MVS__  */

#ifdef  OSID
 /**
  * @brief    get operating system version x
  * @details  Gets the current operating system details.  Currently just gets
  *             the \link #OS_CODE_NAME Code name\endlink of the current
  *             operating system if one is defined.
  * @return   Returns the \link #OS_CODE_NAME Code name\endlink of the current
  *             operating system.
  * @remark   Currently only supports 'ANDROID'.
  */
inline const char*
getosverx(void)
{
#ifdef  __ANDROID_API__
    if (__ANDROID_API__ == 3) {
#define OS_CODE_NAME  "Cupcake"
        return "1.5";
    }
    else if (__ANDROID_API__ == 4) {
#define OS_CODE_NAME  "Donut"
        return "1.6";
    }
    else if (__ANDROID_API__ == 8) {
#define OS_CODE_NAME  "Froyo"
        return "2.2.x";
    }
    else if (__ANDROID_API__ == 19) {
#define OS_CODE_NAME  "KitKat"
        return "4.4 - 4.4.4";
    }
    else if (__ANDROID_API__ == 23) {
#define OS_CODE_NAME  "Marshmallow"
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
#define OS_CODE_NAME  "Eclair"
        return (__ANDROID_API__ == 5
                ? "2.0"
                : (__ANDROID_API__ == 6
                    ? "2.0.1"
                    : "2.1"));
        case 9:
        case 10:
#define OS_CODE_NAME  "Gingerbread"
            return (__ANDROID_API__ == 9 ? "2.3 - 2.3.2" : "2.3.3 - 2.3.7");
        case 11:
        case 12:
        case 13:
#define OS_CODE_NAME  "Honeycomb"
            return (__ANDROID_API__ == 11
                    ? "3.0"
                    : (__ANDROID_API__ == 12
                        ? "3.1"
                        : "3.2.x"));
        case 14:
        case 15:
#define OS_CODE_NAME  "Ice Cream Sandwich"
            return (__ANDROID_API__ == 14 ? "4.0.1 - 4.0.2" : "4.0.3 - 4.0.4");
        case 16:
        case 17:
        case 18:
#define OS_CODE_NAME  "Jelly Bean"
            return (__ANDROID_API__ == 16
                    ? "4.1.x"
                    : (__ANDROID_API__ == 17
                        ? "4.2.x"
                        : "4.3.x"));
        case 21:
        case 22:
#define OS_CODE_NAME  "Lollipop"
            return (__ANDROID_API__ == 21 ? "5.0" : "5.1");
        case 24:
        case 25:
#define OS_CODE_NAME  "Nougat"
            return (__ANDROID_API__ == 24 ? "7.0" : "7.1");
        default:
            DEBUG_OUT("%d is not a valid Android API Level.\n",
                      __ANDROI_API__);
            return 0;
    }
#endif  /* __ANDROID_API__  */
}

/**
 * @brief   operating system info
 * @details Structure containing information on the current operating system.
 */
typedef struct
osnfo_s {
    const char    *osid;    /**< operating system identification          */
#ifdef  API_LVL
    const char    *apilvl;  /**< application programming instuction level */
#endif  /* API_LVL      */
#ifdef  OS_ARCH
    const uint8_t osarch;   /**< operating system archetecture            */
#endif  /* OS_ARCH      */
#ifdef  OS_CODE_NAME
    const char    *oscn;    /**< operating system code name               */
#endif  /* OS_CODE_NAME */
#ifdef  OSVER
    const char    *osver;   /**< operating system version                 */
#endif  /* VER          */
} osnfo_t;

/**
 * @brief   operating system information
 * @details Retrieves information on the current operating system.
 */
const osnfo_t
osnfo = {
    .osid   = OSID
#ifdef  API_LVL
  , .apilvl = API_LVL
#endif  /* API_LVL      */
#ifdef  OS_ARCH
  , .osarch = OS_ARCH
#endif  /* OS_ARCH      */
#ifdef  OS_CODE_NAME
  , .oscn   = OS_CODE_NAME
#endif  /* OS_CODE_NAME */
#ifdef  OSVER
  , .osver  = OSVER
#endif  /* OSVER        */
};

/**
 * @brief   get operating system identification
 * @details Gets the current operating system identification to as defined from
 *            <tt>#OSID</tt>.
 * @return  Returns <tt>#OSID</tt>.
 */
const char*
getosid(void) { return OSID; }

#ifdef  API_LVL
/**
 * @brief   get application programming instruction level
 * @details Gets the application programming instruction level for the current
 *            operating system if <tt>#API_LVL</tt> is defined.
 * @return  Retruns <tt>#API_LVL</tt>.
 * \internal  
 *  @note Using type 'char*' as return type and as member type in struct 
 *          <tt>#osnfo_t</tt> for member <tt>#osnfo_t#apilvl</tt> may yeild an
 *          error when <tt>#API_LVL</tt> is actually defined as it may be of an
 *          integral type.
 * \endinternal
 */
const char*
getapilev(void) { return API_LVL; }
#endif  /* API_LVL */

#ifdef  OS_CODE_NAME
/**
 * @brief get operating system code name
 */
const char*
getoscn(void) { return OS_CODE_NAME; }
#endif  /* OS_CODE_NAME */
#ifdef  OSVER
/**
 * @brief get operating system version
 */
const char*
getosver(void) { return OSVER; }
#endif  /* OSVER    */
#endif  /* OSID     */
#endif  /* OSNFO_H  */
