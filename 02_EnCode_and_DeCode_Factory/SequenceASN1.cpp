#include "SequenceASN1.h"

 //构造函数
SequenceASN1::SequenceASN1() : m_header(NULL),m_next(NULL),m_temp(NULL) {}

 //析构函数
SequenceASN1::~SequenceASN1() {

}

 //编码头结点 //整型
int SequenceASN1::writeHeadNode(int iValue) {
}

 
 //编码头结点 //字符串
int SequenceASN1::writeHeadNode(char* sValue, int len) {

}

 //编码普通节点//整型
int SequenceASN1::writeNextNode(int iValue) {

}

 //编码普通节点//字符串
int SequenceASN1::writeNextNode(char* sValue, int len) {

}
 
 //解码头结点//整型
int SequenceASN1::readHeadNode(int& iValue) {

}

 //解码头结点//字符串
int SequenceASN1::readHeadNode(char* sValue) {

}

 //解码普通节点//整型
int SequenceASN1::readNextNode(int& iValue) {

}

 //解码普通节点//字符串
int SequenceASN1::readNexxtNode(char* sValue) {

}

 //编码序列
int SequenceASN1::packSequence(char** outData, int& outLen) {

}


 //解码序列
int SequenceASN1::unpackSequence(char* inData, int inLen) {

}

 //释放序列
void SequenceASN1::freeSequnce(ITCAST_ANYBUF* node = NULL) {

}



