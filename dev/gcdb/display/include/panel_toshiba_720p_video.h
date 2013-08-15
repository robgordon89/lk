/* Copyright (c) 2013, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of The Linux Foundation nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*---------------------------------------------------------------------------
 * This file is autogenerated file using gcdb parser. Please do not edit it.
 * Update input XML file to add a new entry or update variable in this file
 * VERSION = "1.0"
 *---------------------------------------------------------------------------*/

#ifndef _PANEL_TOSHIBA_720P_VIDEO_H_

#define _PANEL_TOSHIBA_720P_VIDEO_H_
/*---------------------------------------------------------------------------*/
/* HEADER files                                                              */
/*---------------------------------------------------------------------------*/
#include "panel.h"

/*---------------------------------------------------------------------------*/
/* Panel configuration                                                       */
/*---------------------------------------------------------------------------*/

static struct panel_config toshiba_720p_video_panel_data = {
  "qcom,mdss_dsi_toshiba_720p_video", "dsi:0:", "qcom,mdss-dsi-panel",
  10, 0, "DISPLAY_1", 0, 424000000, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1
};

/*---------------------------------------------------------------------------*/
/* Panel resolution                                                          */
/*---------------------------------------------------------------------------*/
static struct panel_resolution toshiba_720p_video_panel_res = {
  720, 1280, 144, 32, 12, 0, 9, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Color Information                                                   */
/*---------------------------------------------------------------------------*/
static struct color_info toshiba_720p_video_color = {
  24, 0, 0xff, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Panel Command information                                                 */
/*---------------------------------------------------------------------------*/
static char toshiba_720p_video_on_cmd0[] = {
0xb0, 0x00, 0x23, 0x80 };


static char toshiba_720p_video_on_cmd1[] = {
0xb2, 0x00, 0x23, 0x80 };


static char toshiba_720p_video_on_cmd2[] = {
0xb3, 0x0c, 0x23, 0x80 };


static char toshiba_720p_video_on_cmd3[] = {
0xb4, 0x02, 0x23, 0x80 };


static char toshiba_720p_video_on_cmd4[] = {
0x06, 0x00, 0x29, 0xC0,
0xc0, 0x40, 0x02, 0x7f,
0xc8, 0x08, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd5[] = {
0x10, 0x00, 0x29, 0xC0,
0xc1, 0x00, 0xa8, 0x00,
0x00, 0x00, 0x00, 0x00,
0x9d, 0x08, 0x27, 0x00,
0x00, 0x00, 0x00, 0x00,
 };


static char toshiba_720p_video_on_cmd6[] = {
0x06, 0x00, 0x29, 0xC0,
0xc2, 0x00, 0x00, 0x09,
0x00, 0x00, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd7[] = {
0xc3, 0x04, 0x23, 0x80 };


static char toshiba_720p_video_on_cmd8[] = {
0x04, 0x00, 0x29, 0xC0,
0xc4, 0x4d, 0x83, 0x00,
 };


static char toshiba_720p_video_on_cmd9[] = {
0x0b, 0x00, 0x29, 0xC0,
0xc6, 0x12, 0x00, 0x08,
0x71, 0x00, 0x00, 0x00,
0x80, 0x00, 0x04, 0xFF,  };


static char toshiba_720p_video_on_cmd10[] = {
0xc7, 0x22, 0x23, 0x80 };


static char toshiba_720p_video_on_cmd11[] = {
0x05, 0x00, 0x29, 0xC0,
0xc8, 0x4c, 0x0c, 0x0c,
0x0c, 0xFF, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd12[] = {
0x0e, 0x00, 0x29, 0xC0,
0xc9, 0x00, 0x40, 0x00,
0x16, 0x32, 0x2e, 0x3a,
0x43, 0x3e, 0x3c, 0x45,
0x79, 0x3f, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd13[] = {
0x0e, 0x00, 0x29, 0xC0,
0xca, 0x00, 0x46, 0x1a,
0x23, 0x21, 0x1c, 0x25,
0x31, 0x2d, 0x49, 0x5f,
0x7f, 0x3f, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd14[] = {
0x0e, 0x00, 0x29, 0xC0,
0xcb, 0x00, 0x4c, 0x20,
0x3a, 0x42, 0x40, 0x47,
0x4b, 0x42, 0x3e, 0x46,
0x7e, 0x3f, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd15[] = {
0x0e, 0x00, 0x29, 0xC0,
0xcc, 0x00, 0x41, 0x19,
0x21, 0x1d, 0x14, 0x18,
0x1f, 0x1d, 0x25, 0x3f,
0x73, 0x3f, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd16[] = {
0x0e, 0x00, 0x29, 0xC0,
0xcd, 0x23, 0x79, 0x5a,
0x5f, 0x57, 0x4c, 0x51,
0x51, 0x45, 0x3f, 0x4b,
0x7f, 0x3f, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd17[] = {
0x0e, 0x00, 0x29, 0xC0,
0xce, 0x00, 0x40, 0x14,
0x20, 0x1a, 0x0e, 0x0e,
0x13, 0x08, 0x00, 0x05,
0x46, 0x1c, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd18[] = {
0x04, 0x00, 0x29, 0xC0,
0xd0, 0x6a, 0x64, 0x01,
 };


static char toshiba_720p_video_on_cmd19[] = {
0x03, 0x00, 0x29, 0xC0,
0xd1, 0x77, 0xd4, 0xFF,  };


static char toshiba_720p_video_on_cmd20[] = {
0xd3, 0x33, 0x23, 0x80 };


static char toshiba_720p_video_on_cmd21[] = {
0x03, 0x00, 0x29, 0xC0,
0xd5, 0x0f, 0x0f, 0xFF,  };


static char toshiba_720p_video_on_cmd22[] = {
0x07, 0x00, 0x29, 0xC0,
0xd8, 0x34, 0x64, 0x23,
0x25, 0x62, 0x32, 0xFF,  };


static char toshiba_720p_video_on_cmd23[] = {
0x0c, 0x00, 0x29, 0xC0,
0xde, 0x10, 0x7b, 0x11,
0x0a, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00,
 };


static char toshiba_720p_video_on_cmd24[] = {
0x09, 0x00, 0x29, 0xC0,
0xfd, 0x04, 0x55, 0x53,
0x00, 0x70, 0xff, 0x10,
0x73, 0xFF, 0xFF, 0xFF,  };


static char toshiba_720p_video_on_cmd25[] = {
0xe2, 0x00, 0x23, 0x80 };


static char toshiba_720p_video_on_cmd26[] = {
0x11, 0x00, 0x05, 0x80 };


static char toshiba_720p_video_on_cmd27[] = {
0x29, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd toshiba_720p_video_on_command[] = {
{ 0x4 , toshiba_720p_video_on_cmd0},
{ 0x4 , toshiba_720p_video_on_cmd1},
{ 0x4 , toshiba_720p_video_on_cmd2},
{ 0x4 , toshiba_720p_video_on_cmd3},
{ 0xc , toshiba_720p_video_on_cmd4},
{ 0x14 , toshiba_720p_video_on_cmd5},
{ 0xc , toshiba_720p_video_on_cmd6},
{ 0x4 , toshiba_720p_video_on_cmd7},
{ 0x8 , toshiba_720p_video_on_cmd8},
{ 0x10 , toshiba_720p_video_on_cmd9},
{ 0x4 , toshiba_720p_video_on_cmd10},
{ 0xc , toshiba_720p_video_on_cmd11},
{ 0x14 , toshiba_720p_video_on_cmd12},
{ 0x14 , toshiba_720p_video_on_cmd13},
{ 0x14 , toshiba_720p_video_on_cmd14},
{ 0x14 , toshiba_720p_video_on_cmd15},
{ 0x14 , toshiba_720p_video_on_cmd16},
{ 0x14 , toshiba_720p_video_on_cmd17},
{ 0x8 , toshiba_720p_video_on_cmd18},
{ 0x8 , toshiba_720p_video_on_cmd19},
{ 0x4 , toshiba_720p_video_on_cmd20},
{ 0x8 , toshiba_720p_video_on_cmd21},
{ 0xc , toshiba_720p_video_on_cmd22},
{ 0x10 , toshiba_720p_video_on_cmd23},
{ 0x10 , toshiba_720p_video_on_cmd24},
{ 0x4 , toshiba_720p_video_on_cmd25},
{ 0x4 , toshiba_720p_video_on_cmd26},
{ 0x4 , toshiba_720p_video_on_cmd27}
};
#define TOSHIBA_720P_VIDEO_ON_COMMAND 28


static char toshiba_720p_videooff_cmd0[] = {
0x28, 0x00, 0x05, 0x80 };


static char toshiba_720p_videooff_cmd1[] = {
0x10, 0x00, 0x05, 0x80 };




static struct mipi_dsi_cmd toshiba_720p_video_off_command[] = {
{ 0x4 , toshiba_720p_videooff_cmd0},
{ 0x4 , toshiba_720p_videooff_cmd1}
};
#define TOSHIBA_720P_VIDEO_OFF_COMMAND 2


static struct command_state toshiba_720p_video_state = {
  0, 1
};

/*---------------------------------------------------------------------------*/
/* Command mode panel information                                            */
/*---------------------------------------------------------------------------*/

static struct commandpanel_info toshiba_720p_video_command_panel = {
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

/*---------------------------------------------------------------------------*/
/* Video mode panel information                                              */
/*---------------------------------------------------------------------------*/

static struct videopanel_info toshiba_720p_video_video_panel = {
  0, 0, 0, 0, 1, 1, 1, 0, 0x9
};

/*---------------------------------------------------------------------------*/
/* Lane Configuration                                                        */
/*---------------------------------------------------------------------------*/

static struct lane_configuration toshiba_720p_video_lane_config = {
  4, 0, 1, 1, 1, 1
};


/*---------------------------------------------------------------------------*/
/* Panel Timing                                                              */
/*---------------------------------------------------------------------------*/
const uint32_t toshiba_720p_video_timings[] = {
  0xb0, 0x23, 0x1b, 0x00, 0x94, 0x93, 0x1e, 0x25,  0x15, 0x03, 0x04, 0x00
};



static struct mipi_dsi_cmd toshiba_720p_video_rotation[] = {

};
#define TOSHIBA_720P_VIDEO_ROTATION 0


static struct panel_timing toshiba_720p_video_timing_info = {
  0x0, 0x04, 0x04, 0x1b
};

static struct panel_reset_sequence toshiba_720p_video_panel_reset_seq = {
{ 1, 0, 1, }, { 20, 200, 20, }, 2
};

/*---------------------------------------------------------------------------*/
/* Backlight Settings                                                        */
/*---------------------------------------------------------------------------*/

static struct backlight toshiba_720p_video_backlight = {
  1, 1, 4095, 100, 1, "PMIC_8941"
};


#endif /*_PANEL_TOSHIBA_720P_VIDEO_H_*/
