#ifndef TSERVERTHREAD_H
#define TSERVERTHREAD_H
#include <QThread>

class TServerThread : public QThread
{
public:
    TServerThread();
    void run() override;
    virtual ~TServerThread() override;
};

#endif // TSERVERTHREAD_H
