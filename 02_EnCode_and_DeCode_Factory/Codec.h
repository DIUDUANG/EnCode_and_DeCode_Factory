#ifndef __02_CODEC_H__
#define __02_CODEC_H__
#define DISALLOW_COPY_AND_ASSIGN(Typename) \
        Typename(const Typename&); \
        void operator=(const Typename&)
#include "SequenceASN1.h"

//工厂模式基类
class Codec : public SequenceASN1 {
 public:
  //构造函数
  Codec();
  //析构函数
  ~Codec();

  //编码(虚函数)
  virtual int msgEncode(char** outData, int& len);
  //解码(虚函数)
  virtual int msgDecode(char* inData, int inLen);
  //内存释放(虚函数)
  virtual void msgMemFree(void** point);
};

#endif
