#ifndef SERVICECONNECTOR_H
#define SERVICECONNECTOR_H

#include <QObject>

class ServiceConnector : public QObject
{
    Q_OBJECT
public:
    explicit ServiceConnector(QObject *parent = 0);
    
signals:
    
public slots:
    
};

#endif // SERVICECONNECTOR_H
