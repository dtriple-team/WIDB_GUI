#include <gui/common/FrontendApplication.hpp>

FrontendApplication::FrontendApplication(Model& m, FrontendHeap& heap)
    : FrontendApplicationBase(m, heap)
{
}

void FrontendApplication::handleTickEvent()
{
    model.tick();
    FrontendApplicationBase::handleTickEvent();
}
