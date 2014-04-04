//***************************************************************************
//                          pvapp.h  -  RealTimePVB
//                             -------------------
//  begin            : Mrz 01 2007
//  generated by     : pvdevelop (C) 2000-2006 by Lehrig Software Engineering
//  email            : sebastian@lehrig.de
//***************************************************************************
#ifndef _PVAPP_H_
#define _PVAPP_H_

#include "processviewserver.h"
#include "rlsvganimator.h"
#include "rlsharedmemory.h"
#include "rlthread.h"
#include <stdlib.h>

#define PI 3.141592f

typedef struct
{
  float x0, y0, x1, y1, scale, svgx0, svgy0;
  bool popup;
}
POPUP_DATA;

typedef struct
{
  float lifter_height;
}
SIMULATION_DATA;

// todo: comment me out
//#include "rlmodbusclient.h"
//#include "rlsiemenstcpclient.h"
//#include "rlppiclient.h"
//#include "modbusdaemon.h"             // this is generated
//#include "siemensdaemon.h"            // this is generated
//#include "ppidaemon.h"                // this is generated

int show_mask3(PARAM *p);
int show_mask2(PARAM *p);
int show_mask1(PARAM *p);

#endif