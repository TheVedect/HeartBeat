#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  double t=0;
  int N=1000, K=75, i=1, j=1;
  double x, y, c=1;
  for (i=1; i<=N; i++) {
    for(j=1; j<=i; j++){
      x=16*sin(t)*sin(t)*sin(t);
      y=13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t);
      fprintf(stdout,"%lf   %lf", x, y);
      t+=2*M_PI/N;
      fprintf(stdout,"\n");
    }
    fprintf(stdout,"\n\n");
    t=0;
  }
  for (j=1; j<=K; j++) {
    for(i=1;i<=N;i++){
      c=(1-(double)j/N);
      x=(16*sin(t)*sin(t)*sin(t))*c;
      y=(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t))*c;
      fprintf(stdout,"%lf   %lf", x, y);
      t+=2*M_PI/N;
      fprintf(stdout,"\n");
    }
    fprintf(stdout,"\n\n");
  }
  for (j=1; j<=K; j++) {
    for(i=1;i<=N;i++){
      c=(0.925+((double)j/N));
      x=(16*sin(t)*sin(t)*sin(t))*c;
      y=(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t))*c;
      fprintf(stdout,"%lf   %lf", x, y);
      t+=2*M_PI/N;
      fprintf(stdout,"\n");
    }
    fprintf(stdout,"\n\n");
  }
  for (j=1; j<=K; j++) {
    for(i=1;i<=N;i++){
      c=(1-(double)j/N);
      x=(16*sin(t)*sin(t)*sin(t))*c;
      y=(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t))*c;
      fprintf(stdout,"%lf   %lf", x, y);
      t+=2*M_PI/N;
      fprintf(stdout,"\n");
    }
    fprintf(stdout,"\n\n");
  }
  for (j=1; j<=K; j++) {
    for(i=1;i<=N;i++){
      c=(0.925+((double)j/N));
      x=(16*sin(t)*sin(t)*sin(t))*c;
      y=(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t))*c;
      fprintf(stdout,"%lf   %lf", x, y);
      t+=2*M_PI/N;
      fprintf(stdout,"\n");
    }
    fprintf(stdout,"\n\n");
  }
  for (j=1; j<=K; j++) {
    for(i=1;i<=N;i++){
      c=(1-(double)j/N);
      x=(16*sin(t)*sin(t)*sin(t))*c;
      y=(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t))*c;
      fprintf(stdout,"%lf   %lf", x, y);
      t+=2*M_PI/N;
      fprintf(stdout,"\n");
    }
    fprintf(stdout,"\n\n");
  }
  for (j=1; j<=K; j++) {
    for(i=1;i<=N;i++){
      c=(0.925+((double)j/N));
      x=(16*sin(t)*sin(t)*sin(t))*c;
      y=(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t))*c;
      fprintf(stdout,"%lf   %lf", x, y);
      t+=2*M_PI/N;
      fprintf(stdout,"\n");
    }
    fprintf(stdout,"\n\n");
  }
  for (j=1; j<=K; j++) {
    for(i=1;i<=N;i++){
      c=(1-(double)j/N);
      x=(16*sin(t)*sin(t)*sin(t))*c;
      y=(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t))*c;
      fprintf(stdout,"%lf   %lf", x, y);
      t+=2*M_PI/N;
      fprintf(stdout,"\n");
    }
    fprintf(stdout,"\n\n");
  }
  for (j=1; j<=K; j++) {
    for(i=1;i<=N;i++){
      c=(0.925+((double)j/N));
      x=(16*sin(t)*sin(t)*sin(t))*c;
      y=(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t))*c;
      fprintf(stdout,"%lf   %lf", x, y);
      t+=2*M_PI/N;
      fprintf(stdout,"\n");
    }
    fprintf(stdout,"\n\n");
  }
}
