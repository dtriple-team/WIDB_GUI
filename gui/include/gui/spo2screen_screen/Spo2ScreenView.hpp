#ifndef SPO2SCREENVIEW_HPP
#define SPO2SCREENVIEW_HPP

#include <gui_generated/spo2screen_screen/Spo2ScreenViewBase.hpp>
#include <gui/spo2screen_screen/Spo2ScreenPresenter.hpp>

class Spo2ScreenView : public Spo2ScreenViewBase
{
public:
    Spo2ScreenView();
    virtual ~Spo2ScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SPO2SCREENVIEW_HPP
