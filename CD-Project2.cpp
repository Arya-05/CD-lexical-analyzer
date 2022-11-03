#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<bits/stdc++.h>
int main()
{
FILE *input;
int l=1;
int t=0;
int j=0;
int i,flag;
char ch,str[20],sy[20];
int o=0;
std::vector<char> op;
std::vector<std::string> id;
std::vector<char> ss;
std::vector<std::string> dig;
std::vector<std::string> key;
std::vector<char> adop;
std::vector<char> relop;
input = fopen("hello.txt","r");

char keyword[30][30] = {"int","main","void","if","else","do","while","break","continue"};

while(!feof(input))
{
i=0;
flag=0;
ch=fgetc(input);
if( ch=='+'|| ch== '-' || ch=='*' || ch=='/' )
{
op.push_back(ch);
if(ch=='+' || ch=='-'){
  adop.push_back(ch);
}
}

else if( ch==';' || ch=='{' || ch=='}' || ch=='(' || ch==')' || ch=='?' || ch=='@' || ch=='!' || ch=='%')
{
ss.push_back(ch);

}
else if(ch=='<' || ch=='>' || ch=='<=' || (ch=='>=')){
relop.push_back(ch);
}

else if(isdigit(ch))
{
	int b=0;
    sy[b]=ch;
	b++;
	ch=fgetc(input);
	while(isdigit(ch) || ch=='.' && ch!=' '){
	sy[b]=ch;
	b++;
	ch=fgetc(input);
	}
	sy[b]='\0';
dig.push_back(sy);

}
else if(isalpha(ch))
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
for(j=0;j<=200;j++)
{
if(strcmp(str,keyword[j])==0)
{
flag=1;
break;
}
}
if(flag==1)
{
key.push_back(str);

}
else
{
id.push_back(str);

}
}
}
std::set<std::string> const uniques(id.begin(), id.end());
id.assign(uniques.begin(), uniques.end());

std::set<std::string> const unique(key.begin(), key.end());
key.assign(unique.begin(), unique.end());

std::set<char> const uniqu(op.begin(), op.end());
op.assign(uniqu.begin(), uniqu.end());

std::set<char> const uniq(ss.begin(), ss.end());
ss.assign(uniq.begin(), uniq.end());

std::set<char> const uni(adop.begin(), adop.end());
adop.assign(uni.begin(), uni.end());

std::set<char> const un(relop.begin(), relop.end());
relop.assign(un.begin(), un.end());

std::cout<<"Identifier : ";
for(int i=0;i<id.size();i++){
std::cout<<id[i]<<" ";
}
std::cout<<std::endl;
std::cout<<"Operators : ";
for(int i=0;i<op.size();i++){
std::cout<<op[i]<<" ";
}
std::cout<<std::endl;
std::cout<<"Symbols : ";
for(int i=0;i<ss.size();i++){
std::cout<<ss[i]<<" "; std::cout<<ss[i]<<" ";
std::cout<<std::endl;
}
std::cout<<std::endl;
std::cout<<"Keywords : ";
for(int i=0;i<key.size();i++){
std::cout<<key[i]<<" ";
}
std::cout<<std::endl;
std::cout<<"adop : ";
for(int i=0;i<adop.size();i++){
std::cout<<adop[i]<<" ";
}
std::cout<<std::endl;
std::cout<<"relop : ";
for(int i=0;i<relop.size();i++){
std::cout<<relop[i]<<" ";
}
std::cout<<std::endl;
std::cout<<"num : ";
for(int i=0;i<dig.size();i++){
std::cout<<dig[i]<<" ";
}

fclose(input);

return 0;
}

