#ifndef SCREENBRIGHTNESSSETTINGVIEW_HPP
#define SCREENBRIGHTNESSSETTINGVIEW_HPP

#include <gui_generated/screenbrightnesssetting_screen/screenbrightnessSettingViewBase.hpp>
#include <gui/screenbrightnesssetting_screen/screenbrightnessSettingPresenter.hpp>

class screenbrightnessSettingView : public screenbrightnessSettingViewBase
{
public:
    screenbrightnessSettingView();
    virtual ~screenbrightnessSettingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENBRIGHTNESSSETTINGVIEW_HPP
