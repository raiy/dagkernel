/* Copyright (c) 2009-2010, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of Code Aurora Forum, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef LCDC_S6E63M0_SEQ_H
#define LCDC_S6E63M0_SEQ_H

/*
struct setting_table {
	unsigned char command;	
	unsigned char parameters;
	unsigned char parameter[45];
	long wait;
};*/

// Gamma Code //////////////////////////////////////////////

// For Magna EA8868 4.5"
static struct setting_table EA8868_GAMMA_19_30_dimming[] = {
 {0xF9, 24, {
	0x00, 0x68, 0xD2, 0xBB, 0xD9, 0xC5, 0x98, 0x55,
	0x00, 0x78, 0xD2, 0xB9, 0xD5, 0xC4, 0xB9, 0x55,
	0x00, 0x7C, 0xD1, 0xBA, 0xD8, 0xCB, 0xE0, 0x55,
 }, 0 },
 };
static struct setting_table EA8868_GAMMA_19_40[] = {
 {0xF9, 24, {
	0x00, 0x6F, 0xD1, 0xBC, 0xD8, 0xC7, 0xAE, 0x55,
	0x00, 0x80, 0xD1, 0xBA, 0xD5, 0xC4, 0xC5, 0x55,
	0x00, 0x84, 0xD1, 0xBA, 0xD7, 0xCA, 0xE0, 0x55,
} , 0},
 };
static struct setting_table EA8868_GAMMA_19_50[] = {
 {0xF9, 24, {
	0x00, 0x74, 0xD3, 0xBA, 0xD7, 0xC9, 0xB7, 0x55,
	0x00, 0x87, 0xD1, 0xB8, 0xD5, 0xC5, 0xC8, 0x55,
	0x00, 0x8B, 0xD1, 0xB8, 0xD7, 0xC9, 0xDD, 0x55,
 }, 0}, 
 };
static struct setting_table EA8868_GAMMA_19_60[] = {
{0xF9, 24, {
	0x00, 0x7A, 0xD1, 0xB9, 0xD7, 0xC9, 0xC0, 0x55,
	0x00, 0x8D, 0xD0, 0xB8, 0xD5, 0xC5, 0xCC, 0x55,
	0x00, 0x92, 0xCF, 0xB8, 0xD6, 0xC9, 0xDC, 0x55,
 }, 0},
 };
