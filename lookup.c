#include <stdio.h>

#define  uint8_t unsigned char
#define  uint16_t unsigned short


typedef struct  _tcb_soc_dymic
{
	uint16_t cur_table[6];
	uint16_t vol_table[84];
	uint8_t soc_in_T[6][84];	
}tcb_soc_dymic;

typedef struct _tcb_soc3D_dymic
{
	uint16_t temp[3];
	tcb_soc_dymic *pr_25T;
	tcb_soc_dymic *pr_45T;	
	tcb_soc_dymic *pr_60T;	
}tcb_soc3D_dymic;



const tcb_soc_dymic s_table_soc_dymic25T = {
	
  { 250, 375, 625, 1250, 1875, 2500 },	
  
  { 2500, 2510, 2520, 2530, 2540, 2550, 2560, 2570, 2580,
    2590, 2600, 2610, 2620, 2630, 2640, 2650, 2660, 2670,
    2680, 2690, 2700, 2710, 2720, 2730, 2740, 2750, 2760,
    2770, 2780, 2790, 2800, 2810, 2820, 2830, 2840, 2850,
    2860, 2870, 2880, 2890, 2900, 2910, 2920, 2930, 2940,
    2950, 2960, 2970, 2980, 2990, 3000, 3010, 3020, 3030,
    3040, 3050, 3060, 3070, 3080, 3090, 3100, 3110, 3120,
    3130, 3140, 3150, 3160, 3170, 3180, 3190, 3200, 3210,
    3220, 3230, 3240, 3250, 3260, 3270, 3280, 3290, 3300,
    3310, 3320, 3330 },

{
	

{0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
0,		0,		0,		0,		1,		1,		2,		2,		2,		3,		3,		4,		5,		5,		6,
7,		8,		9,		10,		14,		19,		26,		29,		33,		39,		44,		51,		60,		70,		84,		
112,	147,	161,	173,	195,	249,	249,	250,	250},


{0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
0,		0,		0,		0,		0,		0,		1,		1,		1,		2,		2,		2,		2,		3,		3,
3,		4,		4,		4,		4,		5,		5,		5,		6,		6,		6,		7,		7,		8,		9,
10,		12,		15,		19,		24,		28,		32,		36,		41,		47,		55,		64,		75,		90,		116,	
147,	163,	177,	200,	248,	249,	249,	250,	250},


{0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,		0,
0,		0,		1,		1,		1,		1,		2,		2,		2,		2,		3,		3,		3,		4,		4,
4,		5,		5,		5,		6,		6,		6,		7,		7,		8,		8,		8,		9,		9,		10,
10,		11,		11,		11,		12,		12,		13,		13,		14,		14,		15,		15,		16,		17,		19,		
22,		25,		29,		32,		36,		41,		46,		52,		60,		70,		82,		97,		119,	145,	166,	
183,	206,	248,	249,	249,	250,	250,	250,	250},

		
{0,		1,		1,		2,		2,		3,		3,		4,		4,		4,		5,		5,		5,		6,		6,		
6,		7,		7,		8,		8,		8,		9,		9,		10,		10,		10,		11,		11,		12,		12,		
13,		13,		14,		14,		15,		15,		16,		17,		17,		18,		18,		19,		20,		20,		21,		
22,		23,		23,		24,		25,		26,		26,		27,		28,		29,		29,		31,		34,		37,		40,		
44,		49,		55,		62,		71,		82,		95,		112,	131,	152,	175,	199,	231,	248,	249,	
249,	250,	250,	250,	250,	250,	250,	250,	250},		


{3,		3,		3,		4,		4,		5,		5,		6,		6,		7,		7,		8,		8,		8,		9,		
9,		10,		10,		11,		11,		12,		13,		13,		14,		14,		15,		16,		16,		17,		18,		
18,		19,		20,		21,		22,		23,		24,		25,		26,		27,		28,		29,		30,		31,		32,
33,		34,		35,		37,		38,		39,		40,		42,		43,		44,		45,		47,		51,		57,		64,		
73,		84,		96,		112,	130,	150,	174,	201,	237,	248,	249,	249,	249,	250,	250,		
250,	250,	250,	250,	250,	250,	250,	250,	250},		


{3,		3,		4,		4,		5,		5,		6,		7,		7,		8,		9,		9,		10,		10,		11,		
11,		12,		12,		13,		13,		14,		15,		15,		16,		17,		17,		18,		19,		19,		20,		
21,		22,		23,		24,		25,		26,		27,		28,		29,		30,		31,		32,		33,		34,		35,		
36,		37,		38,		40,		41,		42,		43,		46,		50,		56,		63,		72,		82,		93,		107,
125,	144,	167,	195,	236,	247,	248,	249,	249,	250,	250,	250,	250,	250,	250,		
250,	250,	250,	250,	250,	250,	250,	250,	250},

}
};

