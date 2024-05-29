#include <gui/screenontimesetting_screen/screenontimeSettingView.hpp>
#include "texts/TextKeysAndLanguages.hpp"
#include <touchgfx/Color.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/Utils.hpp>

screenontimeSettingView::screenontimeSettingView()
	: scrollWheel1AnimateToCallback(this, &screenontimeSettingView::scrollWheel1AnimateToHandler),
	  initialX(0), initialY(0)
{

}

void screenontimeSettingView::setupScreen()
{
    screenontimeSettingViewBase::setupScreen();
    scrollWheel1.setAnimateToCallback(scrollWheel1AnimateToCallback);
}

void screenontimeSettingView::tearDownScreen()
{
    screenontimeSettingViewBase::tearDownScreen();
}

void screenontimeSettingView::handleGestureEvent(const GestureEvent& evt)
{
    if (evt.getType() == GestureEvent::SWIPE_HORIZONTAL)
    {
        int deltaX = evt.getVelocity();
        if (deltaX > 0)
        {
            presenter->notifySwipeRight();
        }
    }
    screenontimeSettingViewBase::handleGestureEvent(evt);
}

void screenontimeSettingView::handleSwipeRight()
{
    application().gotoscreenSettingScreenWipeTransitionWest();
}

void screenontimeSettingView::scrollWheel1UpdateItem(setting_screenontime_notselected& item, int16_t itemIndex)
{
	item.setElements((itemIndex+1)*5);
}

void screenontimeSettingView::scrollWheel1UpdateCenterItem(setting_screenontime_selected& item, int16_t itemIndex)
{
	item.setElements((itemIndex+1)*5);
}

void screenontimeSettingView::scrollWheel1AnimateToHandler(int16_t item)
{

}
