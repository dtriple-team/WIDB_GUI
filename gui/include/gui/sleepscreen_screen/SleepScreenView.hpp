#ifndef SLEEPSCREENVIEW_HPP
#define SLEEPSCREENVIEW_HPP

#include <gui_generated/sleepscreen_screen/SleepScreenViewBase.hpp>
#include <gui/sleepscreen_screen/SleepScreenPresenter.hpp>

class SleepScreenView : public SleepScreenViewBase
{
public:
    SleepScreenView();
    virtual ~SleepScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SLEEPSCREENVIEW_HPP
