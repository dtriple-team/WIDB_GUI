#include <gui/swipeupfromhome_screen/swipeupfromHomeView.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/Utils.hpp>

swipeupfromHomeView::swipeupfromHomeView()
	: presenter(*this), initialX(0), initialY(0)
{

}

void swipeupfromHomeView::setupScreen()
{
    swipeupfromHomeViewBase::setupScreen();
}

void swipeupfromHomeView::tearDownScreen()
{
    swipeupfromHomeViewBase::tearDownScreen();
}

void swipeupfromHomeView::handleGestureEvent(const GestureEvent& evt)
{
    if (evt.getType() == GestureEvent::SWIPE_VERTICAL)
    {
        int deltaY = evt.getVelocity();
        if (deltaY < 0)
        {
            presenter.notifySwipeUp();
        }
    }
    swipeupfromHomeViewBase::handleGestureEvent(evt);
}

void swipeupfromHomeView::handleSwipeUp()
{
    application().gotoHomeScreenWithBiodataScreenSlideTransitionSouth();
}
