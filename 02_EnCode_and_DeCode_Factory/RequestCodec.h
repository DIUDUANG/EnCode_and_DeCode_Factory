#ifndef __02_REQUESTCODEC_H__
#define __02_REQUESTCODEC_H__
#include "Codec.h"

//请求报文结构体类型
struct RequestMsg
{
  //1 密钥协商  	//2 密钥校验; 	// 3 密钥注销
  int	 cmdType;		// 报文类型 
  char	 clientId[12];	// 客户端编号
  char	 authCode[65];	// 认证码
  char	 serverId[12];	// 服务器端编号 
  char	 r1[64];			// 客户端随机数
};

class RequestCodec : public Codec {
 public:
  //编码(重写)
  int msgEncode(char** outData, int& len) override;
  //解码(重写)
  int msgDecode(char* inData, int inLen) override;
  //内存释放(重写)
  void msgMemFree(void** point) override;

};

#endif