const tcb_soc_dymic s_table_soc_dymic45T = {
	
  { 250, 375, 625, 1250, 1875, 2500 },	
  
  { 2500, 2510, 2520, 2530, 2540, 2550, 2560, 2570, 2580,
    2590, 2600, 2610, 2620, 2630, 2640, 2650, 2660, 2670,
    2680, 2690, 2700, 2710, 2720, 2730, 2740, 2750, 2760,
    2770, 2780, 2790, 2800, 2810, 2820, 2830, 2840, 2850,
    2860, 2870, 2880, 2890, 2900, 2910, 2920, 2930, 2940,
    2950, 2960, 2970, 2980, 2990, 3000, 3010, 3020, 3030,
    3040, 3050, 3060, 3070, 3080, 3090, 3100, 3110, 3120,
    3130, 3140, 3150, 3160, 3170, 3180, 3190, 3200, 3210,
    3220, 3230, 3240, 3250, 3260, 3270, 3280, 3290, 3300,
    3310, 3320, 3330 },

  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 3.0, 3.0, 3.0, 4.0, 4.0,
    4.0, 5.0, 5.0, 5.0, 6.0, 6.0, 6.0, 7.0, 7.0, 7.0, 8.0, 8.0, 9.0, 9.0, 9.0,
    10.0, 10.0, 11.0, 11.0, 11.0, 12.0, 13.0, 21.0, 29.0, 33.0, 39.0, 44.0, 51.0,
    60.0, 67.0, 74.0, 84.0, 131.0, 155.0, 164.0, 181.0, 248.0, 249.0, 249.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 2.0, 2.0, 2.0, 3.0, 3.0, 3.0, 4.0, 4.0, 4.0, 5.0, 5.0, 5.0, 6.0,
    6.0, 6.0, 7.0, 7.0, 7.0, 8.0, 8.0, 9.0, 9.0, 9.0, 10.0, 10.0, 11.0, 11.0,
    12.0, 12.0, 13.0, 13.0, 14.0, 14.0, 18.0, 29.0, 33.0, 38.0, 43.0, 50.0, 58.0,
    65.0, 73.0, 83.0, 112.0, 153.0, 164.0, 177.0, 216.0, 250.0, 250.0, 250.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 2.0, 2.0, 2.0, 3.0, 3.0, 3.0, 4.0, 4.0, 4.0, 5.0, 5.0, 6.0, 6.0, 6.0,
    7.0, 7.0, 8.0, 8.0, 8.0, 9.0, 9.0, 10.0, 10.0, 11.0, 11.0, 12.0, 12.0, 13.0,
    13.0, 14.0, 15.0, 15.0, 16.0, 16.0, 23.0, 31.0, 35.0, 40.0, 46.0, 53.0, 61.0,
    69.0, 79.0, 94.0, 128.0, 158.0, 172.0, 190.0, 249.0, 250.0, 250.0, 250.0,
    250.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, -0.0, 0.0, 1.0, 1.0, 1.0, 2.0, 2.0, 3.0,
    3.0, 4.0, 4.0, 5.0, 5.0, 5.0, 6.0, 6.0, 7.0, 8.0, 8.0, 9.0, 9.0, 10.0, 11.0,
    11.0, 12.0, 13.0, 13.0, 14.0, 15.0, 16.0, 17.0, 18.0, 18.0, 19.0, 20.0, 21.0,
    22.0, 23.0, 23.0, 24.0, 25.0, 27.0, 32.0, 37.0, 43.0, 49.0, 57.0, 66.0, 76.0,
    89.0, 108.0, 133.0, 161.0, 181.0, 204.0, 249.0, 249.0, 250.0, 250.0, 250.0,
    250.0, 250.0, 250.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 2.0, 2.0, 3.0, 4.0, 4.0,
    5.0, 5.0, 6.0, 7.0, 8.0, 9.0, 9.0, 10.0, 12.0, 13.0, 14.0, 16.0, 17.0, 19.0,
    20.0, 22.0, 24.0, 25.0, 27.0, 28.0, 30.0, 32.0, 33.0, 35.0, 37.0, 38.0, 40.0,
    41.0, 43.0, 45.0, 46.0, 48.0, 50.0, 51.0, 53.0, 55.0, 57.0, 58.0, 61.0, 70.0,
    82.0, 97.0, 116.0, 137.0, 161.0, 185.0, 211.0, 248.0, 249.0, 250.0, 250.0,
    250.0, 250.0, 250.0, 250.0, 250.0, 250.0, 250.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 2.0, 3.0,
    3.0, 4.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 14.0, 15.0, 17.0,
    19.0, 21.0, 23.0, 25.0, 27.0, 29.0, 31.0, 33.0, 35.0, 37.0, 39.0, 41.0, 43.0,
    45.0, 47.0, 49.0, 52.0, 54.0, 56.0, 58.0, 60.0, 62.0, 65.0, 67.0, 69.0, 71.0,
    74.0, 76.0, 78.0, 88.0, 103.0, 121.0, 141.0, 162.0, 187.0, 215.0, 247.0,
    249.0, 249.0, 250.0, 250.0, 250.0, 250.0, 250.0, 250.0, 250.0, 250.0, 250.0,
    250.0, 250.0 }
};

