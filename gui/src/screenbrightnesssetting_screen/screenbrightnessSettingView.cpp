#include <gui/screenbrightnesssetting_screen/screenbrightnessSettingView.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/Utils.hpp>

screenbrightnessSettingView::screenbrightnessSettingView()
	: initialX(0), initialY(0)
{

}

void screenbrightnessSettingView::setupScreen()
{
    screenbrightnessSettingViewBase::setupScreen();
}

void screenbrightnessSettingView::tearDownScreen()
{
    screenbrightnessSettingViewBase::tearDownScreen();
}

void screenbrightnessSettingView::handleGestureEvent(const GestureEvent& evt)
{
    if (evt.getType() == GestureEvent::SWIPE_HORIZONTAL)
    {
        int deltaX = evt.getVelocity();
        if (deltaX > 0) // 오른쪽으로 스와이프
        {
            // 스와이프 이벤트 처리
            presenter->notifySwipeRight();
        }
    }
    screenbrightnessSettingViewBase::handleGestureEvent(evt);
}

void screenbrightnessSettingView::handleSwipeRight()
{
    // 화면 전환 코드
    application().gotoscreenSettingScreenWipeTransitionWest();
}
