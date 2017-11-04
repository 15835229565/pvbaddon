//***************************************************************************
//                          pvapp.h  -  description
//                             -------------------
//  begin            : Mi. Okt. 25 12:37:48 2017
//  generated by     : pvdevelop (C) Lehrig Software Engineering
//  email            : lehrig@t-online.de
//***************************************************************************
#ifndef _PVAPP_H_
#define _PVAPP_H_

#ifdef USE_INETD
static int trace=0; // todo: set trace=0 if you do not want printf() within event loop
#else
static int trace=1; // todo: set trace=0 if you do not want printf() within event loop
#endif

#include "processviewserver.h"
#include "pvcairo.h"
#include "pvcairowidget.h"
#include "pvcairovdi.h"
// todo: comment me out
//#include "rlmodbusclient.h"
//#include "rlsiemenstcpclient.h"
//#include "rlppiclient.h"
//#include "modbusdaemon.h"             // this is generated. Change for name.h -> "name.mkmodbus"
//#include "siemensdaemon.h"            // this is generated
//#include "ppidaemon.h"                // this is generated

#define BUFFER_TRANSPARENCY 0

int show_mask2(PARAM *p);
int show_mask1(PARAM *p);

#define mask1WidgetTableCSV "widgetTable.csv"
int drawMask1Widgets(PARAM *p, int id, rlSpreadsheetTable *t, int width_svg, int height_svg);

#endif
