#include "experiment.h"
#include <eggx.h>
#include <stdbool.h>
void gmain(int win){
    int aiueo[]={0x3042};//Unicodeで入力 https://ja.wikipedia.org/wiki/Unicode%E4%B8%80%E8%A6%A7_0000-0FFF
    int lp=sizeof(aiueo)/sizeof(aiueo[0]);
    win=gopen(WIDTH,HEIGHT);                    /* ウィンドゥ番号を格納する変数*/
    newpen(win,3);
    drawfont(win,75,1130,645,aiueo,lp);
    ggetch();
    gclose(win); /* グラフィックス用ウィンドゥを閉じる*/
    return 0;    /* 終了*/
}