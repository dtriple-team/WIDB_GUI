/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/networkinfosetting_screen/networkInfoSettingViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

networkInfoSettingViewBase::networkInfoSettingViewBase()
{
    __background.setPosition(0, 0, 240, 280);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    add(background);

    NetworkInfo.setPosition(0, 6, 240, 25);
    NetworkInfo.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    NetworkInfo.setLinespacing(0);
    NetworkInfo.setTypedText(touchgfx::TypedText(T_NETWORKINFO));
    add(NetworkInfo);

    textArea1.setPosition(0, 53, 240, 29);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(239, 140, 48));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T_BLEMACADDLABLE));
    add(textArea1);

    textArea1_1.setXY(33, 109);
    textArea1_1.setColor(touchgfx::Color::getColorFromRGB(239, 140, 48));
    textArea1_1.setLinespacing(0);
    textArea1_1.setTypedText(touchgfx::TypedText(T_WIFIMACADDLABEL));
    add(textArea1_1);

    textArea2.setPosition(0, 80, 240, 29);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2.setLinespacing(0);
    textArea2.setWildcard(touchgfx::TypedText(T_BLEMACADDVALUE).getText());
    textArea2.setTypedText(touchgfx::TypedText(T_BLEMACADDTEXT));
    add(textArea2);

    textArea2_1.setPosition(0, 136, 240, 29);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea2_1.setLinespacing(0);
    textArea2_1.setWildcard(touchgfx::TypedText(T_WIFIMACADDVALUE).getText());
    textArea2_1.setTypedText(touchgfx::TypedText(T_WIFIMACADDTEXT));
    add(textArea2_1);

    textArea3.setPosition(0, 167, 240, 29);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea3.setLinespacing(0);
    textArea3.setWildcard(touchgfx::TypedText(T_IMEIVALUE).getText());
    textArea3.setTypedText(touchgfx::TypedText(T_IMEI));
    add(textArea3);

    textArea3_1.setPosition(0, 198, 240, 29);
    textArea3_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea3_1.setLinespacing(0);
    textArea3_1.setWildcard(touchgfx::TypedText(T_ICCIDVALUE).getText());
    textArea3_1.setTypedText(touchgfx::TypedText(T_ICCID));
    add(textArea3_1);

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

networkInfoSettingViewBase::~networkInfoSettingViewBase()
{

}

void networkInfoSettingViewBase::setupScreen()
{

}
