
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
FILE *input, *output;
int l=1;
int t=0;
int j=0;
int i,flag,b=0;
char ch,str[20],sy[20];
input = fopen("hello.txt","r");
output = fopen("output.txt","w");
char keyword[30][30] = {"int","main","void","if","else","do","while","break","continue"};
fprintf(output,"Token no. \t Token \t Lexeme\n\n");
while(!feof(input))
{
i=0;
flag=0;
ch=fgetc(input);
if( ch=='+' || ch== '-' || ch=='*' || ch=='/' )
{
fprintf(output,"%7d\t Operator\t %7c\n",t,ch);
t++;
}
else if( ch==';' || ch=='{' || ch=='}' || ch=='(' || ch==')' || ch=='?' ||
ch=='@' || ch=='!' ||
ch=='%')
{
fprintf(output,"%7d\t Symbol\t %7c\n",t,ch);
t++;
}
else if(ch=='<' || ch=='>' || ch=='='){
fprintf(output,"%7d\t Operator\t %7c\n",t,ch);
t++;
}

else if(isdigit(ch))
{   b=0;
    sy[b]=ch;
	b++;
	ch=fgetc(input);
	while(isdigit(ch) || ch=='.' && ch!=' '){
	sy[b]=ch;
	b++;
	ch=fgetc(input);
	}
	sy[b]='\0';
	fprintf(output,"%7d\t Num\t",t);

	 fprintf(output,"%7s\n",sy);
t++;
}

else if(isalpha(ch) || ch=='.')
{
str[i]=ch;
i++;
ch=fgetc(input);
while(isalnum(ch) && ch!=' ' || ch=='.')
{
str[i]=ch;
i++;
ch=fgetc(input);
}
str[i]='\0';
for(j=0;j<=30;j++)
{
if(strcmp(str,keyword[j])==0)
{
flag=1;
break;
}
}
if(flag==1)
{
fprintf(output,"%7d\t Keyword\t %7s\n",t,str);
t++;
}
else
{
fprintf(output,"%7d\t Identifier\t %7s\n",t,str);
t++;
}


}
else if(ch=='\n')
{
l++;
}
}
fclose(input);
fclose(output);
return 0;
}

