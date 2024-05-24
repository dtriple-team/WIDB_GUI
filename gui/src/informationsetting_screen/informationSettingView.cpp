#include <gui/informationsetting_screen/informationSettingView.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/Utils.hpp>

informationSettingView::informationSettingView()
	: initialX(0), initialY(0)
{

}

void informationSettingView::setupScreen()
{
    informationSettingViewBase::setupScreen();
}

void informationSettingView::tearDownScreen()
{
    informationSettingViewBase::tearDownScreen();
}

void informationSettingView::handleGestureEvent(const GestureEvent& evt) //rkdalfks
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
    informationSettingViewBase::handleGestureEvent(evt);
}

void informationSettingView::handleSwipeRight() //rkdalfks
{
    // 화면 전환 코드
    application().gotoSettingScreenScreenWipeTransitionWest();
}
