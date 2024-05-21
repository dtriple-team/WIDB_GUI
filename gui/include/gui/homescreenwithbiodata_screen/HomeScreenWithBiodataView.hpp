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

protected:
    int tickCounter;
    int digitalHours;
    int digitalMinutes;
    int digitalSeconds;

private:
};

#endif // HOMESCREENWITHBIODATAVIEW_HPP
