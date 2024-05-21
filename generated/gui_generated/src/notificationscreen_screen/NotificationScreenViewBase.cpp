/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/notificationscreen_screen/NotificationScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

NotificationScreenViewBase::NotificationScreenViewBase()
{
    __background.setPosition(0, 0, 240, 280);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    add(background);

    settingscrollablecontainer.setPosition(0, 34, 240, 246);
    settingscrollablecontainer.enableHorizontalScroll(false);
    settingscrollablecontainer.setScrollbarsColor(touchgfx::Color::getColorFromRGB(96, 96, 96));
    settingscrollablecontainer.setScrollbarsAlpha(255);
    textArea1.setPosition(0, 186, 240, 20);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(96, 96, 96));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_NONOTI));
    settingscrollablecontainer.add(textArea1);

    add(settingscrollablecontainer);

    notification.setPosition(0, 6, 240, 25);
    notification.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    notification.setLinespacing(0);
    notification.setTypedText(touchgfx::TypedText(T_NOTIFICATION));
    add(notification);

    batteryprogress.setXY(197, 8);
    batteryprogress.setProgressIndicatorPosition(2, 2, 27, 11);
    batteryprogress.setRange(0, 100);
    batteryprogress.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    batteryprogress.setBackground(touchgfx::Bitmap(BITMAP_GROUP_6_ID));
    batteryprogress.setBitmap(BITMAP_BATTPERCENTAGE_ID);
    batteryprogress.setValue(90);
    batteryprogress.setAnchorAtZero(true);
    add(batteryprogress);
}

NotificationScreenViewBase::~NotificationScreenViewBase()
{

}

void NotificationScreenViewBase::setupScreen()
{

}
