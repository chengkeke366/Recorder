//
// Created by ChengKeKe on 2023/3/1.
//

#ifndef RECORDER_ICAPTURE_H
#define RECORDER_ICAPTURE_H
class IEventListen;

class ICapture {
public:
    ICapture();
    virtual  ~ICapture();
    virtual void Create(const char* settings_json);
    virtual void Start();
    virtual void Stop();
    virtual void SetCaptureEvent(IEventListen *event);
};
#endif //RECORDER_ICAPTURE_H