const tcb_soc_dymic s_table_soc_dymic60T = {
	
  { 250, 375, 625, 1250, 1875, 2500 },	
  
  { 2500, 2510, 2520, 2530, 2540, 2550, 2560, 2570, 2580,
    2590, 2600, 2610, 2620, 2630, 2640, 2650, 2660, 2670,
    2680, 2690, 2700, 2710, 2720, 2730, 2740, 2750, 2760,
    2770, 2780, 2790, 2800, 2810, 2820, 2830, 2840, 2850,
    2860, 2870, 2880, 2890, 2900, 2910, 2920, 2930, 2940,
    2950, 2960, 2970, 2980, 2990, 3000, 3010, 3020, 3030,
    3040, 3050, 3060, 3070, 3080, 3090, 3100, 3110, 3120,
    3130, 3140, 3150, 3160, 3170, 3180, 3190, 3200, 3210,
    3220, 3230, 3240, 3250, 3260, 3270, 3280, 3290, 3300,
    3310, 3320, 3330 },

{ 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0,
    1.0, 2.0, 2.0, 2.0, 3.0, 3.0, 3.0, 4.0, 4.0, 4.0, 5.0, 5.0, 5.0, 6.0, 6.0,
    6.0, 7.0, 7.0, 7.0, 8.0, 8.0, 9.0, 9.0, 9.0, 10.0, 10.0, 11.0, 11.0, 11.0,
    12.0, 12.0, 13.0, 13.0, 14.0, 14.0, 15.0, 15.0, 19.0, 30.0, 34.0, 40.0, 45.0,
    52.0, 60.0, 67.0, 74.0, 78.0, 95.0, 150.0, 159.0, 168.0, 224.0, 250.0, 250.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 2.0, 3.0,
    3.0, 3.0, 4.0, 4.0, 4.0, 5.0, 5.0, 5.0, 6.0, 6.0, 7.0, 7.0, 7.0, 8.0, 8.0,
    9.0, 9.0, 9.0, 10.0, 10.0, 11.0, 11.0, 11.0, 12.0, 12.0, 13.0, 13.0, 14.0,
    14.0, 15.0, 15.0, 16.0, 17.0, 17.0, 18.0, 18.0, 19.0, 28.0, 34.0, 39.0, 44.0,
    50.0, 59.0, 66.0, 73.0, 78.0, 87.0, 136.0, 159.0, 167.0, 193.0, 249.0, 250.0,
    250.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 2.0, 3.0,
    3.0, 3.0, 4.0, 4.0, 5.0, 5.0, 5.0, 6.0, 6.0, 6.0, 7.0, 7.0, 8.0, 8.0, 9.0,
    9.0, 9.0, 10.0, 10.0, 11.0, 11.0, 12.0, 12.0, 13.0, 13.0, 14.0, 14.0, 15.0,
    15.0, 16.0, 17.0, 17.0, 18.0, 19.0, 19.0, 20.0, 21.0, 30.0, 35.0, 40.0, 45.0,
    52.0, 60.0, 67.0, 74.0, 80.0, 96.0, 142.0, 162.0, 173.0, 207.0, 249.0, 249.0,
    250.0, 250.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 2.0, 3.0, 3.0, 4.0, 4.0, 4.0, 5.0,
    5.0, 5.0, 6.0, 6.0, 7.0, 7.0, 8.0, 8.0, 9.0, 9.0, 10.0, 10.0, 11.0, 11.0,
    12.0, 12.0, 13.0, 14.0, 14.0, 15.0, 16.0, 17.0, 17.0, 18.0, 19.0, 20.0, 21.0,
    22.0, 23.0, 23.0, 24.0, 25.0, 26.0, 27.0, 28.0, 29.0, 31.0, 36.0, 42.0, 48.0,
    55.0, 63.0, 70.0, 77.0, 86.0, 104.0, 134.0, 163.0, 179.0, 205.0, 249.0,
    250.0, 250.0, 250.0, 250.0, 250.0, 250.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 2.0, 2.0, 2.0, 3.0, 3.0, 4.0, 4.0, 5.0,
    5.0, 6.0, 7.0, 7.0, 8.0, 9.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 16.0, 17.0,
    19.0, 21.0, 23.0, 25.0, 27.0, 30.0, 32.0, 34.0, 36.0, 38.0, 40.0, 42.0, 44.0,
    46.0, 48.0, 51.0, 53.0, 55.0, 57.0, 59.0, 61.0, 64.0, 66.0, 68.0, 70.0, 72.0,
    75.0, 77.0, 79.0, 82.0, 84.0, 86.0, 91.0, 109.0, 132.0, 157.0, 180.0, 204.0,
    237.0, 249.0, 250.0, 250.0, 250.0, 250.0, 250.0, 250.0, 250.0, 250.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 2.0, 2.0, 3.0, 3.0,
    4.0, 4.0, 5.0, 5.0, 6.0, 7.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0,
    16.0, 18.0, 20.0, 23.0, 25.0, 28.0, 31.0, 34.0, 37.0, 40.0, 43.0, 45.0, 48.0,
    51.0, 54.0, 57.0, 60.0, 63.0, 66.0, 69.0, 72.0, 76.0, 79.0, 82.0, 85.0, 89.0,
    92.0, 95.0, 99.0, 102.0, 105.0, 109.0, 112.0, 116.0, 119.0, 122.0, 126.0,
    132.0, 154.0, 178.0, 203.0, 229.0, 249.0, 250.0, 250.0, 250.0, 250.0, 250.0,
    250.0, 250.0, 250.0, 250.0, 250.0, 250.0 }
};





