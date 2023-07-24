#ifndef XMLEXPORT_VISITOR_HPP
#define XMLEXPORT_VISITOR_HPP

#include "IVisitor.hpp"

class XMLExportVisitor{
public:
    void visitDot(std::shared_ptr<Dot> dot) override;
    void visitCircle(std::shared_ptr<Circle> circle) override;
};

#endif
