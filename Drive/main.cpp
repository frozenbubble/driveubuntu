#include <QCoreApplication>
#include "filesyestemhandler.h"
#include "serviceconnector.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    FilesyestemHandler fh();
    ServiceConnector sc();

    return a.exec();
}
