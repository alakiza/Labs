#ifndef ISHUFFLE_H
#define ISHUFFLE_H

class IShuffle
{
public:
    virtual void shuffle() = 0;
    virtual void shuffle(size_t left, size_t right) = 0;
};

#endif // ISHUFFLE_H
