#include <gui/swipedownfromhome_screen/swipedownfromHomeView.hpp>
#include <gui/model/Model.hpp>
#include <touchgfx/Color.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <touchgfx/Utils.hpp>

swipedownfromHomeView::swipedownfromHomeView()
	: toggleButton1ClickedCallback(this, &swipedownfromHomeView::toggleButton1Clicked), //test
	  toggleButton2ClickedCallback(this, &swipedownfromHomeView::toggleButton2Clicked),
	  initialX(0), initialY(0)
{

}

void swipedownfromHomeView::setupScreen()
{
    swipedownfromHomeViewBase::setupScreen();
    toggleButton1.setAction(toggleButton1ClickedCallback);
    toggleButton2.setAction(toggleButton2ClickedCallback);
    toggleButton1.forceState(presenter->getToggleButton1State()); //test
    toggleButton2.forceState(presenter->getToggleButton2State()); //test
}

void swipedownfromHomeView::tearDownScreen()
{
    swipedownfromHomeViewBase::tearDownScreen();
}

void swipedownfromHomeView::handleGestureEvent(const GestureEvent& evt)
{
    if (evt.getType() == GestureEvent::SWIPE_VERTICAL)
    {
        int deltaY = evt.getVelocity();
        if (deltaY < 0)
        {
            presenter->notifySwipeUp();
        }
    }
    swipedownfromHomeViewBase::handleGestureEvent(evt);
}

void swipedownfromHomeView::handleSwipeUp()
{
    application().gotoHomeScreenWithBiodataScreenWipeTransitionSouth();
}

void swipedownfromHomeView::toggleButton1Clicked(const touchgfx::AbstractButton& source)
{
    bool newState = toggleButton1.getState();
    presenter->updateToggleButton1State(newState);
}

void swipedownfromHomeView::updateToggleButton1State(bool state)
{
    toggleButton1.forceState(state);
}

void swipedownfromHomeView::toggleButton2Clicked(const touchgfx::AbstractButton& source)
{
    bool newState = toggleButton2.getState();
    presenter->updateToggleButton2State(newState);
}

void swipedownfromHomeView::updateToggleButton2State(bool state)
{
    toggleButton2.forceState(state);
}
