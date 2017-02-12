/**
 * @file	osnfo.c
 * @brief	osnfo.c
 * @version	v.1
 * @date	02/11/2017 15:01:57
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

#include <stdio.h>

#include "../inc/osnfo.h"
int
main(void)
{
    FILE *fp;
    char path[1035];

    fp = freopen("lsb_release -as", "r", stdin);
    if (!fp)
    {
        return -1;
    }

    printf("%s\n", getsysname());
    printf("%s\n", getnodename());
    printf("%s\n", getrelease());
    printf("%s\n", getversion());
    printf("%s\n", getmachine());
    return 0;
}
