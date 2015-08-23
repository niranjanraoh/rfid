/***************************************************************
 *
 * OpenBeacon.org - nRF51 Name Routine
 *
 * Copyright 2013 Milosch Meriac <meriac@openbeacon.de>
 *
 ***************************************************************

 This file is part of the OpenBeacon.org active RFID firmware

 OpenBeacon is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 OpenBeacon is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Foobar.  If not, see <http://www.gnu.org/licenses/>.

*/
#ifndef __NAME_H__
#define __NAME_H__

extern int name(int len, char* res, uint32_t seed);
extern int name_prefix(int pos, int len, char* res, uint32_t seed);
extern int name_postfix(int pos, int len, char* res, uint32_t seed);

#endif/*__NAME_H__*/
