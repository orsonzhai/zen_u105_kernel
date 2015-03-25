/*
 * Copyright (C) 2012 Spreadtrum Communications Inc.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *************************************************
 * Automatically generated C header: do not edit *
 *************************************************
 */

/*
 * Regulator Name[0], Regulator Type[1], Power Off Ctrl[2] and Bit[3], Power On Ctrl[4] and Bit[5], Slp Ctrl[6] and Bit[7],
 * Voltage Trimming Ctrl[8] and Bits[9], Voltage Ctrl[10] and Bits[11], Voltage Select Count[12] and List[13 ... ...]
 */

    SCI_REGU_REG(vddcama, 0, ANA_REG_GLB_LDO_PD_CTRL0, BIT(12), ANA_REG_GLB_LDO_PD_CTRL0, BIT(13), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(7),
	ANA_REG_GLB2_LDO_TRIM6, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), ANA_REG_GLB_LDO_VCTRL2, BIT(8)|BIT(9)|BIT(10)|BIT(11), 4, 2800, 3000, 2500, 1800);

    SCI_REGU_REG(vddcamio, 0, ANA_REG_GLB_LDO_PD_CTRL0, BIT(10), ANA_REG_GLB_LDO_PD_CTRL0, BIT(11), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(6),
	ANA_REG_GLB2_LDO_TRIM7, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), ANA_REG_GLB_LDO_VCTRL2, BIT(4)|BIT(5)|BIT(6)|BIT(7), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vddcamcore, 0, ANA_REG_GLB_LDO_PD_CTRL0, BIT(8), ANA_REG_GLB_LDO_PD_CTRL0, BIT(9), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(5),
	ANA_REG_GLB2_LDO_TRIM6, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_VCTRL2, BIT(0)|BIT(1)|BIT(2)|BIT(3), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vddcammot, 0, ANA_REG_GLB_LDO_PD_CTRL0, BIT(14), ANA_REG_GLB_LDO_PD_CTRL0, BIT(15), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(8),
	ANA_REG_GLB2_LDO_TRIM7, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_VCTRL2, BIT(12)|BIT(13)|BIT(14)|BIT(15), 4, 3000, 3300, 2800, 1800);

    SCI_REGU_REG(vddrf, 0, ANA_REG_GLB_LDO_PD_SET, BIT(4), ANA_REG_GLB_LDO_PD_RST, BIT(4), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(0),
	ANA_REG_GLB2_LDO_TRIM5, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), ANA_REG_GLB_LDO_VCTRL0, BIT(4)|BIT(5)|BIT(6)|BIT(7), 4, 2850, 2950, 2500, 1800);

    SCI_REGU_REG(vddsim0, 0, ANA_REG_GLB_LDO_PD_CTRL0, BIT(4), ANA_REG_GLB_LDO_PD_CTRL0, BIT(5), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(2),
	ANA_REG_GLB2_LDO_TRIM4, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), ANA_REG_GLB_LDO_VCTRL1, BIT(0)|BIT(1)|BIT(2)|BIT(3), 4, 1800, 2900, 3000, 3100);

    SCI_REGU_REG(vddsim1, 0, ANA_REG_GLB_LDO_PD_CTRL0, BIT(6), ANA_REG_GLB_LDO_PD_CTRL0, BIT(7), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(3),
	ANA_REG_GLB2_LDO_TRIM4, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), ANA_REG_GLB_LDO_VCTRL1, BIT(4)|BIT(5)|BIT(6)|BIT(7), 4, 1800, 2900, 3000, 3100);

    SCI_REGU_REG(vddcmmb1p2, 0, ANA_REG_GLB_LDO_PD_CTRL1, BIT(12), ANA_REG_GLB_LDO_PD_CTRL1, BIT(13), ANA_REG_GLB_LDO_SLP_CTRL1, BIT(2),
	ANA_REG_GLB2_LDO_TRIM8, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), ANA_REG_GLB_LDO_VCTRL4, BIT(12)|BIT(13)|BIT(14)|BIT(15), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vddcmmb1p8, 0, ANA_REG_GLB_LDO_PD_CTRL1, BIT(10), ANA_REG_GLB_LDO_PD_CTRL1, BIT(11), ANA_REG_GLB_LDO_SLP_CTRL1, BIT(3),
	ANA_REG_GLB2_LDO_TRIM8, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_VCTRL4, BIT(8)|BIT(9)|BIT(10)|BIT(11), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vddsd0, 0, ANA_REG_GLB_LDO_PD_CTRL1, BIT(0), ANA_REG_GLB_LDO_PD_CTRL1, BIT(1), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(9),
	ANA_REG_GLB2_LDO_TRIM2, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_VCTRL3, BIT(12)|BIT(13)|BIT(14)|BIT(15), 4, 2800, 3000, 2500, 1800);

    SCI_REGU_REG(vddsd1, 0, ANA_REG_GLB_LDO_PD_CTRL1, BIT(2), ANA_REG_GLB_LDO_PD_CTRL1, BIT(3), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(14),
	ANA_REG_GLB2_LDO_TRIM3, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), ANA_REG_GLB_LDO_VCTRL4, BIT(0)|BIT(1)|BIT(2)|BIT(3), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vddsd3, 0, ANA_REG_GLB_LDO_PD_CTRL1, BIT(4), ANA_REG_GLB_LDO_PD_CTRL1, BIT(5), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(15),
	ANA_REG_GLB2_LDO_TRIM3, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_VCTRL4, BIT(4)|BIT(5)|BIT(6)|BIT(7), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vdd3v, 0, ANA_REG_GLB_LDO_PD_CTRL1, BIT(6), ANA_REG_GLB_LDO_PD_CTRL1, BIT(7), ANA_REG_GLB_LDO_SLP_CTRL1, BIT(1),
	ANA_REG_GLB2_LDO_TRIM1, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_VCTRL1, BIT(8)|BIT(9)|BIT(10)|BIT(11), 4, 2800, 3000, 2500, 1800);

    SCI_REGU_REG(vdd18, 0, ANA_REG_GLB_LDO_PD_SET, BIT(7), ANA_REG_GLB_LDO_PD_RST, BIT(7), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(12),
	ANA_REG_GLB2_LDO_TRIM0, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), ANA_REG_GLB_LDO_VCTRL3, BIT(4)|BIT(5)|BIT(6)|BIT(7), 4, 1500, 1800, 1300, 1200);

    SCI_REGU_REG(vdd28, 0, ANA_REG_GLB_LDO_PD_SET, BIT(6), ANA_REG_GLB_LDO_PD_RST, BIT(6), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(11),
	ANA_REG_GLB2_LDO_TRIM0, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_VCTRL3, BIT(0)|BIT(1)|BIT(2)|BIT(3), 4, 2800, 3000, 2650, 1800);

    SCI_REGU_REG(vddmem, 2, ANA_REG_GLB_LDO_PD_SET, BIT(3), ANA_REG_GLB_LDO_PD_RST, BIT(3), 0, 0,
	ANA_REG_GLB_DCDCMEM_CTRL_CAL, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_DCDCMEM_CTRL0, BIT(0)|BIT(1), 4, 1200, 1100, 1300, 1400);

    SCI_REGU_REG(vddmem1, 2, ANA_REG_GLB_LDO_PD_SET, BIT(3), ANA_REG_GLB_LDO_PD_RST, BIT(3), 0, 0,
	ANA_REG_GLB_DCDCMEM_CTRL_CAL, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_DCDCMEM_CTRL0, BIT(0)|BIT(1), 4, 1800, 1700, 1900, 2000);

    SCI_REGU_REG(vddarm, 2, ANA_REG_GLB_LDO_PD_SET, BIT(2), ANA_REG_GLB_LDO_PD_RST, BIT(2), 0, 0,
	ANA_REG_GLB_DCDCARM_CTRL_CAL, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_DCDCARM_CTRL0, BIT(0)|BIT(1)|BIT(2), 8, 1100, 700, 800, 900, 1000, 650, 1200, 1300);

    SCI_REGU_REG(vddcore, 2, ANA_REG_GLB_LDO_PD_SET, BIT(1), ANA_REG_GLB_LDO_PD_RST, BIT(1), 0, 0,
	ANA_REG_GLB_DCDC_CTRL_CAL, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_DCDC_CTRL0, BIT(0)|BIT(1)|BIT(2), 8, 1100, 700, 800, 900, 1000, 650, 1200, 1300);

    SCI_REGU_REG(dcdcldo, 2, ANA_REG_GLB_LDO_PD_SET, BIT(9), ANA_REG_GLB_LDO_PD_RST, BIT(9), 0, 0,
	ANA_REG_GLB_DCDCLDO_CTRL_CAL, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_DCDCLDO_CTRL0, BIT(0)|BIT(1)|BIT(2), 8, 2200, 1800, 1900, 2000, 2100, 2300, 2400, 2500);

    SCI_REGU_REG(vddusb, 0, ANA_REG_GLB_LDO_PD_CTRL0, BIT(0), ANA_REG_GLB_LDO_PD_CTRL0, BIT(1), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(4),
	ANA_REG_GLB2_LDO_TRIM4, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_VCTRL1, BIT(12)|BIT(13)|BIT(14)|BIT(15), 4, 3300, 3400, 3200, 3100);

    SCI_REGU_REG(vddusbd, 1, REG_GLB_CLK_GEN5, BIT(9), REG_GLB_CLK_GEN5, BIT(9), 0, 0,
	0, 0, 0, 0, 0);

    SCI_REGU_REG(vdd25, 0, ANA_REG_GLB_LDO_PD_SET, BIT(8), ANA_REG_GLB_LDO_PD_RST, BIT(8), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(13),
	ANA_REG_GLB2_LDO_TRIM1, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), ANA_REG_GLB_LDO_VCTRL3, BIT(8)|BIT(9)|BIT(10)|BIT(11), 4, 2500, 2750, 3000, 2900);

    SCI_REGU_REG(vdd_a, 0, 0, 0, 0, 0, 0, 0,
	ANA_REG_GLB2_LDO_TRIM2, BIT(8)|BIT(9)|BIT(10)|BIT(11)|BIT(12), 0, 0, 0);

    SCI_REGU_REG(avddbb, 0, ANA_REG_GLB_LDO_PD_SET, BIT(5), ANA_REG_GLB_LDO_PD_RST, BIT(5), ANA_REG_GLB_LDO_SLP_CTRL0, BIT(10),
	ANA_REG_GLB2_LDO_TRIM5, BIT(0)|BIT(1)|BIT(2)|BIT(3)|BIT(4), ANA_REG_GLB_LDO_VCTRL0, BIT(12)|BIT(13)|BIT(14)|BIT(15), 4, 3000, 3100, 2900, 2800);

    SCI_REGU_REG(audio_vbo, 0, 0, 0, 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(10),
	0, 0, 0, 0, 8, 2900, 3100, 3200, 3300, 3400, 3500, 3600, 3800);

    SCI_REGU_REG(audio_vb, 0, 0, 0, 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(9),
	0, 0, 0, 0, 8, 2900, 3100, 3200, 3300, 3400, 3500, 3600, 3800);

    SCI_REGU_REG(vddrtc, 0, 0, 0, 0, 0, 0, 0,
	0, 0, ANA_REG_GLB_LDO_VCTRL0, BIT(0)|BIT(1)|BIT(2)|BIT(3), 4, 1800, 1700, 1600, 1500);

    SCI_REGU_REG(vbatbk, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 4, 2600, 3000, 2800, 3100);

    SCI_REGU_REG(audio_micbias, 0, 0, 0, 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(11),
	0, 0, 0, 0, 4, 1900, 2100, 2300, 2500);

    SCI_REGU_REG(audio_auxmicbias, 0, 0, 0, 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(12),
	0, 0, 0, 0, 4, 1900, 2100, 2300, 2500);

    SCI_REGU_REG(audio_bg_ibias, 0, 0, 0, 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(8),
	0, 0, 0, 0, 0);

    SCI_REGU_REG(audio_bg, 0, 0, 0, 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(7),
	0, 0, 0, 0, 0);

    SCI_REGU_REG(audio_vcmbuf, 0, 0, 0, 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(6),
	0, 0, 0, 0, 0);

    SCI_REGU_REG(audio_vcm, 0, 0, 0, 0, 0, ANA_REG_GLB_LDO_SLP_CTRL1, BIT(5),
	0, 0, 0, 0, 0);
