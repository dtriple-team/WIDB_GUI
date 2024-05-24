#ifndef HOMESCREENWITHBIODATAVIEW_HPP
#define HOMESCREENWITHBIODATAVIEW_HPP

#include <gui_generated/homescreenwithbiodata_screen/HomeScreenWithBiodataViewBase.hpp>
#include <gui/homescreenwithbiodata_screen/HomeScreenWithBiodataPresenter.hpp>


class HomeScreenWithBiodataView : public HomeScreenWithBiodataViewBase
{
public:
    HomeScreenWithBiodataView();
    virtual ~HomeScreenWithBiodataView() {}

    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
    virtual void handleGestureEvent(const GestureEvent& evt); //rkdalfks

    void handleSwipeDown(); //rkdalfks
    void handleSwipeUp();

protected:
    int tickCounter;
    int digitalHours;
    int digitalMinutes;
    int digitalSeconds;

private: //rkdalfks
    int initialX;
    int initialY;
};

#endif // HOMESCREENWITHBIODATAVIEW_HPP
