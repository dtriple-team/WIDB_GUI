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
    virtual void handleGestureEvent(const GestureEvent& evt); //rkdalfks

    void handleSwipeRight();
protected:

private: //rkdalfks
    int initialX;
    int initialY;
};

#endif // SOUNDNHAPTICSSETTINGVIEW_HPP
