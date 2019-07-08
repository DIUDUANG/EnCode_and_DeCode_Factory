#ifndef __02_REQUESTCODEC_H__
#define __02_REQUESTCODEC_H__
#include "Codec.h"

//�����Ľṹ������
struct RequestMsg
{
  //1 ��ԿЭ��  	//2 ��ԿУ��; 	// 3 ��Կע��
  int	 cmdType;		// �������� 
  char	 clientId[12];	// �ͻ��˱��
  char	 authCode[65];	// ��֤��
  char	 serverId[12];	// �������˱�� 
  char	 r1[64];			// �ͻ��������
};

class RequestCodec : public Codec {
 public:
  //����(��д)
  int msgEncode(char** outData, int& len) override;
  //����(��д)
  int msgDecode(char* inData, int inLen) override;
  //�ڴ��ͷ�(��д)
  void msgMemFree(void** point) override;

};

#endif