#ifndef SPO2DETAILVIEW_HPP
#define SPO2DETAILVIEW_HPP

#include <gui_generated/spo2detail_screen/Spo2DetailViewBase.hpp>
#include <gui/spo2detail_screen/Spo2DetailPresenter.hpp>

class Spo2DetailView : public Spo2DetailViewBase
{
public:
    Spo2DetailView();
    virtual ~Spo2DetailView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SPO2DETAILVIEW_HPP
