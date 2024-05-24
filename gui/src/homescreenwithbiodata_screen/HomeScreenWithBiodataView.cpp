#include <gui/homescreenwithbiodata_screen/HomeScreenWithBiodataView.hpp>
#include "texts/TextKeysAndLanguages.hpp"
#include <touchgfx/Color.hpp>
#include <touchgfx/Color.hpp> //rkdalfks
#include <touchgfx/hal/HAL.hpp> //rkdalfks
#include <touchgfx/Utils.hpp> //rkdalfks

HomeScreenWithBiodataView::HomeScreenWithBiodataView()
	: initialX(0), initialY(0)
{
}

void HomeScreenWithBiodataView::setupScreen()
{
    HomeScreenWithBiodataViewBase::setupScreen();

    digitalHours = digitalClock.getCurrentHour();
    digitalMinutes = digitalClock.getCurrentMinute();
    digitalSeconds = digitalClock.getCurrentSecond();
}

void HomeScreenWithBiodataView::tearDownScreen()
{
    HomeScreenWithBiodataViewBase::tearDownScreen();
}

void HomeScreenWithBiodataView::handleTickEvent()
{
	tickCounter++;

	if(tickCounter % 60 == 0){
		if(++digitalSeconds >= 60){
			digitalSeconds=0;
			if(++digitalMinutes >= 60){
				digitalMinutes=0;
				if(++digitalHours >=24){
					digitalHours = 0;
				}
			}
		}
		digitalClock.setTime24Hour(digitalHours, digitalMinutes, digitalSeconds);
	}
}

void HomeScreenWithBiodataView::handleGestureEvent(const GestureEvent& evt) //rkdalfks
{
    if (evt.getType() == GestureEvent::SWIPE_VERTICAL)
    {
        int deltaY = evt.getVelocity();
        if (deltaY > 0)
        {
            presenter->notifySwipeDown();
        }
        else if (deltaY < 0)
        {
        	presenter->notifySwipeUp();
        }
    }
    HomeScreenWithBiodataViewBase::handleGestureEvent(evt);
}

void HomeScreenWithBiodataView::handleSwipeDown()
{
	application().gotoswipeupfromHomeScreenCoverTransitionNorth();
}

void HomeScreenWithBiodataView::handleSwipeUp()
{
	application().gotoNotificationScreenScreenCoverTransitionSouth();
}
