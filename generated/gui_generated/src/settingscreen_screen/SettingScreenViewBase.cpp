/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/settingscreen_screen/SettingScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

SettingScreenViewBase::SettingScreenViewBase() :
    buttonCallback(this, &SettingScreenViewBase::buttonCallbackHandler)
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
    button1.setXY(14, 7);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_RECTANGLE_21_ID), touchgfx::Bitmap(BITMAP_RECTANGLE_30_ID));
    button1.setAction(buttonCallback);
    settingscrollablecontainer.add(button1);

    image2.setXY(20, 14);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_RECTANGLE_26_ID));
    settingscrollablecontainer.add(image2);

    Screen.setPosition(66, 23, 155, 25);
    Screen.setColor(touchgfx::Color::getColorFromRGB(217, 217, 217));
    Screen.setLinespacing(0);
    Screen.setTypedText(touchgfx::TypedText(T_SCREENTEXT));
    settingscrollablecontainer.add(Screen);

    button1_1.setXY(14, 70);
    button1_1.setBitmaps(touchgfx::Bitmap(BITMAP_RECTANGLE_21_ID), touchgfx::Bitmap(BITMAP_RECTANGLE_30_ID));
    button1_1.setAction(buttonCallback);
    settingscrollablecontainer.add(button1_1);

    image2_1.setXY(20, 77);
    image2_1.setBitmap(touchgfx::Bitmap(BITMAP_RECTANGLE_26_ID));
    settingscrollablecontainer.add(image2_1);

    SoundnHaptics.setPosition(66, 86, 155, 25);
    SoundnHaptics.setColor(touchgfx::Color::getColorFromRGB(217, 217, 217));
    SoundnHaptics.setLinespacing(0);
    SoundnHaptics.setTypedText(touchgfx::TypedText(T_SOUNDNHAPTICSTEXT));
    settingscrollablecontainer.add(SoundnHaptics);

    button1_2.setXY(14, 133);
    button1_2.setBitmaps(touchgfx::Bitmap(BITMAP_RECTANGLE_21_ID), touchgfx::Bitmap(BITMAP_RECTANGLE_30_ID));
    button1_2.setAction(buttonCallback);
    settingscrollablecontainer.add(button1_2);

    image2_2.setXY(20, 140);
    image2_2.setBitmap(touchgfx::Bitmap(BITMAP_RECTANGLE_26_ID));
    settingscrollablecontainer.add(image2_2);

    Language.setPosition(66, 149, 155, 25);
    Language.setColor(touchgfx::Color::getColorFromRGB(217, 217, 217));
    Language.setLinespacing(0);
    Language.setTypedText(touchgfx::TypedText(T_LANGUAGETEXT));
    settingscrollablecontainer.add(Language);

    button1_3.setXY(14, 196);
    button1_3.setBitmaps(touchgfx::Bitmap(BITMAP_RECTANGLE_21_ID), touchgfx::Bitmap(BITMAP_RECTANGLE_30_ID));
    button1_3.setAction(buttonCallback);
    settingscrollablecontainer.add(button1_3);

    image2_3.setXY(20, 203);
    image2_3.setBitmap(touchgfx::Bitmap(BITMAP_RECTANGLE_26_ID));
    settingscrollablecontainer.add(image2_3);

    WiFiSetting.setPosition(66, 212, 155, 25);
    WiFiSetting.setColor(touchgfx::Color::getColorFromRGB(217, 217, 217));
    WiFiSetting.setLinespacing(0);
    WiFiSetting.setTypedText(touchgfx::TypedText(T_WIFISETTINGTEXT));
    settingscrollablecontainer.add(WiFiSetting);

    button1_4.setXY(14, 259);
    button1_4.setBitmaps(touchgfx::Bitmap(BITMAP_RECTANGLE_21_ID), touchgfx::Bitmap(BITMAP_RECTANGLE_30_ID));
    settingscrollablecontainer.add(button1_4);

    image2_4.setXY(20, 266);
    image2_4.setBitmap(touchgfx::Bitmap(BITMAP_RECTANGLE_26_ID));
    settingscrollablecontainer.add(image2_4);

    Findmyphone.setPosition(66, 275, 155, 25);
    Findmyphone.setColor(touchgfx::Color::getColorFromRGB(217, 217, 217));
    Findmyphone.setLinespacing(0);
    Findmyphone.setTypedText(touchgfx::TypedText(T_FINDMYPHONETEXT));
    settingscrollablecontainer.add(Findmyphone);

    button1_5.setXY(14, 322);
    button1_5.setBitmaps(touchgfx::Bitmap(BITMAP_RECTANGLE_21_ID), touchgfx::Bitmap(BITMAP_RECTANGLE_30_ID));
    button1_5.setAction(buttonCallback);
    settingscrollablecontainer.add(button1_5);

    image2_5.setXY(20, 329);
    image2_5.setBitmap(touchgfx::Bitmap(BITMAP_RECTANGLE_26_ID));
    settingscrollablecontainer.add(image2_5);

    Information.setPosition(66, 338, 155, 25);
    Information.setColor(touchgfx::Color::getColorFromRGB(217, 217, 217));
    Information.setLinespacing(0);
    Information.setTypedText(touchgfx::TypedText(T_INFORMATIONTEXT));
    settingscrollablecontainer.add(Information);

    button1_6.setXY(14, 385);
    button1_6.setBitmaps(touchgfx::Bitmap(BITMAP_RECTANGLE_21_ID), touchgfx::Bitmap(BITMAP_RECTANGLE_30_ID));
    button1_6.setAction(buttonCallback);
    settingscrollablecontainer.add(button1_6);

    image2_6.setXY(20, 392);
    image2_6.setBitmap(touchgfx::Bitmap(BITMAP_RECTANGLE_26_ID));
    settingscrollablecontainer.add(image2_6);

    System.setPosition(66, 401, 155, 25);
    System.setColor(touchgfx::Color::getColorFromRGB(217, 217, 217));
    System.setLinespacing(0);
    System.setTypedText(touchgfx::TypedText(T_SYSTEMTEXT));
    settingscrollablecontainer.add(System);

    box1.setPosition(14, 439, 212, 9);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    settingscrollablecontainer.add(box1);

    add(settingscrollablecontainer);

    Setting.setPosition(0, 6, 240, 25);
    Setting.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Setting.setLinespacing(0);
    Setting.setTypedText(touchgfx::TypedText(T_SETTINGLABLE));
    add(Setting);

    batteryprogress.setXY(197, 8);
    batteryprogress.setProgressIndicatorPosition(2, 2, 27, 11);
    batteryprogress.setRange(0, 100);
    batteryprogress.setDirection(touchgfx::AbstractDirectionProgress::RIGHT);
    batteryprogress.setBackground(touchgfx::Bitmap(BITMAP_GROUP_6_ID));
    batteryprogress.setBitmap(BITMAP_BATTPERCENTAGE_ID);
    batteryprogress.setValue(90);
    batteryprogress.setAnchorAtZero(true);
    add(batteryprogress);

    button2.setXY(0, 0);
    button2.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_NORMAL_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_MEDIUM_ROUNDED_PRESSED_ID));
    button2.setVisible(false);
    button2.setAction(buttonCallback);
    add(button2);
}

