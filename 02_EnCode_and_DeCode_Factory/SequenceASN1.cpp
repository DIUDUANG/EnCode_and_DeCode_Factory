#include "SequenceASN1.h"

 //���캯��
SequenceASN1::SequenceASN1() : m_header(NULL),m_next(NULL),m_temp(NULL) {}

 //��������
SequenceASN1::~SequenceASN1() {

}

 //����ͷ��� //����
int SequenceASN1::writeHeadNode(int iValue) {
}

 
 //����ͷ��� //�ַ���
int SequenceASN1::writeHeadNode(char* sValue, int len) {

}

 //������ͨ�ڵ�//����
int SequenceASN1::writeNextNode(int iValue) {

}

 //������ͨ�ڵ�//�ַ���
int SequenceASN1::writeNextNode(char* sValue, int len) {

}
 
 //����ͷ���//����
int SequenceASN1::readHeadNode(int& iValue) {

}

 //����ͷ���//�ַ���
int SequenceASN1::readHeadNode(char* sValue) {

}

 //������ͨ�ڵ�//����
int SequenceASN1::readNextNode(int& iValue) {

}

 //������ͨ�ڵ�//�ַ���
int SequenceASN1::readNexxtNode(char* sValue) {

}

 //��������
int SequenceASN1::packSequence(char** outData, int& outLen) {

}


 //��������
int SequenceASN1::unpackSequence(char* inData, int inLen) {

}

 //�ͷ�����
void SequenceASN1::freeSequnce(ITCAST_ANYBUF* node = NULL) {

}



