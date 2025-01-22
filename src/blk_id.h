/*
 * TheXTech - A platform game engine ported from old source code for VB6
 *
 * Copyright (c) 2009-2011 Andrew Spinks, original VB6 code
 * Copyright (c) 2020-2025 Vitaly Novichkov <admin@wohlnet.ru>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifndef ENUMBLKID_HHH
#define ENUMBLKID_HHH

enum BLKID
{
    BLKID_NONE,

    BLKID_S3_WOOD_BLOCK                 = 1,
    BLKID_S3_Q_BLOCK_HIT                = 2,
    BLKID_S3_WOOD_TOP                   = 3,
    BLKID_S3_BRICKS                     = 4,
    BLKID_S3_Q_BLOCK                    = 5,
    BLKID_S3_WOOD_TOP_RIGHT             = 6,
    BLKID_S3_WOOD_TOP_LEFT              = 7,
    BLKID_S3_CLOUD                      = 8,

    BLKID_S3_GRASS_TOP_RIGHT            = 9,
    BLKID_S3_GRASS_TOP                  = 10,
    BLKID_S3_GRASS_TOP_LEFT             = 11,
    BLKID_S3_GRASS_BASE_LEFT            = 12,
    BLKID_S3_GRASS_BASE_CENTER          = 13,
    BLKID_S3_GRASS_BASE_RIGHT           = 14,

    BLKID_S3_WOOD_LEFT                  = 15,
    BLKID_S3_WOOD_CENTER                = 16,
    BLKID_S3_WOOD_RIGHT                 = 17,

    BLKID_S3_GRASS_LEFT                 = 18,
    BLKID_S3_GRASS_CENTER               = 19,
    BLKID_S3_GRASS_RIGHT                = 20,

    BLKID_S3_PIPE_TOP                   = 21,
    BLKID_S3_PIPE_VERT                  = 22,
    BLKID_S3_PIPE_LEFT                  = 23,
    BLKID_S3_PIPE_HORIZ                 = 24,

    BLKID_S3_SSPLAT_GREEN               = 25,
    BLKID_S3_SSPLAT_RED                 = 26,
    BLKID_S3_SSPLAT_BLUE                = 27,
    BLKID_S3_SSPLAT_WHITE               = 28,
    
    BLKID_S3_CASTLE_BLOCK_BLUE          = 29,
    
    BLKID_S3_LAVA_TOP                   = 30,

    BLKID_S3_SMALL_PIPE_LEFT            = 31,
    BLKID_S3_SMALL_PIPE_HORIZ           = 32,
    BLKID_S3_SMALL_PIPE_RIGHT           = 33,

    BLKID_S3_PIPE_GRAY_TOP              = 34,
    BLKID_S3_PIPE_GRAY_VERT             = 35,
    BLKID_S3_PIPE_RED_TOP               = 36,
    BLKID_S3_PIPE_RED_VERT              = 37,
    
    BLKID_S2_SSPLAT_GREEN               = 38,

    BLKID_S2_GRASS_TOP_LEFT             = 39,
    BLKID_S2_GRASS_TOP                  = 40,
    BLKID_S2_GRASS_TOP_RIGHT            = 41,

    BLKID_S2_LOG_LEFT                   = 42,
    BLKID_S2_LOG_CENTER                 = 43,
    BLKID_S2_LOG_RIGHT                  = 44,
    
    BLKID_S2_WOOD_COLUMN_TOP            = 45,
    BLKID_S2_WOOD_COLUMN_BASE           = 46,

    BLKID_S3_BONUS_RIGHT                = 47,
    BLKID_S3_BONUS_BOTTOM               = 48,
    BLKID_S3_BONUS_TOP_LEFT             = 49,
    BLKID_S3_BONUS_LEFT                 = 50,
    BLKID_S3_BONUS_IN_TOP_RIGHT         = 51,
    BLKID_S3_BONUS_TOP                  = 52,
    BLKID_S3_BONUS_IN_TOP_LEFT          = 53,
    BLKID_S3_BONUS_CENTER               = 54,

    BLKID_S3_NOTE_BLOCK                 = 55,

    BLKID_S1_CAVE_TOP_LEFT              = 56,
    BLKID_S1_CAVE_TOP                   = 57,
    BLKID_S1_CAVE_TOP_RIGHT             = 58,
    BLKID_S1_CAVE_BLOCK                 = 59,
    BLKID_S1_CAVE_BRICK                 = 60,
    BLKID_S1_CAVE_BLOCK_4X4             = 61,

    BLKID_S1_GRASS_TOP_LEFT             = 62,
    BLKID_S1_GRASS_TOP                  = 63,
    BLKID_S1_GRASS_TOP_RIGHT            = 64,
    BLKID_S1_BLOCK                      = 65,
    
    BLKID_S1_MUSHROOM_LEFT              = 66,
    BLKID_S1_MUSHROOM_CENTER            = 67,
    BLKID_S1_MUSHROOM_RIGHT             = 68,
    BLKID_S1_BRIDGE                     = 69,

    BLKID_S3_SHIP_WOOD_LEFT             = 70,
    BLKID_S3_SHIP_WOOD_HORIZ            = 71,
    BLKID_S3_SHIP_WOOD_RIGHT            = 72,
    BLKID_S3_SHIP_WOOD_TOP              = 73,
    BLKID_S3_SHIP_WOOD_VERT             = 74,
    BLKID_S3_SHIP_WOOD_BOTTOM           = 75,
    
    BLKID_S3_SHIP_WOOD2_CENTER          = 76,
    BLKID_S3_SHIP_WOOD2_LEFT            = 77,
    BLKID_S3_SHIP_WOOD_CEL_LEFT         = 78,

    BLKID_S4_SSPLAT_HILL                = 79,

    BLKID_S4_GRASS_TOP_LEFT             = 80,
    BLKID_S4_GRASS_TOP                  = 81,
    BLKID_S4_GRASS_TOP_RIGHT            = 82,
    BLKID_S4_GRASS_LEFT                 = 83,
    BLKID_S4_GRASS_RIGHT                = 84,
    BLKID_S4_GRASS_IN_TOP_RIGHT         = 85,
    BLKID_S4_GRASS_IN_TOP_LEFT          = 86,
    BLKID_S4_GRASS_CENTER               = 87,

    BLKID_S4_Q_BLOCK                    = 88,
    BLKID_S4_Q_BLOCK_HIT                = 89,
    BLKID_S4_SPIN_BLOCK                 = 90,

    BLKID_S3_CASTLE_FLOOR_2X2           = 91,
    BLKID_S3_WOOD_BLOCK_4X4             = 92,
    BLKID_S1_BLOCK_4X4                  = 93,

    BLKID_S3_SAND_TOP_LEFT              = 94,
    BLKID_S3_SAND_TOP                   = 95,
    BLKID_S3_SAND_TOP_RIGHT             = 96,
    BLKID_S3_SAND_LEFT                  = 97,
    BLKID_S3_SAND_CENTER                = 98,
    BLKID_S3_SAND_RIGHT                 = 99,
    BLKID_S3_SAND_BOTTOM_LEFT           = 100,
    BLKID_S3_SAND_BOTTOM                = 101,
    BLKID_S3_SAND_BOTTOM_RIGHT          = 102,

    BLKID_S3_PIPE_ORANGE_TOP            = 103,
    BLKID_S3_PIPE_ORANGE_VERT           = 104,

    BLKID_S3_DESERT_PIPE_BLOCK          = 105,
    BLKID_S3_DESERT_PIPE_HORIZ          = 106,
    BLKID_S3_DESERT_PIPE_VERT           = 107,

    BLKID_S3_SSPLAT_DESERT              = 108,

    BLKID_S3_MUNCHER                    = 109,
    BLKID_S3_SPIKE_TOP                  = 110,
    BLKID_S3_BLASTER_BASE               = 111,
    BLKID_S3_BLASTER_SKULL              = 112,

    BLKID_S4_PIPE_PURPLE_TOP            = 113,
    BLKID_S4_PIPE_PURPLE_VERT           = 114,

    BLKID_S4_BLOCK                      = 115,

    BLKID_S4_FOREST_TOP_LEFT            = 116,
    BLKID_S4_FOREST_TOP_RIGHT           = 117,
    BLKID_S4_FOREST_RIGHT               = 118,
    BLKID_S4_FOREST_TOP                 = 119,
    BLKID_S4_FOREST_TOP_LEFT            = 120,

    BLKID_S4_GHOST_HOUSE_TOP_LEFT       = 121,
    BLKID_S4_GHOST_HOUSE_TOP            = 122,
    BLKID_S4_GHOST_HOUSE_TOP_RIGHT      = 123,
    BLKID_S4_GHOST_HOUSE_BLOCK          = 124,
    BLKID_S4_GHOST_HOUSE_BIG_BRICK      = 125,

    BLKID_S3_CASTLE_BLOCK_BLUE2         = 126,

    BLKID_S4_WOOD_PLATFORM_CENTER       = 127,
    BLKID_S4_WOOD_PLATFORM_LEFT         = 128,
    BLKID_S4_WOOD_PLATFORM_RIGHT        = 129,

    BLKID_S3_SSPLAT_GREEN_HILL          = 130,

    BLKID_S2_STEEL_BRIDGE               = 131,
    BLKID_S3_WATER_BRIDGE               = 132,

    BLKID_S4_FOREST_PLATFORM_LEFT       = 133,
    BLKID_S4_FOREST_PLATFORM_HORIZ      = 134,
    BLKID_S4_FOREST_PLATFORM_RIGHT      = 135,

    BLKID_S3_CASTLE_BLOCK_GRAY          = 136,

    BLKID_S4_PIPE_ORANGE_TOP            = 137,
    BLKID_S4_PIPE_TOP                   = 138,
    BLKID_S4_PIPE_GRAY_TOP              = 139,
    BLKID_S4_PIPE_BLUE_TOP              = 140,
    BLKID_S4_PIPE_YELLOW_TOP            = 141,

    BLKID_S4_PIPE_ORANGE_VERT           = 142,
    BLKID_S4_PIPE_VERT                  = 143,
    BLKID_S4_PIPE_GRAY_VERT             = 144,
    BLKID_S4_PIPE_BLUE_VERT             = 145,
    BLKID_S4_PIPE_YELLOW_VERT           = 146,

    BLKID_S4_PIPE_LEFT                  = 147,
    BLKID_S4_PIPE_GRAY_LEFT             = 148,
    BLKID_S4_PIPE_BLUE_LEFT             = 149,
    BLKID_S4_PIPE_YELLOW_LEFT           = 150,
    BLKID_S4_PIPE_ORANGE_LEFT           = 151,
    BLKID_S4_PIPE_PURPLE_LEFT           = 152,
    
    BLKID_S4_PIPE_HORIZ                 = 153,
    BLKID_S4_PIPE_GRAY_HORIZ            = 154,
    BLKID_S4_PIPE_BLUE_HORIZ            = 155,
    BLKID_S4_PIPE_YELLOW_HORIZ          = 156,
    BLKID_S4_PIPE_ORANGE_HORIZ          = 157,
    BLKID_S4_PIPE_PURPLE_HORIZ          = 158,

    BLKID_S3_BUMPABLE_BLOCK             = 159,
    BLKID_S3_BONUS_AQUA_BRICKS          = 160,

    BLKID_S4_SSPLAT_GROUND_HILL         = 161,

    BLKID_S3_SAND2_TOP_LEFT             = 162,
    BLKID_S3_SAND2_TOP                  = 163,
    BLKID_S3_SAND2_TOP_RIGHT            = 164,
    BLKID_S3_SAND2_LEFT                 = 165,
    BLKID_S3_SAND2_CENTER               = 166,
    BLKID_S3_SAND2_RIGHT                = 167,

    BLKID_S3_BRIDGE                     = 168,
    BLKID_S3_CONVEYOR_SWITCH            = 169,

    BLKID_S4_YELLOW_SWITCH              = 170,
    BLKID_S4_YELLOW_SWITCH_BLOCK_ON     = 171,
    BLKID_S4_YELLOW_SWITCH_BLOCK_OFF    = 172,
    BLKID_S4_BLUE_SWITCH                = 173,
    BLKID_S4_BLUE_SWITCH_BLOCK_ON       = 174,
    BLKID_S4_BLUE_SWITCH_BLOCK_OFF      = 175,
    BLKID_S4_GREEN_SWITCH               = 176,
    BLKID_S4_GREEN_SWITCH_BLOCK_ON      = 177,
    BLKID_S4_GREEN_SWITCH_BLOCK_OFF     = 178,
    BLKID_S4_RED_SWITCH                 = 179,
    BLKID_S4_RED_SWITCH_BLOCK_ON        = 180,
    BLKID_S4_RED_SWITCH_BLOCK_OFF       = 181,

    BLKID_S3_BIG_PIPE                   = 182,
    BLKID_S3_SAND2_FLAT                 = 183,
    BLKID_S3_GRASS_2X2                  = 184,
    BLKID_S3_TANK_CATERPILLAR           = 185,
    BLKID_S3_RED_BRICK                  = 186,
    BLKID_S3_RED_BRICK_4X4              = 187,
    
    BLKID_S1_BRICKS                     = 188,

    BLKID_S1_SNOW_TOP_LEFT              = 189,
    BLKID_S1_SNOW_TOP                   = 190,
    BLKID_S1_SNOW_TOP_RIGHT             = 191,
    
    BLKID_S1_Q_BLOCK_HIT                = 192,
    BLKID_S1_Q_BLOCK                    = 193,

    BLKID_S1_GRAY_PIPE_TOP              = 194,
    BLKID_S1_GRAY_PIPE_VERT             = 195,
    BLKID_S1_PIPE_TOP                   = 196,
    BLKID_S1_PIPE_VERT                  = 197,

    BLKID_S2_SNOW_LEFT                  = 198,
    BLKID_S2_SNOW_RIGHT                 = 199,
    BLKID_S2_SNOW_CENTER                = 200,

    BLKID_S2_CAVE_TOP                   = 201,

    BLKID_S2_VASE_CENTER                = 202,

    BLKID_S2_CAVE_LEFT                  = 203,
    BLKID_S2_CAVE_RIGHT                 = 204,
    BLKID_S2_CAVE_CENTER                = 205,
    BLKID_S2_CAVE_2X2                   = 206,
    BLKID_S2_CAVE_TOP_LEFT              = 207,
    BLKID_S2_CAVE_TOP_RIGHT             = 208,

    BLKID_S2_VASE_TOP                   = 209,
    BLKID_S2_VASE_BASE                  = 210,

    BLKID_S2_CAVE_LEFT_1X2              = 211,
    BLKID_S2_CAVE_RIGHT_1X2             = 212,

    BLKID_S2_CAVE_BOTTOM                = 213,
    BLKID_S2_CAVE_BOTTOM_LEFT           = 214,
    BLKID_S2_CAVE_BOTTOM_RIGHT          = 215,
    BLKID_S2_CAVE_FLAT                  = 216,

    BLKID_S3_BONUS_BLUE_VERT            = 217,
    BLKID_S3_BONUS_BLUE_HORIZ           = 218,
    BLKID_S3_BONUS_BLUE_TOP_LEFT        = 219,
    BLKID_S3_BONUS_BLUE_TOP_RIGHT       = 220,
    BLKID_S3_BONUS_BLUE_BOTTOM_LEFT     = 221,
    BLKID_S3_BONUS_BLUE_BOTTOM_RIGHT    = 222,
    
    BLKID_S3_BONUS_GRAY_BRICKS          = 223,

    BLKID_S3_BIG_Q_BLOCK                = 224,
    BLKID_S3_BIG_Q_BLOCK_HIT            = 225,
    BLKID_S3_BIG_BRICK                  = 226,

    BLKID_S4_PALACE_TOP_LEFT            = 227,
    BLKID_S4_PALACE_TOP                 = 228,
    BLKID_S4_PALACE_TOP_RIGHT           = 229,
    BLKID_S4_PALACE_LEFT                = 230,
    BLKID_S4_PALACE_CENTER              = 231,
    BLKID_S4_PALACE_RIGHT               = 232,
    BLKID_S4_PALACE_BOTTOM_LEFT         = 233,
    BLKID_S4_PALACE_BOTTOM              = 234,
    BLKID_S4_PALACE_BOTTOM_RIGHT        = 235,
    BLKID_S4_PALACE_IN_BOTTOM_RIGHT     = 236,
    BLKID_S4_PALACE_IN_BOTTOM_LEFT      = 237,
    BLKID_S4_PALACE_IN_TOP_LEFT         = 238,
    BLKID_S4_PALACE_IN_TOP_RIGHT        = 239,

    BLKID_S3_SSPLAT_SNOW                = 240,
    BLKID_S3_SSPLAT_ICE                 = 241,
    BLKID_S3_SSPLAT_ICE2                = 242,

    BLKID_S2_SSPLAT_GRASS               = 243,

    BLKID_S4_SSPLAT_MUSHROOM_GREEN      = 244,
    BLKID_S4_SSPLAT_CAVE                = 245,

    BLKID_S4_CAVE_TOP_LEFT              = 246,
    BLKID_S4_CAVE_TOP_RIGHT             = 247,
    BLKID_S4_CAVE_BOTTOM_LEFT           = 248,
    BLKID_S4_CAVE_BOTTOM_RIGHT          = 249,
    BLKID_S4_CAVE_TOP                   = 250,
    BLKID_S4_CAVE_CENTER                = 251,
    BLKID_S4_CAVE_LEFT                  = 252,
    BLKID_S4_CAVE_RIGHT                 = 253,
    BLKID_S4_CAVE_BOTTOM                = 254,
    BLKID_S4_CAVE_IN_BOTTOM_LEFT        = 255,
    BLKID_S4_CAVE_IN_BOTTOM_RIGHT       = 256,
    BLKID_S4_CAVE_IN_TOP_RIGHT          = 257,
    BLKID_S4_CAVE_IN_TOP_LEFT           = 258,

    BLKID_S4_SSPLAT_MUSHROOM_RED        = 259,
    BLKID_S3_SSPLAT_GRASS               = 260,
    BLKID_S4_SSPLAT_MUSHROOM_BLUE       = 261,

    BLKID_S4_CAVE_4X4                   = 262,

    BLKID_S4_GRASS_IN_BOTTOM_LEFT       = 263,
    BLKID_S4_GRASS_BOTTOM               = 264,
    BLKID_S4_GRASS_BOTTOM_LEFT          = 265,
    BLKID_S4_GRASS_BOTTOM_RIGHT         = 266,

    BLKID_S3_SPIKE_RIGHT                = 267,
    BLKID_S3_SPIKE_DOWN                 = 268,
    BLKID_S3_SPIKE_LEFT                 = 269,

    BLKID_S3_SNOW_TOP_LEFT              = 270,
    BLKID_S3_SNOW_TOP_RIGHT             = 271,
    BLKID_S3_SNOW_TOP                   = 272,

    BLKID_S4_GRASS_IN_BOTTOM_RIGHT      = 273,

    BLKID_S3_WOOD_BOTTOM_LEFT           = 274,
    BLKID_S3_WOOD_BOTTOM_RIGHT          = 275,
    BLKID_S3_WOOD_BOTTOM                = 276,

    BLKID_S3_GRASS_BOTTOM_RIGHT         = 277,
    BLKID_S3_GRASS_BOTTOM               = 278,
    BLKID_S3_GRASS_BOTTOM_LEFT          = 279,
    
    BLKID_S3_RED_BLOCK                  = 280,

    BLKID_S4_HELP_BLOCK                 = 281,
    BLKID_S4_SWITCH_ON                  = 282,
    BLKID_S4_SWITCH_OFF                 = 283,

    BLKID_S3_SAND2_BOTTOM_RIGHT         = 284,
    BLKID_S3_SAND2_BOTTOM               = 285,
    BLKID_S3_SAND2_BOTTOM_LEFT          = 286,

    BLKID_S1_SSPLAT_GRASS               = 287,
    BLKID_S2_SSPLAT_SAND                = 288,

    BLKID_S2_BRIDGE                     = 289,
    
    BLKID_S3_DESERT_CLOUD               = 290,

    BLKID_ZELDA_FLOOR_TOP               = 291,
    BLKID_ZELDA_FLOOR_BOTTOM            = 292,

    BLKID_S2_STONES                     = 293,

    BLKID_S3_SMALL_PIPE_TOP             = 294,
    BLKID_S3_SMALL_PIPE_VERT            = 295,
    BLKID_S3_SMALL_PIPE_BOTTOM          = 296,

    BLKID_S2_VASE_FLIPPED_BASE          = 297,
    BLKID_S2_VASE_FLIPPED_TOP           = 298,

    BLKID_S4_GRASS_UW_SLOPE_RIGHT       = 301,
    BLKID_S4_GRASS_UW_SLOPE_LEFT        = 302,
    BLKID_S4_GRASS_UW_SLOPE_IN_RIGHT    = 303,
    BLKID_S4_GRASS_UW_SLOPE_IN_LEFT     = 304,

    BLKID_S1_LAVA_TOP                   = 371,
    BLKID_S1_CLOUD_BLOCK                = 372,
    BLKID_S1_CLOUD_PLATFORM_LEFT        = 373,
    BLKID_S1_CLOUD_PLATFORM_CENTER      = 374,
    BLKID_S1_CLOUD_PLATFORM_RIGHT       = 375,

    BLKID_S1_CLOUD_PLATFORM2_LEFT       = 379,
    BLKID_S1_CLOUD_PLATFORM2_FACE_LEFT  = 380,
    BLKID_S1_CLOUD_PLATFORM2_FACE_RIGHT = 381,
    BLKID_S1_CLOUD_PLATFORM2_RIGHT      = 382,

    BLKID_S2_CLOUD_PLATFORM_RIGHT       = 389,
    BLKID_S2_CLOUD_PLATFORM_LEFT        = 391,
    BLKID_S2_CLOUD_PLATFORM_CENTER      = 391,

    BLKID_S4_CASTLE_LAVA_TOP            = 404,

    BLKID_S4_CASTLE_BROWN_BLOCKS        = 437,

    BLKID_S4_SSPLAT_CASTLE_BRICKS_BLUE  = 438,
    BLKID_S4_SSPLAT_CASTLE_BRICKS_BROWN = 439,
    BLKID_S4_SSPLAT_CASTLE_BRICKS_GRAY  = 440,
    BLKID_S4_SSPLAT_DARK_FOREST_HILL    = 441,
    BLKID_S4_SSPLAT_LIGHT_FOREST_HILL   = 442,
    BLKID_S4_SSPLAT_CAVE_GREEN          = 443,
    BLKID_S4_SSPLAT_CAVE_GRAY           = 444,
    BLKID_S4_SSPLAT_CAVE_BROWN          = 445,


    BLKID_S3_GRY_BRICK                  = 457,
    BLKID_S3_TANOOKI_INVIS_BLOCK        = 458,

    BLKID_S4_LAVA_TOP                   = 459,
    BLKID_S4_LAVA_TOP_RIGHT             = 460,
    BLKID_S4_LAVA_RIGHT                 = 461,
    BLKID_S4_LAVA_BOTTOM                = 462,
    BLKID_S4_LAVA_LEFT                  = 463,
    BLKID_S4_LAVA_BOTTOM_LEFT           = 464,
    BLKID_S4_LAVA_BOTTOM_RIGHT          = 465,
    BLKID_S4_LAVA_TOP_LEFT              = 466,
    BLKID_S4_LAVA_CENTER                = 467,
    BLKID_S4_LAVA_IN_TOP_RIGHT          = 468,
    BLKID_S4_LAVA_IN_BOTTOM_RIGHT       = 469,
    BLKID_S4_LAVA_IN_BOTTOM_LEFT        = 470,
    BLKID_S4_LAVA_IN_TOP_LEFT           = 471,
    BLKID_S4_LAVA_W_SLOPE_TOP_LEFT      = 472,
    BLKID_S4_LAVA_W_SLOPE_IN_TOP_LEFT   = 473,
    BLKID_S4_LAVA_W_SLOPE_TOP_RIGHT     = 474,
    BLKID_S4_LAVA_W_SLOPE_IN_TOP_RIGHT  = 475,
    BLKID_S4_LAVA_W_SLOPE_BOT_LEFT      = 476,
    BLKID_S4_LAVA_W_SLOPE_IN_BOT_LEFT   = 477,
    BLKID_S4_LAVA_W_SLOPE_IN_BOT_RIGHT  = 478,
    BLKID_S4_LAVA_W_SLOPE_BOT_RIGHT     = 479,
    BLKID_S4_LAVA_SLOPE_TOP_LEFT        = 480,
    BLKID_S4_LAVA_SLOPE_IN_TOP_LEFT     = 481,
    BLKID_S4_LAVA_SLOPE_TOP_RIGHT       = 482,
    BLKID_S4_LAVA_SLOPE_IN_TOP_RIGHT    = 483,
    BLKID_S4_LAVA_SLOPE_IN_BOT_RIGHT    = 484,
    BLKID_S4_LAVA_SLOPE_BOT_RIGHT       = 485,
    BLKID_S4_LAVA_SLOPE_BOT_LEFT        = 486,
    BLKID_S4_LAVA_SLOPE_IN_BOT_LEFT     = 487,

    BLKID_S2_DRILLING_SPIKES            = 511,

    BLKID_BRINSTAR_FACE_BLOCK           = 530,

    BLKID_S3_SSPLAT_CASTLE              = 568,

    BLKID_S3_PIPE_GRAY_LEFT             = 569,
    BLKID_S3_PIPE_GRAY_HORIZ            = 570,

    BLKID_S3_STEEL_PIPE                 = 571,
    BLKID_S3_BIG_CLOUD                  = 572,

    BLKID_S3_WATER_BLOCK                = 575,

    BLKID_S3_SSPLAT_WOOD                = 579,

    BLKID_S3_WOOD_LEFT_1X2              = 595,
    BLKID_S3_WOOD_CENTER_1X2            = 596,
    BLKID_S3_WOOD_RIGHT_1X2             = 597,

    BLKID_S3_JELECTRO                   = 598,

    BLKID_S4_REZNOR_PLATFORM            = 615,

    BLKID_S4_GRASS_W_SLOPE_LEFT         = 616,
    BLKID_S4_GRASS_W_SLOPE_RIGHT        = 617,

    BLKID_CHAR1_SWITCH                  = 622,
    BLKID_CHAR2_SWITCH                  = 623,
    BLKID_CHAR3_SWITCH                  = 624,
    BLKID_CHAR4_SWITCH                  = 625,

    BLKID_CHAR1_PASSTHRU_BLOCK          = 626,
    BLKID_CHAR2_PASSTHRU_BLOCK          = 627,
    BLKID_CHAR3_PASSTHRU_BLOCK          = 628,
    BLKID_CHAR4_PASSTHRU_BLOCK          = 629,

    BLKID_CHAR5_SWITCH                  = 631,
    BLKID_CHAR5_PASSTHRU_BLOCK          = 632,

    BLKID_S3_ICE_BLOCK                  = 633,
    BLKID_S3_ICE_BLOCK_2X2              = 634,

    BLKID_S3_SAND2_SLOPE_LEFT       = 635,
    BLKID_S3_SAND2_W_SLOPE_LEFT     = 636,
    BLKID_S3_SAND2_SLOPE_RIGHT      = 637,
    BLKID_S3_SAND2_W_SLOPE_RIGHT    = 638,

    // these can be expanded into user-modifiable ranges in the future.
    // currently the "CONV" blocks can't be placed or modified in any way by the user
    BLKID_CONVEYOR_L_START = 701,
    BLKID_CONVEYOR_L_CONV = 701,
    BLKID_CONVEYOR_L_END = 701,

    BLKID_CONVEYOR_R_START = 702,
    BLKID_CONVEYOR_R_CONV = 702,
    BLKID_CONVEYOR_R_END = 702,
};


#endif // ENUMBLKID_HHH
