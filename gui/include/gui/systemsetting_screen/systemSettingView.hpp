#ifndef SYSTEMSETTINGVIEW_HPP
#define SYSTEMSETTINGVIEW_HPP

#include <gui_generated/systemsetting_screen/systemSettingViewBase.hpp>
#include <gui/systemsetting_screen/systemSettingPresenter.hpp>

class systemSettingView : public systemSettingViewBase
{
public:
    systemSettingView();
    virtual ~systemSettingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SYSTEMSETTINGVIEW_HPP