SettingScreenViewBase::~SettingScreenViewBase()
{

}

void SettingScreenViewBase::setupScreen()
{

}

void SettingScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &button1)
    {
        //screenSettingInteraction
        //When button1 clicked change screen to screenSetting
        //Go to screenSetting with screen transition towards East
        application().gotoscreenSettingScreenCoverTransitionEast();
    }
    if (&src == &button1_1)
    {
        //snhSettingInteraction
        //When button1_1 clicked change screen to soundnhapticsSetting
        //Go to soundnhapticsSetting with screen transition towards East
        application().gotosoundnhapticsSettingScreenCoverTransitionEast();
    }
    if (&src == &button1_2)
    {
        //languageSettingInteraction
        //When button1_2 clicked change screen to languageSetting
        //Go to languageSetting with screen transition towards East
        application().gotolanguageSettingScreenCoverTransitionEast();
    }
    if (&src == &button1_5)
    {
        //infoSettingInteraction
        //When button1_5 clicked change screen to informationSetting
        //Go to informationSetting with screen transition towards East
        application().gotoinformationSettingScreenCoverTransitionEast();
    }
    if (&src == &button1_6)
    {
        //systemSettingInteraction
        //When button1_6 clicked change screen to systemSetting
        //Go to systemSetting with screen transition towards East
        application().gotosystemSettingScreenCoverTransitionEast();
    }
    if (&src == &button1_3)
    {
        //wifiSettingInteraction
        //When button1_3 clicked change screen to wifiSetting
        //Go to wifiSetting with screen transition towards East
        application().gotowifiSettingScreenCoverTransitionEast();
    }
    if (&src == &button2)
    {
        //Interaction1
        //When button2 clicked change screen to swipedownfromHome
        //Go to swipedownfromHome with screen transition towards West
        application().gotoswipedownfromHomeScreenWipeTransitionWest();
    }
}
