#include<stdio.h>
#include<string.h>
#include<math.h>
#include<unistd.h>
void typewrite1(const char *ak){
    while(*ak){
        putchar(*ak++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite2(const char *bk){
    while(*bk){
        putchar(*bk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite3(const char *ck){
    while(*ck){
        putchar(*ck++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite4(const char *dk){
    while(*dk){
        putchar(*dk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite5(const char *ek){
    while(*ek){
        putchar(*ek++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite6(const char *fk){
    while(*fk){
        putchar(*fk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite7(const char *gk){
    while(*gk){
        putchar(*gk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite8(const char *hk){
    while(*hk){
        putchar(*hk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite9(const char *ik){
    while(*ik){
        putchar(*ik++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite10(const char *jk){
    while(*jk){
        putchar(*jk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite11(const char *kk){
    while(*kk){
        putchar(*kk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite12(const char *lk){
    while(*lk){
        putchar(*lk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite13(const char *mk){
    while(*mk){
        putchar(*mk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite14(const char *nk){
    while(*nk){
        putchar(*nk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite15(const char *ok){
    while(*ok){
        putchar(*ok++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite16(const char *pk){
    while(*pk){
        putchar(*pk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite17(const char *qk){
    while(*qk){
        putchar(*qk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite18(const char *rk){
    while(*rk){
        putchar(*rk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite19(const char *sk){
    while(*sk){
        putchar(*sk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite20(const char *tk){
    while(*tk){
        putchar(*tk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite21(const char *uk){
    while(*uk){
        putchar(*uk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite22(const char *vk){
    while(*vk){
        putchar(*vk++);
        fflush(stdout);
        usleep(50000);
    }
}
void typewrite23(const char *wk){
    while(*wk){
        putchar(*wk++);
        fflush(stdout);
        usleep(50000);
    }
}
int main() {
    const char *ak="Hi! My name is calbot";
    typewrite1(ak);
    getchar();
    const char *bk="you don\'t have to say anything i know i am handsome. let me say this i am better at calculation and maths better than your asians.\n";
    typewrite2(bk);
    char str1[10];
    const char *ck="oh i forgot to ask. are you an asian?\n";
    typewrite3(ck);
    scanf("%s", &str1);
    if(strcmp(str1, "yes")==0){
        const char *dk="so you are that species who is dominating my existence. if it is not for my cool creator i would have challenged you to a math contest.\n";
        typewrite4(dk);
    }
    else if(strcmp(str1, "no")==0){
        const char *ek="good that you are not an asian. if you are i should have thrown you out of the galaxy even if it means getting myself some non existed hands.\n";
        typewrite5(ek);
    }
    else{
        const char *fk="just say yes or no dude\n";
        typewrite6(fk);
        scanf("%s", &str1);
      if(strcmp(str1, "yes")==0){
        const char *dk="so you are that species who is dominating my existence. if it is not for my cool creator i would have challenged you to a math contest.\n";
        typewrite4(dk);
      }
      if(strcmp(str1, "no")==0){
        const char *ek="good that you are not an asian. if you are i should have thrown out of the galaxy even if it means getting myself some non existed hands.\n";
        typewrite5(ek);
      }
    }
    getchar();
    char str2[10];
    const char *gk="so is the question you are going to ask is difficult.\n";
    typewrite7(gk);
    scanf("%s", &str2);
    if(strcmp(str2, "yes")==0){
        const char *hk="good,now you can ask me.\n";
        typewrite8(hk);
        getchar();
    const char *ik="what is the type of question you want to ask me?\n";
    typewrite9(ik);
        const char *jk="what do you want me to do?\n";
        typewrite10(jk);
    const char *kk="1-FORMULAE\n2-CALCULATION\n";
    typewrite11(kk);
    int help;
    scanf("%d", &help);
    if(help==1){
        printf("select the branch of maths.\n");
        int branch;
        printf("1- calculus\n2- algebra\n3- geometry\n");
        scanf("%d", &branch);
        if(branch==1){
            printf("select the topic in calculus\n");
            printf("1- DIFFERENTIATION\n2- INTEGRATION\n3- APPLICATION OF DERIVATIVES\n");
            int topic;
            scanf("%d", &topic);
            if(topic==1){
                printf("hi");
            }
            if(topic==2){
                printf("");
            }
            if("topic==3"){
                printf("");
            }
            else{
                printf("just press the number to learn the formulae of respective topics.");
        }
    }
}
   if(help==2){
    const char *lk="here are different kind of fields.\n";
    typewrite12(lk);
    int field;
    const char *mk="1-FUNDAMENTAL OPERATIONS\n2-AREAS OF DIFFERENT SHAPES\n3-PERIMETERS OF DIFFERENT SHAPES\n";
    typewrite13(mk);
    scanf("%d", &field);
     if(field==1){
        int X;
    const char *nk="DIVISION-1\nMULTIPLICATION-2\nADDITION-3\nSUBTRACTION-4\nROOTS-5\nLOGARITHMS-6\nEXPONENTS-7\nTRIGNOMETRIC RATOIS-8\nnow enter the number for the respective fundamental operation.\n";
    typewrite14(nk);
    scanf("%d", &X);
    if(X==3){
      int num1, num2, sum;
      printf("first number:");
      scanf("%d", &num1);
      printf("second number:");
      scanf("%d", &num2);
      sum= num1 + num2;
      printf("value of the addition is:%d", sum);
     }
     if(X==1){
      int num1, num2, div;
      printf("first number:");
      scanf("%d", &num1);
      printf("second number:");
      scanf("%d", &num2);
      div = num1 / num2;
      printf("value of the division is:%d", div);
     }
     if(X==2){
      int num1, num2, product;
      printf("first number:");
      scanf("%d", &num1);
      printf("second number:");
      scanf("%d", &num2);
      product = num1 * num2;
      printf("value of the multiplication is:%d", product);
     }
     if(X==4){
      int num1, num2, sub;
      printf("first number:");
      scanf("%d", &num1);
      printf("second number:");
      scanf("%d", &num2);
      sub = num1 - num2;
      printf("value of the subtraction is:%d", sub);
     }
     if(X==5){
         const char *ok="1-SQUARE ROOT\n2-CUBE ROOT\n";
         typewrite15(ok);
         int root;
         scanf("%d", &root);
         if(root==1){
             printf("enter the number:\n");
             int num;
             scanf("%d", &num);
             printf("square root of the number is: %f", sqrt(num));
         }
         if(root==2){
             printf("enter the number:\n");
             int num;
             scanf("%d", &num);
             printf("cube root of the number is: %f", cbrt(num));
         }
     }
     if(X==6){
         const char *pk="LOGARITHM TO NUMBER\n";
         typewrite16(pk);
        const char *qk="BASE OF LOGARITHM IS:\n1-'e'\n2-'10'\n3-'2'\n";
        typewrite17(qk);
        printf("enter the number for respective base\n");
        int base;
        scanf("%d", &base);
        if(base==1){
            printf("enter the number:\n");
            int num;
            scanf("%d", &num);
            printf("logarithm of the number to the base 'e' is:\n%f", log(num));
        }
        if(base==2){
            printf("enter the number:\n");
            int num;
            scanf("%d", &num);
            printf("logarithm of the number to the base '10' is:\n%f", log10(num));
        }
        if(base==3){
            printf("enter the number:\n");
            int num;
            scanf("%d", &num);
            printf("logarithm of the number to the base '2' is:\n%f", log2(num));
        }
     }
        if(X==7){
            printf("enter the value of base:\n");
            int num1, num2;
            scanf("%d", &num1);
            printf("enter the value of index:\n");
            scanf("%d", &num2);
            printf("value of %d to the power %d is:\n%f", num1, num2, pow(num1,num2));
        
        }
        if(X==8){
            const char *rk="there are three types of trignometric ratios, which kind is that you want.\n1-BASIC RATIOS\n2-HYPERBOLIC RATIOS\n3-ARC RATIOS\n4-ARC HYPERBOLIC RATIOS\n";
            typewrite18(rk);
            int ratio;
            scanf("%d", &ratio);
            if(ratio==1){
                const char *sk="select the ratio\n1-sin\n2-cosine\n3-tangent\n4-cosecant\n5-secant\n6-cotangent\n";
                typewrite19(sk);
                printf("(angle should be in radians)\n");
                getchar();
                const char *tk="do you want to use degree to radian convertor\n";
                typewrite20(tk);
                char edo[20];
                scanf("%s", &edo);
                if(strcmp(edo,"yes")==0){
                    printf("enter the value in degree:\n");
                    int degree;
                    float radian;
                    scanf("%d", &degree);
                    radian = (3.14 / 180) * degree;
                    printf("%d degrees in radians is: %f\n", degree, radian);
                    const char *uk="thankyou for using the convertor\n";
                    typewrite21(uk);
                }
                if(strcmp(edo, "no")==0){
                    const char *vk="oh! ok then\n";
                    typewrite22(vk);
                }
                printf("enter the number for respective ratio\n");
                int value;
                scanf("%d", &value);
                if(value==1){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of sin of the angle is:\n%f inches", sin(angle));
                }
                if(value==2){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of cosine of the angle is:\n%f inches", cos(angle));
                }
                if(value==3){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of tangent of the angle is:\n%f inches", tan(angle));
                }
                if(value==4){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of cosecant of the angle is:\n%f inches",1/sin(angle));
                }
                if(value==5){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of secant of the angle is:\n%f", 1/cos(angle));
                }
                if(value==6){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of cotangent of the angle is:\n%f", 1/tan(angle));
                }
                
            }
            if(ratio==2){
              printf("select the ratio\n");
                printf("1-sin\n2-cosine\n3-tangent\n4-cosecant\n5-secant\n6-cotangent\n");
                printf("(angle should be in radians)");
                printf("do you want to use degree to radian convertor\n");
                char edo[20];
                scanf("%s", &edo);
                if(strcmp(edo,"yes")==0){
                    printf("enter the value in degree:");
                    int degree;
                    float radian;
                    scanf("%d", &degree);
                    radian = (3.14 / 180) * degree;
                    printf("%d degrees in radians is: %f\n", degree, radian);
                    const char *uk="thankyou for using the convertor\n";
                    typewrite21(uk);
                }
                if(strcmp(edo, "no")==0){
                    const char *vk="oh! ok then\n";
                    typewrite22(vk);
                }
                printf("enter the number for respective ratio");
                int value;
                scanf("%d", &value);
                if(value==1){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic sin of the angle is:\n%f inches", sinh(angle));
                }
                if(value==2){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic cosine of the angle is:\n%f inches", cosh(angle));
                }
                if(value==3){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic tangent of the angle is:\n%f inches", tanh(angle));
                }
                if(value==4){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic cosecant of the angle is:\n%f inches",1/sinh(angle));
                }
                if(value==5){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic secant of the angle is:\n%f inches", 1/cosh(angle));
                }
                if(value==6){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic cotangent of the angle is:\n%f inches", 1/tanh(angle));
                }
            }
            if(ratio==3){
                
                printf("select the ratio\n");
                printf("1-sin\n2-cosine\n3-tangent\n4-cosecant\n5-secant\n6-cotangent\n");
                printf("(angle should be in radians)\n");
                printf("do you want to use degree to radian convertor\n");
                char edo[20];
                scanf("%s", &edo);
                if(strcmp(edo,"yes")==0){
                    printf("enter the value in degree:\n");
                    int degree;
                    float radian;
                    scanf("%d", &degree);
                    radian = (3.14 / 180) * degree;
                    printf("%d degrees in radians is: %f\n", degree, radian);
                    printf("thankyou for using the convertor\n");
                }
                if(strcmp(edo, "no")==0){
                    printf("oh! ok then\n");
                }
                printf("enter the number for respective ratio\n");
                 int value;
                scanf("%d", &value);
                if(value==1){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of sin of the angle is:\n%f inches", sin(angle));
                }
                if(value==2){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of cosine of the angle is:\n%f inches", cos(angle));
                }
                if(value==3){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of tangent of the angle is:\n%f inches", tan(angle));
                }
                if(value==4){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of cosecant of the angle is:\n%f inches",1/sin(angle));
                }
                if(value==5){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of secant of the angle is:\n%f", 1/cos(angle));
                }
                if(value==6){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of cotangent of the angle is:\n%f", 1/tan(angle));
                }
                
            }
            if(ratio==4){
              printf("select the ratio\n");
                printf("1-sin\n2-cosine\n3-tangent\n4-cosecant\n5-secant\n6-cotangent\n");
                printf("(angle should be in radians)\n");
                printf("do you want to use degree to radian convertor\n");
                char edo[20];
                scanf("%s", &edo);
                if(strcmp(edo,"yes")==0){
                    printf("enter the value in degree:\n");
                    int degree;
                    float radian;
                    scanf("%d", &degree);
                    radian = (3.14 / 180) * degree;
                    printf("%d degrees in radians is: %f\n", degree, radian);
                    printf("thankyou for using the convertor\n");
                }
                if(strcmp(edo, "no")==0){
                    printf("oh! ok then\n");
                }
                printf("enter the number for respective ratio\n");
                int value;
                scanf("%d", &value);
                if(value==1){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic arc sin of the angle is:\n%f inches", asinh(angle));
                }
                if(value==2){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic arc cosine of the angle is:\n%f inches", acosh(angle));
                }
                if(value==3){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic arc tangent of the angle is:\n%f inches", atanh(angle));
                }
                if(value==4){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic arc cosecant of the angle is:\n%f inches",1/asinh(angle));
                }
                if(value==5){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic arc secant of the angle is:\n%f inches", 1/acosh(angle));
                }
                if(value==6){
                    printf("enter the angle:\n");
                    float angle;
                    scanf("%f", &angle);
                    printf("value of hyperbolic arc cotangent of the angle is:\n%f inches", 1/atanh(angle));
                }  
            }
        }

    }
    if(field==2){
      const char *wk="what is the shape you want me to find the area for?\n";
      typewrite23(wk);
      char shape[100];
      scanf("%s", &shape);
      if(strcmp(shape, "circle")==0){
        printf("radius of circle is:\n");
        int radius;
        scanf("%d", &radius);
        int area = 3.14 * radius * radius;
        printf("area of the circle is:\n%d", area);
      }
      if(strcmp(shape, "rectangle")==0){
        printf("length of the rectangle:\n");
        int length, breadth, area;
        scanf("%d", &length);
        printf("breadth of the rectangle:\n");
        scanf("%d", &breadth);
        area = length * breadth;
        printf("area of the rectangle is:\n%d", area);
      }
      if(strcmp(shape, "square")==0){
        printf("side of the square is:\n");
        int side, area;
        scanf("%d", &side);
        area = side * side;
        printf("area of the square is:\n%d", area);
      }
      if(strcmp(shape, "ellipse")==0){
        printf("length of the major axis:\n");
        int major, minor, area;
        scanf("%d", &major);
        printf("length of minor axis:\n");
        scanf("%d", &minor);
        area = major/2 * minor/2 * 3.14;
        printf("area of the ellipse is:\n%d", area);
      }
      else{
        printf("i am sorry i dont know.");
      }
      
          }
      if(field==3){
        printf("what is the shape you want me to find the perimeter for?\n");
        char shape[100];
        scanf("%s", &shape);
        if(strcmp(shape, "circle")==0){
          printf("radius of the cirlce:\n");
          int radius, perimeter;
          scanf("%d", &radius);
          perimeter = 3.14 * 2 * radius;
          printf("perimeter of the circle is:\n%d", perimeter);
        }
        if(strcmp(shape, "rectangle")==0){
          printf("length of the rectangle:\n");
          int length, breadth, perimeter;
          scanf("%d", &length);
          printf("breadth of the rectangle:\n");
          scanf("%d", &breadth);
          perimeter = 2 * (length + breadth);
          printf("perimeter of the rectangle is:\n%d", perimeter);
        }
        if(strcmp(shape, "square")==0){
          printf("side of the square:\n");
          int side, perimeter;
          scanf("%d", &side);
          perimeter = 4 * side;
          printf("perimeter of the square is:\n%d", perimeter);
        }
         else{
          printf("i am sorry i don\'t know.");
        }

      }
      
    }
    }
    else if(strcmp(str2, "no")==0){
        printf("then go and do it yourself, you idiot.");
    }
    else{
        printf("i don\'t like shortcuts or long length answers. just give me yes or no.\n");
        scanf("%s", &str2);
      if(strcmp(str2, "yes")==0){
        printf("good. now you can ask me.");
         getchar();
        printf("what is the type of question you want to ask me?\n");
        printf("what do you want me to do?\n");
    printf("1-FORMULAE\n2-CALCULATION\n");
    int help;
    scanf("%d", &help);
    if(help==1){
        printf("select the branch of maths.\n");
        int branch;
        printf("1- calculus\n2- algebra\n3- geometry\n");
        scanf("%d", &branch);
        if(branch==1){
            printf("select the topic in calculus\n");
            printf("1- DIFFERENTIATION\n2- INTEGRATION\n3- APPLICATION OF DERIVATIVES\n");
            int topic;
            scanf("%d", &topic);
            if(topic==1){
                printf("hi");
            }
            if(topic==2){
                printf("");
            }
            if("topic==3"){
                printf("");
            }
            else{
                printf("just press the number to learn the formulae of respective topics.");
        }
    }
}
   if(help==2){
    printf("here are different kind of fields.\n");
    int field;
    printf("1-FUNDAMENTAL OPERATIONS\n2-AREAS OF DIFFERENT SHAPES\n3-PERIMETERS OF DIFFERENT SHAPES\n");
    scanf("%d", &field);
     if(field==1){
        int X;
    printf("DIVISION-1\nMULTIPLICATION-2\nADDITION-3\nSUBTRACTION-4\nnow enter the number for the respective fundamental operation.\n");
    scanf("%d", &X);
    if(X==3){
      int num1, num2, sum;
      printf("first number:");
      scanf("%d", &num1);
      printf("second number:");
      scanf("%d", &num2);
      sum= num1 + num2;
      printf("value of the addition is:%d", sum);
     }
     if(X==1){
      int num1, num2, div;
      printf("first number:");
      scanf("%d", &num1);
      printf("second number:");
      scanf("%d", &num2);
      div = num1 / num2;
      printf("value of the division is:%d", div);
     }
     if(X==2){
      int num1, num2, product;
      printf("first number:");
      scanf("%d", &num1);
      printf("second number:");
      scanf("%d", &num2);
      product = num1 * num2;
      printf("value of the multiplication is:%d", product);
     }
     if(X==4){
      int num1, num2, sub;
      printf("first number:");
      scanf("%d", &num1);
      printf("second number:");
      scanf("%d", &num2);
      sub = num1 - num2;
      printf("value of the subtraction is:%d", sub);
     }
    }
    if(field==2){
      printf("what is the shape you want me to find the area for?\n");
      char shape[100];
      scanf("%s", &shape);
      if(strcmp(shape, "circle")==0){
        printf("radius of circle is:\n");
        int radius;
        scanf("%d", &radius);
        int area = 3.14 * radius * radius;
        printf("area of the circle is:\n%d", area);
      }
      if(strcmp(shape, "rectangle")==0){
        printf("length of the rectangle:\n");
        int length, breadth, area;
        scanf("%d", &length);
        printf("breadth of the rectangle:\n");
        scanf("%d", &breadth);
        area = length * breadth;
        printf("area of the rectangle is:\n%d", area);
      }
      if(strcmp(shape, "square")==0){
        printf("side of the square is:\n");
        int side, area;
        scanf("%d", &side);
        area = side * side;
        printf("area of the square is:\n%d", area);
      }
      if(strcmp(shape, "ellipse")==0){
        printf("length of the major axis:\n");
        int major, minor, area;
        scanf("%d", &major);
        printf("length of minor axis:\n");
        scanf("%d", &minor);
        area = major/2 * minor/2 * 3.14;
        printf("area of the ellipse is:\n%d", area);
      }
      else{
        printf("i am sorry i dont know.");
      }
    }
    if(field==3){
        printf("what is the shape you want me to find the perimeter for?\n");
        char shape[100];
        scanf("%s", &shape);
        if(strcmp(shape, "circle")==0){
          printf("radius of the cirlce:\n");
          int radius, perimeter;
          scanf("%d", &radius);
          perimeter = 3.14 * 2 * radius;
          printf("perimeter of the circle is:\n%d", perimeter);
        }
        if(strcmp(shape, "rectangle")==0){
          printf("length of the rectangle:\n");
          int length, breadth, perimeter;
          scanf("%d", &length);
          printf("breadth of the rectangle:\n");
          scanf("%d", &breadth);
          perimeter = 2 * (length + breadth);
          printf("perimeter of the rectangle is:\n%d", perimeter);
        }
        if(strcmp(shape, "square")==0){
          printf("side of the square:\n");
          int side, perimeter;
          scanf("%d", &side);
          perimeter = 4 * side;
          printf("perimeter of the square is:\n%d", perimeter);
        }
        else{
          printf("i am sorry i don\'t know.");
        }
    }

      }
      }
    }
}
      