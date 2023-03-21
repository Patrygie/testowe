/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN2VIEWBASE_HPP
#define SCREEN2VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class Screen2ViewBase : public touchgfx::View<Screen2Presenter>
{
public:
    Screen2ViewBase();
    virtual ~Screen2ViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::Container c_map;
    touchgfx::Image img_map;
    touchgfx::TextAreaWithOneWildcard ta_map_value;
    touchgfx::TextArea ta_map_title;
    touchgfx::Container c_tc;
    touchgfx::Image img_tc;
    touchgfx::TextArea ta_tc_title;
    touchgfx::TextAreaWithOneWildcard ta_tc_value;
    touchgfx::Container c_speed;
    touchgfx::Image img_speed;
    touchgfx::TextAreaWithOneWildcard ta_speed_value;
    touchgfx::Container c_diff;
    touchgfx::Image img_diff;
    touchgfx::TextArea ta_diff_title;
    touchgfx::TextAreaWithOneWildcard ta_diff_value;
    touchgfx::Container c_tsac;
    touchgfx::Image img_tsac;
    touchgfx::TextArea ta_tsac_title;
    touchgfx::TextAreaWithOneWildcard ta_tsac_value;
    touchgfx::Container c_leng;
    touchgfx::Image img_LENG;
    touchgfx::TextAreaWithOneWildcard ta_leng_value;
    touchgfx::TextArea ta_leng_title;
    touchgfx::Container c_linv;
    touchgfx::Image img_linv;
    touchgfx::TextAreaWithOneWildcard ta_linv_value;
    touchgfx::TextArea ta_linv_title;
    touchgfx::Container c_bat;
    touchgfx::TextAreaWithOneWildcard ta_bat_value;
    touchgfx::TextArea ta_bat_title;
    touchgfx::Image img_bat;
    touchgfx::Container c_rinv;
    touchgfx::TextAreaWithOneWildcard ta_rinv_value;
    touchgfx::TextArea ta_rinv_title;
    touchgfx::Image img_rinv;
    touchgfx::Container c_reng;
    touchgfx::Image img_reng;
    touchgfx::TextArea ta_reng_title;
    touchgfx::TextAreaWithOneWildcard ta_reng_value;
    touchgfx::Container c_err;
    touchgfx::TextAreaWithOneWildcard ta_err_value;
    touchgfx::TextArea ta_err_title;
    touchgfx::Image img_err;
    touchgfx::Container c_hv;
    touchgfx::Image img_hv;
    touchgfx::Image img_hvstep;
    touchgfx::Image img_hvrect;
    touchgfx::TextAreaWithOneWildcard ta_hv_value;
    touchgfx::Container c_low;
    touchgfx::TextAreaWithOneWildcard ta_low_value;
    touchgfx::TextArea ta_low_title;
    touchgfx::Image img_low;
    touchgfx::Container c_p2d;
    touchgfx::TextArea ta_p2d_title;
    touchgfx::Image img_p2d;
    touchgfx::Container c_ts;
    touchgfx::TextArea ta_ts_title;
    touchgfx::Image img_ts;
    touchgfx::Container c_gas;
    touchgfx::Image img_gasfill;
    touchgfx::Image img_gasrec;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TA_MAP_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_map_valueBuffer[TA_MAP_VALUE_SIZE];
    static const uint16_t TA_TC_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_tc_valueBuffer[TA_TC_VALUE_SIZE];
    static const uint16_t TA_SPEED_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_speed_valueBuffer[TA_SPEED_VALUE_SIZE];
    static const uint16_t TA_DIFF_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_diff_valueBuffer[TA_DIFF_VALUE_SIZE];
    static const uint16_t TA_TSAC_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_tsac_valueBuffer[TA_TSAC_VALUE_SIZE];
    static const uint16_t TA_LENG_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_leng_valueBuffer[TA_LENG_VALUE_SIZE];
    static const uint16_t TA_LINV_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_linv_valueBuffer[TA_LINV_VALUE_SIZE];
    static const uint16_t TA_BAT_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_bat_valueBuffer[TA_BAT_VALUE_SIZE];
    static const uint16_t TA_RINV_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_rinv_valueBuffer[TA_RINV_VALUE_SIZE];
    static const uint16_t TA_RENG_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_reng_valueBuffer[TA_RENG_VALUE_SIZE];
    static const uint16_t TA_ERR_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_err_valueBuffer[TA_ERR_VALUE_SIZE];
    static const uint16_t TA_HV_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_hv_valueBuffer[TA_HV_VALUE_SIZE];
    static const uint16_t TA_LOW_VALUE_SIZE = 10;
    touchgfx::Unicode::UnicodeChar ta_low_valueBuffer[TA_LOW_VALUE_SIZE];

private:

};

#endif // SCREEN2VIEWBASE_HPP
