#include "InAppQmlObject.h"

InAppQmlObject::InAppQmlObject(QObject *parent)
    : QObject{parent}
{

}

int InAppQmlObject::cppValue() const
{
    return m_cppValue;
}

void InAppQmlObject::setCppValue(int newCppValue)
{
    if (m_cppValue == newCppValue)
        return;
    m_cppValue = newCppValue;
    emit cppValueChanged();
}
