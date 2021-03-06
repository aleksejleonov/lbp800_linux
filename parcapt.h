/*  Linux Canon LBP800 CAPT driver
 *  parallel capt backend header file
 *  Copyright (c) 2007 Massimo Del Fedele <max@veneto.com>
 *
 *  Adapted from a printer driver for Samsung ML-85G laser printer
 *  (C) Copyleft, 2000 Rildo Pragana <rpragana@acm.org>
 *  and from Linux Canon CAPT LBP810 driver
 *  Copyright (C) 2004 Nicolas Boichat <nicolas@boichat.ch>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#ifndef		__PARCAPT_H
#define		__PARCAPT_H

////////////////////////////////////////////////////////////////
// CONTROLLO PRESENZA STAMPANTE NEL PORT SPECIFICATO
BOOL HasLBP800(char *DeviceName);

////////////////////////////////////////////////////////////////
// STAMPA DELLA PAGINA CORRENTE
BYTE PrintPage(int Device, FILE *CBitmapf);

////////////////////////////////////////////////////////////////
// STAMPA DI TUTTE LE PAGINE
BYTE PrintPages(int Device, FILE *CBitmapf);

#endif      // __PARCAPT_H

