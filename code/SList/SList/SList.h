#pragma once

#include <stdio.h>
#include <malloc.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data; // val
	struct SListNode* next;
}SListNode;

void SListPrint(SListNode* pList);
void SListPushBack(SListNode** ppList, SLTDataType x);
void SListPushFront(SListNode** ppList, SLTDataType x);

void SListPopBack(SListNode** ppList);
void SListPopFront(SListNode** ppList);

// ����������
SListNode* SListFind(SListNode* plist, SLTDataType x);
// ��������posλ��֮�����x
void SListInsertAfter(SListNode* pos, SLTDataType x);
// ������ɾ��posλ��֮���ֵ

void SListEraseAfter(SListNode* pos);


void SListDestory(SListNode** pplist);