//170202066 ibrahim tarhan - 170202076 uğur kadir arabacı
    #include <allegro.h>
    #include <stdio.h>
    #include <stdlib.h>

    int main()

    {
        int ya,yb,yc,yd,ye;  // ara yollarin yogunluklari
        char ba,bb,bc,bd,be; //ara yollarin baslangic noktalari
        char yona,yonb,yonc,yond,yone; //ara yollarin ynleri

        int SagMatris[5][8]={0};
        int SolMatris[5]={0};

        int secim;
        char g1,g2,c1,c2;
        int d1,d2,d3,d4;

        printf("harita secin\n");



        allegro_init();
      install_keyboard();  // klavyeden deger alma

      set_color_depth(16);

      set_gfx_mode(GFX_AUTODETECT_WINDOWED,1000,600,1000,600);// konsol ekraninin boyutunu ayarlama
    set_window_title("harita ekrani"); // harita konsolunun adi
      while(!key[KEY_ESC]) // esc ye basinca donguyu durdur gidip gel
        {
    /*Resim = load_bitmap( "resim.bmp", NULL);
    acquire_screen();
    draw_sprite( screen, Resim, 0, 0);
    release_screen();
    readkey();
    */

        circlefill(screen, 200, 200, 100, 25); //ici dolu yuvarlak x,y, yaricaplar, renk

        circlefill(screen, 200, 200, 50, 0);
        rectfill(screen, 0, 180, 100, 220, 25); //dikdortgen x egore bas, xe gore bit,y ye gore bas y ye gore bit,renk
        rectfill(screen, 300, 180, 400, 220, 25);
        rectfill(screen, 180, 10, 220, 100, 25);
        rectfill(screen, 180, 300, 220, 400, 25);
        textprintf_ex(screen, font, 135, 130, makecol(255, 255, 255), -1,  "a"); //130 sol yer,yukari asgı yer,renk


        textprintf_ex(screen, font, 255, 130, makecol(255, 255, 255), -1,  "b");
        textprintf_ex(screen, font, 130, 250, makecol(255, 255, 255), -1,  "c");

        textprintf_ex(screen, font, 255, 250, makecol(255, 255, 255), -1,  "d");


        textprintf_ex(screen, font, 340, 200, makecol(255, 255, 255), -1,  "y");
        textprintf_ex(screen, font, 40, 200, makecol(255, 255, 255), -1,  "t");
        textprintf_ex(screen, font, 196, 75, makecol(255, 255, 255), -1,  "x");
        textprintf_ex(screen, font, 196, 325, makecol(255, 255, 255), -1,  "z");
        textprintf_ex(screen, font, 100, 22, makecol(255, 255, 255), -1,  "1.yol");



      /*  circlefill(screen, 155, 140, 18, 2000);
        circlefill(screen, 120, 200, 15, 100);
        circlefill(screen, 125, 180, 15, 100);
        circlefill(screen, 135, 160, 15, 100);
        circlefill(screen, 150, 143, 15, 100);*/

        textprintf_ex(screen, font, 300, 500, makecol(255, 255, 0), -1,  "karar verdikten sonra devam etmek icin \"esc\" tusuna basiniz");
        textprintf_ex(screen, font, 300, 530, makecol(255, 255, 0), -1,  "yonler secildikce bu ekran uzerine basilacaktir");

        circlefill(screen, 750, 200, 100, makecol(135, 131, 131));
        circlefill(screen, 750, 200, 50, 0);
        rectfill(screen, 550, 180, 850, 220, makecol(135, 131, 131));
        rectfill(screen, 850, 180, 950, 220, makecol(135, 131, 131));

        rectfill(screen, 730, 10, 770, 100, makecol(135, 131, 131));
        rectfill(screen, 730, 300, 770, 400, makecol(135, 131, 131));
        textprintf_ex(screen, font, 695, 130, makecol(255, 0, 0), -1,  "a");


        textprintf_ex(screen, font, 810, 130, makecol(255, 0, 0), -1,  "b");
        textprintf_ex(screen, font, 690, 250, makecol(255, 0, 0), -1,  "c");

        textprintf_ex(screen, font, 815, 250, makecol(255, 0, 0), -1,  "d");

        textprintf_ex(screen, font, 900, 200, makecol(255, 0, 0), -1,  "y");
        textprintf_ex(screen, font, 600, 200, makecol(255, 0, 0), -1,  "t");
        textprintf_ex(screen, font, 750, 75, makecol(255, 0, 0), -1,  "x");
        textprintf_ex(screen, font, 750, 325, makecol(255, 0, 0), -1,  "z");
        textprintf_ex(screen, font, 100, 22, makecol(255, 255, 0), -1,  "1.yol");

        textprintf_ex(screen, font, 600, 22, makecol(999, 999, 0), -1,  "2.yol");



        //circlefill(screen, 200, 550, 100, 250);
    rest(0); //




      }




        printf("1. harita icin 1, 2. harita icin 2 ye basiniz:");
        scanf("%d",&secim);
        fflush(stdin);


        printf("giris olan yollari seciniz\n");
        printf("bilinmeyen degerler icin \"-1\"giriniz.\n");
        giris1:
        printf("giris1:(x,y,z,t)\n");
        scanf("%c",&g1);
        fflush(stdin);

        if(g1=='x' || g1=='y' || g1=='z' || g1=='t'){
            printf("%c yi sectiniz\n",g1);
            printf("giren arac sayisi:");
            scanf("%d",&d1);
            fflush(stdin);

        }
        else goto giris1;
        giris2:
        printf("giris2:(x,y,z,t)\n");
        scanf("%c",&g2);
        fflush(stdin);

        if(g2=='x' || g2=='y' || g2=='z' || g2=='t'){
            printf("%c yi sectiniz\n",g2);
            printf("giren arac sayisi:");
            scanf("%d",&d2);
            fflush(stdin);

        }else goto giris2;
        if(g2==g1){
            printf("giris yaptigin yolu farkli bir giris olarak secemezsin\n");
            goto giris2;
        }
        cikis1:
        printf("cikis1:(x,y,z,t)\n");
        scanf("%c",&c1);
        fflush(stdin);

        if(c1=='x' || c1=='y' || c1=='z' || c1=='t'){
            printf("%c yi sectiniz\n",c1);
            printf("cikan arac sayisi:");
            scanf("%d",&d3);
            fflush(stdin);

        }else goto cikis1;
        if(c1==g1 || c1==g2){
            printf("cikis olarak sectigin yol giris olamaz\n");
            goto cikis1;
        }
        cikis2:
        printf("cikis2:(x,y,z,t)\n");
        scanf("%c",&c2);
        fflush(stdin);

        if(c2=='x' || c2=='y' || c2=='z' || c2=='t'){
            printf("%c yi sectiniz\n",c2);
            printf("cikan arac sayisi:");
            scanf("%d",&d4);
            fflush(stdin);

        }else goto cikis2;
        if(c2==g1 || c2==g2){
            printf("cikis olarak sectigin yol giris olamaz\n");
            goto cikis2;
        }
        if(c2==c1){
            printf("cikis yaptigin yolu farkli bir cikis secemezsin\n");
                goto cikis2;
        }


            printf("a yolunun yogunlugunu yaziniz:");
            scanf("%d",&ya);
            fflush(stdin);
int kont=0;
while(kont<1){
            printf("a yolunun baslangic noktasini girin: (t veya x)");
            scanf("%c",&ba);
            fflush(stdin);
if(ba=='t'||ba=='x') kont++;
}kont--;
while(kont<1){
            printf("a yolunun yonunu giriniz: (t veya x)");
            scanf("%c",&yona);
            fflush(stdin);
if(yona=='t'||yona=='x') kont++;
}kont--;
            printf("harita ekranina geciniz, yonler bastirilmistir\n");

            if(ya!=0 && secim ==1 && ba=='t'&&yona=='x'){
                //  x     y       tam cember cizmesin diye ceber r si(50)
        arc(screen, 175, 180,	  itofix(64), itofix(-128), 50, makecol(255, 0, 0)); //t'den x'e.arc=egri
        circlefill(screen, 169, 130, 5, makecol(255, 0, 0));
            }
            if(ya!=0 && secim==1 && ba=='x'&&yona=='t'){

        arc(screen, 175, 180,	  itofix(64), itofix(-128), 50, makecol(255, 0, 0)); //x'ten t'ye
        circlefill(screen, 125, 180, 5, makecol(255, 0, 0));
            }
            if(ya!=0 && secim==2 && ba=='x'&&yona=='t'){

        arc(screen, 725, 180,	  itofix(64), itofix(-128), 50, makecol(255, 0, 0)); //sa? x'den t'ye
        circlefill(screen, 675, 180, 5, makecol(255, 0, 0));
            }
            if(ya!=0 && secim==2 && ba=='t'&&yona=='x'){

        arc(screen, 725, 180,	  itofix(64), itofix(-128), 50, makecol(255, 0, 0)); // sa? t'den x'e
        circlefill(screen, 725, 130, 5, makecol(255, 0, 0));
            }


            printf("b yolunun yogunlugunu yaziniz: ");
            scanf("%d",&yb);
            fflush(stdin);

while(kont<1){
            printf("b yolunun baslangic noktasini girin: (x veya y)");
            scanf("%c",&bb);
            fflush(stdin);
if(bb=='y'||bb=='x') kont++;
}kont--;
while(kont<1){
            printf("b yolunun yonunu giriniz: (x veya y)");
            scanf("%c",&yonb);
            fflush(stdin);
if(yonb=='y'||yonb=='x') kont++;
}kont--;
            printf("harita ekranina geciniz, yonler bastirilmistir\n");


            if(yb!=0 &&secim==1&& bb=='x'&&yonb=='y'){

        arc(screen, 225, 175,	  itofix(0), itofix(64), 50, makecol(255, 0, 0)); //x'ten y'ye
        circlefill(screen, 275, 175, 5, makecol(255, 0, 0));
            }

            if(yb!=0 && secim==1&& bb=='y'&&yonb=='x'){

        arc(screen, 225, 175,	  itofix(0), itofix(64), 50, makecol(255, 0, 0)); //y'den x'e
        circlefill(screen, 225, 125, 5, makecol(255, 0, 0));
            }
            if(yb!=0 && secim==2&& bb=='y'&&yonb=='x'){

        arc(screen, 775, 175,	  itofix(0), itofix(64), 50, makecol(255, 0, 0));  // sa? y'den x'e
        circlefill(screen, 775, 125, 5, makecol(255, 0, 0));
            }
            if(yb!=0 && secim==2&& bb=='x'&&yonb=='y'){

        arc(screen, 775, 175,	  itofix(0), itofix(64), 50, makecol(255, 0, 0)); // sa? x'ten y'ye
        circlefill(screen, 825, 175, 5, makecol(255, 0, 0));;
            }


            printf("c yolunun yogunlugunu yaziniz: ");
            scanf("%d",&yc);
            fflush(stdin);
while(kont<1){
            printf("c yolunun baslangic noktasini girin: (t veya z)");
            scanf("%c",&bc);
            fflush(stdin);
if(bc=='t'||bc=='z') kont++;
}kont--;
while(kont<1){
            printf("c yolunun yonunu giriniz: (t veya z)");
            scanf("%c",&yonc);
            fflush(stdin);
if(yonc=='t'||yonc=='z') kont++;
}kont--;
            printf("harita ekranina geciniz, yonler bastirilmistir\n");


            if(yc!=0 && secim==1 && bc=='t'&&yonc=='z'){

        arc(screen, 175, 225,	  itofix(128), itofix(-64), 50, makecol(255, 0, 0));//t'den z'ye
        circlefill(screen, 175, 275, 5, makecol(255, 0, 0));
            }
            if(yc!=0 && secim==1 && bc=='z'&&yonc=='t'){

        arc(screen, 175, 225,	  itofix(128), itofix(-64), 50, makecol(255, 0, 0));// z'den t'ye
        circlefill(screen, 125, 225, 5, makecol(255, 0, 0));
            }
             if(yc!=0 && secim==2&& bc=='t'&&yonc=='z'){

        arc(screen, 725, 225,	  itofix(128), itofix(-64), 50, makecol(255, 0, 0)); //sa? t'den z'ye
        circlefill(screen, 725, 275, 5, makecol(255, 0, 0));
            }
            if(yc!=0 && secim==2&& bc=='z'&&yonc=='t'){

        arc(screen, 725, 225,	  itofix(128), itofix(-64), 50, makecol(255, 0, 0)); //sa? z'den t'ye
        circlefill(screen, 675, 225, 5, makecol(255, 0, 0));
            }


            printf("d yolunun yogunlugunu yaziniz:");
            scanf("%d",&yd);
            fflush(stdin);
while(kont<1){
            printf("d yolunun baslangic noktasini girin: (y veya z)");
            scanf("%c",&bd);
            fflush(stdin);
if(bd=='y'||bd=='z') kont++;
}kont--;
while(kont<1){
            printf("d yolunun yonunu giriniz: (y veya z)");
            scanf("%c",&yond);
            fflush(stdin);
if(yond=='y'||yond=='z') kont++;
}kont--;
            printf("harita ekranina geciniz, yonler bastirilmistir\n");


             if(yd!=0 && secim==1 && bd=='z'&&yond=='y'){

        arc(screen, 225, 225,	  itofix(-64), itofix(0), 50, makecol(255, 0, 0));//z'den y'ye.
        circlefill(screen, 275, 225, 5, makecol(255, 0, 0));
            }
            if(yd!=0 && secim==1 && bd=='y'&&yond=='z'){

    arc(screen, 225, 225,	  itofix(-64), itofix(0), 50, makecol(255, 0, 0)); //y'den z'ye;
        circlefill(screen, 225, 275, 5, makecol(255, 0, 0));
            }
             if(yd!=0 && secim==2&& bd=='z'&&yond=='y'){

        arc(screen, 775, 225,	  itofix(-64), itofix(0), 50, makecol(255, 0, 0));// sa? z'den y'ye
        circlefill(screen, 825, 225, 5, makecol(255, 0, 0));
            }
            if(yd!=0 && secim==2&& bd=='y'&&yond=='z'){

        arc(screen, 775, 225,	  itofix(-64), itofix(0), 50, makecol(255, 0, 0)); // sa? y'den z'ye.
        circlefill(screen, 775, 275, 5, makecol(255, 0, 0));
            }


            if(secim==2){
            printf("e yolunun yogunlugunu yaziniz: ");
            scanf("%d",&ye);
            fflush(stdin);
while(kont<1){
            printf("e yolunun baslangic noktasini girin: (t veya y)");
            scanf("%c",&be);
            fflush(stdin);
if(be=='y'||be=='t') kont++;
}kont--;
while(kont<1){
            printf("e yolunun yonunu giriniz: (t veya y)");
            scanf("%c",&yone);
            fflush(stdin);
if(yone=='y'||yone=='t') kont++;
}kont--;
            printf("harita ekranina geciniz, yonler bastirilmistir\n");

            if(ye!=0 && secim==2&& be=='t'&&yone=='y'){

        rectfill(screen, 720, 208, 780, 205, makecol(255, 0, 0)); // sa? t'den y'ye
        circlefill(screen, 780, 206, 5, makecol(255, 0, 0));
            }
            if(ye!=0 && secim==2&& be=='y'&&yone=='t'){

        rectfill(screen, 720, 208, 780, 205, makecol(255, 0, 0)); // sa? y'den t'ye
        circlefill(screen, 720, 206, 5, makecol(255, 0, 0));
            }

            }
            int i=0,j=0;
            int tutx=-2,tuty=-2,tutz=-2,tutt=-2;
            printf("1. denklem: giris1+giris2=cikis1+cikis2\n");

            if(d1!=-1) // d1 biliniyorsa değer matrisine at else bilimiyorsa bilinmeyenler matrisinee at.
                SolMatris[i]=SolMatris[i]-d1;
            else{
                SagMatris[i][j]=-d1;
                if(g1=='x') //bilinmeyeni attığımız yerin indexini tutar.
                    tutx=j;
                if(g1=='y')
                    tuty=j;
                if(g1=='z')
                    tutz=j;
                if(g1=='t')
                    tutt=j;
            j++;
            }

            if(d2!=-1)
                SolMatris[i]=SolMatris[i]-d2;
            else{
                SagMatris[i][j]=-d2;
                if(g2=='x')
                    tutx=j;
                if(g2=='y')
                    tuty=j;
                if(g2=='z')
                    tutz=j;
                if(g2=='t')
                    tutt=j;
            j++;
            }

            if(d3!=-1)
                SolMatris[i]=SolMatris[i]+d3;
            else{
                SagMatris[i][j]=d3;
                if(c1=='x')
                    tutx=j;
                if(c1=='y')
                    tuty=j;
                if(c1=='z')
                    tutz=j;
                if(c1=='t')
                    tutt=j;
            j++;
            }

            if(d4!=-1)
                SolMatris[i]=SolMatris[i]+d4;
            else{
                SagMatris[i][j]=d4;
                if(c2=='x')
                    tutx=j;
                if(c2=='y')
                    tuty=j;
                if(c2=='z')
                    tutz=j;
                if(c2=='t')
                    tutt=j;
            j++;
            }
            i++;
            int tuta=-2,tutb=-2,tutc=-2,tutd=-2,tute=-2;

            printf("x kavsaginin denklemi\n");
            if(g1=='x' || g2=='x'){
                if(tutx<0){
                    if(g1=='x')
                        SolMatris[i]=SolMatris[i]-d1;
                    if(g2=='x')
                        SolMatris[i]=SolMatris[i]-d2;
                }
                else
                    SagMatris[i][tutx]=1;
                if(yona=='x'){
                    if(ya!=-1)
                        SolMatris[i]=SolMatris[i]-ya;
                    else{
                        if(tuta>=0){SagMatris[i][tuta]=1;}
                        else{
                        SagMatris[i][j]=1;
                        tuta=j;
                        j++;}
                    }
                }
                else{// a nin yonu x degilse baslangici x olur
                    if(ya!=-1)
                        SolMatris[i]=SolMatris[i]+ya;
                    else{
                            if(tuta>=0){SagMatris[i][tuta]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tuta=j;
                        j++;}
                    }
                }
                if(yonb=='x'){
                    if(yb!=-1)
                        SolMatris[i]=SolMatris[i]-yb;
                    else{
                            if(tutb>=0){SagMatris[i][tutb]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutb=j;
                        j++;}
                    }
                }
                else{ //b nin yonu x degilse baslangici x olur
                    if(yb!=-1)
                        SolMatris[i]=SolMatris[i]+yb;
                    else{
                            if(tutb>=0){SagMatris[i][tutb]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutb=j;
                        j++;}
                    }
                }
                i++;

            }
            if(c1=='x' || c2=='x'){
                if(tutx<0){
                    if(c1=='x')
                        SolMatris[i]=SolMatris[i]-d3;
                    if(c2=='x')
                        SolMatris[i]=SolMatris[i]-d4;
                }
                else
                    SagMatris[i][tutx]=1;
                if(ba=='x'){
                    if(ya!=-1)
                        SolMatris[i]=SolMatris[i]-ya;
                    else{
                            if(tuta>=0){SagMatris[i][tuta]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tuta=j;
                        j++;}
                    }
                }
                else{  //a yolunun baslangici x degilse yonu x olur
                    if(ya!=-1)
                        SolMatris[i]=SolMatris[i]+ya;
                    else{
                            if(tuta>=0){SagMatris[i][tuta]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tuta=j;
                        j++;}
                    }
                }
                if(bb=='x'){
                    if(yb!=-1)
                        SolMatris[i]=SolMatris[i]-yb;
                    else{
                            if(tutb>=0){SagMatris[i][tutb]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutb=j;
                        j++;}
                    }
                }
                else{ // b yolunun baslangic noktasi x degilse yonu x olur
                    if(yb!=-1)
                        SolMatris[i]=SolMatris[i]+yb;
                    else{
                            if(tutb>=0){SagMatris[i][tutb]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutb=j;
                        j++;}
                    }
                }

                i++;
            }
            printf("z kavsaginin denklemi\n");
            if(g1=='z' || g2=='z'){
                if(tutz<0){
                    if(g1=='z')
                        SolMatris[i]=SolMatris[i]-d1;
                    if(g2=='z')
                        SolMatris[i]=SolMatris[i]-d2;
                }
                else
                    SagMatris[i][tutz]=1;

                if(yonc=='z'){
                    if(yc!=-1)
                        SolMatris[i]=SolMatris[i]-yc;
                    else{
                            if(tutc>=0){SagMatris[i][tutc]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutc=j;
                        j++;}
                    }
                }
                else{ //c yolunun yonu z degilse baslangici z dir
                    if(yc!=-1)
                        SolMatris[i]=SolMatris[i]+yc;
                    else{
                        SagMatris[i][j]=-1;
                        tutc=j;
                        j++;
                    }
                }
                if(yond=='z'){
                    if(yd!=-1)
                        SolMatris[i]=SolMatris[i]-yd;
                    else{
                            if(tutd>=0){SagMatris[i][tutd]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutd=j;
                        j++;}
                    }
                }
                else{ // d nin yonu z degil ise baslangici z olur
                    if(yd!=-1)
                        SolMatris[i]=SolMatris[i]+yd;
                    else{
                            if(tutd>=0){SagMatris[i][tutd]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutd=j;
                        j++;}
                    }
                }

                i++;
            }
            if(c1=='z' || c2=='z'){
                if(tutz<0){
                    if(c1=='z')
                        SolMatris[i]=SolMatris[i]-d3;
                    if(c2=='z')
                        SolMatris[i]=SolMatris[i]-d4;
                }
                else
                    SagMatris[i][tutz]=1;

            if(bc=='c'){
                    if(yc!=-1)
                        SolMatris[i]=SolMatris[i]-yc;
                    else{
                            if(tutc>=0){SagMatris[i][tutc]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutc=j;
                        j++;}
                    }
                }
                else{  //c yolunun baslangici z degilse yonu z olur
                    if(yc!=-1)
                        SolMatris[i]=SolMatris[i]+yc;
                    else{
                            if(tutc>=0){SagMatris[i][tutc]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutc=j;
                        j++;}
                    }
                }
            if(bd=='z'){
                    if(yd!=-1)
                        SolMatris[i]=SolMatris[i]-yd;
                    else{
                            if(tutd>=0){SagMatris[i][tutd]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutd=j;
                        j++;}
                    }
                }
                else{ // d yolunun baslangic noktasi z degilse yonu z olur
                    if(yd!=-1)
                        SolMatris[i]=SolMatris[i]+yd;
                    else{
                            if(tutd>=0){SagMatris[i][tutd]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutd=j;
                        j++;}
                    }
                }

            i++;
            }
            printf("t kavsaginin denklemi");

            if(g1=='t' || g2=='t'){
                if(tutt<0){
                    if(g1=='t')
                        SolMatris[i]=SolMatris[i]-d1;
                    if(g2=='t')
                        SolMatris[i]=SolMatris[i]-d2;
                }
                else
                    SagMatris[i][tutt]=1;

                if(yonc=='t'){
                    if(yc!=-1)
                        SolMatris[i]=SolMatris[i]-yc;
                    else{
                            if(tutc>=0){SagMatris[i][tutc]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutc=j;
                        j++;}
                    }
                }
                else{ //c yolunun yonu t degilse baslangici t dir
                    if(yc!=-1)
                        SolMatris[i]=SolMatris[i]+yc;
                    else{
                            if(tutc>=0){SagMatris[i][tutc]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutc=j;
                        j++;}
                    }
                }
                if(yona=='t'){
                    if(ya!=-1)
                        SolMatris[i]=SolMatris[i]-ya;
                    else{
                            if(tuta>=0){SagMatris[i][tuta]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tuta=j;
                        j++;}
                    }
                }
                else{ // a nin yonu t degil ise baslangici t olur
                    if(ya!=-1)
                        SolMatris[i]=SolMatris[i]+ya;
                    else{
                            if(tuta>=0){SagMatris[i][tuta]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tuta=j;
                        j++;}
                    }
                }
                if(secim==2){
                    if(yone=='t'){
                        if(ye!=-1)
                            SolMatris[i]=SolMatris[i]-ye;
                        else{
                                if(tute>=0){SagMatris[i][tute]=1;}
                                else{
                            SagMatris[i][j]=1;
                            tute=j;
                            j++;}
                        }
                    }
                    else{ // e nin yonu t degilse baslangici t olur
                        if(ye!=-1)
                            SolMatris[i]=SolMatris[i]+ye;
                        else{
                                if(tute>=0){SagMatris[i][tute]=-1;}
                                else{
                            SagMatris[i][j]=-1;
                            tute=j;
                            j++;}
                        }
                    }
                }

                i++;
            }
            if(c1=='t' || c2=='t'){
                if(tutt<0){
                    if(c1=='t')
                        SolMatris[i]=SolMatris[i]-d3;
                    if(c2=='t')
                        SolMatris[i]=SolMatris[i]-d4;
                }
                else
                    SagMatris[i][tutt]=1;

            if(bc=='t'){
                    if(yc!=-1)
                        SolMatris[i]=SolMatris[i]-yc;
                    else{
                            if(tutc>=0){SagMatris[i][tutc]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutc=j;
                        j++;}
                    }
                }
                else{  //c yolunun baslangici t degilse yonu t olur
                    if(yc!=-1)
                        SolMatris[i]=SolMatris[i]+yc;
                    else{
                            if(tutc>=0){SagMatris[i][tutc]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutc=j;
                        j++;}
                    }
                }
            if(ba=='t'){
                    if(ya!=-1)
                        SolMatris[i]=SolMatris[i]-ya;
                    else{
                            if(tuta>=0){SagMatris[i][tuta]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tuta=j;
                        j++;}
                    }
                }
                else{ // a yolunun baslangic noktasi t degilse yonu t olur
                    if(ya!=-1)
                        SolMatris[i]=SolMatris[i]+ya;
                    else{
                            if(tuta>=0){SagMatris[i][tuta]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tuta=j;
                        j++;}
                    }
                }
                if(secim==2){
                    if(be=='t'){
                        if(ye!=-1)
                            SolMatris[i]=SolMatris[i]-ye;
                        else{
                                if(tute>=0){SagMatris[i][tute]=1;}
                                else{
                            SagMatris[i][j]=1;
                            tute=j;
                            j++;}
                        }
                    }
                    else{ //e yolunun baslangici t degilse yonu t dir
                        if(ye!=-1)
                            SolMatris[i]=SolMatris[i]+ye;
                        else{
                                if(tute>=0){SagMatris[i][tute]=-1;}
                                else{
                            SagMatris[i][j]=-1;
                            tute=j;
                            j++;}
                        }
                    }
                }

            i++;
            }
            printf("y kavsaginin denklemi\n");
            if(g1=='y' || g2=='y'){
                if(tuty<0){
                    if(g1=='y')
                        SolMatris[i]=SolMatris[i]-d1;
                    if(g2=='y')
                        SolMatris[i]=SolMatris[i]-d2;
                }
                else
                    SagMatris[i][tuty]=1;

                if(yonb=='y'){
                    if(yb!=-1)
                        SolMatris[i]=SolMatris[i]-yb;
                    else{
                            if(tutb>=0){SagMatris[i][tutb]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutb=j;
                        j++;}
                    }
                }
                else{ //b yolunun yonu y degilse baslangici y dir
                    if(yb!=-1)
                        SolMatris[i]=SolMatris[i]+yb;
                    else{
                            if(tutb>=0){SagMatris[i][tutb]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutb=j;
                        j++;}
                    }
                }
                if(yond=='y'){
                    if(yd!=-1)
                        SolMatris[i]=SolMatris[i]-yd;
                    else{
                            if(tutd>=0){SagMatris[i][tutd]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutd=j;
                        j++;}
                    }
                }
                else{ // d nin yonu y degil ise baslangici y olur
                    if(yd!=-1)
                        SolMatris[i]=SolMatris[i]+yd;
                    else{
                            if(tutd>=0){SagMatris[i][tutd]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutd=j;
                        j++;}
                    }
                }
                if(secim==2){
                    if(yone=='t'){
                        if(ye!=-1)
                            SolMatris[i]=SolMatris[i]-ye;
                        else{
                                if(tute>=0){SagMatris[i][tute]=1;}
                                else{
                            SagMatris[i][j]=1;
                            tute=j;
                            j++;}
                        }
                    }
                    else{ // e nin yonu y degilse baslangici y olur
                        if(ye!=-1)
                            SolMatris[i]=SolMatris[i]+ye;
                        else{
                                if(tute>=0){SagMatris[i][tute]=-1;}
                                else{
                            SagMatris[i][j]=-1;
                            tute=j;
                            j++;}
                        }
                    }
                }

                i++;
            }
            if(c1=='y' || c2=='y'){
                if(tuty<0){
                    if(c1=='y')
                        SolMatris[i]=SolMatris[i]-d3;
                    if(c2=='y')
                        SolMatris[i]=SolMatris[i]-d4;
                }
                else
                    SagMatris[i][tuty]=1;

            if(bb=='y'){
                    if(yc!=-1)
                        SolMatris[i]=SolMatris[i]-yb;
                    else{
                            if(tutb>=0){SagMatris[i][tutb]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutb=j;
                        j++;}
                    }
                }
                else{  //b yolunun baslangici y degilse yonu y olur
                    if(yb!=-1)
                        SolMatris[i]=SolMatris[i]+yb;
                    else{
                            if(tutb>=0){SagMatris[i][tutb]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutb=j;
                        j++;}
                    }
                }
            if(bd=='t'){
                    if(yd!=-1)
                        SolMatris[i]=SolMatris[i]-yd;
                    else{
                            if(tutd>=0){SagMatris[i][tutd]=1;}
                            else{
                        SagMatris[i][j]=1;
                        tutd=j;
                        j++;}
                    }
                }
                else{ // d yolunun baslangic noktasi y degilse yonu y olur
                    if(yd!=-1)
                        SolMatris[i]=SolMatris[i]+yd;
                    else{
                            if(tutd>=0){SagMatris[i][tutd]=-1;}
                            else{
                        SagMatris[i][j]=-1;
                        tutd=j;
                        j++;}
                    }
                }
                if(secim==2){
                    if(be=='t'){
                        if(ye!=-1)
                            SolMatris[i]=SolMatris[i]-ye;
                        else{
                                if(tute>=0){SagMatris[i][tute]=1;}
                                else{
                            SagMatris[i][j]=1;
                            tute=j;
                            j++;}
                        }
                    }
                    else{ //e yolunun baslangici y degilse yonu y dir
                        if(ye!=-1)
                            SolMatris[i]=SolMatris[i]+ye;
                        else{
                                if(tute>=0){SagMatris[i][tute]=-1;}
                                else{
                            SagMatris[i][j]=-1;
                            tute=j;
                            j++;}
                        }
                    }
                }

            i++;
            }
            int dizi[i][j+1];
            int p,k;

            for(p=0;p<i;p++){
                for(k=0;k<j;k++){
                    dizi[p][k]=SagMatris[p][k];
                }
                dizi[p][k]=SolMatris[p];

            }
            for(p=0;p<i;p++){
                for(k=0;k<j+1;k++){
                    printf("%d\t",dizi[p][k]);
                }
                printf("\n");
            }
            printf("\n\n\n");
            int a,b;
            a=i;
            b=j+1;
            // burada i va j durumuna gore islem yap

            int z,t,m,n;
            int gecici1[b];
            int gecici2[b];
            int bolen;

            for(m=0; m<a; m++)     //matrisi sirala
              for(n=0; n<b; n++){
                  i=m;
                  j=n;
                  t=j;
                  z=i;
                if(i==j){
                       bolen=dizi[i][i];
                       if(bolen==0)
                       {
                  for(j=0; j<b; j++){
                  gecici1[j]=dizi[i][j];}
                  for(i=(a-1); i>t; i--){
                       if(dizi[i][t]!=0){
                       for(j=0; j<b; j++)
                       gecici2[j]=dizi[i][j];
                       break;
                       }
                       }
                       for(j=0; j<b; j++){
                       dizi[z][j]=gecici2[j];
                       dizi[i][j]=gecici1[j];
                       }
                       }


                }
              }


            printf("matrisin duzenlenmis hali\n");

            for(i=0; i<a; i++){
              for(j=0; j<b; j++){//for
                 printf("%d\t",dizi[i][j]);

                    }
                printf("\n");}
                            printf("\n\n\n");
            int sayac=0;

                // tum elemanlari sifir olan satirlari sil

                for(j=0;j<b;j++){
                    if(dizi[4][j]==0)
                        sayac++;
                }
                if(sayac==b)
                    a--;
                sayac=0;
                for(j=0;j<b;j++){
                    if(dizi[3][j]==0)
                        sayac++;
                }
                if(sayac==b)
                    a--;
                sayac=0;

                for(j=0;j<b;j++){
                    if(dizi[2][j]==0)
                        sayac++;
                }
                if(sayac==b)
                    a--;
                sayac=0;

                for(j=0;j<b;j++){
                    if(dizi[1][j]==0)
                        sayac++;
                }
                if(sayac==b)
                    a--;
                sayac=0;

                for(i=0; i<a; i++){
              for(j=0; j<b; j++){//for
                 printf("%d\t",dizi[i][j]);

                    }
                printf("\n");}
                            printf("\n\n\n");

                // en az 1 tane yol bilinemeyeceginden ilk satiri kontrol etmeye gerek yoktur
        float sifirla;
        int deger=0;

                if(a==(b-1)){ // bilinmeyen sayisi denklem sayisina esit ise

        for(i=0;i<a;i++)
        {
          for(j=0;j<a;j++)
            {
                if(i!=j)
                {
                    sifirla=(float)dizi[j][i]/dizi[i][i];
                    for(k=0;k<b;k++)
                    dizi[j][k]=dizi[j][k]-(dizi[i][k]*sifirla);

                    }
                }
                for(m=0;m<a;m++){
                        for(n=0;n<b;n++){
                            printf("%d\t",dizi[m][n]);}
                            printf("\n");}
                            printf("\n\n\n");
                for(p=0;p<a;p++){
                    for(k=0;k<(b-1);k++){
                        if(dizi[p][b-1]==0){
                            if(dizi[p][k]==0)
                                deger++;
                        }
                    }
                }
            if(deger==(b-1)){
            printf("birbirini goturen denklemlerden dolayi sonsuz cozum vardir\n");
            printf("asagida yazilan degerler dogru degildir\n");
                }
            if(deger==(b-2)){printf("matris uyumsuzdur bulunan degerler dogru olmayabilir\n");}
            deger=0;

        }
        for(p=0;p<(b-1);p++)
                printf("%d . bilimeyen= %d\n",p+1,dizi[p][b-1]/dizi[p][p]);
        }


            if(a<(b-1))
                printf("%d parametreye bagli sonsuz cozum vardir\n",(b-1)-a);
            int sayici=0;
            if(a>(b-1)){
            int bilinmeyen[b-1],s=0;
                for(i=0;i<a;i++){
                    for(j=0;j<(b-1);j++){
                       if(dizi[i][j]==0)
                            sayici++;
                       if(sayici==(b-2)){
                       for(k=0;k<(b-1);k++){
                           if(dizi[i][k]!=0){
                                bilinmeyen[s]=dizi[i][b-1]/dizi[i][k];
                                dizi[i][k]=0;
                                dizi[i][b-1]=0;

                                for(m=0;m<a;m++){
                                    if(dizi[m][k]==1){
                                        dizi[m][b-1]=dizi[m][b-1]+bilinmeyen[s];
                                        dizi[m][k]=0;
                                    }
                                    if(dizi[m][k]==-1){
                                        dizi[m][b-1]=dizi[m][b-1]-bilinmeyen[s];
                                        dizi[m][k]=0;
                                    }
                                }
                                s++;
                           }

                        }
                        }
                    }
                    sayici=0;
                }
                for(p=0;p<s;p++)
                    printf("%d . bilinmeyen= %d\n",p+1,bilinmeyen[p]);
            }



    while(!key[KEY_ESC]){

        textprintf_ex(screen, font, 300, 560, makecol(255, 255, 0), -1,  "yonler cizilmistir");
    }



        return 0;
    }
    END_OF_MAIN()
