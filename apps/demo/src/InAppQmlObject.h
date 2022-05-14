#ifndef INAPPQMLOBJECT_H
#define INAPPQMLOBJECT_H

#include <QtQml/qqmlregistration.h>
#include <QObject>

class InAppQmlObject : public QObject
{
    Q_OBJECT
    QML_ELEMENT

    Q_PROPERTY(int cppValue READ cppValue WRITE setCppValue NOTIFY cppValueChanged)
public:
    explicit InAppQmlObject(QObject *parent = nullptr);

    int cppValue() const;
    void setCppValue(int newCppValue);

signals:

    void cppValueChanged();
private:
    int m_cppValue = 83;
};

#endif // INAPPQMLOBJECT_H
