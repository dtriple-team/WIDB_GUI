#ifndef SOUNDNHAPTICSSETTINGPRESENTER_HPP
#define SOUNDNHAPTICSSETTINGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class soundnhapticsSettingView;

class soundnhapticsSettingPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    soundnhapticsSettingPresenter(soundnhapticsSettingView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual void notifySwipeRight();

    virtual ~soundnhapticsSettingPresenter() {}

private:
    soundnhapticsSettingPresenter();

    soundnhapticsSettingView& view;
};

#endif // SOUNDNHAPTICSSETTINGPRESENTER_HPP
