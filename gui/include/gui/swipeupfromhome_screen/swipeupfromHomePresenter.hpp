#ifndef SWIPEUPFROMHOMEPRESENTER_HPP
#define SWIPEUPFROMHOMEPRESENTER_HPP

#include <mvp/Presenter.hpp>
#include <gui/model/ModelListener.hpp>

using namespace touchgfx;

class swipeupfromHomeView;

class swipeupfromHomePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    swipeupfromHomePresenter(swipeupfromHomeView& v);

    virtual void activate();
    virtual void deactivate();

    virtual ~swipeupfromHomePresenter() {};

private:
    swipeupfromHomePresenter();

    swipeupfromHomeView& view;
};

#endif // SWIPEUPFROMHOMEPRESENTER_HPP
