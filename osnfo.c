/**
 * @file	osnfo.c
 * @brief	osnfo.c
 * @version	v.1
 * @date	01/28/2017 21:16:22
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

#define	DEBUG	1
#define	DEV

#include <stdio.h>
#include <stdint.h>

#include "osnfo.h"

#ifdef	DEV
int
main(void)
{
	
#ifdef	OSID
	printf("%s\n", getosid());
#endif	/* OSID */
	return 0;
}
#endif	/* DEV */
