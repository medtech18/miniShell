#ifndef SHELLENGINE_H
#define SHELLENGINE_H


int execcmdredirect(char* cmd,char* fichier,int mode,int cl);

int execcmdnextpipe(char* com[10],int f0[2]);

int execcmdlastpipe(char* com[10],int f0[2]);

int execlignepipe(char* cmd,int f0[2],_Bool nextpipe);

int execpip(char* cmd);

int execligneredirect(char* cmd);

int execor(char* cmd,int exec);

int execpvirg(char* cmd);

void stopexecquit(int sig);

void stopexecint(int sig);

void mon_shell();

#endif
