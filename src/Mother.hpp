/*
	Mother.hpp
 	
	Author: Dieter Stubler

Copyright (C) 2019 Dieter Stubler

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include "OrangeLine.hpp"

#define NUM_NOTES   12
#define NUM_SCALES  12
#define NUM_CHLD    NUM_NOTES
#define SEMITONE    (1.f / 12.f)

#define TMP_HEAD_DURATION   88200 * 2

#define CHG_ONOFF   1
#define CHG_WEIGHT  (1 << 1)
#define CHG_SCL     (1 << 2)
#define CHG_CHLD    (1 << 3)
#define CHG_ROOT    (1 << 4)

#define SCALE_KEYS  7
//
// Defaults
//

//
// Virtual Parameter Ids stored using Json
//
enum jsonIds {
	//
	// Parameters not bound to any user interface component to save internal module state
	//
    ONOFF_JSON,
    ONOFF_JSON_LAST = ONOFF_JSON + (NUM_SCALES * NUM_NOTES) - 1,
    WEIGHT_JSON,
    WEIGHT_JSON_LAST = WEIGHT_JSON + (NUM_SCALES * NUM_CHLD * NUM_NOTES) - 1,
	NUM_JSONS
};

//
// Parameter Ids
//
enum ParamIds {
	//
	// Paramater for user interface components
	//
    ROOT_PARAM,
    SCL_PARAM,
    CHLD_PARAM,
    FATE_AMT_PARAM,
    FATE_SHP_PARAM,
    WEIGHT_PARAM,
    WEIGHT_PARAM_LAST = WEIGHT_PARAM + NUM_NOTES - 1,
    ONOFF_PARAM,
    ONOFF_PARAM_LAST = ONOFF_PARAM + NUM_NOTES - 1,
    NUM_PARAMS,
};

//
// Input Ids
//
enum InputIds {
	CV_INPUT,
	TRG_INPUT,
	ROOT_INPUT,
	SCL_INPUT,
	CHLD_INPUT,
	RND_INPUT,
	NUM_INPUTS
};

//
// Output Ids
//
enum OutputIds {
    CV_OUTPUT,
    GATE_OUTPUT,
    POW_OUTPUT,
	NUM_OUTPUTS
};

//
// Ligh Ids
//
enum LightIds {
    NOTE_LIGHT_01_RGB,
    NOTE_LIGHT_01__GB,
    NOTE_LIGHT_01___B,
    NOTE_LIGHT_02_RGB,
    NOTE_LIGHT_02__GB,
    NOTE_LIGHT_02___B,
    NOTE_LIGHT_03_RGB,
    NOTE_LIGHT_03__GB,
    NOTE_LIGHT_03___B,
    NOTE_LIGHT_04_RGB,
    NOTE_LIGHT_04__GB,
    NOTE_LIGHT_04___B,
    NOTE_LIGHT_05_RGB,
    NOTE_LIGHT_05__GB,
    NOTE_LIGHT_05___B,
    NOTE_LIGHT_06_RGB,
    NOTE_LIGHT_06__GB,
    NOTE_LIGHT_06___B,
    NOTE_LIGHT_07_RGB,
    NOTE_LIGHT_07__GB,
    NOTE_LIGHT_07___B,
    NOTE_LIGHT_08_RGB,
    NOTE_LIGHT_08__GB,
    NOTE_LIGHT_08___B,
    NOTE_LIGHT_09_RGB,
    NOTE_LIGHT_09__GB,
    NOTE_LIGHT_09___B,
    NOTE_LIGHT_10_RGB,
    NOTE_LIGHT_10__GB,
    NOTE_LIGHT_10___B,
    NOTE_LIGHT_11_RGB,
    NOTE_LIGHT_11__GB,
    NOTE_LIGHT_11___B,
    NOTE_LIGHT_12_RGB,
    NOTE_LIGHT_12__GB,
    NOTE_LIGHT_12___B,
	NUM_LIGHTS
};
