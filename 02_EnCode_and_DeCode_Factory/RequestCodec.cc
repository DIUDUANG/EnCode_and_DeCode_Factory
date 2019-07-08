#include "RequestCodec.h"

//编码
int RequestCodec::msgEncode(char** outData, int& len) {
  //参数检查
  
  //编码报文类型

  //编码客户端编号

  //编码认证码

  //编码服务端编号

  //编码客户端随机数

  //编码序列

  //传出

  //释放内存

  return 0;
}

//解码
int RequestCodec::msgDecode(char* inData, int inLen) {
  
  //参数检查

  //解码序列

  //编码报文类型

  //编码客户端编号

  //编码认证码

  //编码服务端编号

  //编码客户端随机数

  //传出

  //释放内存
  return 0;
}

//释放内存
void RequestCodec::msgMemFree(void** point) {

}
