#include <gui/screensetting_screen/screenSettingView.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/Utils.hpp>

screenSettingView::screenSettingView()
	: initialX(0), initialY(0) //rkdalfks
{

}

void screenSettingView::setupScreen()
{
    screenSettingViewBase::setupScreen();
}

void screenSettingView::tearDownScreen()
{
    screenSettingViewBase::tearDownScreen();
}

void screenSettingView::handleGestureEvent(const GestureEvent& evt)
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
    screenSettingViewBase::handleGestureEvent(evt);
}

void screenSettingView::handleSwipeRight()
{
    // 화면 전환 코드
    application().gotoSettingScreenScreenWipeTransitionWest();
}
