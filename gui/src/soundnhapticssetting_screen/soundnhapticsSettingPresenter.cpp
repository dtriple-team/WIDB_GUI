#include <gui/soundnhapticssetting_screen/soundnhapticsSettingView.hpp>
#include <gui/soundnhapticssetting_screen/soundnhapticsSettingPresenter.hpp>

soundnhapticsSettingPresenter::soundnhapticsSettingPresenter(soundnhapticsSettingView& v)
    : view(v)
{

}

void soundnhapticsSettingPresenter::activate()
{

}

void soundnhapticsSettingPresenter::deactivate()
{

}

void soundnhapticsSettingPresenter::notifySwipeRight()
{
	view.handleSwipeRight();
}
