#include <gui/homescreenwithbiodata_screen/HomeScreenWithBiodataView.hpp>
#include "texts/TextKeysAndLanguages.hpp"
#include <touchgfx/Color.hpp>

HomeScreenWithBiodataView::HomeScreenWithBiodataView()
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