static struct setting_table EA8868_GAMMA_19_70[] = {
{0xF9, 24, {
	0x00, 0x7F, 0xCE, 0xB9, 0xD7, 0xC9, 0xC7, 0x55,
	0x00, 0x93, 0xCD, 0xB8, 0xD5, 0xC5, 0xCE, 0x55,
	0x00, 0x98, 0xCC, 0xB8, 0xD6, 0xC8, 0xDD, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_80[] = {
{0xF9, 24, {
	0x00, 0x83, 0xCE, 0xB9, 0xD6, 0xC9, 0xCC, 0x55,
	0x00, 0x98, 0xCD, 0xB7, 0xD5, 0xC5, 0xCF, 0x55,
	0x00, 0x9D, 0xCD, 0xB6, 0xD6, 0xC8, 0xDC, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_90[] = {
{0xF9, 24, {
	0x00, 0x87, 0xCD, 0xB8, 0xD7, 0xC8, 0xCF, 0x55,
	0x00, 0x9D, 0xCB, 0xB6, 0xD6, 0xC5, 0xD1, 0x55,
	0x00, 0xA2, 0xCB, 0xB6, 0xD6, 0xC8, 0xDC, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_100[] = {
{0xF9, 24, {
	0x00, 0x8B, 0xCC, 0xB7, 0xD7, 0xC8, 0xD1, 0x55,
	0x00, 0xA2, 0xCA, 0xB5, 0xD6, 0xC5, 0xD1, 0x55,
	0x00, 0xA7, 0xCA, 0xB5, 0xD6, 0xC7, 0xDC, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_110[] = {
{0xF9, 24, {
	0x00, 0x8F, 0xCA, 0xB7, 0xD7, 0xC8, 0xD2, 0x55,
	0x00, 0xA6, 0xC9, 0xB5, 0xD6, 0xC5, 0xD1, 0x55,
	0x00, 0xAB, 0xC9, 0xB5, 0xD6, 0xC7, 0xDD, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_120[] = {
{0xF9, 24, {
	0x00, 0x93, 0xC9, 0xB7, 0xD6, 0xC8, 0xD4, 0x55,
	0x00, 0xAA, 0xC9, 0xB5, 0xD5, 0xC5, 0xD2, 0x55,
	0x00, 0xB0, 0xC8, 0xB5, 0xD5, 0xC7, 0xDD, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_130[] = {
{0xF9, 24, {
	0x00, 0x96, 0xCA, 0xB5, 0xD6, 0xC7, 0xD5, 0x55,
	0x00, 0xAE, 0xC8, 0xB4, 0xD5, 0xC5, 0xD2, 0x55,
	0x00, 0xB4, 0xC8, 0xB3, 0xD5, 0xC7, 0xDC, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_140[] = {
{0xF9, 24, {
	0x00, 0x98, 0xCB, 0xB3, 0xD8, 0xC8, 0xD6, 0x55,
	0x00, 0xB1, 0xC9, 0xB2, 0xD6, 0xC6, 0xD2, 0x55,
	0x00, 0xB7, 0xC9, 0xB1, 0xD6, 0xC8, 0xDB, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_150[] = {
{0xF9, 24, {
	0x00, 0x9C, 0xC8, 0xB3, 0xD8, 0xC8, 0xD8, 0x55,
	0x00, 0xB5, 0xC7, 0xB2, 0xD6, 0xC6, 0xD4, 0x55,
	0x00, 0xBB, 0xC7, 0xB1, 0xD6, 0xC8, 0xDC, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_160[] = {
{0xF9, 24, {
	0x00, 0x9E, 0xC9, 0xB2, 0xD7, 0xC9, 0xD9, 0x55,
	0x00, 0xB8, 0xC7, 0xB1, 0xD6, 0xC6, 0xD4, 0x55,
	0x00, 0xBE, 0xC7, 0xB0, 0xD6, 0xC8, 0xDC, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_170[] = {
{0xF9, 24, {
	0x00, 0xA1, 0xC8, 0xB2, 0xD7, 0xC8, 0xD9, 0x55,
	0x00, 0xBB, 0xC7, 0xB0, 0xD6, 0xC6, 0xD4, 0x55,
	0x00, 0xC1, 0xC7, 0xAF, 0xD6, 0xC8, 0xDB, 0x55,
  }, 0},
  };
 static struct setting_table EA8868_GAMMA_19_180[] = {
{0xF9, 24, {
	0x00, 0xA3, 0xC7, 0xB3, 0xD6, 0xC8, 0xD9, 0x55,
	0x00, 0xBE, 0xC6, 0xB0, 0xD5, 0xC6, 0xD4, 0x55,
	0x00, 0xC4, 0xC6, 0xB0, 0xD5, 0xC7, 0xDB, 0x55,
  }, 0},
  };
  static struct setting_table EA8868_GAMMA_19_190[] = {
{0xF9, 24, {
	0x00, 0xA6, 0xC7, 0xB2, 0xD7, 0xC7, 0xD9, 0x55,
	0x00, 0xC1, 0xC6, 0xB0, 0xD5, 0xC5, 0xD5, 0x55,
	0x00, 0xC7, 0xC6, 0xB0, 0xD5, 0xC6, 0xDC, 0x55,
  },0},
  };
static struct setting_table EA8868_GAMMA_19_200[] = {
{0xF9, 24, {
	0x00, 0xA9, 0xC5, 0xB2, 0xD6, 0xC7, 0xD9, 0x55,
	0x00, 0xC5, 0xC4, 0xB0, 0xD4, 0xC5, 0xD5, 0x55,
	0x00, 0xCB, 0xC4, 0xB0, 0xD4, 0xC6, 0xDB, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_210[] = {
{0xF9, 24, {
	0x00, 0xAC, 0xC5, 0xB1, 0xD6, 0xC7, 0xD9, 0x55,
	0x00, 0xC8, 0xC4, 0xAF, 0xD4, 0xC5, 0xD5, 0x55,
	0x00, 0xCF, 0xC4, 0xAE, 0xD4, 0xC6, 0xDB, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_220[] = {
{0xF9, 24, {
	0x00, 0xAF, 0xC4, 0xB0, 0xD6, 0xC7, 0xD9, 0x55,
	0x00, 0xCB, 0xC3, 0xAF, 0xD4, 0xC5, 0xD4, 0x55,
	0x00, 0xD2, 0xC3, 0xAE, 0xD4, 0xC6, 0xDA, 0x55,
  }, 0},
  };
  static struct setting_table EA8868_GAMMA_19_230[] = {
{0xF9, 24, {
	0x00, 0xB0, 0xC5, 0xAF, 0xD6, 0xC8, 0xD8, 0x55,
	0x00, 0xCD, 0xC3, 0xAE, 0xD4, 0xC6, 0xD4, 0x55,
	0x00, 0xD4, 0xC3, 0xAD, 0xD4, 0xC7, 0xD9, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_240[] = {
{0xF9, 24, {
	0x00, 0xB3, 0xC4, 0xB0, 0xD5, 0xC7, 0xDA, 0x55,
	0x00, 0xD0, 0xC3, 0xAE, 0xD4, 0xC5, 0xD5, 0x55,
	0x00, 0xD7, 0xC3, 0xAD, 0xD4, 0xC6, 0xDA, 0x55,
 }, 0},
 };
static struct setting_table EA8868_GAMMA_19_250[] = {
{0xF9, 24, {
	0x00, 0xB4, 0xC4, 0xAE, 0xD6, 0xC8, 0xDA, 0x55,
	0x00, 0xD2, 0xC2, 0xAC, 0xD5, 0xC6, 0xD5, 0x55,
	0x00, 0xD9, 0xC2, 0xAB, 0xD5, 0xC7, 0xDA, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_260[] = {
{0xF9, 24, {
	0x00, 0xB7, 0xC3, 0xAE, 0xD4, 0xC8, 0xDA, 0x55,
	0x00, 0xD5, 0xC1, 0xAC, 0xD3, 0xC6, 0xD5, 0x55,
	0x00, 0xDC, 0xC1, 0xAC, 0xD2, 0xC7, 0xDA, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_270[] = {
{0xF9, 24, {
	0x00, 0xB9, 0xC3, 0xAE, 0xD4, 0xC8, 0xDA, 0x55,
	0x00, 0xD8, 0xC1, 0xAC, 0xD3, 0xC6, 0xD5, 0x55,
	0x00, 0xDF, 0xC1, 0xAC, 0xD2, 0xC7, 0xDA, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_280[] = {
{0xF9, 24, {
	0x00, 0xBB, 0xC3, 0xAE, 0xD4, 0xC7, 0xD9, 0x55,
	0x00, 0xDA, 0xC1, 0xAC, 0xD3, 0xC5, 0xD5, 0x55,
	0x00, 0xE1, 0xC1, 0xAC, 0xD2, 0xC6, 0xD9, 0x55,
  }, 0},
  };
static struct setting_table EA8868_GAMMA_19_290[] = {
{0xF9, 24, {
	0x00, 0xBD, 0xC2, 0xAE, 0xD4, 0xC7, 0xD9, 0x55,
	0x00, 0xDD, 0xC0, 0xAC, 0xD3, 0xC5, 0xD5, 0x55,
	0x00, 0xE4, 0xC0, 0xAC, 0xD2, 0xC6, 0xD9, 0x55,
 }, 0},
 };
static struct setting_table EA8868_GAMMA_19_300[] = {
{0xF9, 24, {
	0x00, 0xC0, 0xC1, 0xAD, 0xD3, 0xC6, 0xD9, 0x55,
	0x00, 0xE0, 0xC0, 0xAB, 0xD2, 0xC5, 0xD5, 0x55,
	0x00, 0xE7, 0xC0, 0xAB, 0xD1, 0xC6, 0xD9, 0x55,
 }, 0},
};

static struct setting_table *lcd_ea8868_table_19gamma[] =  {
	EA8868_GAMMA_19_30_dimming,
	EA8868_GAMMA_19_40,
	EA8868_GAMMA_19_70,
	EA8868_GAMMA_19_90,
	EA8868_GAMMA_19_100,
	EA8868_GAMMA_19_110,
	EA8868_GAMMA_19_120,
	EA8868_GAMMA_19_130,
	EA8868_GAMMA_19_140,
	EA8868_GAMMA_19_150,
	EA8868_GAMMA_19_160,
	EA8868_GAMMA_19_170,
	EA8868_GAMMA_19_180,
	EA8868_GAMMA_19_190,
	EA8868_GAMMA_19_200,
	EA8868_GAMMA_19_210,
	EA8868_GAMMA_19_220,
	EA8868_GAMMA_19_230,
	EA8868_GAMMA_19_240,
	EA8868_GAMMA_19_250,
	EA8868_GAMMA_19_260,
	EA8868_GAMMA_19_270,
	EA8868_GAMMA_19_280,
	EA8868_GAMMA_19_290,
	EA8868_GAMMA_19_300,
};


// For 4.5"
static struct setting_table S6E63M0_GAMMA_22_30_dimming[] = {
 {0xFA, 22, {
 	0x02, 0x18, 0x08, 0x24, 0xA1, 0x51, 0x7B, 0xCE, 
	0xCB, 0xC2, 0xC7, 0xCB, 0xBC, 0xDA, 0xDD, 0xD3, 
	0x00, 0x53, 0x00, 0x52, 0x00, 0x6F,
}, 0 },
 };
static struct setting_table S6E63M0_GAMMA_22_40[] = {
 {0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x97, 0x58, 0x71, 0xCC, 0xCB, 0xC0, 0xC5, 0xC9, 0xBA, 0xD9, 0xDC, 0xD1, 0x00, 0x5B, 0x00, 0x5A, 0x00, 0x7A} , 0},
 };
static struct setting_table S6E63M0_GAMMA_22_50[] = {
 {0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x96, 0x58, 0x72, 0xCB, 0xCA, 0xBF, 0xC6, 0xC9, 0xBA, 0xD6, 0xD9, 0xCD, 0x00, 0x61, 0x00, 0x61, 0x00, 0x83}, 0}, 
 };
static struct setting_table S6E63M0_GAMMA_22_60[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x91, 0x5E, 0x6E, 0xC9, 0xC9, 0xBD, 0xC4, 0xC9, 0xB8, 0xD3, 0xD7, 0xCA, 0x00, 0x69, 0x00, 0x67, 0x00, 0x8D}, 0},
 };
static struct setting_table S6E63M0_GAMMA_22_70[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x8E, 0x62, 0x6B, 0xC7, 0xC9, 0xBB, 0xC3, 0xC7, 0xB7, 0xD3, 0xD7, 0xCA, 0x00, 0x6E, 0x00, 0x6C, 0x00, 0x94}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_80[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x89, 0x68, 0x65, 0xC9, 0xC9, 0xBC, 0xC1, 0xC5, 0xB6, 0xD2, 0xD5, 0xC9, 0x00, 0x73, 0x00, 0x72, 0x00, 0x9A}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_90[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0xB9, 0x69, 0x64, 0xC7, 0xC8, 0xBB, 0xC0, 0xC5, 0xB4, 0xD2, 0xD5, 0xC9, 0x00, 0x77, 0x00, 0x76, 0x00, 0xA0}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_100[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x86, 0x69, 0x60, 0xC6, 0xC8, 0xBA, 0xBF, 0xC4, 0xB4, 0xD0, 0xD4, 0xC6, 0x00, 0x7C, 0x00, 0x7A, 0x00, 0xA7}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_110[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x86, 0x6A, 0x60, 0xC5, 0xC7, 0xBA, 0xBD, 0xC3, 0xB2, 0xD0, 0xD4, 0xC5, 0x00, 0x80, 0x00, 0x7E, 0x00, 0xAD}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_120[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x82, 0x6B, 0x5E, 0xC4, 0xC8, 0xB9, 0xBD, 0xC2, 0xB1, 0xCE, 0xD2, 0xC4, 0x00, 0x85, 0x00, 0x82, 0x00, 0xB3}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_130[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x8C, 0x6C, 0x60, 0xC3, 0xC7, 0xB9, 0xBC, 0xC1, 0xAF, 0xCE, 0xD2, 0xC3, 0x00, 0x88, 0x00, 0x86, 0x00, 0xB8}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_140[] = {
{0xFA, 22,  {0x02, 0x18, 0x08, 0x24, 0x80, 0x6C, 0x5F, 0xC1, 0xC6, 0xB7, 0xBC, 0xC1, 0xAE, 0xCD, 0xD0, 0xC2, 0x00, 0x8C, 0x00, 0x8A, 0x00, 0xBE}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_150[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x80, 0x6E, 0x5F, 0xC1, 0xC6, 0xB6, 0xBC, 0xC0, 0xAE, 0xCC, 0xD0, 0xC2, 0x00, 0x8F, 0x00, 0x8D, 0x00, 0xC2}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_160[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x7F, 0x6E, 0x5F, 0xC0, 0xC6, 0xB5, 0xBA, 0xBF, 0xAD, 0xCB, 0xCF, 0xC0, 0x00, 0x94, 0x00, 0x91, 0x00, 0xC8}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_170[] = {
{0xFA, 22,  {0x02, 0x18, 0x08, 0x24, 0x7C, 0x6D, 0x5C, 0xC0, 0xC6, 0xB4, 0xBB, 0xBE, 0xAD, 0xCA, 0xCF, 0xC0, 0x00, 0x96, 0x00, 0x94, 0x00, 0xCC}, 0},
  };
 static struct setting_table S6E63M0_GAMMA_22_180[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x7B, 0x6D, 0x5B, 0xC0, 0xC5, 0xB3, 0xBA, 0xBE, 0xAD, 0xCA, 0xCE, 0xBF, 0x00, 0x99, 0x00, 0x97, 0x00, 0xD0}, 0},
  };
  static struct setting_table S6E63M0_GAMMA_22_190[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x7A, 0x6D, 0x59, 0xC1, 0xC5, 0xB4, 0xB8, 0xBD, 0xAC, 0xC9, 0xCE, 0xBE, 0x00, 0x9D, 0x00, 0x9A, 0x00, 0xD5},0},
  };
static struct setting_table S6E63M0_GAMMA_22_200[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x79, 0x6D, 0x58, 0xC1, 0xC4, 0xB4, 0xB6, 0xBD, 0xAA, 0xCA, 0xCD, 0xBE, 0x00, 0x9F, 0x00, 0x9D, 0x00, 0xD9}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_210[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x79, 0x6D, 0x57, 0xC0, 0xC4, 0xB4, 0xB7, 0xBD, 0xAA, 0xC8, 0xCC, 0xBD, 0x00, 0xA2, 0x00, 0xA0, 0x00, 0xDD}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_220[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x78, 0x6F, 0x58, 0xBF, 0xC4, 0xB3, 0xB5, 0xBB, 0xA9, 0xC8, 0xCC, 0xBC, 0x00, 0xA6, 0x00, 0xA3, 0x00, 0xE2}, 0},
  };
  static struct setting_table S6E63M0_GAMMA_22_230[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x75, 0x6F, 0x56, 0xBF, 0xC3, 0xB2, 0xB6, 0xBB, 0xA8, 0xC7, 0xCB, 0xBC, 0x00, 0xA8, 0x00, 0xA6, 0x00, 0xE6}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_240[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x76, 0x6F, 0x56, 0xC0, 0xC3, 0xB2, 0xB5, 0xBA, 0xA8, 0xC6, 0xCB, 0xBB, 0x00, 0xAA, 0x00, 0xA8, 0x00, 0xE9}, 0},
 };
static struct setting_table S6E63M0_GAMMA_22_250[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x74, 0x6D, 0x54, 0xBF, 0xC3, 0xB2, 0xB4, 0xBA, 0xA7, 0xC6, 0xCA, 0xBA, 0x00, 0xAD, 0x00, 0xAB, 0x00, 0xED}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_260[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x74, 0x6E, 0x54, 0xBD, 0xC2, 0xB0, 0xB5, 0xBA, 0xA7, 0xC5, 0xC9, 0xBA, 0x00, 0xB0, 0x00, 0xAE, 0x00, 0xF1}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_270[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x71, 0x6C, 0x50, 0xBD, 0xC3, 0xB0, 0xB4, 0xB8, 0xA6, 0xC6, 0xC9, 0xBB, 0x00, 0xB2, 0x00, 0xB1, 0x00, 0xF4}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_280[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x6E, 0x6C, 0x4D, 0xBE, 0xC3, 0xB1, 0xB3, 0xB8, 0xA5, 0xC6, 0xC8, 0xBB, 0x00, 0xB4, 0x00, 0xB3, 0x00, 0xF7}, 0},
  };
static struct setting_table S6E63M0_GAMMA_22_290[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x71, 0x70, 0x50, 0xBD, 0xC1, 0xB0, 0xB2, 0xB8, 0xA4, 0xC6, 0xC7, 0xBB, 0x00, 0xB6, 0x00, 0xB6, 0x00, 0xFA}, 0},
 };
static struct setting_table S6E63M0_GAMMA_22_300[] = {
{0xFA, 22, {0x02, 0x18, 0x08, 0x24, 0x70, 0x6E, 0x4E, 0xBC, 0xC0, 0xAF, 0xB3, 0xB8, 0xA5, 0xC5, 0xC7, 0xBB, 0x00, 0xB9, 0x00, 0xB8, 0x00, 0xFC}, 0},
};


 static struct setting_table *lcd_s6e63m0_table_22gamma[] =  {
	S6E63M0_GAMMA_22_30_dimming,
	S6E63M0_GAMMA_22_40,
	S6E63M0_GAMMA_22_70,
	S6E63M0_GAMMA_22_90,
	S6E63M0_GAMMA_22_100,
	S6E63M0_GAMMA_22_110,
	S6E63M0_GAMMA_22_120,
	S6E63M0_GAMMA_22_130,
	S6E63M0_GAMMA_22_140,
	S6E63M0_GAMMA_22_150,
	S6E63M0_GAMMA_22_160,
	S6E63M0_GAMMA_22_170,
	S6E63M0_GAMMA_22_180,
	S6E63M0_GAMMA_22_190,
	S6E63M0_GAMMA_22_200,
	S6E63M0_GAMMA_22_210,
	S6E63M0_GAMMA_22_220,
	S6E63M0_GAMMA_22_230,
	S6E63M0_GAMMA_22_240,
	S6E63M0_GAMMA_22_250,
	S6E63M0_GAMMA_22_260,
	S6E63M0_GAMMA_22_270,
	S6E63M0_GAMMA_22_280,
	S6E63M0_GAMMA_22_290,
	S6E63M0_GAMMA_22_300,
};


/////////////////   M3 2.2 Gamma

static struct setting_table EA8868_M3_GAMMA_22_300[] = {
{0xF9, 24, {
	0x00, 0xB9, 0xBA, 0xA6, 0xCC, 0xC5, 0xC5, 0x55, 0x00, 0xC0, 0xB8, 0xA0, 0xC5, 0xBB, 0x9D, 0x55, 0x00, 0xE7, 0xB6, 0xA1, 0xC9, 0xC7, 0xDB, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_290[] = {
{0xF9, 24, {
	0x00, 0xB6, 0xBB, 0xA7, 0xCB, 0xC5, 0xC4, 0x55, 0x00, 0xBD, 0xB9, 0xA0, 0xC5, 0xBA, 0x9D, 0x55, 0x00, 0xE3, 0xB7, 0xA0, 0xC8, 0xC7, 0xDD, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_280[] = {
{0xF9, 24, {
	0x00, 0xB4, 0xBB, 0xA7, 0xCF, 0xC2, 0xC5, 0x55, 0x00, 0xBB, 0xB9, 0xA0, 0xC8, 0xB7, 0x9E, 0x55, 0x00, 0xE1, 0xB7, 0xA0, 0xCB, 0xC4, 0xDE, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_270[] = {
{0xF9, 24, {
	0x00, 0xB2, 0xBC, 0xA8, 0xCE, 0xC3, 0xC4, 0x55, 0x00, 0xB9, 0xBA, 0xA1, 0xC8, 0xB7, 0x9D, 0x55, 0x00, 0xDE, 0xB8, 0xA1, 0xCC, 0xC3, 0xDE, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_260[] = {
{0xF9, 24, {
	0x00, 0xAF, 0xBD, 0xA7, 0xCF, 0xC3, 0xC6, 0x55, 0x00, 0xB6, 0xBA, 0xA1, 0xC8, 0xB7, 0x9D, 0x55, 0x00, 0xDB, 0xB8, 0xA1, 0xCC, 0xC4, 0xDF, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_250[] = {
{0xF9, 24, {
	0x00, 0xAD, 0xBD, 0xA7, 0xCF, 0xC4, 0xC4, 0x55, 0x00, 0xB4, 0xBA, 0xA1, 0xC8, 0xB7, 0x9A, 0x55, 0x00, 0xD8, 0xB8, 0xA2, 0xCB, 0xC6, 0xDE, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_240[] = {
{0xF9, 24, {
	0x00, 0xAB, 0xBD, 0xA7, 0xD0, 0xC4, 0xC7, 0x55, 0x00, 0xB2, 0xBA, 0xA1, 0xC9, 0xB7, 0x9A, 0x55, 0x00, 0xD5, 0xB9, 0xA1, 0xCE, 0xC5, 0xE0, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_230[] = {
{0xF9, 24, {
	0x00, 0xA9, 0xBF, 0xA7, 0xD1, 0xC3, 0xC3, 0x55, 0x00, 0xAF, 0xBC, 0xA1, 0xCA, 0xB6, 0x95, 0x55, 0x00, 0xD2, 0xBB, 0xA1, 0xCE, 0xC5, 0xDE, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_220[] = {
{0xF9, 24, {
	0x00, 0xA7, 0xBF, 0xA7, 0xD1, 0xC3, 0xC4, 0x55, 0x00, 0xAD, 0xBC, 0xA1, 0xCA, 0xB6, 0x95, 0x55, 0x00, 0xD0, 0xBA, 0xA2, 0xCE, 0xC5, 0xE0, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_210[] = {
{0xF9, 24, {
	0x00, 0xA4, 0xC0, 0xA8, 0xD1, 0xC2, 0xC3, 0x55, 0x00, 0xAA, 0xBD, 0xA1, 0xCA, 0xB6, 0x8F, 0x55, 0x00, 0xCC, 0xBC, 0xA2, 0xCE, 0xC6, 0xDF, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_200[] = {
{0xF9, 24, {
	0x00, 0xA3, 0xBF, 0xA7, 0xD2, 0xC3, 0xC0, 0x55, 0x00, 0xA8, 0xBC, 0xA2, 0xCB, 0xB4, 0x8D, 0x55, 0x00, 0xCA, 0xBA, 0xA3, 0xD0, 0xC5, 0xDE, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_190[] = {
{0xF9, 24, {
	0x00, 0xA0, 0xBF, 0xAA, 0xD0, 0xC4, 0xC1, 0x55, 0x00, 0xA5, 0xBD, 0xA3, 0xC9, 0xB5, 0x8D, 0x55, 0x00, 0xC6, 0xBB, 0xA5, 0xCE, 0xC6, 0xE0, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_180[] = {
{0xF9, 24, {
	0x00, 0x9D, 0xC1, 0xAA, 0xD1, 0xC4, 0xBF, 0x55, 0x00, 0xA2, 0xBF, 0xA3, 0xC9, 0xB5, 0x86, 0x55, 0x00, 0xC2, 0xBE, 0xA5, 0xCE, 0xC7, 0xDF, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_170[] = {
{0xF9, 24, {
	0x00, 0x9A, 0xC2, 0xAA, 0xD0, 0xC4, 0xBE, 0x55, 0x00, 0x9F, 0xBF, 0xA3, 0xC9, 0xB5, 0x82, 0x55, 0x00, 0xBF, 0xBE, 0xA4, 0xCF, 0xC8, 0xDF, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_160[] = {
{0xF9, 24, {
	0x00, 0x98, 0xC2, 0xAB, 0xD1, 0xC3, 0xBE, 0x55, 0x00, 0x9D, 0xBF, 0xA4, 0xC9, 0xB4, 0x7C, 0x55, 0x00, 0xBC, 0xBE, 0xA6, 0xCF, 0xC8, 0xDE, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_150[] = {
{0xF9, 24, {
	0x00, 0x96, 0xC2, 0xAA, 0xD1, 0xC2, 0xBE, 0x55, 0x00, 0x9A, 0xBF, 0xA4, 0xC9, 0xB2, 0x7C, 0x55, 0x00, 0xB9, 0xBE, 0xA6, 0xCF, 0xC8, 0xE0, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_140[] = {
{0xF9, 24, {
	0x00, 0x93, 0xC3, 0xAA, 0xD2, 0xC2, 0xBC, 0x55, 0x00, 0x97, 0xC0, 0xA4, 0xC9, 0xB2, 0x74, 0x55, 0x00, 0xB5, 0xBF, 0xA6, 0xD1, 0xC8, 0xE0, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_130[] = {
{0xF9, 24, {
	0x00, 0x8F, 0xC4, 0xAD, 0xD0, 0xC3, 0xBB, 0x55, 0x00, 0x93, 0xC1, 0xA5, 0xC8, 0xB2, 0x6A, 0x55, 0x00, 0xB0, 0xC1, 0xA8, 0xCF, 0xCA, 0xDF, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_120[] = {
{0xF9, 24, {
	0x00, 0x8C, 0xC5, 0xAD, 0xD0, 0xC3, 0xB9, 0x55, 0x00, 0x90, 0xC1, 0xA5, 0xC8, 0xB2, 0x5C, 0x55, 0x00, 0xAD, 0xC1, 0xA8, 0xD0, 0xCB, 0xDE, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_110[] = {
{0xF9, 24, {
	0x00, 0x8A, 0xC3, 0xAD, 0xD2, 0xC1, 0xB7, 0x55, 0x00, 0x8D, 0xC1, 0xA5, 0xC8, 0xAF, 0x54, 0x55, 0x00, 0xAA, 0xBF, 0xA9, 0xD1, 0xCA, 0xE0, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_100[] = {
{0xF9, 24, {
	0x00, 0x86, 0xC5, 0xAE, 0xD2, 0xC0, 0xB3, 0x55, 0x00, 0x89, 0xC3, 0xA5, 0xC8, 0xAD, 0x36, 0x55, 0x00, 0xA4, 0xC3, 0xA9, 0xD2, 0xCB, 0xDD, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_90[] = {
{0xF9, 24, {
	0x00, 0x82, 0xC6, 0xAF, 0xD2, 0xC1, 0xB3, 0x55, 0x00, 0x85, 0xC3, 0xA5, 0xC8, 0xAD, 0x12, 0x55, 0x00, 0x9F, 0xC3, 0xAB, 0xD2, 0xCD, 0xDD, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_80[] = {
{0xF9, 24, {
	0x00, 0x7E, 0xC8, 0xAF, 0xD2, 0xC1, 0xAD, 0x55, 0x00, 0x81, 0xC4, 0xA5, 0xC8, 0xAD, 0x00, 0x55, 0x00, 0x9A, 0xC5, 0xAB, 0xD3, 0xCE, 0xDE, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_70[] = {
{0xF9, 24, {
	0x00, 0x7A, 0xC9, 0xAE, 0xD1, 0xBF, 0xB2, 0x55, 0x00, 0x7C, 0xC5, 0xA5, 0xC6, 0xA7, 0x00, 0x55, 0x00, 0x95, 0xC5, 0xAB, 0xD4, 0xCD, 0xE4, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_60[] = {
{0xF9, 24, {
	0x00, 0x76, 0xC7, 0xB2, 0xD1, 0xBB, 0xB8, 0x55, 0x00, 0x78, 0xC3, 0xA6, 0xC6, 0xA1, 0x00, 0x55, 0x00, 0x90, 0xC3, 0xAF, 0xD4, 0xCD, 0xE9, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_50[] = {
{0xF9, 24, {
	0x00, 0x70, 0xC7, 0xB4, 0xD1, 0xBC, 0xC1, 0x55, 0x00, 0x72, 0xC3, 0xA6, 0xC6, 0x9C, 0x00, 0x55, 0x00, 0x89, 0xC3, 0xB1, 0xD7, 0xCE, 0xEF, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_40[] = {
{0xF9, 24, {
	0x00, 0x6B, 0xCA, 0xB3, 0xD1, 0xB8, 0xCE, 0x55, 0x00, 0x6C, 0xC5, 0xA6, 0xC3, 0x91, 0x00, 0x55, 0x00, 0x82, 0xC6, 0xB3, 0xD7, 0xCD, 0xF8, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_30_dimming[] = {
{0xF9, 24, {
	0x00, 0x64, 0xCC, 0xB0, 0xD3, 0xB4, 0xD4, 0x55, 0x00, 0x65, 0xC5, 0xA1, 0xC3, 0x7F, 0x00, 0x55, 0x00, 0x79, 0xC9, 0xB2, 0xDC, 0xCC, 0xFF, 0x55,
 }, 0},
};


static struct setting_table *lcd_ea8868_m3_table_22gamma[] =  {
	EA8868_M3_GAMMA_22_30_dimming, // 0,
	EA8868_M3_GAMMA_22_40,  // 1,
	EA8868_M3_GAMMA_22_70,  // 2,
	EA8868_M3_GAMMA_22_90,  // 3,
	EA8868_M3_GAMMA_22_100, // 4,
	EA8868_M3_GAMMA_22_110, // 5,
	EA8868_M3_GAMMA_22_120, // 6,
	EA8868_M3_GAMMA_22_130, // 7,
	EA8868_M3_GAMMA_22_140, // 8,
	EA8868_M3_GAMMA_22_150, // 9,
	EA8868_M3_GAMMA_22_160, // 10,
	EA8868_M3_GAMMA_22_170, // 11,
	EA8868_M3_GAMMA_22_180, // 12,
	EA8868_M3_GAMMA_22_190, // 13,
	EA8868_M3_GAMMA_22_200, // 14,
	EA8868_M3_GAMMA_22_210, // 15,
	EA8868_M3_GAMMA_22_220, // 16,
	EA8868_M3_GAMMA_22_230, // 17,
	EA8868_M3_GAMMA_22_240, // 18,
	EA8868_M3_GAMMA_22_250, // 19,
	EA8868_M3_GAMMA_22_260, // 20,
	EA8868_M3_GAMMA_22_270, // 21,
	EA8868_M3_GAMMA_22_280, // 22,
	EA8868_M3_GAMMA_22_290, // 23,
	EA8868_M3_GAMMA_22_300, // 24
};

///////////////// M3 1.9 Gamma
static struct setting_table EA8868_M3_GAMMA_19_300[] = {
{0xF9, 24, {
	0x00, 0xB9, 0xC1, 0xAD, 0xD5, 0xCA, 0xD7, 0x55, 0x00, 0xC0, 0xBF, 0xA9, 0xD0, 0xC1, 0xC1, 0x55, 0x00, 0xE7, 0xBD, 0xA8, 0xD1, 0xC7, 0xE1, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_290[] = {
{0xF9, 24, {
	0x00, 0xB6, 0xC2, 0xAE, 0xD5, 0xCA, 0xD7, 0x55, 0x00, 0xBD, 0xC0, 0xAA, 0xD0, 0xC1, 0xC1, 0x55, 0x00, 0xE3, 0xBE, 0xA9, 0xD1, 0xC7, 0xE2, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_280[] = {
{0xF9, 24, {
	0x00, 0xB3, 0xC5, 0xAE, 0xD5, 0xCA, 0xD7, 0x55, 0x00, 0xBB, 0xC1, 0xAA, 0xD0, 0xC1, 0xC1, 0x55, 0x00, 0xE0, 0xC0, 0xA9, 0xD1, 0xC7, 0xE2, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_270[] = {
{0xF9, 24, {
	0x00, 0xB2, 0xC5, 0xAE, 0xD5, 0xCA, 0xD7, 0x55, 0x00, 0xB9, 0xC1, 0xAA, 0xD0, 0xC1, 0xC1, 0x55, 0x00, 0xDE, 0xC0, 0xA9, 0xD1, 0xC7, 0xE4, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_260[] = {
{0xF9, 24, {
	0x00, 0xB0, 0xC3, 0xB0, 0xD5, 0xCA, 0xD9, 0x55, 0x00, 0xB6, 0xC1, 0xAC, 0xD0, 0xC0, 0xC1, 0x55, 0x00, 0xDB, 0xBF, 0xAB, 0xD1, 0xC8, 0xE4, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_250[] = {
{0xF9, 24, {
	0x00, 0xAE, 0xC4, 0xB0, 0xD5, 0xCA, 0xD6, 0x55, 0x00, 0xB4, 0xC2, 0xAC, 0xD0, 0xC0, 0xBE, 0x55, 0x00, 0xD8, 0xC0, 0xAB, 0xD3, 0xC7, 0xE2, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_240[] = {
{0xF9, 24, {
	0x00, 0xAC, 0xC4, 0xB0, 0xD6, 0xCA, 0xD7, 0x55, 0x00, 0xB2, 0xC2, 0xAC, 0xD0, 0xC0, 0xBE, 0x55, 0x00, 0xD6, 0xC0, 0xAB, 0xD3, 0xC7, 0xE4, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_230[] = {
{0xF9, 24, {
	0x00, 0xA9, 0xC6, 0xB0, 0xD6, 0xCA, 0xD7, 0x55, 0x00, 0xAF, 0xC4, 0xAC, 0xD0, 0xC0, 0xBE, 0x55, 0x00, 0xD2, 0xC2, 0xAB, 0xD3, 0xC7, 0xE5, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_220[] = {
{0xF9, 24, {
	0x00, 0xA7, 0xC6, 0xB1, 0xD6, 0xCA, 0xD7, 0x55, 0x00, 0xAD, 0xC4, 0xAC, 0xD0, 0xC0, 0xBE, 0x55, 0x00, 0xCF, 0xC2, 0xAD, 0xD2, 0xC8, 0xE5, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_210[] = {
{0xF9, 24, {
	0x00, 0xA4, 0xC7, 0xB2, 0xD6, 0xCB, 0xD7, 0x55, 0x00, 0xAA, 0xC5, 0xAC, 0xD0, 0xC1, 0xBE, 0x55, 0x00, 0xCC, 0xC3, 0xAD, 0xD2, 0xC9, 0xE6, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_200[] = {
{0xF9, 24, {
	0x00, 0xA2, 0xC7, 0xB2, 0xD6, 0xCB, 0xD4, 0x55, 0x00, 0xA8, 0xC5, 0xAC, 0xD0, 0xC1, 0xB9, 0x55, 0x00, 0xC9, 0xC3, 0xAD, 0xD2, 0xCB, 0xE4, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_190[] = {
{0xF9, 24, {
	0x00, 0xA0, 0xC7, 0xB2, 0xD6, 0xCC, 0xD5, 0x55, 0x00, 0xA6, 0xC5, 0xAC, 0xD0, 0xC1, 0xB9, 0x55, 0x00, 0xC7, 0xC3, 0xAD, 0xD2, 0xCB, 0xE5, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_180[] = {
{0xF9, 24, {
	0x00, 0x9E, 0xC8, 0xB2, 0xD6, 0xCB, 0xD5, 0x55, 0x00, 0xA3, 0xC6, 0xAC, 0xD0, 0xC0, 0xB9, 0x55, 0x00, 0xC4, 0xC4, 0xAD, 0xD2, 0xCA, 0xE7, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_170[] = {
{0xF9, 24, {
	0x00, 0x9B, 0xC8, 0xB4, 0xD6, 0xCB, 0xD4, 0x55, 0x00, 0xA0, 0xC6, 0xAE, 0xD0, 0xC0, 0xB6, 0x55, 0x00, 0xC0, 0xC4, 0xAF, 0xD3, 0xCB, 0xE5, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_160[] = {
{0xF9, 24, {
	0x00, 0x98, 0xC9, 0xB4, 0xD6, 0xCA, 0xD6, 0x55, 0x00, 0x9D, 0xC7, 0xAE, 0xD0, 0xBF, 0xB6, 0x55, 0x00, 0xBC, 0xC6, 0xAF, 0xD3, 0xCA, 0xE8, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_150[] = {
{0xF9, 24, {
	0x00, 0x96, 0xC9, 0xB5, 0xD5, 0xCA, 0xD4, 0x55, 0x00, 0x9A, 0xC7, 0xAF, 0xCF, 0xBF, 0xB2, 0x55, 0x00, 0xB9, 0xC6, 0xB0, 0xD2, 0xCB, 0xE7, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_140[] = {
{0xF9, 24, {
	0x00, 0x93, 0xC9, 0xB5, 0xD5, 0xCC, 0xD4, 0x55, 0x00, 0x97, 0xC7, 0xAF, 0xCF, 0xC0, 0xB2, 0x55, 0x00, 0xB5, 0xC6, 0xB0, 0xD3, 0xCD, 0xE8, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_130[] = {
{0xF9, 24, {
	0x00, 0x90, 0xC9, 0xB5, 0xD7, 0xCB, 0xD3, 0x55, 0x00, 0x94, 0xC7, 0xAF, 0xD0, 0xBF, 0xAF, 0x55, 0x00, 0xB2, 0xC5, 0xB1, 0xD4, 0xCC, 0xE9, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_120[] = {
{0xF9, 24, {
	0x00, 0x8C, 0xCC, 0xB5, 0xD7, 0xCB, 0xD2, 0x55, 0x00, 0x90, 0xC9, 0xAF, 0xD0, 0xBF, 0xA8, 0x55, 0x00, 0xAC, 0xCA, 0xB0, 0xD4, 0xCE, 0xE8, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_110[] = {
{0xF9, 24, {
	0x00, 0x89, 0xCC, 0xB7, 0xD6, 0xCC, 0xD2, 0x55, 0x00, 0x8D, 0xC9, 0xB0, 0xCF, 0xBF, 0xA8, 0x55, 0x00, 0xA9, 0xC8, 0xB3, 0xD4, 0xCE, 0xE9, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_100[] = {
{0xF9, 24, {
	0x00, 0x86, 0xCD, 0xB7, 0xD6, 0xCC, 0xCD, 0x55, 0x00, 0x89, 0xCA, 0xB0, 0xCF, 0xBF, 0xA0, 0x55, 0x00, 0xA4, 0xCA, 0xB3, 0xD4, 0xD0, 0xE7, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_90[] = {
{0xF9, 24, {
	0x00, 0x82, 0xCE, 0xB7, 0xD8, 0xCB, 0xCD, 0x55, 0x00, 0x85, 0xCB, 0xB0, 0xD1, 0xBE, 0x99, 0x55, 0x00, 0x9F, 0xCB, 0xB3, 0xD7, 0xCF, 0xE8, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_80[] = {
{0xF9, 24, {
	0x00, 0x7E, 0xCF, 0xB8, 0xD7, 0xCA, 0xCD, 0x55, 0x00, 0x81, 0xCC, 0xB0, 0xD0, 0xBA, 0x93, 0x55, 0x00, 0x9A, 0xCD, 0xB3, 0xD7, 0xCF, 0xE9, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_70[] = {
{0xF9, 24, {
	0x00, 0x7B, 0xCF, 0xB7, 0xD8, 0xCA, 0xCA, 0x55, 0x00, 0x7D, 0xCC, 0xAF, 0xD0, 0xBA, 0x85, 0x55, 0x00, 0x96, 0xCC, 0xB3, 0xD8, 0xD1, 0xE8, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_60[] = {
{0xF9, 24, {
	0x00, 0x76, 0xCF, 0xB9, 0xD9, 0xC8, 0xCA, 0x55, 0x00, 0x78, 0xCC, 0xB0, 0xD0, 0xB8, 0x85, 0x55, 0x00, 0x90, 0xCC, 0xB5, 0xDA, 0xD0, 0xEB, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_50[] = {
{0xF9, 24, {
	0x00, 0x71, 0xD0, 0xB9, 0xD8, 0xCB, 0xBC, 0x55, 0x00, 0x72, 0xCD, 0xB0, 0xCF, 0xB8, 0x46, 0x55, 0x00, 0x89, 0xCD, 0xB7, 0xD9, 0xD5, 0xE3, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_40[] = {
{0xF9, 24, {
	0x00, 0x6B, 0xD0, 0xBB, 0xD7, 0xC8, 0xC0, 0x55, 0x00, 0x6C, 0xCD, 0xB0, 0xCB, 0xB1, 0x46, 0x55, 0x00, 0x82, 0xCD, 0xB9, 0xD9, 0xD5, 0xEB, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_19_30_dimming[] = {
{0xF9, 24, {
	0x00, 0x64, 0xD3, 0xBA, 0xD7, 0xC3, 0xC0, 0x55, 0x00, 0x64, 0xCF, 0xAE, 0xCB, 0xA6, 0x00, 0x55, 0x00, 0x78, 0xD2, 0xBA, 0xDC, 0xD3, 0xEF, 0x55,
 }, 0},
};


static struct setting_table *lcd_ea8868_m3_table_19gamma[] =  {
	EA8868_M3_GAMMA_19_30_dimming, // 0,
	EA8868_M3_GAMMA_19_40,  // 1,
	EA8868_M3_GAMMA_19_70,  // 2,
	EA8868_M3_GAMMA_19_90,  // 3,
	EA8868_M3_GAMMA_19_100, // 4,
	EA8868_M3_GAMMA_19_110, // 5,
	EA8868_M3_GAMMA_19_120, // 6,
	EA8868_M3_GAMMA_19_130, // 7,
	EA8868_M3_GAMMA_19_140, // 8,
	EA8868_M3_GAMMA_19_150, // 9,
	EA8868_M3_GAMMA_19_160, // 10,
	EA8868_M3_GAMMA_19_170, // 11,
	EA8868_M3_GAMMA_19_180, // 12,
	EA8868_M3_GAMMA_19_190, // 13,
	EA8868_M3_GAMMA_19_200, // 14,
	EA8868_M3_GAMMA_19_210, // 15,
	EA8868_M3_GAMMA_19_220, // 16,
	EA8868_M3_GAMMA_19_230, // 17,
	EA8868_M3_GAMMA_19_240, // 18,
	EA8868_M3_GAMMA_19_250, // 19,
	EA8868_M3_GAMMA_19_260, // 20,
	EA8868_M3_GAMMA_19_270, // 21,
	EA8868_M3_GAMMA_19_280, // 22,
	EA8868_M3_GAMMA_19_290, // 23,
	EA8868_M3_GAMMA_19_300, // 24
};

#define SEQ_INDIVIDUAL_ELVSS_UPDATE_BEGIN (0)
#define SEQ_INDIVIDUAL_ELVSS_UPDATE_FINISH (3)
static struct setting_table SEQ_INDIVIDUAL_ELVSS[] = {
	{0xB2, 4,
		{0x29,	 0x29,	 0x29,	 0x29,},
	0},
};

#if 0
static struct setting_table SEQ_M3_ELVSS_39[] = {
	{0xB2, 4,
		{0x1A,	 0x1A,	 0x1A,	 0x1A,},
	0},
};

static struct setting_table SEQ_M3_ELVSS_33[] = {
	{0xB2, 4,
		{0x20,	 0x20,	 0x20,	 0x20,},
	0},
};

static struct setting_table SEQ_M3_ELVSS_29[] = {
	{0xB2, 4,
		{0x24,	 0x24,	 0x24,	 0x24,},
	0},
};

static struct setting_table SEQ_M3_ELVSS_24[] = {
	{0xB2, 4,
		{0x29,	 0x29,	 0x29,	 0x29,},
	0},
};

static struct setting_table *SEQ_M3_ELVSS_set[] = {
	SEQ_M3_ELVSS_24,
	SEQ_M3_ELVSS_29,
	SEQ_M3_ELVSS_33,
	SEQ_M3_ELVSS_39,
};
#else

static struct setting_table SEQ_SM2_ELVSS_210_300cd[] = {
	{0xB2, 4,
		{0x14,	 0x14,	 0x14,	 0x14,},
	0},
};

static struct setting_table SEQ_SM2_ELVSS_170_200cd[] = {
	{0xB2, 4,
		{0x1B,	 0x1B,	 0x1B,	 0x1B,},
	0},
};

static struct setting_table SEQ_SM2_ELVSS_110_160cd[] = {
	{0xB2, 4,
		{0x1E,	 0x1E,	 0x1E,	 0x1E,},
	0},
};

static struct setting_table SEQ_SM2_ELVSS_30_100cd[] = {
	{0xB2, 4,
		{0x22,	 0x22,	 0x22,	 0x22,},
	0},
};
static struct setting_table *SEQ_SM2_ELVSS_set[] = {
	SEQ_SM2_ELVSS_30_100cd,
	SEQ_SM2_ELVSS_110_160cd,
	SEQ_SM2_ELVSS_170_200cd,
	SEQ_SM2_ELVSS_210_300cd,
};


static struct setting_table SEQ_M3_ELVSS_210_300cd[] = {
	{0xB2, 4,
		{0x1A,	 0x1A,	 0x1A,	 0x1A,},
	0},
};

static struct setting_table SEQ_M3_ELVSS_170_200cd[] = {
	{0xB2, 4,
		{0x20,	 0x20,	 0x20,	 0x20,},
	0},
};

static struct setting_table SEQ_M3_ELVSS_110_160cd[] = {
	{0xB2, 4,
		{0x24,	 0x24,	 0x24,	 0x24,},
	0},
};

static struct setting_table SEQ_M3_ELVSS_30_100cd[] = {
	{0xB2, 4,
		{0x29,	 0x29,	 0x29,	 0x29,},
	0},
};
static struct setting_table *SEQ_M3_ELVSS_set[] = {
	SEQ_M3_ELVSS_30_100cd,
	SEQ_M3_ELVSS_110_160cd,
	SEQ_M3_ELVSS_170_200cd,
	SEQ_M3_ELVSS_210_300cd,
};
#endif 
/*
static struct setting_table EA8868_M3_GAMMA_22_40[] = {
{0xF9, 24, {
	0x00, 0x68, 0xCB, 0xAF, 0xD7, 0xCD, 0xBD, 0x55,
	0x00, 0x6B, 0xC8, 0xA3, 0xCB, 0xB0, 0x00, 0x55,
	0x00, 0x7C, 0xC9, 0xA9, 0xD4, 0xCB, 0xDC, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_160[] = {
{0xF9, 24, {
	0x00, 0x94, 0xC3, 0xA9, 0xD1, 0xC1, 0xCB, 0x55,
	0x00, 0x9B, 0xC1, 0xA3, 0xCB, 0xB0, 0x93, 0x55,
	0x00, 0xB3, 0xC2, 0xA3, 0xCE, 0xBB, 0xD0, 0x55,
 }, 0},
};

static struct setting_table EA8868_M3_GAMMA_22_300[] = {
{0xF9, 24, {
	0x00, 0xB3, 0xBB, 0xA4, 0xCA, 0xC8, 0xC4, 0x55,
	0x00, 0xBC, 0xB9, 0xA0, 0xC4, 0xBE, 0x9B, 0x55,
	0x00, 0xDB, 0xB8, 0xA0, 0xC5, 0xC3, 0xC0, 0x55,
 }, 0},
};
static struct setting_table *lcd_ea8868_m3_table_22gamma[] =  {
	EA8868_M3_GAMMA_22_40, //EA8868_GAMMA_22_30_dimming,
	EA8868_M3_GAMMA_22_40, //EA8868_GAMMA_22_40,
	EA8868_M3_GAMMA_22_40, //EA8868_GAMMA_22_70,
	EA8868_M3_GAMMA_22_40, //EA8868_GAMMA_22_90,
	EA8868_M3_GAMMA_22_40, //EA8868_GAMMA_22_100,
	EA8868_M3_GAMMA_22_40, //EA8868_GAMMA_22_110,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_120,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_130,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_140,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_150,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_160,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_170,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_180,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_190,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_200,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_210,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_220,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_230,
	EA8868_M3_GAMMA_22_160, //EA8868_GAMMA_22_240,
	EA8868_M3_GAMMA_22_300, //EA8868_GAMMA_22_250,
	EA8868_M3_GAMMA_22_300, //EA8868_GAMMA_22_260,
	EA8868_M3_GAMMA_22_300, //EA8868_GAMMA_22_270,
	EA8868_M3_GAMMA_22_300, //EA8868_GAMMA_22_280,
	EA8868_M3_GAMMA_22_300, //EA8868_GAMMA_22_290,
	EA8868_M3_GAMMA_22_300,
};
*/
// ACL //////////////////////////////////////////////
/*
static struct setting_table SEQ_ACL_ON[] = {
	{ 0xC1, 27,
		{ 0x4D, 
	 0x96,	 0x1D,	 0x00,	 0x00,
	 0x01,	 0xDF,	 0x00,	 0x00,
	 0x03,	 0x1F,	 0x00,	 0x00,
	 0x00,	 0x00,	 0x00,	 0x01,
	 0x08,	 0x0F,	 0x16,	 0x1D,
	 0x24,	 0x2A,	 0x31,	 0x38,
	 0x3F,	 0x46,},
        0 },    

	{ 0xC0, 1, { 0x01,},         0 },
};
*/
/*
static struct setting_table SEQ_ACL_ON[] = {
	{0xC0, 1,
	{ 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
        0 },         
};


static struct setting_table SEQ_ACL_OFF[] = {
	{0xC0, 1,
	{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,},
        0 },         
};


static struct setting_table SEQ_ACL_40P[] = {
	{ 0xC1, 27,
		{ 0x4D,
	 0x96,	 0x1D,	 0x00,	 0x00,
	 0x01,	 0xDF,	 0x00,	 0x00,
	 0x03,	 0x1F,	 0x00,	 0x00,
	 0x00,	 0x00,	 0x00,	 0x01,
	 0x06,	 0x11,	 0x1A,	 0x20,
	 0x25,	 0x29,	 0x2D,	 0x30,
	 0x33,	 0x35,},
        0 },         

//	{ 0xC0, 1, { 0x01,},         0 },         	
};


static struct setting_table SEQ_ACL_43P[] = {
	{0xC1, 27,
		{ 0x4D,

	 0x96,	 0x1D,	 0x00,	 0x00,
	 0x01,	 0xDF,	 0x00,	 0x00,
	 0x03,	 0x1F,	 0x00,	 0x00,
	 0x00,	 0x00,	 0x00,	 0x01,
	 0x07,	 0x12,	 0x1C,	 0x23,
	 0x29,	 0x2D,	 0x31,	 0x34,
	 0x37,	 0x3A,},
        0 },         

//	{ 0xC0, 1, { 0x01,},         0 },
};




static struct setting_table SEQ_ACL_45P[] = {
	{0xC1, 27,
		{ 0x4D,

	 0x96,	 0x1D,	 0x00,	 0x00,
	 0x01,	 0xDF,	 0x00,	 0x00,
	 0x03,	 0x1F,	 0x00,	 0x00,
	 0x00,	 0x00,	 0x00,	 0x01,
	 0x07,	 0x13,	 0x1E,	 0x25,
	 0x2B,	 0x30,	 0x34,	 0x37,
	 0x3A,	 0x3D,},
        0 },         

//	{ 0xC0, 1, { 0x01,},         0 },
};


static struct setting_table SEQ_ACL_47P[] = {
	{0xC1, 27,
		{ 0x4D,

	 0x96,	 0x1D,	 0x00,	 0x00,
	 0x01,	 0xDF,	 0x00,	 0x00,
	 0x03,	 0x1F,	 0x00,	 0x00,
	 0x00,	 0x00,	 0x00,	 0x01,
	 0x07,	 0x14,	 0x20,	 0x28,
	 0x2E,	 0x33,	 0x37,	 0x3B,
	 0x3E,	 0x41,},
        0 },         

//	{ 0xC0, 1, { 0x01,},         0 },
};

static struct setting_table SEQ_ACL_48P[] = {
	{0xC1, 27,
		{ 0x4D,

	 0x96,	 0x1D,	 0x00,	 0x00,
	 0x01,	 0xDF,	 0x00,	 0x00,
	 0x03,	 0x1F,	 0x00,	 0x00,
	 0x00,	 0x00,	 0x00,	 0x01,
	 0x08,	 0x15,	 0x20,	 0x29,
	 0x2F,	 0x34,	 0x39,	 0x3D,
	 0x40,	 0x43,},
        0 },         

//	{ 0xC0, 1, { 0x01,},         0 },
};

static struct setting_table SEQ_ACL_50P[] = {
	{0xC1, 27,
		{ 0x4D,

	 0x96,	 0x1D,	 0x00,	 0x00,
	 0x01,	 0xDF,	 0x00,	 0x00,
	 0x03,	 0x1F,	 0x00,	 0x00,
	 0x00,	 0x00,	 0x00,	 0x01,
	 0x08,	 0x16,	 0x22,	 0x2B,
	 0x31,	 0x37,	 0x3B,	 0x3F,
	 0x43,	 0x46,},
        0 },         

//	{ 0xC0, 1, { 0x01,},         0 },
};


static struct setting_table *ACL_cutoff_set[] = {
	SEQ_ACL_OFF,
	SEQ_ACL_40P,
	SEQ_ACL_43P,
	SEQ_ACL_45P,
	SEQ_ACL_47P,
	SEQ_ACL_48P,
	SEQ_ACL_50P,
};

// ELVSS //////////////////////////////////////////////

static struct setting_table SEQ_ELVSS_ON[] = {
	{0xB1,  3,
		{ 0x0F, 	 0x00,	 0x16, },
	0 },
};


static struct setting_table SEQ_ELVSS_49[] = {
	{0xB2, 4,
		{ 0x10,  0x10,	 0x10,	 0x10, },
	0 },
};

static struct setting_table SEQ_ELVSS_41[] = {
	{0xB2, 4,
		{0x17,	 0x17,	 0x17,	 0x17, },
	0 },
};

static struct setting_table SEQ_ELVSS_39[] = {
	{0xB2, 4,
		{0x1A,	 0x1A,	 0x1A,	 0x1A,},
	0 },
};

static struct setting_table SEQ_ELVSS_35[] = {
	{0xB2, 4,
		{0x1E,	 0x1E,	 0x1E,	 0x1E,},
	0 },
};

static struct setting_table *SEQ_ELVSS_set[] = {
	SEQ_ELVSS_35,
	SEQ_ELVSS_39,
	SEQ_ELVSS_41,
	SEQ_ELVSS_49,
};

// EA8868
static struct setting_table SEQ_SM2_ELVSS_45[] = {
	{0xB2, 4,
		{0x14,	 0x14,	 0x14,	 0x14,},
	0},
};

static struct setting_table SEQ_SM2_ELVSS_38[] = {
	{0xB2, 4,
		{0x1B,	 0x1B,	 0x1B,	 0x1B,},
	0},
};

static struct setting_table SEQ_SM2_ELVSS_35[] = {
	{0xB2, 4,
		{0x1E,	 0x1E,	 0x1E,	 0x1E,},
	0},
};

static struct setting_table SEQ_SM2_ELVSS_31[] = {
	{0xB2, 4,
		{0x22,	 0x22,	 0x22,	 0x22,},
	0},
};
static struct setting_table *SEQ_SM2_ELVSS_set[] = {
	SEQ_SM2_ELVSS_31,
	SEQ_SM2_ELVSS_35,
	SEQ_SM2_ELVSS_38,
	SEQ_SM2_ELVSS_45,
};

static struct setting_table SEQ_GTCON[] = {
	{0xF7, 1,
		{0x09,},
	0},
};
*/

#endif  /* LCDC_EA8898_SEQ_H */

