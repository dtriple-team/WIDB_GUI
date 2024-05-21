#ifndef STEPSSCREENVIEW_HPP
#define STEPSSCREENVIEW_HPP

#include <gui_generated/stepsscreen_screen/StepsScreenViewBase.hpp>
#include <gui/stepsscreen_screen/StepsScreenPresenter.hpp>

class StepsScreenView : public StepsScreenViewBase
{
public:
    StepsScreenView();
    virtual ~StepsScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // STEPSSCREENVIEW_HPP
