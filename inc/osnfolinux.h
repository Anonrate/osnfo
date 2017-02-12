/**
 * @file	osnfolinux.h
 * @brief	osnfolinux.h
 * @version	v.1
 * @date	02/11/2017 15:04:33
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

#ifndef OSNFOLINUX_H
#define OSNFOLINUX_H  /**< Include guard for 'osnfolinux.h' */
#ifdef  __linux__

/**
 * @brief   supported operating system
 * @details Defined when a supported operating system is present.
 */
#define SPRTD_OS
#include  <sys/utsname.h>

#include  "dbgosnfolinux.h"

/**
 * @brief   utsname
 * \todo  Finish doxumenting...
 */
struct utsname*
getutsname(void)
{
    struct utsname *osnfo = malloc(sizeof(struct utsname));

    /*
     * Failed retrving system information
     */
    if (uname(osnfo))
    {
        DEBUG_OUTF(DBGF_UNAME, __FILE__, __func__, __LINE__, errno);
        return osnfo;
    }
   
    return osnfo;
}

/**
 * @brief   get sys name
 * @details Operating system name (e.g., "Linux").
 * @return  Returns the current operating system name.
 */
char*
getsysname(void)
{
    struct utsname *osnfo = getutsname();
    if (!osnfo)
    {
        DEBUG_OUTF(DBGF_UNMX, __FILE__, __func__, __LINE__, "sysname"); 
        return '\0';
    }

    return osnfo->sysname;
}

/**
 * @brief   get nodename
 * @details Name within "some implementation-defined network".
 * @return  Retruns the current node name of the current machine.
 */
char*
getnodename(void)
{
    struct utsname *osnfo = getutsname();
    if (!osnfo)
    {
        DEBUG_OUTF(DBGF_UNMX, __FILE__, __func__, __LINE__, "nodename"); 
        return '\0';
    }

    return osnfo->nodename;
}

/**
 * @brief   get release
 * @details Operating system release (e.g., "2.6.28").
 * @return  Returns the release of the current operating system.
 */
char*
getrelease(void)
{
    struct utsname *osnfo = getutsname();
    if (!osnfo)
    {
        DEBUG_OUTF(DBGF_UNMX, __FILE__, __func__, __LINE__, "release"); 
        return '\0';
    }

    return osnfo->release;
}

/**
 * @brief   get version
 * @details Operating system version.
 * @return  Returns the operating systems current version.
 */
char*
getversion(void)
{
    struct utsname *osnfo = getutsname();
    if (!osnfo)
    {
        DEBUG_OUTF(DBGF_UNMX, __FILE__, __func__, __LINE__, "version"); 
        return '\0';
    }

    return osnfo->version;
}

/**
 * @brief   get machine
 * @details Hardware identifier.
 * @return  Returns the a hardware identfier for the current machine.
 */
char*
getmachine(void)
{
    struct utsname *osnfo = getutsname();
    if (!osnfo)
    {
        DEBUG_OUTF(DBGF_UNMX, __FILE__, __func__, __LINE__, "machine"); 
        return '\0';
    }

    return osnfo->machine;
}

#ifdef  _GNU_SOURCE
/**
 * @brief   get domain name
 * @details NIS or YP domain name.
 * \todo  Doxument what is returned, but need to figure out what the fuck 'NIS'
 *          and 'YP' means..
 */
char*
getdomainname(void)
{
    struct utsname *osnfo = getutsname();
    if (!osnfo)
    {
        DEBUG_OUTF(DBGF_UNMX, __FILE__, __func__, __LINE__, "domainname"); 
        return '\0';
    }

    return osnfo->domainname;
}
#endif  /* _GNU_SOURCE  */
#endif  /* __linux__    */
#endif  /* OSNFOLINUX_H */
