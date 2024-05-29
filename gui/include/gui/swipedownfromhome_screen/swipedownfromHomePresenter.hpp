#ifndef SWIPEDOWNFROMHOMEPRESENTER_HPP
#define SWIPEDOWNFROMHOMEPRESENTER_HPP

#include <mvp/Presenter.hpp>
#include <gui/model/ModelListener.hpp>
#include <touchgfx/Callback.hpp>

using namespace touchgfx;

class swipedownfromHomeView;

class swipedownfromHomePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    swipedownfromHomePresenter(swipedownfromHomeView& v);

    virtual void activate();
    virtual void deactivate();
    virtual void notifySwipeUp();

    void updateToggleButton1State(bool state); //test
    bool getToggleButton1State() const; //test
    void onToggleButton1StateChanged(bool state);

    void updateToggleButton2State(bool state); //test
    bool getToggleButton2State() const; //test
    void onToggleButton2StateChanged(bool state);

    virtual ~swipedownfromHomePresenter() {};

private:
    swipedownfromHomePresenter();

    swipedownfromHomeView& view;
};

#endif // SWIPEUPFROMHOMEPRESENTER_HPP