tcb_soc3D_dymic soc_in3Dtable_dymic=
{
	{
		250,450,600
	},
	&s_table_soc_dymic25T,
	&s_table_soc_dymic45T,
	&s_table_soc_dymic60T
};


uint8_t getMidVal(uint8_t val1,uint8_t val2,
				uint16_t delt_all,uint16_t delt_mid)
{
	float tmp=0;

	tmp=val2-val1;
	tmp*=delt_mid;
	tmp/=delt_all;
	tmp+=val1;
	
	return (uint8_t)tmp;	
}

uint8_t __lookupTable(tcb_soc_dymic *pr,
					uint16_t vol,uint16_t cur)
{
	uint8_t val_dest=0;
	uint8_t posx1=0,posx2=0;
	uint8_t posy1=0,posy2=0;
	uint16_t i=0;
	uint16_t tmp_vol=0;
	uint16_t tmp_cur=0;
	uint16_t lenx=0;
	uint16_t leny=0;
	uint8_t valx1y1=0,valx1y2=0,valx2y1=0,valx2y2=0;
	uint8_t valx1ymid=0,valx2ymid=0;
	
	lenx=sizeof(pr->vol_table)/(sizeof(pr->vol_table[0]));
	
	printf("lenx=%d cur=%d\n",lenx,cur);
	
	for(i=0;i<lenx;i++)
	{
		tmp_vol=pr->vol_table[i];
		if(vol<tmp_vol)
		{	
			break;
		}
	}
	if(i==0)
	{
		return 0xfe;		
	}
	
	posy2=i;
	posy1=i-1;
	
	leny=sizeof(pr->cur_table)/(sizeof(pr->cur_table[0]));
	
	for(i=0;i<leny;i++)
	{
		tmp_cur=pr->cur_table[i];
		if(cur<tmp_cur)
		{
			break;
		}	
	}
	if(i==0)
	{
		return 0xfe;
	}
	
	posx2=i;
	posx1=i-1;
	
	valx1y1=pr->soc_in_T[posx1][posy1];
	valx1y2=pr->soc_in_T[posx1][posy2];
	valx2y1=pr->soc_in_T[posx2][posy1];
	valx2y2=pr->soc_in_T[posx2][posy2];	

	printf("valx1y1=%f valx1y2=%f valx2y1=%f valx2y2=%f\n",
		valx1y1/250.0,valx1y2/250.0,valx2y1/250.0,valx2y2/250.0);


	valx1ymid=getMidVal(valx1y1,valx1y2,
			pr->vol_table[posy2]-pr->vol_table[posy1],
			vol-pr->vol_table[posy1]);
	

	valx2ymid=getMidVal(valx2y1,valx2y2,
				pr->vol_table[posy2]-pr->vol_table[posy1],
				vol-pr->vol_table[posy1]);	
	
	val_dest=getMidVal(valx1ymid,valx2ymid,
					pr->cur_table[posx2]-pr->cur_table[posx1],
					cur-pr->cur_table[posx1]);

	
	printf("-val_dest=%d\n",val_dest);
	
	return val_dest;	
}

