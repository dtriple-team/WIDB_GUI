#ifndef LANGUAGESETTINGVIEW_HPP
#define LANGUAGESETTINGVIEW_HPP

#include <gui_generated/languagesetting_screen/languageSettingViewBase.hpp>
#include <gui/languagesetting_screen/languageSettingPresenter.hpp>

class languageSettingView : public languageSettingViewBase
{
public:
    languageSettingView();
    virtual ~languageSettingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleGestureEvent(const GestureEvent& evt);

    void handleSwipeRight();
protected:

private:
    int initialX;
    int initialY;
};

#endif // LANGUAGESETTINGVIEW_HPP
