#ifndef TMAINSERVERTHREAD_H
#define TMAINSERVERTHREAD_H
#include <QThread>

class TMainServerThread : public QThread
{
public:
    TMainServerThread();

    void NewConnection();
    void run();
    ~TMainServerThread();
};

#endif // TMAINSERVERTHREAD_H
