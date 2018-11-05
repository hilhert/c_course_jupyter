#ifndef m_strop
#define m_strop
static char str[]="EVEN as the sun with purple-colour\'d face\nHad ta'en his last leave of the weeping morn,\nRose-cheek'd Adonis hied him to the chase;\nHunting he loved, but love he laugh'd to scorn;\nSick-thoughted Venus makes amain unto him,\nAnd like a bold-faced suitor 'gins to woo him'.\n\n'Thrice-fairer than myself,' thus she began,\n'The field's chief flower, sweet above compare,\nStain to all nymphs, more lovely than a man,\nMore white and red than doves or roses are;\nNature that made thee, with herself at strife,\nSaith that the world hath ending with thy life.\n\n'Vouchsafe, thou wonder, to alight thy steed,\nAnd rein his proud head to the saddle-bow;\nIf thou wilt deign this favour, for thy meed\nA thousand honey secrets shalt thou know:\nHere come and sit, where never serpent hisses,\nAnd being set, I'll smother thee with kisses;\n\n'And yet not cloy thy lips with loathed satiety,\nBut rather famish them amid their plenty,\nMaking them red and pale with fresh variety,\nTen kisses short as one, one long as twenty:\nA summer's day will seem an hour but short,\nBeing wasted in such time-beguiling sport.";
static int p=0;    
int readline(char line[]){
int i;  //auto variable, 内部变量
if(str[p]=='\0') return 0;
while(str[p]=='\n') p++;    
for(i=p;str[i]!='\n'&&str[i]!='\0';i++) line[i-p]=str[i];
line[i-p]='\0';
p=i;
return 1;
}     //p在哪里？ str在哪里？
//判断一个字符串是否包含另一个短字符串。泛化功能：判断查找字符串在行串中的起始位值。
int strindex(char line[],char t[]){
int i,j;
    for(i=0;line[i]!='\0';i++){
       for(j=0;line[i+j]==t[j]&&t[j]!='\0';j++);
          if(t[j]=='\0') return i;
        }
    return -1;
}
#endif