#include <gui/swipeupfromhome_screen/swipeupfromHomePresenter.hpp>
#include <gui/swipeupfromhome_screen/swipeupfromHomeView.hpp>

swipeupfromHomePresenter::swipeupfromHomePresenter(swipeupfromHomeView& v)
    : view(v)
{
}

void swipeupfromHomePresenter::activate()
{
    // Activate code
}

void swipeupfromHomePresenter::deactivate()
{
    // Deactivate code
}

void swipeupfromHomePresenter::notifySwipeUp() //rkdalfks
{
	view.handleSwipeUp();
}
