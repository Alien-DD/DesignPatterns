#include <string>
#include <iostream>
#include "Caretaker.hpp"

Caretaker::Caretaker(std::shared_ptr<Originator> ori)
    : original_(ori)
{

}

void Caretaker::backup()
{
    auto memo = original_->save();
    memoVec_.push_back(memo);
}

void Caretaker::undo()
{
    auto memo = memoVec_.back();
    memoVec_.pop_back();
    original_->restore(memo);
}