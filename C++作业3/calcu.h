#pragma once
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int generateExpression(int x,char *p);
void random(int *a, int*b, int*c, int *d);
void boundary();
void print(char *p,int v,int c);
void writefile(char str[20],char *p);
int fileread(char *p1);
int test(int total,char *p);
extern int u , z ;
extern char *p2;