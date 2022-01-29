#include<stdio.h>
#include <iostream>
#include <windows.h>
using namespace std;
typedef struct node{
 char data;
 node *kiri;
 node *kanan;
};
node *akar=NULL;
addNode(node **akar, char isi) {
 if((*akar)==NULL){
 node *baru;
 baru= new node;
 baru->data = isi;
 baru->kiri = NULL;
 baru->kanan = NULL;
 (*akar)=baru;
 }
}
preOrder(node *akar) {
 if(akar !=NULL) {
 printf("%c ", akar->data);
 preOrder(akar->kiri);
 preOrder(akar->kanan);
 }
}
inOrder(node *akar) {
 if(akar !=NULL) {
 inOrder(akar->kiri);
 printf("%c ", akar->data);
 inOrder(akar->kanan);
 }
}
postOrder(node *akar) {
 if(akar !=NULL) {
 postOrder(akar->kiri);
 postOrder(akar->kanan);
 printf("%c ", akar->data);
 }
}
main(){
 system("color a");
char abjad;
cout<<"|+++++++++++++++++++++++++++++++++++++++++++++++++|\n";
cout<<"|PROGRAM BINARY TREE MENAMPILKAN SILSILAH KELUARGA|\n";
cout<<"|=================================================|\n";
cout<<"\n\n";
cout<<"|----------------------------------------------------|\n";
cout<<"|                 Keterangan Program                                |\n";
cout<<"|        NAMA                           KODE         |\n";
cout<<"|----------------------------------------------------|\n";
cout<<"| RISKI                |               A        |\n";
cout<<"| HERU                 |               Y        |\n";
cout<<"| SABUL                |               N        |\n";
cout<<"| SONI                 |               I        |\n";
cout<<"| DEWA                 |               O        |\n";
cout<<"| NENI                 |               E        |\n";
cout<<"|====================================================|\n";
printf("\n\n\t     POSISI AWAL TREE:\n\n");
printf("\t        RISKI - JUMINTEN    \n\t           /      \\\n\t        HERU     SABIL \n\t         /\n\t    DIAZ - SONI\n\t       /  \\ \n\t    DEWA  NENI \n\n");
addNode(&akar,abjad='RISKI');
addNode(&akar->kiri,abjad='HERU');
addNode(&akar->kanan,abjad='SABIL');
addNode(&akar->kiri->kiri,abjad='SONI');
addNode(&akar->kiri->kiri->kiri,abjad='DEWA');
addNode(&akar->kiri->kiri->kanan,abjad='NENI');
 printf("Tampilan PreOrder  : ");
 preOrder(akar);
 printf("\nTampilan PostOrder : ");
 postOrder(akar);
 printf("\nTampilan InOrder   : ");
 inOrder(akar);
 return 0;
}