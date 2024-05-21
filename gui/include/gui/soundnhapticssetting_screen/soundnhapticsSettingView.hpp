#ifndef SOUNDNHAPTICSSETTINGVIEW_HPP
#define SOUNDNHAPTICSSETTINGVIEW_HPP

#include <gui_generated/soundnhapticssetting_screen/soundnhapticsSettingViewBase.hpp>
#include <gui/soundnhapticssetting_screen/soundnhapticsSettingPresenter.hpp>

class soundnhapticsSettingView : public soundnhapticsSettingViewBase
{
public:
    soundnhapticsSettingView();
    virtual ~soundnhapticsSettingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SOUNDNHAPTICSSETTINGVIEW_HPP
