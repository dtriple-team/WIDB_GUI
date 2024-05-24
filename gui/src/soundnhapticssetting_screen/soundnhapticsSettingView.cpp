#include <gui/soundnhapticssetting_screen/soundnhapticsSettingView.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/Utils.hpp>

soundnhapticsSettingView::soundnhapticsSettingView()
	: initialX(0), initialY(0)
{

}

void soundnhapticsSettingView::setupScreen()
{
    soundnhapticsSettingViewBase::setupScreen();
}

void soundnhapticsSettingView::tearDownScreen()
{
    soundnhapticsSettingViewBase::tearDownScreen();
}

void soundnhapticsSettingView::handleGestureEvent(const GestureEvent& evt)
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
    soundnhapticsSettingViewBase::handleGestureEvent(evt);
}

void soundnhapticsSettingView::handleSwipeRight()
{
    // 화면 전환 코드
    application().gotoSettingScreenScreenWipeTransitionWest();
}
