#ifndef HEARTRATESCREENVIEW_HPP
#define HEARTRATESCREENVIEW_HPP

#include <gui_generated/heartratescreen_screen/HeartrateScreenViewBase.hpp>
#include <gui/heartratescreen_screen/HeartrateScreenPresenter.hpp>

class HeartrateScreenView : public HeartrateScreenViewBase
{
public:
    HeartrateScreenView();
    virtual ~HeartrateScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void handleGestureEvent(const GestureEvent& evt); //rkdalfks

    void handleSwipeRight(); //rkdalfks
protected:

private: //rkdalfks
    int initialX; //rkdalfks
    int initialY; //rkdalfks
};

#endif // HEARTRATESCREENVIEW_HPP
