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

protected:
    swipeupfromHomePresenter presenter;
};

#endif // SWIPEUPFROMHOMEVIEW_HPP
