#ifndef SETTING_SCREENONTIME_NOTSELECTED_HPP
#define SETTING_SCREENONTIME_NOTSELECTED_HPP

#include <gui_generated/containers/setting_screenontime_notselectedBase.hpp>

class setting_screenontime_notselected : public setting_screenontime_notselectedBase
{
public:
    setting_screenontime_notselected();
    virtual ~setting_screenontime_notselected() {}

    virtual void initialize();
    virtual void setElements(int16_t item);

    using setting_screenontime_notselectedBase::textArea1;
protected:
};

#endif // SETTING_SCREENONTIME_NOTSELECTED_HPP
