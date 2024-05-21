/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/sleepscreen_screen/SleepScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

SleepScreenViewBase::SleepScreenViewBase()
{
    __background.setPosition(0, 0, 240, 280);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_ID));
    add(background);

    Sleep.setPosition(0, 6, 240, 25);
    Sleep.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Sleep.setLinespacing(0);
    Sleep.setTypedText(touchgfx::TypedText(T_SLEEPTEXT));
    add(Sleep);

    textArea1.setPosition(0, 219, 240, 33);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    textArea1.setLinespacing(0);
    textArea1.setWildcard1(touchgfx::TypedText(T_CURSLEEPHVALUE).getText());
    textArea1.setWildcard2(touchgfx::TypedText(T_CURSLEEPMVALUE).getText());
    textArea1.setTypedText(touchgfx::TypedText(T_CURSLEEP));
    add(textArea1);

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

SleepScreenViewBase::~SleepScreenViewBase()
{

}

void SleepScreenViewBase::setupScreen()
{

}
