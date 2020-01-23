#ifndef __LIST_H__
#define __LIST_H__
//#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
}Node, *pList;

//��ʼ��
void InitList(pList plsit);
Node *GetNode(int val);
//ͷ��
void InsertHead(pList plist, int val);
//β��
void InsertTail(pList plist, int val);
//��ӡ
void Show(pList plist);
void Show1(pList plist);
//����λ�ò���
Node *LastNode(pList plist, int k);//������k���ڵ�
//ɾ��
void Delete(pList plist, int k);
//����
void InverseList(pList plist);
Node* ReverseLink(pList plist);
//����
Node *FindMidleNode(pList plist);
#endif