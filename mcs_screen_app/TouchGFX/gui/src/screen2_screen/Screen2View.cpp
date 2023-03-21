#include <gui/screen2_screen/Screen2View.hpp>

#include "BitmapDatabase.hpp"

Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::map_update_value(uint32_t value)		//funkcja dodana
{
	Unicode::snprintf(ta_map_valueBuffer, TA_MAP_VALUE_SIZE, "%d", value);

	//Unicode::snprintf(ta_tc_valueBuffer, TA_TC_VALUE_SIZE, "%d", value); //TA_TC VALUE

	ta_map_value.resizeToCurrentTextWithAlignment();

	//ta_tc_value.resizeToCurrentTextWithAlignment(); //TA_TC VALUE

	ta_map_value.centerX();

	//ta_tc_value.centerX(); //TA_TC VALUE

	c_map.invalidate();

	//c_tc.invalidate(); //TA_TC VALUE

	if(value >= 30 && value < 80)
	{
		img_map.setBitmap(Bitmap(BITMAP_DRIVE_1_BLUE_ID));
		img_map.invalidate();

		//img_tc.setBitmap(Bitmap(BITMAP_DRIVE_1_YELLOW_ID));	//TA_TC VALUE
		//img_tc.invalidate();	//TA_TC VALUE
	}

	else
	{
		img_map.setBitmap(Bitmap(BITMAP_DRIVE_1_ID));
		img_map.invalidate();

		//img_tc.setBitmap(Bitmap(BITMAP_DRIVE_1_ID));
		//img_tc.invalidate();
	}
}

void Screen2View::tc_update_value(uint32_t value)
{
	Unicode::snprintf(ta_tc_valueBuffer, TA_TC_VALUE_SIZE, "%d", value);
	ta_tc_value.resizeToCurrentTextWithAlignment();
	ta_tc_value.centerX();
	c_tc.invalidate();

	if(value >= 30 && value < 80)
	{
		img_tc.setBitmap(Bitmap(BITMAP_DRIVE_1_YELLOW_ID));
		img_tc.invalidate();
	}

	else /*if(value < 30 && value >= 80)*/
	{
		img_tc.setBitmap(Bitmap(BITMAP_DRIVE_1_ID));
		img_tc.invalidate();
	}
}

void Screen2View::speed_update_value(uint32_t value)
{
	Unicode::snprintf(ta_speed_valueBuffer, TA_SPEED_VALUE_SIZE, "%d", value);
	ta_speed_value.resizeToCurrentTextWithAlignment();
	ta_speed_value.centerX();
	c_speed.invalidate();
}

void Screen2View::diff_update_value(uint32_t value)
{
	Unicode::snprintf(ta_diff_valueBuffer, TA_DIFF_VALUE_SIZE, "%d", value);
	ta_diff_value.resizeToCurrentTextWithAlignment();
	ta_diff_value.centerX();
	c_diff.invalidate();

	if(value >= 30 && value < 80)
	{
		img_diff.setBitmap(Bitmap(BITMAP_DRIVE_1_YELLOW_ID));
		img_diff.invalidate();
	}

	else
	{
		img_diff.setBitmap(Bitmap(BITMAP_DRIVE_1_ID));
		img_diff.invalidate();
	}
}

void Screen2View::tsac_update_value(uint32_t value)
{
	Unicode::snprintf(ta_tsac_valueBuffer, TA_TSAC_VALUE_SIZE, "%d", value);
	ta_tsac_value.resizeToCurrentTextWithAlignment();
	ta_tsac_value.centerX();
	c_tsac.invalidate();

	if(value >= 30 && value < 80)
	{
		img_tsac.setBitmap(Bitmap(BITMAP_DRIVE_1_YELLOW_ID));
		img_tsac.invalidate();
	}

	else
	{
		img_tsac.setBitmap(Bitmap(BITMAP_DRIVE_1_ID));
		img_tsac.invalidate();
	}
}

void Screen2View::leng_update_value(uint32_t value)
{
	Unicode::snprintf(ta_leng_valueBuffer, TA_LENG_VALUE_SIZE, "%d", value);
	ta_leng_value.resizeToCurrentTextWithAlignment();
	ta_leng_value.centerX();
	c_leng.invalidate();
}

void Screen2View::linv_update_value(uint32_t value)
{
	Unicode::snprintf(ta_linv_valueBuffer, TA_LINV_VALUE_SIZE, "%d", value);
	ta_linv_value.resizeToCurrentTextWithAlignment();
	ta_linv_value.centerX();
	c_linv.invalidate();
}

void Screen2View::bat_update_value(uint32_t value)
{
	Unicode::snprintf(ta_bat_valueBuffer, TA_BAT_VALUE_SIZE, "%d", value);
	ta_bat_value.resizeToCurrentTextWithAlignment();
	ta_bat_value.centerX();
	c_bat.invalidate();
}

void Screen2View::rinv_update_value(uint32_t value)
{
	Unicode::snprintf(ta_rinv_valueBuffer, TA_RINV_VALUE_SIZE, "%d", value);
	ta_rinv_value.resizeToCurrentTextWithAlignment();
	ta_rinv_value.centerX();
	c_rinv.invalidate();
}

void Screen2View::reng_update_value(uint32_t value)
{
	Unicode::snprintf(ta_reng_valueBuffer, TA_RENG_VALUE_SIZE, "%d", value);
	ta_reng_value.resizeToCurrentTextWithAlignment();
	ta_reng_value.centerX();
	c_reng.invalidate();
}

void Screen2View::err_update_value(uint32_t value)
{
	Unicode::snprintf(ta_err_valueBuffer, TA_ERR_VALUE_SIZE, "%d", value);
	ta_err_value.resizeToCurrentTextWithAlignment();
	ta_err_value.centerX();
	c_err.invalidate();
}

void Screen2View::hv_update_value(uint32_t value)
{
	Unicode::snprintf(ta_hv_valueBuffer, TA_HV_VALUE_SIZE, "%d", value);
	ta_hv_value.resizeToCurrentTextWithAlignment();
	ta_hv_value.centerX();
	c_hv.invalidate();
}

void Screen2View::low_update_value(uint32_t value)
{
	Unicode::snprintf(ta_low_valueBuffer, TA_LOW_VALUE_SIZE, "%d", value);
	ta_low_value.resizeToCurrentTextWithAlignment();
	ta_low_value.centerX();
	c_low.invalidate();
}

