#ifndef ISO_H
#define ISO_H

/* public funcs for controlling ISO9141/14230 tx worker */

//isotx_abort: cancel transmission, skip current txblock, reset state
void isotx_abort(void);

//isotx_init: enable UART w/ params, reset txw state
void isotx_init(void);

#endif	//ISO_H
