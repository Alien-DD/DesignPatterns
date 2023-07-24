#include <iostream>
#include <string>
#include "XMLExportVisitor.hpp"

void XMLExportVisitor::visitDot(std::shared_ptr<Dot> dot)
{
    std::cout << "XMLExportVisitor::visitDot:" << std::endl;
    dot->draw();
}

void XMLExportVisitor::visitCircle(std::shared_ptr<Circle> circle)
{
    std::cout << "XMLExportVisitor::visitCircle:" << std::endl;
    circle->draw();
}