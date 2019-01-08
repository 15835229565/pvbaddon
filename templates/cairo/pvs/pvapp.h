//***************************************************************************
//                          pvapp.h  -  description
//                             -------------------
//  begin            : Mo. Nov. 6 08:41:58 2017
//  generated by     : pvdevelop (C) Lehrig Software Engineering
//  email            : lehrig@t-online.de
//***************************************************************************
#ifndef _PVAPP_H_
#define _PVAPP_H_

#ifdef USE_INETD
static int trace=0; // todo: set trace=0 if you do not want printf() within event loop
#else
static int trace=0; // todo: set trace=0 if you do not want printf() within event loop
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
#include "rlmailbox.h"
#include "rlfifo.h"
#include "rlthread.h"
void *loop(void *arg); // thread entry point for continuous loop

int show_mask1(PARAM *p);

#define BUFFER_TRANSPARENCY 0
#define WidgetTableCSV "../pvscariodesigner/widgetTable.csv"
#define SVG_FILENAME1 "test.svg"
#define PNG_FILENAME1 "test.png"
#define LOOPMBX "/srv/automation/mbx/loopmbx"
int runHttpServer(PARAM *p);
int helperFilecopy(const char *sfilename, const char *dfilename);

#endif
