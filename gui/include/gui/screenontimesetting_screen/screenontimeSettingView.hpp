#ifndef SCREENONTIMESETTINGVIEW_HPP
#define SCREENONTIMESETTINGVIEW_HPP

#include <gui_generated/screenontimesetting_screen/screenontimeSettingViewBase.hpp>
#include <gui/screenontimesetting_screen/screenontimeSettingPresenter.hpp>
#include <touchgfx/Unicode.hpp>

class screenontimeSettingView : public screenontimeSettingViewBase
{
public:
    screenontimeSettingView();
    virtual ~screenontimeSettingView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void scrollWheel1UpdateItem(setting_screenontime_notselected& item, int16_t itemIndex);
    virtual void scrollWheel1UpdateCenterItem(setting_screenontime_selected& item, int16_t itemIndex);

    virtual void handleGestureEvent(const GestureEvent& evt);

    void handleSwipeRight();

protected:
    static const int NUM_ITEMS = 6;
    touchgfx::Unicode::UnicodeChar scrollWheelItems[NUM_ITEMS][4];

    touchgfx::Callback<screenontimeSettingView, int16_t> scrollWheel1AnimateToCallback;  // 콜백 멤버 변수 추가
    touchgfx::Callback<screenontimeSettingView, int16_t> scrollWheel1ItemSelectedCallback;


    void scrollWheel1AnimateToHandler(int16_t itemIndex);  // 핸들러 함수 선언
    void scrollWheel1ItemSelectedHandler(int16_t itemIndex);

private:
    int initialX;
    int initialY;
};

#endif
