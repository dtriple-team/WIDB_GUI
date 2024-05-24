#include <gui/spo2screen_screen/Spo2ScreenView.hpp>
#include <touchgfx/Color.hpp> //rkdalfks
#include <touchgfx/hal/HAL.hpp> //rkdalfks
#include <touchgfx/Utils.hpp> //rkdalfks

Spo2ScreenView::Spo2ScreenView()
    : initialX(0), initialY(0) //rkdalfks
{
}

void Spo2ScreenView::setupScreen()
{
    Spo2ScreenViewBase::setupScreen();
}

void Spo2ScreenView::tearDownScreen()
{
    Spo2ScreenViewBase::tearDownScreen();
}

void Spo2ScreenView::handleGestureEvent(const GestureEvent& evt) //rkdalfks
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
    Spo2ScreenViewBase::handleGestureEvent(evt);
}

void Spo2ScreenView::handleSwipeRight() //rkdalfks
{
    // 화면 전환 코드
    application().gotoHomeScreenWithBiodataScreenWipeTransitionWest();
}
