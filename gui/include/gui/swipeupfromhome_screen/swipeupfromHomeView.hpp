#ifndef SWIPEUPFROMHOMEVIEW_HPP
#define SWIPEUPFROMHOMEVIEW_HPP

#include <gui_generated/swipeupfromhome_screen/swipeupfromHomeViewBase.hpp>
#include <gui/swipeupfromhome_screen/swipeupfromHomePresenter.hpp>

class swipeupfromHomeView : public swipeupfromHomeViewBase
{
public:
    swipeupfromHomeView();
    virtual ~swipeupfromHomeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleGestureEvent(const GestureEvent& evt); //rkdalfks

    void handleSwipeUp(); //rkdalfks

protected:
    swipeupfromHomePresenter presenter;

private: //rkdalfks
    int initialX; //rkdalfks
    int initialY; //rkdaflks
};

#endif // SWIPEUPFROMHOMEVIEW_HPP
