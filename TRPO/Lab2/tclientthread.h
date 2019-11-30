#ifndef TCLIENTTHREAD_H
#define TCLIENTTHREAD_H
#include <QThread>

class TClientThread : public QThread
{
public:
    TClientThread();
    void run() override;
    virtual ~TClientThread() override;
};

#endif // TCLIENTTHREAD_H