uint8_t __lookup3DTable(tcb_soc3D_dymic *pr,
						uint16_t vol,uint16_t cur,uint16_t temp)
{
	uint8_t i=0;
	uint8_t len=0;
	uint8_t soc_dest=0;
	uint8_t soc_temp1=0,soc_temp2=0;
	uint8_t pos_temp1=0,pos_temp2=0;
	uint16_t tmp=0;
	len=sizeof(pr->temp)/sizeof(pr->temp[0]);
	for(i=0;i<len;i++)
	{
		tmp=pr->temp[i];
		if(temp<tmp)
		{
			break;
		}		
		
	}		
	if(i==0)
	{
		return 0xff;
	}
	pos_temp2=i;
	pos_temp1=i-1;
	
	printf("pos_temp2=%d pos_temp1=%d \n",pos_temp2,pos_temp1);
	
	soc_temp1=__lookupTable(pr->pr_25T+pos_temp1,vol,temp);
	
	soc_temp2=__lookupTable(pr->pr_25T+pos_temp2,vol,temp);
	
	soc_dest=getMidVal(soc_temp1,soc_temp2,
			pr->temp[pos_temp2]-pr->temp[pos_temp1],
			temp-pr->temp[pos_temp1]);
	
	
	printf("soc1=%d soc2=%d\n",soc_temp1,soc_temp2);
	
	return soc_dest;
	
}



int main(int argc, char *argv[])
{

	uint8_t soc_dest=0;
	uint8_t soc_temp25=0,soc_temp45=0;
	
#if 0	
	soc_temp25=__lookupTable(&s_table_soc_dymic45T,3190,250);
	soc_temp45=__lookupTable(&s_table_soc_dymic25T,3190,250);	
	
	printf("soc45=%f ",soc_temp25/25.0);
	printf("soc25=%f ",soc_temp45/25.0);
	
	soc_dest=getMidVal(soc_temp45,soc_temp25,45-25,25-25);
#else	

	soc_dest=__lookup3DTable(&soc_in3Dtable_dymic,3190,250,450);	
#endif	
		
	printf("soc_dest=%f\n",soc_dest/250.0);

	return 0;
}