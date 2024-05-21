#include <gui/screenontimesetting_screen/screenontimeSettingView.hpp>
#include "texts/TextKeysAndLanguages.hpp"

screenontimeSettingView::screenontimeSettingView():
scrollWheel1AnimateToCallback(this, &screenontimeSettingView::scrollWheel1AnimateToHandler),
scrollWheel1ItemSelectedCallback(this, &screenontimeSettingView::scrollWheel1ItemSelectedHandler)
{

}

void screenontimeSettingView::setupScreen()
{
    screenontimeSettingViewBase::setupScreen();
    scrollWheel1.setAnimateToCallback(scrollWheel1AnimateToCallback);

    // 스크롤 휠 항목 값 설정
	for (int i = 0; i < NUM_ITEMS; i++)
	{
		int value = 5 + i * 5; // 5부터 5씩 증가
		Unicode::snprintf(scrollWheelItems[i], 4, "%d", value);
	}

	scrollWheel1.setNumberOfItems(NUM_ITEMS);
	scrollWheel1.setItemSelectedCallback(scrollWheel1ItemSelectedCallback);
    //scrollWheel1.setUpdateItemCallback<screenontimeSettingView, setting_screenontime_notselected&>(*this, &screenontimeSettingView::scrollWheel1UpdateItem);
    //scrollWheel1.setUpdateCenterItemCallback<screenontimeSettingView, setting_screenontime_selected&>(*this, &screenontimeSettingView::scrollWheel1UpdateCenterItem);
}

void screenontimeSettingView::scrollWheel1ItemSelectedHandler(int16_t itemIndex)
{

}

void screenontimeSettingView::tearDownScreen()
{
    screenontimeSettingViewBase::tearDownScreen();
}

void screenontimeSettingView::scrollWheel1UpdateItem(setting_screenontime_notselected& item, int16_t itemIndex)
{
    //item.textArea1.setWildcard1(scrollWheelItems[itemIndex]);
    //item.invalidate();
}

void screenontimeSettingView::scrollWheel1UpdateCenterItem(setting_screenontime_selected& item, int16_t itemIndex)
{
    //item.textArea1.setWildcard1(scrollWheelItems[itemIndex]);
    //item.invalidate();
}

void screenontimeSettingView::scrollWheel1AnimateToHandler(int16_t itemIndex)
{
    // 여기에 스크롤 휠의 핸들링 로직 구현
    // 예: 스크롤 휠이 특정 아이템으로 이동할 때 수행할 작업
}
