#ifndef SETTING_SCREENONTIME_SELECTED_HPP
#define SETTING_SCREENONTIME_SELECTED_HPP

#include <gui_generated/containers/setting_screenontime_selectedBase.hpp>

class setting_screenontime_selected : public setting_screenontime_selectedBase
{
public:
    setting_screenontime_selected();
    virtual ~setting_screenontime_selected() {}

    virtual void initialize();
    virtual void setElements(int16_t item);

    using setting_screenontime_selectedBase::textArea1;
protected:
};

#endif // SETTING_SCREENONTIME_SELECTED_HPP
