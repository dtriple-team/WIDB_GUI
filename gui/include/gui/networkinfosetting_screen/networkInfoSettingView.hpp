#ifndef NETWORKINFOSETTINGVIEW_HPP
#define NETWORKINFOSETTINGVIEW_HPP

#include <gui_generated/networkinfosetting_screen/networkInfoSettingViewBase.hpp>
#include <gui/networkinfosetting_screen/networkInfoSettingPresenter.hpp>

class networkInfoSettingView : public networkInfoSettingViewBase
{
public:
    networkInfoSettingView();
    virtual ~networkInfoSettingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // NETWORKINFOSETTINGVIEW_HPP
