#include "testApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void testApp::setup()
{
    ofSetWindowTitle("VideosGrid");
    ofSetWindowPosition(0,600);
    ofSetWindowShape(1280,250);

    ofSetVerticalSync(true);
    ofSetFrameRate(12);

    // set background:
    ofBackground(100,100,100);

    // listen on the given port
    cout << "listening for osc messages on port " << RPORT << "\n";
    receiver.setup(RPORT); //set up receiver
    sender.setup(HOST, SPORT); //set up sender

    Larg=120;
    Haut=70;


    setupGUI1();
    setupGUI2();

    Lect    =   1;
    dossierV    =   "v/videos/";
    dir.listDir(dossierV);
    dir.allowExt("mov");
    dir.sort();

    if (dir.size()>=1)
    {
        dir.sort();
        playerA01.loadMovie(dir.getPath(0));
        playerA01.setFrame(5);
    }
    if (dir.size()>= 2 )
    {
        dir.sort();
        playerA02.loadMovie(dir.getPath(1));
        playerA02.setFrame(5);
    }
    if (dir.size()>= 3 )
    {
        dir.sort();
        playerA03.loadMovie(dir.getPath(2));
        playerA03.setFrame(5);
    }
    if (dir.size()>= 4 )
    {
        dir.sort();
        playerA04.loadMovie(dir.getPath(3));
        playerA04.setFrame(5);
    }
    if (dir.size()>= 5 )
    {
        dir.sort();
        playerA05.loadMovie(dir.getPath(4));
        playerA05.setFrame(5);
    }
    if (dir.size()>= 6 )
    {
        dir.sort();
        playerA06.loadMovie(dir.getPath(5));
        playerA06.setFrame(5);
    }
    if (dir.size()>= 7 )
    {
        dir.sort();
        playerA07.loadMovie(dir.getPath(6));
        playerA07.setFrame(5);
    }
    if (dir.size()>= 8 )
    {
        dir.sort();;
        playerA08.loadMovie(dir.getPath(7));
        playerA08.setFrame(5);
    }
    if (dir.size()>= 9 )
    {
        dir.sort();
        playerA09.loadMovie(dir.getPath(8));
        playerA09.setFrame(5);
    }
    if (dir.size()>= 10 )
    {
        dir.sort();
        playerA10.loadMovie(dir.getPath(9));
        playerA10.setFrame(5);
    }
    if (dir.size()>= 11 )
    {
        dir.sort();
        playerA11.loadMovie(dir.getPath(10));
        playerA11.setFrame(5);
    }
    if (dir.size()>= 12 )
    {
        dir.sort();
        playerA12.loadMovie(dir.getPath(11));
        playerA12.setFrame(5);
    }
    if (dir.size()>= 13 )
    {
        dir.sort();
        playerA13.loadMovie(dir.getPath(12));
        playerA13.setFrame(5);
    }
    if (dir.size()>= 14 )
    {
        dir.sort();
        playerA14.loadMovie(dir.getPath(13));
        playerA14.setFrame(5);
    }
    if (dir.size()>= 15 )
    {
        dir.sort();
        playerA15.loadMovie(dir.getPath(14));
        playerA15.setFrame(5);
    }
    if (dir.size()>= 16 )
    {
        dir.sort();
        playerA16.loadMovie(dir.getPath(15));
        playerA16.setFrame(5);
    }
//--------------------------
    if (dir.size()>= 17 )
    {
        dir.sort();
        playerB01.loadMovie(dir.getPath(17-1));
        playerB01.setFrame(5);
    }
    if (dir.size()>= 18 )
    {
        dir.sort();
        playerB02.loadMovie(dir.getPath(18-1));
        playerB02.setFrame(5);
    }
    if (dir.size()>= 19 )
    {
        dir.sort();
        playerB03.loadMovie(dir.getPath(19-1));
        playerB03.setFrame(5);
    }
    if (dir.size()>= 20 )
    {
        dir.sort();
        playerB04.loadMovie(dir.getPath(20-1));
        playerB04.setFrame(5);
    }
    if (dir.size()>= 21 )
    {
        dir.sort();
        playerB05.loadMovie(dir.getPath(21-1));
        playerB05.setFrame(5);
    }
    if (dir.size()>= 22 )
    {
        dir.sort();
        playerB06.loadMovie(dir.getPath(22-1));
        playerB06.setFrame(5);
    }
    if (dir.size()>= 23 )
    {
        dir.sort();
        playerB07.loadMovie(dir.getPath(23-1));
        playerB07.setFrame(5);
    }
    if (dir.size()>= 24 )
    {
        dir.sort();
        playerB08.loadMovie(dir.getPath(24-1));
        playerB08.setFrame(5);
    }
//        if (dir.size()>= 25 ){
//        dir.sort();
//        playerB09.loadMovie(dir.getPath(25-1));
//        playerB09.setFrame(5);
//        }
//        if (dir.size()>= 26 ){
//        dir.sort();
//        playerB10.loadMovie(dir.getPath(26-1));
//        playerB10.setFrame(5);
//        }
//        if (dir.size()>= 27 ){
//        dir.sort();
//        playerB11.loadMovie(dir.getPath(27-1));
//        playerB11.setFrame(5);
//        }
//        if (dir.size()>= 28 ){
//        dir.sort();
//        playerB12.loadMovie(dir.getPath(28-1));
//        playerB12.setFrame(5);
//        }
//        if (dir.size()>= 29 ){
//        dir.sort();
//        playerB13.loadMovie(dir.getPath(29-1));
//        playerB13.setFrame(5);
//        }
//        if (dir.size()>= 30 ){
//        dir.sort();
//        playerB14.loadMovie(dir.getPath(30-1));
//        playerB14.setFrame(5);
//        }
//        if (dir.size()>= 31 ){
//        dir.sort();
//        playerB15.loadMovie(dir.getPath(31-1));
//        playerB15.setFrame(5);
//        }
//        if (dir.size()>= 32 ){
//        dir.sort();
//        playerB16.loadMovie(dir.getPath(32-1));
//        playerB16.setFrame(5);
//        }



//--------------------------
    Lect1    =   1;
    Sel1 =   1;
    E   =   0;
    F   =   0;
    Lect2    =   2;
    Sel2 =   2;
    G   =Larg;
    H   =0;

    Lect3    =  3;
    Sel3 =   3;
    I   =   2*Larg;
    J   =   0;

    Lect4    =   4;
    Sel4 =  4;
    K   =   3*Larg;
    L   =   0  ;

    Lect5    =   5;
    Sel5 =  5;
    M   =   4*Larg;
    N   =   0  ;

    Lect1    =   1;
    Sel1 =   1;
    E   =   0;
    F   =   0;

    Sel1=0;
    Sel2=0;
    Sel3=0;
    Sel4=0;
    Sel5=0;


    //Font-----------------------------------
    ofTrueTypeFont::setGlobalDpi(72);
    verdana14.loadFont("verdana.ttf", 12, true, true);
    verdana14.setLineHeight(18.0f);
    verdana14.setLetterSpacing(1.037);
}
void testApp::setupGUI1()
{
//    gui->addWidgetDown(new ofxUIToggle(20*1.5, 20*1.5,  false, "caché"));
    gui = new ofxUIScrollableCanvas(1000,20,200,360);
//    gui->setScrollAreaToScreen();

    gui->setScrollableDirections(false, true);
//    ofxUICanvas *gui = new ofxUICanvas(1280+20,0+20,160,720);
    gui->setName("gui5");

    float dim =20;
    float xInit = OFX_UI_GLOBAL_WIDGET_SPACING;
    float length = 160-xInit;

    gui->addSpacer(length-xInit, 1);
    string path = "v/";
    ofDirectory dir(path);
//        dir.allowExt("mov");
    dir.listDir();
    for(int i = 0; i < dir.numFiles(); i++)
    {
        ofLogNotice(dir.getPath(i));
        gui->addWidgetDown(new ofxUIButton(dim*0.5, dim*0.5, false, dir.getPath(i)));
        gui->addSpacer(length-xInit+20, 0);


    }


    ofAddListener(gui->newGUIEvent, this, &testApp::guiEvent);


//    gui->autoSizeToFitWidgets();
    gui->getRect()->setHeight(3000);


//add gui to a c++ stl vector
    guis.push_back(gui);
    //add gui to a c++ ttings();stl map
    guihash["1"] = gui;
    ofAddListener(gui->newGUIEvent,this,&testApp::guiEvent);




}
void testApp::setupGUI2()
{
//    gui->addWidgetDown(new ofxUIToggle(20*1.5, 20*1.5,  false, "caché"));
    gui1 = new ofxUICanvas(980,0,220,380);
//    gui->setScrollAreaToScreen();


    gui1->setName("gui6");

    float dim =20;
    float xInit = OFX_UI_GLOBAL_WIDGET_SPACING;
    float length = 160-xInit;

    gui1->addWidgetDown(new ofxUIToggle(dim*0.5, dim*0.5,  false, "librairie"));




//add gui to a c++ stl vector
    guis.push_back(gui1);
    //add gui to a c++ ttings();stl map
    guihash["1"] = gui1;
    ofAddListener(gui1->newGUIEvent,this,&testApp::guiEvent);




}
////--------------------------------------------------------------
void testApp::update()
{
    counter += 1;

    if(counter  > TotalV)
    {
        counter  =   0;
    }

    playerA01.update();
    playerA02.update();
    playerA03.update();
    playerA04.update();
    playerA05.update();
    playerA06.update();
    playerA07.update();
    playerA08.update();

    playerA09.update();
    playerA10.update();
    playerA11.update();
    playerA12.update();
    playerA13.update();
    playerA14.update();
    playerA15.update();
    playerA16.update();
//-----------------------------------
    playerB01.update();
    playerB02.update();
    playerB03.update();
    playerB04.update();
    playerB05.update();
    playerB06.update();
    playerB07.update();
    playerB08.update();

//        playerB09.update();
//        playerB10.update();
//        playerB11.update();
//        playerB12.update();
//        playerB13.update();
//        playerB14.update();
//        playerB15.update();
//        playerB16.update();
//-----------------------------------

    //--------------------------------------------------------------Osc hide old messages
//	for(int i = 0; i < NUM_MSG_STRINGS; i++){
//		if(timers[i] < ofGetElapsedTimef()){
//			msg_strings[i] = "";
//		}
//	}

//--------------------------------------------------------------Osc check for waiting messages
    while(receiver.hasWaitingMessages())
    {
        // get the next message
        ofxOscMessage m;
        receiver.getNextMessage(&m);

        cout<<m.getAddress()<<" "<<m.getArgAsInt32(0)<<endl;

        if(m.getAddress() == "/R_Open1")
        {
            dir.listDir(dossierV);
            dir.allowExt("mov");
            dir.sort();
            Lect=ofRandom(5)+1;
            cout<<"Lect--"<<Lect<<endl;
            if(Lect==1)
            {
                Lect1=1;
                Sel1 = ofRandom(dir.size());
            }
            if(Lect==2)
            {
                Lect2=1;
                Sel2 = ofRandom(dir.size());
            }
            if(Lect==3)
            {
                Lect3=1;
                Sel3 = ofRandom(dir.size());
            }
            if(Lect==4)
            {
                Lect4=1;
                Sel4 = ofRandom(dir.size());
            }
            if(Lect==5)
            {
                Lect5=1;
                Sel5 = ofRandom(dir.size());
            }

        }


        if(m.getAddress() == "/R_Open2")
        {
            dir.listDir(dossierV);
            dir.allowExt("mov");
            dir.sort();
            {
                Lect1=1;
                Sel1 = ofRandom(dir.size());
                Lect2=1;
                Sel2 = ofRandom(dir.size());
                Lect3=1;
                Sel3 = ofRandom(dir.size());
                Lect4=1;
                Sel4 = ofRandom(dir.size());
                Lect5=1;
                Sel5 = ofRandom(dir.size());
//        Lect4=0;
            }
        }
//                else{
//          Lect4=0;
//		}
    }



    if((Lect1==1) && (Sel1==1) )
    {
        E=0*Larg;
        F=0;

    }
    if((Sel1==2)&& (Lect1==1) )
    {
        E=1*Larg;
        F=0;
    }
    if((Sel1==3)&& (Lect1==1) )
    {
        E=2*Larg;
        F=0;
    }
    if((Sel1==4)&& (Lect1==1) )
    {
        E=3*Larg;
        F=0;
    }
    if((Sel1==5)&& (Lect1==1) )
    {
        E=4*Larg;
        F=0;
    }
    if((Sel1==6)&& (Lect1==1) )
    {
        E=5*Larg;
        F=0;
    }
    if((Sel1==7)&& (Lect1==1) )
    {
        E=6*Larg;
        F=0;
    }
    if((Sel1==8)&& (Lect1==1) )
    {
        E=7*Larg;
        F=0;
    }
    if((Sel1==9)&& (Lect1==1) )
    {
        E=0*Larg;
        F=1*Haut;
    }
    if((Sel1==10)&& (Lect1==1) )
    {
        E=1*Larg;
        F=1*Haut;
    }
    if((Sel1==11)&& (Lect1==1) )
    {
        E=2*Larg;
        F=1*Haut;
    }
    if((Sel1==12)&& (Lect1==1) )
    {
        E=3*Larg;
        F=1*Haut;
    }
    if((Sel1==13)&& (Lect1==1) )
    {
        E=4*Larg;
        F=1*Haut;
    }
    if((Sel1==14)&& (Lect1==1) )
    {
        E=5*Larg;
        F=1*Haut;
    }
    if((Sel1==15)&& (Lect1==1) )
    {
        E=6*Larg;
        F=1*Haut;
    }
    if((Sel1==16)&& (Lect1==1) )
    {
        E=7*Larg;
        F=1*Haut;
    }
    //------------------------

    if   ((Sel1==17) && (Lect1==1))
    {
        E=0*Larg;
        F=2*Haut;

    }
    if((Sel1==18)&& (Lect1==1) )
    {
        E=1*Larg;
        F=2*Haut;
    }
    if((Sel1==19)&& (Lect1==1) )
    {
        E=2*Larg;
        F=2*Haut;
    }
    if((Sel1==20)&& (Lect1==1) )
    {
        E=3*Larg;
        F=2*Haut;
    }
    if((Sel1==21)&& (Lect1==1) )
    {
        E=4*Larg;
        F=2*Haut;
    }
    if((Sel1==22)&& (Lect1==1) )
    {
        E=5*Larg;
        F=2*Haut;
    }
    if((Sel1==23)&& (Lect1==1) )
    {
        E=6*Larg;
        F=2*Haut;
    }
    if((Sel1==24)&& (Lect1==1) )
    {
        E=7*Larg;
        F=2*Haut;
    }
//        if((Sel1==25)&& (Lect1==1) ){
//        E=0;
//        F=3*Haut;
//        }
//        if((Sel1==26)&& (Lect1==1) ){
//        E=1*Larg;
//        F=3*Haut;
//        }
//        if((Sel1==27)&& (Lect1==1) ){
//        E=2*Larg;
//        F=3*Haut;
//        }
//        if((Sel1==28)&& (Lect1==1) ){
//        E=3*Larg;
//        F=3*Haut;
//        }
//        if((Sel1==29)&& (Lect1==1) ){
//        E=4*Larg;
//        F=3*Haut;
//        }
//        if((Sel1==30)&& (Lect1==1) ){
//        E=5*Larg;
//        F=3*Haut;
//        }
//        if((Sel1==31)&& (Lect1==1) ){
//        E=6*Larg;
//        F=3*Haut;
//        }
//        if((Sel1==32)&& (Lect1==1) ){
//        E=7*Larg;
//        F=3*Haut;
//        }


    //------------------------
    if((Sel2==1) && (Lect2==1) )
    {
        G=0*Larg;
        H=0;

    }
    if((Sel2==2)&& (Lect2==1) )
    {
        G=1*Larg;
        H=0;
    }
    if((Sel2==3)&& (Lect2==1) )
    {
        G=2*Larg;
        H=0;
    }
    if((Sel2==4)&& (Lect2==1) )
    {
        G=3*Larg;
        H=0;
    }
    if((Sel2==5)&& (Lect2==1) )
    {
        G=4*Larg;
        H=0;
    }
    if((Sel2==6)&& (Lect2==1) )
    {
        G=5*Larg;
        H=0;
    }
    if((Sel2==7)&& (Lect2==1) )
    {
        G=6*Larg;
        H=0;
    }
    if((Sel2==8)&& (Lect2==1) )
    {
        G=7*Larg;
        H=0*Haut;
    }
    if((Sel2==9)&& (Lect2==1) )
    {
        G=0;
        H=1*Haut;
    }
    if((Sel2==10)&& (Lect2==1) )
    {
        G=1*Larg;
        H=1*Haut;
    }
    if((Sel2==11)&& (Lect2==1) )
    {
        G=2*Larg;
        H=1*Haut;
    }
    if((Sel2==12)&& (Lect2==1) )
    {
        G=3*Larg;
        H=1*Haut;
    }
    if((Sel2==13)&& (Lect2==1) )
    {
        G=4*Larg;
        H=1*Haut;
    }
    if((Sel2==14)&& (Lect2==1) )
    {
        G=5*Larg;
        H=1*Haut;
    }
    if((Sel2==15)&& (Lect2==1) )
    {
        G=6*Larg;
        H=1*Haut;
    }
    if((Sel2==16)&& (Lect2==1) )
    {
        G=7*Larg;
        H=1*Haut;
    }
    //------------------------

    if   ((Sel2==17) && (Lect2==1))
    {
        G=0;
        H=2*Haut;

    }
    if((Sel2==18)&& (Lect2==1) )
    {
        G=1*Larg;
        H=2*Haut;
    }
    if((Sel2==19)&& (Lect2==1) )
    {
        G=2*Larg;
        H=2*Haut;
    }
    if((Sel2==20)&& (Lect2==1) )
    {
        G=3*Larg;
        H=2*Haut;
    }
    if((Sel2==21)&& (Lect2==1) )
    {
        G=4*Larg;
        H=2*Haut;
    }
    if((Sel2==22)&& (Lect2==1) )
    {
        G=5*Larg;
        H=2*Haut;
    }
    if((Sel2==23)&& (Lect2==1) )
    {
        G=6*Larg;
        H=2*Haut;
    }
    if((Sel2==24)&& (Lect2==1) )
    {
        G=7*Larg;
        H=2*Haut;
    }
//        if((Sel2==25)&& (Lect2==1) ){
//        G=0;
//        H=3*Haut;
//        }
//        if((Sel2==26)&& (Lect2==1) ){
//        G=1*Larg;
//        H=3*Haut;
//        }
//        if((Sel2==27)&& (Lect2==1) ){
//        G=2*Larg;
//        H=3*Haut;
//        }
//        if((Sel2==28)&& (Lect2==1) ){
//        G=3*Larg;
//        H=3*Haut;
//        }
//        if((Sel2==29)&& (Lect2==1) ){
//        G=4*Larg;
//        H=3*Haut;
//        }
//        if((Sel2==30)&& (Lect2==1) ){
//        G=5*Larg;
//        H=3*Haut;
//        }
//        if((Sel2==31)&& (Lect2==1) ){
//        G=6*Larg;
//        H=3*Haut;
//        }
//        if((Sel2==32)&& (Lect2==1) ){
//        G=7*Larg;
//        H=3*Haut;
//        }
    //------------------------
    if((Lect3==1) && (Sel3==1) )
    {
        I=0;
        J=0;

    }
    if((Sel3==2)&& (Lect3==1) )
    {
        I=1*Larg;
        J=0;
    }
    if((Sel3==3)&& (Lect3==1) )
    {
        I=2*Larg;
        J=0;
    }
    if((Sel3==4)&& (Lect3==1) )
    {
        I=3*Larg;
        J=0;
    }
    if((Sel3==5)&& (Lect3==1) )
    {
        I=4*Larg;
        J=0;
    }
    if((Sel3==6)&& (Lect3==1) )
    {
        I=5*Larg;
        J=0;
    }
    if((Sel3==7)&& (Lect3==1) )
    {
        I=6*Larg;
        J=0;
    }
    if((Sel3==8)&& (Lect3==1) )
    {
        I=7*Larg;
        J=0;
    }
    if((Sel3==9)&& (Lect3==1) )
    {
        I=0;
        J=1*Haut;
    }
    if((Sel3==10)&& (Lect3==1) )
    {
        I=1*Larg;
        J=1*Haut;
    }
    if((Sel3==11)&& (Lect3==1) )
    {
        I=2*Larg;
        J=1*Haut;
    }
    if((Sel3==12)&& (Lect3==1) )
    {
        I=3*Larg;
        J=1*Haut;
    }
    if((Sel3==13)&& (Lect3==1) )
    {
        I=4*Larg;
        J=1*Haut;
    }
    if((Sel3==14)&& (Lect3==1) )
    {
        I=5*Larg;
        J=1*Haut;
    }
    if((Sel3==15)&& (Lect3==1) )
    {
        I=6*Larg;
        J=1*Haut;
    }
    if((Sel3==16)&& (Lect3==1) )
    {
        I=7*Larg;
        J=1*Haut;
    }
    //------------------------

    if   ((Sel3==17) && (Lect3==1))
    {
        I=0;
        J=2*Haut;

    }
    if((Sel3==18)&& (Lect3==1) )
    {
        I=1*Larg;
        J=2*Haut;
    }
    if((Sel3==19)&& (Lect3==1) )
    {
        I=2*Larg;
        J=2*Haut;
    }
    if((Sel3==20)&& (Lect3==1) )
    {
        I=3*Larg;
        J=2*Haut;
    }
    if((Sel3==21)&& (Lect3==1) )
    {
        I=4*Larg;
        J=2*Haut;
    }
    if((Sel3==22)&& (Lect3==1) )
    {
        I=5*Larg;
        J=2*Haut;
    }
    if((Sel3==23)&& (Lect3==1) )
    {
        I=6*Larg;
        J=2*Haut;
    }
    if((Sel3==24)&& (Lect3==1) )
    {
        I=7*Larg;
        J=2*Haut;
    }
//        if((Sel3==25)&& (Lect3==1) ){
//        I=0;
//        J=3*Haut;
//        }
//        if((Sel3==26)&& (Lect3==1) ){
//        I=1*Larg;
//        J=3*Haut;
//        }
//        if((Sel3==27)&& (Lect3==1) ){
//        I=2*Larg;
//        J=3*Haut;
//        }
//        if((Sel3==28)&& (Lect3==1) ){
//        I=3*Larg;
//        J=3*Haut;
//        }
//        if((Sel3==29)&& (Lect3==1) ){
//        I=4*Larg;
//        J=3*Haut;
//        }
//        if((Sel3==30)&& (Lect3==1) ){
//        I=5*Larg;
//        J=3*Haut;
//        }
//        if((Sel3==31)&& (Lect3==1) ){
//        I=6*Larg;
//        J=3*Haut;
//        }
//        if((Sel3==32)&& (Lect3==1) ){
//        I=7*Larg;
//        J=3*Haut;
//        }
    //------------------------
    if((Lect4==1) && (Sel4==1) )
    {
        K=0;
        L=0;

    }
    if((Sel4==2)&& (Lect4==1) )
    {
        K=1*Larg;
        L=0;
    }
    if((Sel4==3)&& (Lect4==1) )
    {
        K=2*Larg;
        L=0;
    }
    if((Sel4==4)&& (Lect4==1) )
    {
        K=3*Larg;
        L=0;
    }
    if((Sel4==5)&& (Lect4==1) )
    {
        K=4*Larg;
        L=0;
    }
    if((Sel4==6)&& (Lect4==1) )
    {
        K=5*Larg;
        L=0;
    }
    if((Sel4==7)&& (Lect4==1) )
    {
        K=6*Larg;
        L=0;
    }
    if((Sel4==8)&& (Lect4==1) )
    {
        K=7*Larg;
        L=0;
    }
    if((Sel4==9)&& (Lect4==1) )
    {
        K=0;
        L=1*Haut;
    }
    if((Sel4==10)&& (Lect4==1) )
    {
        K=1*Larg;
        L=1*Haut;
    }
    if((Sel4==11)&& (Lect4==1) )
    {
        K=2*Larg;
        L=1*Haut;
    }
    if((Sel4==12)&& (Lect4==1) )
    {
        K=3*Larg;
        L=1*Haut;
    }
    if((Sel4==13)&& (Lect4==1) )
    {
        K=4*Larg;
        L=1*Haut;
    }
    if((Sel4==14)&& (Lect4==1) )
    {
        K=5*Larg;
        L=1*Haut;
    }
    if((Sel4==15)&& (Lect4==1) )
    {
        K=6*Larg;
        L=1*Haut;
    }
    if((Sel4==16)&& (Lect4==1) )
    {
        K=7*Larg;
        L=1*Haut;
    }
    //------------------------

    if   ((Sel4==17) && (Lect4==1))
    {
        K=0;
        L=2*Haut;

    }
    if((Sel4==18)&& (Lect4==1) )
    {
        K=1*Larg;
        L=2*Haut;
    }
    if((Sel4==19)&& (Lect4==1) )
    {
        K=2*Larg;
        L=2*Haut;
    }
    if((Sel4==20)&& (Lect4==1) )
    {
        K=3*Larg;
        L=2*Haut;
    }
    if((Sel4==21)&& (Lect4==1) )
    {
        K=4*Larg;
        L=2*Haut;
    }
    if((Sel4==22)&& (Lect4==1) )
    {
        K=5*Larg;
        L=2*Haut;
    }
    if((Sel4==23)&& (Lect4==1) )
    {
        K=6*Larg;
        L=2*Haut;
    }
    if((Sel4==24)&& (Lect4==1) )
    {
        K=7*Larg;
        L=2*Haut;
    }
//        if((Sel4==25)&& (Lect4==1) ){
//        K=0;
//        L=3*Haut;
//        }
//        if((Sel4==26)&& (Lect4==1) ){
//        K=1*Larg;
//        L=3*Haut;
//        }
//        if((Sel4==27)&& (Lect4==1) ){
//        K=2*Larg;
//        L=3*Haut;
//        }
//        if((Sel4==28)&& (Lect4==1) ){
//        K=3*Larg;
//        L=3*Haut;
//        }
//        if((Sel4==29)&& (Lect4==1) ){
//        K=4*Larg;
//        L=3*Haut;
//        }
//        if((Sel4==30)&& (Lect4==1) ){
//        K=5*Larg;
//        L=3*Haut;
//        }
//        if((Sel4==31)&& (Lect4==1) ){
//        K=6*Larg;
//        L=3*Haut;
//        }
//        if((Sel4==32)&& (Lect4==1) ){
//        K=7*Larg;
//        L=3*Haut;
//        }
    //------------------------        //------------------------
    if((Lect5==1) && (Sel5==1) )
    {
        M=0;
        N=0;

    }
    if((Sel5==2)&& (Lect5==1) )
    {
        M=1*Larg;
        N=0;
    }
    if((Sel5==3)&& (Lect5==1) )
    {
        M=2*Larg;
        N=0;
    }
    if((Sel5==4)&& (Lect5==1) )
    {
        M=3*Larg;
        N=0;
    }
    if((Sel5==5)&& (Lect5==1) )
    {
        M=4*Larg;
        N=0;
    }
    if((Sel5==6)&& (Lect5==1) )
    {
        M=5*Larg;
        N=0;
    }
    if((Sel5==7)&& (Lect5==1) )
    {
        M=6*Larg;
        N=0;
    }
    if((Sel5==8)&& (Lect5==1) )
    {
        M=7*Larg;
        N=0;
    }
    if((Sel5==9)&& (Lect5==1) )
    {
        M=0;
        N=1*Haut;
    }
    if((Sel5==10)&& (Lect5==1) )
    {
        M=1*Larg;
        N=1*Haut;
    }
    if((Sel5==11)&& (Lect5==1) )
    {
        M=2*Larg;
        N=1*Haut;
    }
    if((Sel5==12)&& (Lect5==1) )
    {
        M=3*Larg;
        N=1*Haut;
    }
    if((Sel5==13)&& (Lect5==1) )
    {
        M=4*Larg;
        N=1*Haut;
    }
    if((Sel5==14)&& (Lect5==1) )
    {
        M=5*Larg;
        N=1*Haut;
    }
    if((Sel5==15)&& (Lect5==1) )
    {
        M=6*Larg;
        N=1*Haut;
    }
    if((Sel5==16)&& (Lect5==1) )
    {
        M=7*Larg;
        N=1*Haut;
    }
    //------------------------

    if   ((Sel5==17) && (Lect5==1))
    {
        M=0;
        N=2*Haut;

    }
    if((Sel5==18)&& (Lect5==1) )
    {
        M=1*Larg;
        N=2*Haut;
    }
    if((Sel5==19)&& (Lect5==1) )
    {
        M=2*Larg;
        N=2*Haut;
    }
    if((Sel5==20)&& (Lect5==1) )
    {
        M=3*Larg;
        N=2*Haut;
    }
    if((Sel5==21)&& (Lect5==1) )
    {
        M=4*Larg;
        N=2*Haut;
    }
    if((Sel5==22)&& (Lect5==1) )
    {
        M=5*Larg;
        N=2*Haut;
    }
    if((Sel5==23)&& (Lect5==1) )
    {
        M=6*Larg;
        N=2*Haut;
    }
    if((Sel5==24)&& (Lect5==1) )
    {
        M=7*Larg;
        N=2*Haut;
    }
//        if((Sel5==25)&& (Lect5==1) ){
//        M=0;
//        N=3*Haut;
//        }
//        if((Sel5==26)&& (Lect5==1) ){
//        M=1*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==27)&& (Lect5==1) ){
//        M=2*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==28)&& (Lect5==1) ){
//        M=3*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==29)&& (Lect5==1) ){
//        M=4*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==30)&& (Lect5==1) ){
//        M=5*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==31)&& (Lect5==1) ){
//        M=6*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==32)&& (Lect5==1) ){
//        M=7*Larg;
//        N=3*Haut;
//        }
    //------------------------
    dir.listDir(dossierV);
    dir.allowExt("mov");

    dir.sort();
    if((Lect1==1) && (Sel1!=0) && (dir.size()>=Sel1 ))
    {
        ofxOscMessage m;
        m.setAddress("/Open1");
        m.addFloatArg( Sel1 );
        sender.sendMessage(m);
        Sel1=0;
    }
    if((Lect2==1) && (Sel2!=0) && (dir.size()>= Sel2 ))
    {
        ofxOscMessage m;
        m.setAddress("/Open2");
        m.addFloatArg( Sel2 );
        sender.sendMessage(m);
        Sel2=0;
    }
    if((Lect3==1) && (Sel3!=0) && (dir.size()>= Sel3 ))
    {
        ofxOscMessage m;
        m.setAddress("/Open3");
        m.addFloatArg( Sel3 );
        sender.sendMessage(m);
        Sel3=0;
    }
    if((Lect4==1) && (Sel4!=0) && (dir.size()>= Sel4 ))
    {
        ofxOscMessage m;
        m.setAddress("/Open4");
        m.addFloatArg( Sel4 );
        sender.sendMessage(m);
        Sel4=0;
    }

    if((Lect5==1) && (Sel5!=0) && (dir.size()>= Sel5 ))
    {
        ofxOscMessage m;
        m.setAddress("/Open5");
        m.addFloatArg( Sel5 );
        sender.sendMessage(m);
        Sel5=0;
    }

    //------------------------
//-------------------------------------------
//cout<<"bClic"<<bClic<<endl;
}

//}

//--------------------------------------------------------------
void testApp::draw()
{
    ofSetColor(255, 255, 255);

    playerA01.draw(0+20,0+20,Larg,Haut);
    playerA02.draw(Larg+20,0+20,Larg,Haut);
    playerA03.draw(Larg*2+20,0+20,Larg,Haut);
    playerA04.draw(Larg*3+20,0+20,Larg,Haut);
    playerA05.draw(Larg*4+20,0+20,Larg,Haut);
    playerA06.draw(Larg*5+20,0+20,Larg,Haut);
    playerA07.draw(Larg*6+20,0+20,Larg,Haut);
    playerA08.draw(Larg*7+20,0+20,Larg,Haut);

    playerA09.draw(0+20,Haut+20,Larg,Haut);
    playerA10.draw(Larg+20,Haut+20,Larg,Haut);
    playerA11.draw(Larg*2+20,Haut+20,Larg,Haut);
    playerA12.draw(Larg*3+20,Haut+20,Larg,Haut);
    playerA13.draw(Larg*4+20,Haut+20,Larg,Haut);
    playerA14.draw(Larg*5+20,Haut+20,Larg,Haut);
    playerA15.draw(Larg*6+20,Haut+20,Larg,Haut);
    playerA16.draw(Larg*7+20,Haut+20,Larg,Haut);

    playerB01.draw(0+20,Haut*2+20,Larg,Haut);
    playerB02.draw(Larg+20,Haut*2+20,Larg,Haut);
    playerB03.draw(Larg*2+20,Haut*2+20,Larg,Haut);
    playerB04.draw(Larg*3+20,Haut*2+20,Larg,Haut);
    playerB05.draw(Larg*4+20,Haut*2+20,Larg,Haut);
    playerB06.draw(Larg*5+20,Haut*2+20,Larg,Haut);
    playerB07.draw(Larg*6+20,Haut*2+20,Larg,Haut);
    playerB08.draw(Larg*7+20,Haut*2+20,Larg,Haut);

//        playerB09.draw(0+20,Haut*3+20,Larg,Haut);
//        playerB10.draw(Larg+20,Haut*3+20,Larg,Haut);
//        playerB11.draw(Larg*2+20,Haut*3+20,Larg,Haut);
//        playerB12.draw(Larg*3+20,Haut*3+20,Larg,Haut);
//        playerB13.draw(Larg*4+20,Haut*3+20,Larg,Haut);
//        playerB14.draw(Larg*5+20,Haut*3+20,Larg,Haut);
//        playerB15.draw(Larg*6+20,Haut*3+20,Larg,Haut);
//        playerB16.draw(Larg*7+20,Haut*3+20,Larg,Haut);

    if((Lect1==1) && (Sel1==1) )
    {
        E=0;
        F=0;

    }
    if((Sel1==2)&& (Lect1==1) )
    {
        E=Larg;
        F=0;
    }
    if((Sel1==3)&& (Lect1==1) )
    {
        E=2*Larg;
        F=0;
    }
    if((Sel1==4)&& (Lect1==1) )
    {
        E=3*Larg;
        F=0;
    }
    if((Sel1==5)&& (Lect1==1) )
    {
        E=4*Larg;
        F=0;
    }
    if((Sel1==6)&& (Lect1==1) )
    {
        E=5*Larg;
        F=0;
    }
    if((Sel1==7)&& (Lect1==1) )
    {
        E=6*Larg;
        F=0;
    }
    if((Sel1==8)&& (Lect1==1) )
    {
        E=7*Larg;
        F=0;
    }
    if((Sel1==9)&& (Lect1==1) )
    {
        E=0;
        F=1*Haut;
    }
    if((Sel1==10)&& (Lect1==1) )
    {
        E=Larg;
        F=1*Haut;
    }
    if((Sel1==11)&& (Lect1==1) )
    {
        E=2*Larg;
        F=1*Haut;
    }
    if((Sel1==12)&& (Lect1==1) )
    {
        E=3*Larg;
        F=1*Haut;
    }
    if((Sel1==13)&& (Lect1==1) )
    {
        E=4*Larg;
        F=1*Haut;
    }
    if((Sel1==14)&& (Lect1==1) )
    {
        E=5*Larg;
        F=1*Haut;
    }
    if((Sel1==15)&& (Lect1==1) )
    {
        E=6*Larg;
        F=1*Haut;
    }
    if((Sel1==16)&& (Lect1==1) )
    {
        E=7*Larg;
        F=1*Haut;
    }
    //------------------------

    if   ((Sel1==17) && (Lect1==1))
    {
        E=0;
        F=2*Haut;

    }
    if((Sel1==18)&& (Lect1==1) )
    {
        E=Larg;
        F=2*Haut;
    }
    if((Sel1==19)&& (Lect1==1) )
    {
        E=2*Larg;
        F=2*Haut;
    }
    if((Sel1==20)&& (Lect1==1) )
    {
        E=3*Larg;
        F=2*Haut;
    }
    if((Sel1==21)&& (Lect1==1) )
    {
        E=4*Larg;
        F=2*Haut;
    }
    if((Sel1==22)&& (Lect1==1) )
    {
        E=5*Larg;
        F=2*Haut;
    }
    if((Sel1==23)&& (Lect1==1) )
    {
        E=6*Larg;
        F=2*Haut;
    }
    if((Sel1==24)&& (Lect1==1) )
    {
        E=7*Larg;
        F=2*Haut;
    }
//        if((Sel1==25)&& (Lect1==1) ){
//        E=0;
//        F=2Haut;
//        }
//        if((Sel1==26)&& (Lect1==1) ){
//        E=Larg;
//        F=2Haut;
//        }
//        if((Sel1==27)&& (Lect1==1) ){
//        E=2*Larg;
//        F=2Haut;
//        }
//        if((Sel1==28)&& (Lect1==1) ){
//        E=3*Larg;
//        F=2Haut;
//        }
//        if((Sel1==29)&& (Lect1==1) ){
//        E=4*Larg;
//        F=2Haut;
//        }
//        if((Sel1==30)&& (Lect1==1) ){
//        E=5*Larg;
//        F=2Haut;
//        }
//        if((Sel1==31)&& (Lect1==1) ){
//        E=6*Larg;
//        F=2Haut;
//        }
//        if((Sel1==32)&& (Lect1==1) ){
//        E=7*Larg;
//        F=2Haut;
//        }


    //------------------------
    if((Sel2==1) && (Lect2==1) )
    {
        G=0;
        H=0;

    }
    if((Sel2==2)&& (Lect2==1) )
    {
        G=Larg;
        H=0;
    }
    if((Sel2==3)&& (Lect2==1) )
    {
        G=2*Larg;
        H=0;
    }
    if((Sel2==4)&& (Lect2==1) )
    {
        G=3*Larg;
        H=0;
    }
    if((Sel2==5)&& (Lect2==1) )
    {
        G=4*Larg;
        H=0;
    }
    if((Sel2==6)&& (Lect2==1) )
    {
        G=5*Larg;
        H=0;
    }
    if((Sel2==7)&& (Lect2==1) )
    {
        G=6*Larg;
        H=0;
    }
    if((Sel2==8)&& (Lect2==1) )
    {
        G=7*Larg;
        H=0;
    }
    if((Sel2==9)&& (Lect2==1) )
    {
        G=0;
        H=1*Haut;
    }
    if((Sel2==10)&& (Lect2==1) )
    {
        G=Larg;
        H=1*Haut;
    }
    if((Sel2==11)&& (Lect2==1) )
    {
        G=2*Larg;
        H=1*Haut;
    }
    if((Sel2==12)&& (Lect2==1) )
    {
        G=3*Larg;
        H=1*Haut;
    }
    if((Sel2==13)&& (Lect2==1) )
    {
        G=4*Larg;
        H=1*Haut;
    }
    if((Sel2==14)&& (Lect2==1) )
    {
        G=5*Larg;
        H=1*Haut;
    }
    if((Sel2==15)&& (Lect2==1) )
    {
        G=6*Larg;
        H=1*Haut;
    }
    if((Sel2==16)&& (Lect2==1) )
    {
        G=7*Larg;
        H=1*Haut;
    }
    //------------------------

    if   ((Sel2==17) && (Lect2==1))
    {
        G=0;
        H=2*Haut;

    }
    if((Sel2==18)&& (Lect2==1) )
    {
        G=Larg;
        H=2*Haut;
    }
    if((Sel2==19)&& (Lect2==1) )
    {
        G=2*Larg;
        H=2*Haut;
    }
    if((Sel2==20)&& (Lect2==1) )
    {
        G=3*Larg;
        H=2*Haut;
    }
    if((Sel2==21)&& (Lect2==1) )
    {
        G=4*Larg;
        H=2*Haut;
    }
    if((Sel2==22)&& (Lect2==1) )
    {
        G=5*Larg;
        H=2*Haut;
    }
    if((Sel2==23)&& (Lect2==1) )
    {
        G=6*Larg;
        H=2*Haut;
    }
    if((Sel2==24)&& (Lect2==1) )
    {
        G=7*Larg;
        H=2*Haut;
    }
//        if((Sel2==25)&& (Lect2==1) ){
//        G=0;
//        H=2Haut;
//        }
//        if((Sel2==26)&& (Lect2==1) ){
//        G=Larg;
//        H=2Haut;
//        }
//        if((Sel2==27)&& (Lect2==1) ){
//        G=2*Larg;
//        H=2Haut;
//        }
//        if((Sel2==28)&& (Lect2==1) ){
//        G=3*Larg;
//        H=2Haut;
//        }
//        if((Sel2==29)&& (Lect2==1) ){
//        G=4*Larg;
//        H=2Haut;
//        }
//        if((Sel2==30)&& (Lect2==1) ){
//        G=5*Larg;
//        H=2Haut;
//        }
//        if((Sel2==31)&& (Lect2==1) ){
//        G=6*Larg;
//        H=2Haut;
//        }
//        if((Sel2==32)&& (Lect2==1) ){
//        G=7*Larg;
//        H=2Haut;
//        }
    //------------------------
    if((Lect3==1) && (Sel3==1) )
    {
        I=0;
        J=0;

    }
    if((Sel3==2)&& (Lect3==1) )
    {
        I=Larg;
        J=0;
    }
    if((Sel3==3)&& (Lect3==1) )
    {
        I=2*Larg;
        J=0;
    }
    if((Sel3==4)&& (Lect3==1) )
    {
        I=3*Larg;
        J=0;
    }
    if((Sel3==5)&& (Lect3==1) )
    {
        I=4*Larg;
        J=0;
    }
    if((Sel3==6)&& (Lect3==1) )
    {
        I=5*Larg;
        J=0;
    }
    if((Sel3==7)&& (Lect3==1) )
    {
        I=6*Larg;
        J=0;
    }
    if((Sel3==8)&& (Lect3==1) )
    {
        I=7*Larg;
        J=0;
    }
    if((Sel3==9)&& (Lect3==1) )
    {
        I=0;
        J=1*Haut;
    }
    if((Sel3==10)&& (Lect3==1) )
    {
        I=Larg;
        J=1*Haut;
    }
    if((Sel3==11)&& (Lect3==1) )
    {
        I=2*Larg;
        J=1*Haut;
    }
    if((Sel3==12)&& (Lect3==1) )
    {
        I=3*Larg;
        J=1*Haut;
    }
    if((Sel3==13)&& (Lect3==1) )
    {
        I=4*Larg;
        J=1*Haut;
    }
    if((Sel3==14)&& (Lect3==1) )
    {
        I=5*Larg;
        J=1*Haut;
    }
    if((Sel3==15)&& (Lect3==1) )
    {
        I=6*Larg;
        J=1*Haut;
    }
    if((Sel3==16)&& (Lect3==1) )
    {
        I=7*Larg;
        J=1*Haut;
    }
    //------------------------

    if   ((Sel3==17) && (Lect3==1))
    {
        I=0;
        J=2*Haut;

    }
    if((Sel3==18)&& (Lect3==1) )
    {
        I=Larg;
        J=2*Haut;
    }
    if((Sel3==19)&& (Lect3==1) )
    {
        I=2*Larg;
        J=2*Haut;
    }
    if((Sel3==20)&& (Lect3==1) )
    {
        I=3*Larg;
        J=2*Haut;
    }
    if((Sel3==21)&& (Lect3==1) )
    {
        I=4*Larg;
        J=2*Haut;
    }
    if((Sel3==22)&& (Lect3==1) )
    {
        I=5*Larg;
        J=2*Haut;
    }
    if((Sel3==23)&& (Lect3==1) )
    {
        I=6*Larg;
        J=2*Haut;
    }
    if((Sel3==24)&& (Lect3==1) )
    {
        I=7*Larg;
        J=2*Haut;
    }
//        if((Sel3==25)&& (Lect3==1) ){
//        I=0;
//        J=2Haut;
//        }
//        if((Sel3==26)&& (Lect3==1) ){
//        I=Larg;
//        J=2Haut;
//        }
//        if((Sel3==27)&& (Lect3==1) ){
//        I=2*Larg;
//        J=2Haut;
//        }
//        if((Sel3==28)&& (Lect3==1) ){
//        I=3*Larg;
//        J=2Haut;
//        }
//        if((Sel3==29)&& (Lect3==1) ){
//        I=4*Larg;
//        J=2Haut;
//        }
//        if((Sel3==30)&& (Lect3==1) ){
//        I=5*Larg;
//        J=2Haut;
//        }
//        if((Sel3==31)&& (Lect3==1) ){
//        I=6*Larg;
//        J=2Haut;
//        }
//        if((Sel3==32)&& (Lect3==1) ){
//        I=7*Larg;
//        J=2Haut;
//        }
    //------------------------
    if((Lect4==1) && (Sel4==1) )
    {
        K=0;
        L=0;

    }
    if((Sel4==2)&& (Lect4==1) )
    {
        K=Larg;
        L=0;
    }
    if((Sel4==3)&& (Lect4==1) )
    {
        K=2*Larg;
        L=0;
    }
    if((Sel4==4)&& (Lect4==1) )
    {
        K=3*Larg;
        L=0;
    }
    if((Sel4==5)&& (Lect4==1) )
    {
        K=4*Larg;
        L=0;
    }
    if((Sel4==6)&& (Lect4==1) )
    {
        K=5*Larg;
        L=0;
    }
    if((Sel4==7)&& (Lect4==1) )
    {
        K=6*Larg;
        L=0;
    }
    if((Sel4==8)&& (Lect4==1) )
    {
        K=7*Larg;
        L=0;
    }
    if((Sel4==9)&& (Lect4==1) )
    {
        K=0;
        L=1*Haut;
    }
    if((Sel4==10)&& (Lect4==1) )
    {
        K=Larg;
        L=1*Haut;
    }
    if((Sel4==11)&& (Lect4==1) )
    {
        K=2*Larg;
        L=1*Haut;
    }
    if((Sel4==12)&& (Lect4==1) )
    {
        K=3*Larg;
        L=1*Haut;
    }
    if((Sel4==13)&& (Lect4==1) )
    {
        K=4*Larg;
        L=1*Haut;
    }
    if((Sel4==14)&& (Lect4==1) )
    {
        K=5*Larg;
        L=1*Haut;
    }
    if((Sel4==15)&& (Lect4==1) )
    {
        K=6*Larg;
        L=1*Haut;
    }
    if((Sel4==16)&& (Lect4==1) )
    {
        K=7*Larg;
        L=1*Haut;
    }
    //------------------------

    if   ((Sel4==17) && (Lect4==1))
    {
        K=0;
        L=2*Haut;

    }
    if((Sel4==18)&& (Lect4==1) )
    {
        K=Larg;
        L=2*Haut;
    }
    if((Sel4==19)&& (Lect4==1) )
    {
        K=2*Larg;
        L=2*Haut;
    }
    if((Sel4==20)&& (Lect4==1) )
    {
        K=3*Larg;
        L=2*Haut;
    }
    if((Sel4==21)&& (Lect4==1) )
    {
        K=4*Larg;
        L=2*Haut;
    }
    if((Sel4==22)&& (Lect4==1) )
    {
        K=5*Larg;
        L=2*Haut;
    }
    if((Sel4==23)&& (Lect4==1) )
    {
        K=6*Larg;
        L=2*Haut;
    }
    if((Sel4==24)&& (Lect4==1) )
    {
        K=7*Larg;
        L=2*Haut;
    }
//        if((Sel4==25)&& (Lect4==1) ){
//        K=0;
//        L=2Haut;
//        }
//        if((Sel4==26)&& (Lect4==1) ){
//        K=Larg;
//        L=2Haut;
//        }
//        if((Sel4==27)&& (Lect4==1) ){
//        K=2*Larg;
//        L=2Haut;
//        }
//        if((Sel4==28)&& (Lect4==1) ){
//        K=3*Larg;
//        L=2Haut;
//        }
//        if((Sel4==29)&& (Lect4==1) ){
//        K=4*Larg;
//        L=2Haut;
//        }
//        if((Sel4==30)&& (Lect4==1) ){
//        K=5*Larg;
//        L=2Haut;
//        }
//        if((Sel4==31)&& (Lect4==1) ){
//        K=6*Larg;
//        L=2Haut;
//        }
//        if((Sel4==32)&& (Lect4==1) ){
//        K=7*Larg;
//        L=2Haut;
//        }
//        //------------------------

//------------------------
    if((Lect5==1) && (Sel5==1) )
    {
        M=0;
        N=0;

    }
    if((Sel5==2)&& (Lect5==1) )
    {
        M=1*Larg;
        N=0;
    }
    if((Sel5==3)&& (Lect5==1) )
    {
        M=2*Larg;
        N=0;
    }
    if((Sel5==4)&& (Lect5==1) )
    {
        M=3*Larg;
        N=0;
    }
    if((Sel5==5)&& (Lect5==1) )
    {
        M=4*Larg;
        N=0;
    }
    if((Sel5==6)&& (Lect5==1) )
    {
        M=5*Larg;
        N=0;
    }
    if((Sel5==7)&& (Lect5==1) )
    {
        M=6*Larg;
        N=0;
    }
    if((Sel5==8)&& (Lect5==1) )
    {
        M=7*Larg;
        N=0;
    }
    if((Sel5==9)&& (Lect5==1) )
    {
        M=0;
        N=1*Haut;
    }
    if((Sel5==10)&& (Lect5==1) )
    {
        M=1*Larg;
        N=1*Haut;
    }
    if((Sel5==11)&& (Lect5==1) )
    {
        M=2*Larg;
        N=1*Haut;
    }
    if((Sel5==12)&& (Lect5==1) )
    {
        M=3*Larg;
        N=1*Haut;
    }
    if((Sel5==13)&& (Lect5==1) )
    {
        M=4*Larg;
        N=1*Haut;
    }
    if((Sel5==14)&& (Lect5==1) )
    {
        M=5*Larg;
        N=1*Haut;
    }
    if((Sel5==15)&& (Lect5==1) )
    {
        M=6*Larg;
        N=1*Haut;
    }
    if((Sel5==16)&& (Lect5==1) )
    {
        M=7*Larg;
        N=1*Haut;
    }
    //------------------------

    if   ((Sel5==17) && (Lect5==1))
    {
        M=0;
        N=2*Haut;

    }
    if((Sel5==18)&& (Lect5==1) )
    {
        M=1*Larg;
        N=2*Haut;
    }
    if((Sel5==19)&& (Lect5==1) )
    {
        M=2*Larg;
        N=2*Haut;
    }
    if((Sel5==20)&& (Lect5==1) )
    {
        M=3*Larg;
        N=2*Haut;
    }
    if((Sel5==21)&& (Lect5==1) )
    {
        M=4*Larg;
        N=2*Haut;
    }
    if((Sel5==22)&& (Lect5==1) )
    {
        M=5*Larg;
        N=2*Haut;
    }
    if((Sel5==23)&& (Lect5==1) )
    {
        M=6*Larg;
        N=2*Haut;
    }
    if((Sel5==24)&& (Lect5==1) )
    {
        M=7*Larg;
        N=2*Haut;
    }
//        if((Sel5==25)&& (Lect5==1) ){
//        M=0;
//        N=3*Haut;
//        }
//        if((Sel5==26)&& (Lect5==1) ){
//        M=1*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==27)&& (Lect5==1) ){
//        M=2*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==28)&& (Lect5==1) ){
//        M=3*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==29)&& (Lect5==1) ){
//        M=4*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==30)&& (Lect5==1) ){
//        M=5*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==31)&& (Lect5==1) ){
//        M=6*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==32)&& (Lect5==1) ){
//        M=7*Larg;
//        N=3*Haut;
//        }
//        //------------------------
    ofEnableAlphaBlending();


    ofFill();
    if(Lect1==1)
    {
        ofSetColor(255,125,0);
    }
    else
    {
        ofSetColor(255,255,255,170);
    }
    ofRect(E+20 ,F+20 ,Larg,4);
    ofRect(E+20 ,F+24 ,4,Haut-8);
    ofRect(E+20 ,F+20+Haut-4 ,Larg,4);
    ofRect(E+20+Larg-4 ,F+24 ,4,Haut-8);
    ofSetColor(40,40,40);
    ofCircle(E+34 ,F+35 ,8);
    ofSetColor(255,125,0);
    ofDrawBitmapString( "1", E+30 ,F+40);


    ofFill();
    if(Lect2==1)
    {
        ofSetColor(255,125,0);
    }
    else
    {
        ofSetColor(255,255,255,170);
    }
    ofRect(G+20 ,H+20 ,Larg,4);
    ofRect(G+20 ,H+24 ,4,Haut-8);
    ofRect(G+20 ,H+20+Haut-4 ,Larg,4);
    ofRect(G+20+Larg-4 ,H+24 ,4,Haut-8);
    ofSetColor(40,40,40);
    ofCircle(G+34 ,H+35 ,8);
    ofSetColor(255,125,0);
    ofDrawBitmapString( "2", G+30 ,H+40);


    ofFill();
    if(Lect3==1)
    {
        ofSetColor(255,125,0);
    }
    else
    {
        ofSetColor(255,255,255,170);
    }
    ofRect(I+20 ,J+20 ,Larg,4);
    ofRect(I+20 ,J+24 ,4,Haut-8);
    ofRect(I+20 ,J+20+Haut-4 ,Larg,4);
    ofRect(I+20+Larg-4 ,J+24 ,4,Haut-8);
    ofSetColor(40,40,40);
    ofCircle(I+34 ,J+35 ,8);
    ofSetColor(255,125,0);
    ofDrawBitmapString( "3", I+30 ,J+40);

    ofFill();
    if(Lect4==1)
    {
        ofSetColor(255,125,0);
    }
    else
    {
        ofSetColor(255,255,255,170);
    }
    ofRect(K+20 ,L+20 ,Larg,4);
    ofRect(K+20 ,L+24 ,4,Haut-8);
    ofRect(K+20 ,L+20+Haut-4 ,Larg,4);
    ofRect(K+20+Larg-4 ,L+24 ,4,Haut-8);
    ofSetColor(40,40,40);
    ofCircle(K+34 ,L+35 ,8);
    ofSetColor(255,125,0);
    ofDrawBitmapString( "4", K+30 ,L+40);


    ofFill();
    if(Lect5==1)
    {
        ofSetColor(255,125,0);
    }
    else
    {
        ofSetColor(255,255,255,170);
    }
    ofRect(M+20 ,N+20 ,Larg,4);
    ofRect(M+20 ,N+24 ,4,Haut-8);
    ofRect(M+20 ,N+20+Haut-4 ,Larg,4);
    ofRect(M+20+Larg-4 ,N+24 ,4,Haut-8);
    ofSetColor(40,40,40);
    ofCircle(M+34 ,N+35 ,8);
    ofSetColor(255,125,0);
    ofDrawBitmapString( "5", M+30 ,N+40);

    ofDisableAlphaBlending();


//-------------------------------------------------lect3
//    ofSetColor(Larg, Larg, Larg);
//	ofDrawBitmapString(ofToString(ofGetFrameRate(), 2) + "fps", 120, 18);
    ofSetColor(225);
    fps = ofToString(ofGetFrameRate(), 2);
    verdana14.drawString(fps+ "/12fps"+"   Key-Sel/1,2,3,4--- ", 20,16);
//	ofDrawBitmapString(ofToString(dir.numFiles(), 2) + "_Il faut tjrs 32 vidéos ds le dossier", 120, 3Haut);
}
void testApp::guiEvent(ofxUIEventArgs &e)
{

    cout << "value: " <<e.widget->getName()<< endl;

//    if(e.widget->getName() == "Dossiers_Videos")
//        {
//        ofxUIDropDownList *ddlist = (ofxUIDropDownList *) e.widget;
//        vector<ofxUIWidget *> &selected = ddlist->getSelected();
//        for(int i = 0; i < selected.size(); i++)
//        dir.listDir(selected[i]->getName());

    string path = "v/";
    ofDirectory dir(path);
    dir.listDir();
    for(int i = 0; i < dir.numFiles(); i++)
    {
        ofLogNotice(dir.getPath(i));
        if(e.widget->getName() == dir.getPath(i))
        {

            dir.listDir(e.widget->getName() );
            dossierV    =e.widget->getName();
//        ofxUIButton *button = (ofxUIButton *) e.widget;
            dir.allowExt("mov");
            dir.sort();

            if (dir.size()>=1)
            {
                dir.sort();
                playerA01.loadMovie(dir.getPath(0));
                playerA01.setFrame(5);
            }

            else
            {
                playerA01.loadMovie(dir.getPath(0));
                playerA01.setFrame(5);
            }
            if (dir.size()>= 2 )
            {
                dir.sort();
                playerA02.loadMovie(dir.getPath(1));
                playerA02.setFrame(5);
            }
            else
            {
                playerA02.loadMovie(dir.getPath(0));
                playerA02.setFrame(5);
            }
            if (dir.size()>= 3 )
            {
                dir.sort();
                playerA03.loadMovie(dir.getPath(2));
                playerA03.setFrame(5);
            }
            else
            {
                playerA03.loadMovie(dir.getPath(0));
                playerA03.setFrame(5);
            }
            if (dir.size()>= 4 )
            {
                dir.sort();
                playerA04.loadMovie(dir.getPath(3));
                playerA04.setFrame(5);
            }
            else
            {
                playerA04.loadMovie(dir.getPath(0));
                playerA04.setFrame(5);
            }
            if (dir.size()>= 5 )
            {
                dir.sort();
                playerA05.loadMovie(dir.getPath(4));
                playerA05.setFrame(5);
            }
            else
            {
                playerA05.loadMovie(dir.getPath(0));
                playerA05.setFrame(5);
            }
            if (dir.size()>= 6 )
            {
                dir.sort();
                playerA06.loadMovie(dir.getPath(5));
                playerA06.setFrame(5);
            }
            else
            {
                playerA06.loadMovie(dir.getPath(0));
                playerA06.setFrame(5);
            }
            if (dir.size()>= 7 )
            {
                dir.sort();
                playerA07.loadMovie(dir.getPath(6));
                playerA07.setFrame(5);
            }
            else
            {
                playerA07.loadMovie(dir.getPath(0));
                playerA07.setFrame(5);
            }
            if (dir.size()>= 8 )
            {
                dir.sort();;
                playerA08.loadMovie(dir.getPath(7));
                playerA08.setFrame(5);
            }
            else
            {
                playerA08.loadMovie(dir.getPath(0));
                playerA08.setFrame(5);
            }
            if (dir.size()>= 9 )
            {
                dir.sort();
                playerA09.loadMovie(dir.getPath(8));
                playerA09.setFrame(5);
            }
            else
            {
                playerA09.loadMovie(dir.getPath(0));
                playerA09.setFrame(5);
            }
            if (dir.size()>= 10 )
            {
                dir.sort();
                playerA10.loadMovie(dir.getPath(9));
                playerA10.setFrame(5);
            }
            else
            {
                playerA10.loadMovie(dir.getPath(0));
                playerA10.setFrame(5);
            }
            if (dir.size()>= 11 )
            {
                dir.sort();
                playerA11.loadMovie(dir.getPath(10));
                playerA11.setFrame(5);
            }
            else
            {
                playerA11.loadMovie(dir.getPath(0));
                playerA11.setFrame(5);
            }
            if (dir.size()>= 12 )
            {
                dir.sort();
                playerA12.loadMovie(dir.getPath(11));
                playerA12.setFrame(5);
            }
            else
            {
                playerA12.loadMovie(dir.getPath(0));
                playerA12.setFrame(5);
            }
            if (dir.size()>= 13 )
            {
                dir.sort();
                playerA13.loadMovie(dir.getPath(12));
                playerA13.setFrame(5);
            }
            else
            {
                playerA13.loadMovie(dir.getPath(0));
                playerA13.setFrame(5);
            }
            if (dir.size()>= 14 )
            {
                dir.sort();
                playerA14.loadMovie(dir.getPath(13));
                playerA14.setFrame(5);
            }
            else
            {
                playerA14.loadMovie(dir.getPath(0));
                playerA14.setFrame(5);
            }
            if (dir.size()>= 15 )
            {
                dir.sort();
                playerA15.loadMovie(dir.getPath(14));
                playerA15.setFrame(5);
            }
            else
            {
                playerA15.loadMovie(dir.getPath(0));
                playerA15.setFrame(5);
            }
            if (dir.size()>= 16 )
            {
                dir.sort();
                playerA16.loadMovie(dir.getPath(15));
                playerA16.setFrame(5);
            }

            else
            {
                playerA16.loadMovie(dir.getPath(0));
                playerA16.setFrame(5);
            }
            //--------------------------
            if (dir.size()>= 17 )
            {
                dir.sort();
                playerB01.loadMovie(dir.getPath(17-1));
                playerB01.setFrame(5);
            }
            else
            {
                playerB01.loadMovie(dir.getPath(0));
                playerB01.setFrame(5);
            }
            if (dir.size()>= 18 )
            {
                dir.sort();
                playerB02.loadMovie(dir.getPath(18-1));
                playerB02.setFrame(5);
            }
            else
            {
                playerB02.loadMovie(dir.getPath(0));
                playerB02.setFrame(5);
            }
            if (dir.size()>= 19 )
            {
                dir.sort();
                playerB03.loadMovie(dir.getPath(19-1));
                playerB03.setFrame(5);
            }
            else
            {
                playerB03.loadMovie(dir.getPath(0));
                playerB03.setFrame(5);
            }
            if (dir.size()>= 20 )
            {
                dir.sort();
                playerB04.loadMovie(dir.getPath(20-1));
                playerB04.setFrame(5);
            }
            else
            {
                playerB04.loadMovie(dir.getPath(0));
                playerB04.setFrame(5);
            }
            if (dir.size()>= 21 )
            {
                dir.sort();
                playerB05.loadMovie(dir.getPath(21-1));
                playerB05.setFrame(5);
            }
            else
            {
                playerB05.loadMovie(dir.getPath(0));
                playerB05.setFrame(5);
            }
            if (dir.size()>= 22 )
            {
                dir.sort();
                playerB06.loadMovie(dir.getPath(22-1));
                playerB06.setFrame(5);
            }
            else
            {
                playerB06.loadMovie(dir.getPath(0));
                playerB06.setFrame(5);
            }
            if (dir.size()>= 23 )
            {
                dir.sort();
                playerB07.loadMovie(dir.getPath(23-1));
                playerB07.setFrame(5);
            }
            else
            {
                playerB07.loadMovie(dir.getPath(0));
                playerB07.setFrame(5);
            }
            if (dir.size()>= 24 )
            {
                dir.sort();
                playerB08.loadMovie(dir.getPath(24-1));
                playerB08.setFrame(5);
            }
            else
            {
                playerB08.loadMovie(dir.getPath(0));
                playerB08.setFrame(5);
            }
            if (dir.size()>= 25 )
            {
                dir.sort();
                playerB09.loadMovie(dir.getPath(25-1));
                playerB09.setFrame(5);
            }
            else
            {
                playerB09.loadMovie(dir.getPath(0));
                playerB09.setFrame(5);
            }
            if (dir.size()>= 26 )
            {
                dir.sort();
                playerB10.loadMovie(dir.getPath(26-1));
                playerB10.setFrame(5);
            }
            else
            {
                playerB10.loadMovie(dir.getPath(0));
                playerB10.setFrame(5);
            }
            if (dir.size()>= 27 )
            {
                dir.sort();
                playerB11.loadMovie(dir.getPath(27-1));
                playerB11.setFrame(5);
            }
            else
            {
                playerB11.loadMovie(dir.getPath(0));
                playerB11.setFrame(5);
            }
            if (dir.size()>= 28 )
            {
                dir.sort();
                playerB12.loadMovie(dir.getPath(28-1));
                playerB12.setFrame(5);
            }
            else
            {
                playerB12.loadMovie(dir.getPath(0));
                playerB12.setFrame(5);
            }
            if (dir.size()>= 29 )
            {
                dir.sort();
                playerB13.loadMovie(dir.getPath(29-1));
                playerB13.setFrame(5);
            }
            else
            {
                playerB13.loadMovie(dir.getPath(0));
                playerB13.setFrame(5);
            }
            if (dir.size()>= 30 )
            {
                dir.sort();
                playerB14.loadMovie(dir.getPath(30-1));
                playerB14.setFrame(5);
            }
            else
            {
                playerB14.loadMovie(dir.getPath(0));
                playerB14.setFrame(5);
            }
            if (dir.size()>= 31 )
            {
                dir.sort();
                playerB15.loadMovie(dir.getPath(31-1));
                playerB15.setFrame(5);
            }
            else
            {
                playerB15.loadMovie(dir.getPath(0));
                playerB15.setFrame(5);
            }
            if (dir.size()>= 32 )
            {
                dir.sort();
                playerB16.loadMovie(dir.getPath(32-1));
                playerB16.setFrame(5);
            }
            else
            {
                playerB15.loadMovie(dir.getPath(0));
                playerB15.setFrame(5);
            }


            dir.listDir(dossierV);
            dir.allowExt("mov");
            dir.sort();
            dirSize =  dir.size();

            XML.clear();

            if (dir.size()>=1)
            {
                XML.setValue("ajout:adres",dir.getPath(0),0);
            }
            if (dir.size()>=2)
            {
                XML.setValue("ajout:adres",dir.getPath(1),1);
            }
            if (dir.size()>=3)
            {
                XML.setValue("ajout:adres",dir.getPath(2),2);
            }
            if (dir.size()>= 4 )
            {
                XML.setValue("ajout:adres",dir.getPath(3 ),3  );
            }

            if (dir.size()>= 5 )
            {
                XML.setValue("ajout:adres",dir.getPath( 4 ), 4  );
            }
            if (dir.size()>= 6 )
            {
                XML.setValue("ajout:adres",dir.getPath( 5), 5 );
            }
            if (dir.size()>= 7 )
            {
                XML.setValue("ajout:adres",dir.getPath( 6), 6 );
            }
            if (dir.size()>= 8 )
            {
                XML.setValue("ajout:adres",dir.getPath( 7  ), 7   );
            }
            if (dir.size()>= 9 )
            {
                XML.setValue("ajout:adres",dir.getPath(8 ),8  );
            }
            if (dir.size()>= 10 )
            {
                XML.setValue("ajout:adres",dir.getPath( 9), 9 );
            }
            if (dir.size()>= 11 )
            {
                XML.setValue("ajout:adres",dir.getPath(10 ),10  );
            }
            if (dir.size()>= 12 )
            {
                XML.setValue("ajout:adres",dir.getPath(11 ),11  );
            }
            if (dir.size()>= 13 )
            {
                XML.setValue("ajout:adres",dir.getPath(12 ), 12 );
            }
            if (dir.size()>= 14 )
            {
                XML.setValue("ajout:adres",dir.getPath(13 ),13  );
            }
            if (dir.size()>= 15 )
            {
                XML.setValue("ajout:adres",dir.getPath(14 ),14  );
            }
            if (dir.size()>= 16 )
            {
                XML.setValue("ajout:adres",dir.getPath(15 ), 15 );
            }
            if (dir.size()>= 17 )
            {
                XML.setValue("ajout:adres",dir.getPath(16 ), 16 );
            }
            if (dir.size()>= 18 )
            {
                XML.setValue("ajout:adres",dir.getPath(17 ), 17 );
            }
            if (dir.size()>= 19 )
            {
                XML.setValue("ajout:adres",dir.getPath( 18), 18 );
            }
            if (dir.size()>= 20 )
            {
                XML.setValue("ajout:adres",dir.getPath(19 ),19  );
            }
            if (dir.size()>= 21 )
            {
                XML.setValue("ajout:adres",dir.getPath(20 ), 20 );
            }
            if (dir.size()>= 22 )
            {
                XML.setValue("ajout:adres",dir.getPath( 21), 21 );
            }
            if (dir.size()>= 23 )
            {
                XML.setValue("ajout:adres",dir.getPath(22 ), 22 );
            }
            if (dir.size()>= 24 )
            {
                XML.setValue("ajout:adres",dir.getPath( 23), 23 );
            }
            if (dir.size()>= 25 )
            {
                XML.setValue("ajout:adres",dir.getPath( 24), 24 );
            }
            if (dir.size()>= 26 )
            {
                XML.setValue("ajout:adres",dir.getPath(25 ),25  );
            }
            if (dir.size()>= 27 )
            {
                XML.setValue("ajout:adres",dir.getPath( 26),  26);
            }
            if (dir.size()>= 28)
            {
                XML.setValue("ajout:adres",dir.getPath(27 ), 27 );
            }
            if (dir.size()>= 29 )
            {
                XML.setValue("ajout:adres",dir.getPath( 28), 28 );
            }
            if (dir.size()>= 30 )
            {
                XML.setValue("ajout:adres",dir.getPath(29 ), 29 );
            }
            if (dir.size()>= 31 )
            {
                XML.setValue("ajout:adres",dir.getPath( 30),30  );
            }
            if (dir.size()>= 32 )
            {
                XML.setValue("ajout:adres",dir.getPath(31 ),  31);
            }
//                    if (dir.size()>=  ){
//                    XML.setValue("ajout:adres",dir.getPath( ),  );
//                    }
            //-----------
            if (dir.size()<= 32 )
            {
                XML.setValue("ajout:dirSize",dirSize,dirSize+1);
            }
            else
            {
                XML.setValue("ajout:dirSize",32,33);
            }

            XML.saveFile("mySettings.xml");
            ofxOscMessage m;
            m.setAddress("/LoadXmySettings");
            sender.sendMessage(m);
//--------------------------


        }
    }




    //--------------------------
    if(e.widget->getName()  == "librairie")
    {
        ofxUIButton *button = (ofxUIButton *) e.widget;
        cout <<"ofGetFrameNum()_"<<ofGetFrameNum()<< "\n";
        if(button->getValue() == 0 )
        {
            ofSetWindowPosition(0,600);

            ofSetWindowShape(1000,250);
        }
        if(button->getValue() == 1 )
        {
            ofSetWindowPosition(0,600);

            ofSetWindowShape(1180,250);


            cout << e.widget->getName()  << "\t value: " << button->getValue() << endl;

        }
    }



}
//--------------------------------------------------------------
void testApp::keyPressed  (int key)
{

    switch (key)
    {
    case 'g':
    {
        gui->toggleVisible();
    }
    break;
    default:
        break;
    }

    if ((key =='1')   ||(key =='6') )
    {
        Lect1 = 1;
    }
    else
    {
        Lect1 = 0;
    }
    if ((key =='2') ||(key =='6') )
    {
        Lect2 = 1;
    }
    else
    {
        Lect2 = 0;

    }
    if ((key =='3')||(key =='6')  )
    {
        Lect3 = 1;
    }
    else
    {
        Lect3 = 0;
    }
    if ((key =='4') ||(key =='6'))
    {
        Lect4 = 1;
    }
    else
    {
        Lect4 = 0;
    }
    if ((key =='5') ||(key =='6')  )
    {
        Lect5 = 1;
    }
    else
    {
        Lect5 = 0;
    }
//        if (key =='6' ){
//        dir.listDir(dossierV);
//        dir.allowExt("mov");
//        dir.sort();
//        Lect1=1;
//        Sel1 = ofRandom(dir.size());
//        cout<<dir.size()<<"--"<<Sel1<< "--"<<dossierV<<endl;
//        Lect2=1;
//        Sel2 = ofRandom(dir.size());
//        cout<<dir.size()<<"--"<<Sel1<< "--"<<dossierV<<endl;
//        Lect3=1;
//        Sel3 = ofRandom(dir.size());
//        cout<<dir.size()<<"--"<<Sel1<< "--"<<dossierV<<endl;
////                Lect1=0;
//
//        }
//        else{
//         Lect1 = 3;
//         Lect2 = 3;
//         Lect3 = 3;
//        }


    if (key =='p' )
    {

        dossierV    =   "v/V1";
        dir.listDir(dossierV);
        dir.allowExt("mov");
        dir.sort();

        if (dir.size()>=1)
        {
            dir.sort();
            playerA01.loadMovie("v/videos1/002.mov");
            playerA01.setFrame(5);
        }
        if (dir.size()>= 2 )
        {
            dir.sort();
            playerA02.loadMovie(dir.getPath(1));
            playerA02.setFrame(5);
        }
        if (dir.size()>= 3 )
        {
            dir.sort();
            playerA03.loadMovie(dir.getPath(2));
            playerA03.setFrame(5);
        }
        if (dir.size()>= 4 )
        {
            dir.sort();
            playerA04.loadMovie(dir.getPath(3));
            playerA04.setFrame(5);
        }
        if (dir.size()>= 5 )
        {
            dir.sort();
            playerA05.loadMovie(dir.getPath(4));
            playerA05.setFrame(5);
        }
        if (dir.size()>= 6 )
        {
            dir.sort();
            playerA06.loadMovie(dir.getPath(5));
            playerA06.setFrame(5);
        }
        if (dir.size()>= 7 )
        {
            dir.sort();
            playerA07.loadMovie(dir.getPath(6));
            playerA07.setFrame(5);
        }
        if (dir.size()>= 8 )
        {
            dir.sort();;
            playerA08.loadMovie(dir.getPath(7));
            playerA08.setFrame(5);
        }
        if (dir.size()>= 9 )
        {
            dir.sort();
            playerA09.loadMovie(dir.getPath(8));
            playerA09.setFrame(5);
        }
        if (dir.size()>= 10 )
        {
            dir.sort();
            playerA10.loadMovie(dir.getPath(9));
            playerA10.setFrame(5);
        }
        if (dir.size()>= 11 )
        {
            dir.sort();
            playerA11.loadMovie(dir.getPath(10));
            playerA11.setFrame(5);
        }
        if (dir.size()>= 12 )
        {
            dir.sort();
            playerA12.loadMovie(dir.getPath(11));
            playerA12.setFrame(5);
        }
        if (dir.size()>= 13 )
        {
            dir.sort();
            playerA13.loadMovie(dir.getPath(12));
            playerA13.setFrame(5);
        }
        if (dir.size()>= 14 )
        {
            dir.sort();
            playerA14.loadMovie(dir.getPath(13));
            playerA14.setFrame(5);
        }
        if (dir.size()>= 15 )
        {
            dir.sort();
            playerA15.loadMovie(dir.getPath(14));
            playerA15.setFrame(5);
        }
        if (dir.size()>= 16 )
        {
            dir.sort();
            playerA16.loadMovie(dir.getPath(15));
            playerA16.setFrame(5);
        }
//--------------------------
        if (dir.size()>= 17 )
        {
            dir.sort();
            playerB01.loadMovie(dir.getPath(17-1));
            playerB01.setFrame(5);
        }
        if (dir.size()>= 18 )
        {
            dir.sort();
            playerB02.loadMovie(dir.getPath(18-1));
            playerB02.setFrame(5);
        }
        if (dir.size()>= 19 )
        {
            dir.sort();
            playerB03.loadMovie(dir.getPath(19-1));
            playerB03.setFrame(5);
        }
        if (dir.size()>= 20 )
        {
            dir.sort();
            playerB04.loadMovie(dir.getPath(20-1));
            playerB04.setFrame(5);
        }
        if (dir.size()>= 21 )
        {
            dir.sort();
            playerB05.loadMovie(dir.getPath(21-1));
            playerB05.setFrame(5);
        }
        if (dir.size()>= 22 )
        {
            dir.sort();
            playerB06.loadMovie(dir.getPath(22-1));
            playerB06.setFrame(5);
        }
        if (dir.size()>= 23 )
        {
            dir.sort();
            playerB07.loadMovie(dir.getPath(23-1));
            playerB07.setFrame(5);
        }
        if (dir.size()>= 24 )
        {
            dir.sort();
            playerB08.loadMovie(dir.getPath(24-1));
            playerB08.setFrame(5);
        }
        if (dir.size()>= 25 )
        {
            dir.sort();
            playerB09.loadMovie(dir.getPath(25-1));
            playerB09.setFrame(5);
        }
        if (dir.size()>= 26 )
        {
            dir.sort();
            playerB10.loadMovie(dir.getPath(26-1));
            playerB10.setFrame(5);
        }
        if (dir.size()>= 27 )
        {
            dir.sort();
            playerB11.loadMovie(dir.getPath(27-1));
            playerB11.setFrame(5);
        }
        if (dir.size()>= 28 )
        {
            dir.sort();
            playerB12.loadMovie(dir.getPath(28-1));
            playerB12.setFrame(5);
        }
        if (dir.size()>= 29 )
        {
            dir.sort();
            playerB13.loadMovie(dir.getPath(29-1));
            playerB13.setFrame(5);
        }
        if (dir.size()>= 30 )
        {
            dir.sort();
            playerB14.loadMovie(dir.getPath(30-1));
            playerB14.setFrame(5);
        }
        if (dir.size()>= 31 )
        {
            dir.sort();
            playerB15.loadMovie(dir.getPath(31-1));
            playerB15.setFrame(5);
        }
        if (dir.size()>= 32 )
        {
            dir.sort();
            playerB16.loadMovie(dir.getPath(32-1));
            playerB16.setFrame(5);
        }
    }
    if (key =='=' )
    {
        dir.listDir(dossierV);
        dir.allowExt("mov");
        dir.sort();
        dirSize =  dir.size();

        XML.clear();

        if (dir.size()>=1)
        {
            XML.setValue("ajout:adres",dir.getPath(0),0);
        }
        if (dir.size()>=2)
        {
            XML.setValue("ajout:adres",dir.getPath(1),1);
        }
        if (dir.size()>=3)
        {
            XML.setValue("ajout:adres",dir.getPath(2),2);
        }
        if (dir.size()>= 4 )
        {
            XML.setValue("ajout:adres",dir.getPath(3 ),3  );
        }

        if (dir.size()>= 5 )
        {
            XML.setValue("ajout:adres",dir.getPath( 4 ), 4  );
        }
        if (dir.size()>= 6 )
        {
            XML.setValue("ajout:adres",dir.getPath( 5), 5 );
        }
        if (dir.size()>= 7 )
        {
            XML.setValue("ajout:adres",dir.getPath( 6), 6 );
        }
        if (dir.size()>= 8 )
        {
            XML.setValue("ajout:adres",dir.getPath( 7  ), 7   );
        }
        if (dir.size()>= 9 )
        {
            XML.setValue("ajout:adres",dir.getPath(8 ),8  );
        }
        if (dir.size()>= 10 )
        {
            XML.setValue("ajout:adres",dir.getPath( 9), 9 );
        }
        if (dir.size()>= 11 )
        {
            XML.setValue("ajout:adres",dir.getPath(10 ),10  );
        }
        if (dir.size()>= 12 )
        {
            XML.setValue("ajout:adres",dir.getPath(11 ),11  );
        }
        if (dir.size()>= 13 )
        {
            XML.setValue("ajout:adres",dir.getPath(12 ), 12 );
        }
        if (dir.size()>= 14 )
        {
            XML.setValue("ajout:adres",dir.getPath(13 ),13  );
        }
        if (dir.size()>= 15 )
        {
            XML.setValue("ajout:adres",dir.getPath(14 ),14  );
        }
        if (dir.size()>= 16 )
        {
            XML.setValue("ajout:adres",dir.getPath(15 ), 15 );
        }
        if (dir.size()>= 17 )
        {
            XML.setValue("ajout:adres",dir.getPath(16 ), 16 );
        }
        if (dir.size()>= 18 )
        {
            XML.setValue("ajout:adres",dir.getPath(17 ), 17 );
        }
        if (dir.size()>= 19 )
        {
            XML.setValue("ajout:adres",dir.getPath( 18), 18 );
        }
        if (dir.size()>= 20 )
        {
            XML.setValue("ajout:adres",dir.getPath(19 ),19  );
        }
        if (dir.size()>= 21 )
        {
            XML.setValue("ajout:adres",dir.getPath(20 ), 20 );
        }
        if (dir.size()>= 22 )
        {
            XML.setValue("ajout:adres",dir.getPath( 21), 21 );
        }
        if (dir.size()>= 23 )
        {
            XML.setValue("ajout:adres",dir.getPath(22 ), 22 );
        }
        if (dir.size()>= 24 )
        {
            XML.setValue("ajout:adres",dir.getPath( 23), 23 );
        }
        if (dir.size()>= 25 )
        {
            XML.setValue("ajout:adres",dir.getPath( 24), 24 );
        }
        if (dir.size()>= 26 )
        {
            XML.setValue("ajout:adres",dir.getPath(25 ),25  );
        }
        if (dir.size()>= 27 )
        {
            XML.setValue("ajout:adres",dir.getPath( 26),  26);
        }
        if (dir.size()>= 28)
        {
            XML.setValue("ajout:adres",dir.getPath(27 ), 27 );
        }
        if (dir.size()>= 29 )
        {
            XML.setValue("ajout:adres",dir.getPath( 28), 28 );
        }
        if (dir.size()>= 30 )
        {
            XML.setValue("ajout:adres",dir.getPath(29 ), 29 );
        }
        if (dir.size()>= 31 )
        {
            XML.setValue("ajout:adres",dir.getPath( 30),30  );
        }
        if (dir.size()>= 32 )
        {
            XML.setValue("ajout:adres",dir.getPath(31 ),  31);
        }
//                    if (dir.size()>=  ){
//                    XML.setValue("ajout:adres",dir.getPath( ),  );
//                    }
        //-----------
        if (dir.size()<= 32 )
        {
            XML.setValue("ajout:dirSize",dirSize,dirSize+1);
        }
        else
        {
            XML.setValue("ajout:dirSize",32,33);
        }

        XML.saveFile("mySettings.xml");
    }
}
//--------------------------------------------------------------
void testApp::keyReleased  (int key)
{
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y )
{
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button)
{
    A  =   0;
    B  =   1;
    C  =   0;
    D  =   1;
    if((x > A*Larg+20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel1 =   1;
        cout<<Sel1<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   2;
    }

    A  =   2;
    B  =   3;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   3;
    }
    A  =   3;
    B  =   4;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   4;
    }
    A  =   4;
    B  =   5;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   5;
    }
    A  =   5;
    B  =   6;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   6;
    }
    A  =   6;
    B  =   7;
    C  =   0;
    D  =   1;;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   7;
    }
    A  =   7;
    B  =   8;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   8;
    }
    A  =   0;
    B  =   1;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   9;
    }
    A  =   1;
    B  =   2;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   10;
    }

    A  =   2;
    B  =   3;
    C  =   1;
    D  =   2;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel1 =   11;
        cout<<Sel1<<endl;
    }

    A  =   3;
    B  =   4;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   12;
    }

    A  =   4;
    B  =   5;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   13;
    }
    A  =   5;
    B  =   6;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   14;
    }
    A  =   6;
    B  =   7;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   15;
    }
    A  =   7;
    B  =   8;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 = 16;
    }
    //---------------------
    A  =   0;
    B  =   1;
    C  =   2;
    D  =   3;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel1 =   17;
        cout<<Sel1<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   18;
    }

    A  =   2;
    B  =   3;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   19;
    }
    A  =   3;
    B  =   4;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   20;
    }
    A  =   4;
    B  =   5;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   21;
    }
    A  =   5;
    B  =   6;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   22;
    }
    A  =   6;
    B  =   7;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   23;
    }
    A  =   7;
    B  =   8;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel1<<endl;
        Sel1 =   24;
    }
//        A  =   0;
//        B  =   1;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel1<<endl;
//            Sel1 =   25;
//            }
//        A  =   1;
//        B  =   2;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel1<<endl;
//            Sel1 =   26;
//            }
//
//        A  =   2;
//        B  =   3;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            Sel1 =   27;
//            cout<<Sel1<<endl;
//            }
//
//        A  =   3;
//        B  =   4;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel1<<endl;
//            Sel1 =   28;
//            }
//
//        A  =   4;
//        B  =   5;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel1<<endl;
//            Sel1 =   29;
//            }
//        A  =   5;
//        B  =   6;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel1<<endl;
//            Sel1 =   30;
//            }
//        A  =   6;
//        B  =   7;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel1<<endl;
//            Sel1 =   31;
//            }
//        A  =   7;
//        B  =   8;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel1<<endl;
//            Sel1 =  32;
//            }

    //--------------------------------------------------------------------------------------
    A  =   0;
    B  =   1;
    C  =   0;
    D  =   1;
    if((x > A*Larg+20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel2 =   1;
        cout<<Sel2<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   2;
    }

    A  =   2;
    B  =   3;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   3;
    }
    A  =   3;
    B  =   4;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   4;
    }
    A  =   4;
    B  =   5;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   5;
    }
    A  =   5;
    B  =   6;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   6;
    }
    A  =   6;
    B  =   7;
    C  =   0;
    D  =   1;;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   7;
    }
    A  =   7;
    B  =   8;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   8;
    }
    A  =   0;
    B  =   1;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   9;
    }
    A  =   1;
    B  =   2;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   10;
    }

    A  =   2;
    B  =   3;
    C  =   1;
    D  =   2;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel2 =   11;
        cout<<Sel2<<endl;
    }

    A  =   3;
    B  =   4;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   12;
    }

    A  =   4;
    B  =   5;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   13;
    }
    A  =   5;
    B  =   6;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   14;
    }
    A  =   6;
    B  =   7;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   15;
    }
    A  =   7;
    B  =   8;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 = 16;
    }
    //---------------------
    A  =   0;
    B  =   1;
    C  =   2;
    D  =   3;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel2 =   17;
        cout<<Sel2<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   18;
    }

    A  =   2;
    B  =   3;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   19;
    }
    A  =   3;
    B  =   4;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   20;
    }
    A  =   4;
    B  =   5;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   21;
    }
    A  =   5;
    B  =   6;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   22;
    }
    A  =   6;
    B  =   7;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   23;
    }
    A  =   7;
    B  =   8;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel2<<endl;
        Sel2 =   24;
    }
    A  =   0;
    B  =   1;
    C  =   3;
    D  =   4;

//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel2<<endl;
//            Sel2 =   25;
//            }
//        A  =   1;
//        B  =   2;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel2<<endl;
//            Sel2 =   26;
//            }
//
//        A  =   2;
//        B  =   3;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            Sel2 =   27;
//            cout<<Sel2<<endl;
//            }
//
//        A  =   3;
//        B  =   4;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel2<<endl;
//            Sel2 =   28;
//            }
//
//        A  =   4;
//        B  =   5;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel2<<endl;
//            Sel2 =   29;
//            }
//        A  =   5;
//        B  =   6;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel2<<endl;
//            Sel2 =   30;
//            }
//        A  =   6;
//        B  =   7;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel2<<endl;
//            Sel2 =   31;
//            }
//        A  =   7;
//        B  =   8;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel2<<endl;
//            Sel2 =  32;
//            }
    //-------------------------------------------------------------------------------------------------------------------------------------------
    A  =   0;
    B  =   1;
    C  =   0;
    D  =   1;
    if((x > A*Larg+20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel3 =   1;
        cout<<Sel3<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   2;
    }

    A  =   2;
    B  =   3;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   3;
    }
    A  =   3;
    B  =   4;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   4;
    }
    A  =   4;
    B  =   5;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   5;
    }
    A  =   5;
    B  =   6;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   6;
    }
    A  =   6;
    B  =   7;
    C  =   0;
    D  =   1;;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   7;
    }
    A  =   7;
    B  =   8;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   8;
    }
    A  =   0;
    B  =   1;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   9;
    }
    A  =   1;
    B  =   2;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   10;
    }

    A  =   2;
    B  =   3;
    C  =   1;
    D  =   2;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel3 =   11;
        cout<<Sel3<<endl;
    }

    A  =   3;
    B  =   4;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   12;
    }

    A  =   4;
    B  =   5;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   13;
    }
    A  =   5;
    B  =   6;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   14;
    }
    A  =   6;
    B  =   7;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   15;
    }
    A  =   7;
    B  =   8;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 = 16;
    }
    //---------------------
    A  =   0;
    B  =   1;
    C  =   2;
    D  =   3;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel3 =   17;
        cout<<Sel3<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   18;
    }

    A  =   2;
    B  =   3;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   19;
    }
    A  =   3;
    B  =   4;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   20;
    }
    A  =   4;
    B  =   5;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   21;
    }
    A  =   5;
    B  =   6;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   22;
    }
    A  =   6;
    B  =   7;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   23;
    }
    A  =   7;
    B  =   8;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel3<<endl;
        Sel3 =   24;
    }
//        A  =   0;
//        B  =   1;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel3<<endl;
//            Sel3 =   25;
//            }
//        A  =   1;
//        B  =   2;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel3<<endl;
//            Sel3 =   26;
//            }
//
//        A  =   2;
//        B  =   3;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            Sel3 =   27;
//            cout<<Sel3<<endl;
//            }
//
//        A  =   3;
//        B  =   4;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel3<<endl;
//            Sel3 =   28;
//            }
//
//        A  =   4;
//        B  =   5;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel3<<endl;
//            Sel3 =   29;
//            }
//        A  =   5;
//        B  =   6;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel3<<endl;
//            Sel3 =   30;
//            }
//        A  =   6;
//        B  =   7;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel3<<endl;
//            Sel3 =   31;
//            }
//        A  =   7;
//        B  =   8;
//        C  =   3;
//        D  =   4;
//
//        if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//            cout<<Sel3<<endl;
//            Sel3 =  32;
//            }
//-------------------------------------------------------------------------------------------------------------------------------------------
    A  =   0;
    B  =   1;
    C  =   0;
    D  =   1;
    if((x > A*Larg+20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel4 =   1;
        cout<<Sel4<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   2;
    }

    A  =   2;
    B  =   3;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   3;
    }
    A  =   3;
    B  =   4;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   4;
    }
    A  =   4;
    B  =   5;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   5;
    }
    A  =   5;
    B  =   6;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   6;
    }
    A  =   6;
    B  =   7;
    C  =   0;
    D  =   1;;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   7;
    }
    A  =   7;
    B  =   8;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   8;
    }
    A  =   0;
    B  =   1;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   9;
    }
    A  =   1;
    B  =   2;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   10;
    }

    A  =   2;
    B  =   3;
    C  =   1;
    D  =   2;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel4 =   11;
        cout<<Sel4<<endl;
    }

    A  =   3;
    B  =   4;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   12;
    }

    A  =   4;
    B  =   5;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   13;
    }
    A  =   5;
    B  =   6;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   14;
    }
    A  =   6;
    B  =   7;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   15;
    }
    A  =   7;
    B  =   8;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 = 16;
    }
    //---------------------
    A  =   0;
    B  =   1;
    C  =   2;
    D  =   3;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel4 =   17;
        cout<<Sel4<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   18;
    }

    A  =   2;
    B  =   3;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   19;
    }
    A  =   3;
    B  =   4;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   20;
    }
    A  =   4;
    B  =   5;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   21;
    }
    A  =   5;
    B  =   6;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   22;
    }
    A  =   6;
    B  =   7;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   23;
    }
    A  =   7;
    B  =   8;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel4<<endl;
        Sel4 =   24;
    }
    A  =   0;
    B  =   1;
    C  =   3;
    D  =   4;

//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel4<<endl;
//                Sel4 =   25;
//                }
//            A  =   1;
//            B  =   2;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel4<<endl;
//                Sel4 =   26;
//                }
//
//            A  =   2;
//            B  =   3;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                Sel4 =   27;
//                cout<<Sel4<<endl;
//                }
//
//            A  =   3;
//            B  =   4;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel4<<endl;
//                Sel4 =   28;
//                }
//
//            A  =   4;
//            B  =   5;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel4<<endl;
//                Sel4 =   29;
//                }
//            A  =   5;
//            B  =   6;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel4<<endl;
//                Sel4 =   30;
//                }
//            A  =   6;
//            B  =   7;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel4<<endl;
//                Sel4 =   31;
//                }
//            A  =   7;
//            B  =   8;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel4<<endl;
//                Sel4 =  32;
//                }
//-------------------------------------------------------------------------------------------------------------------------------------------
    A  =   0;
    B  =   1;
    C  =   0;
    D  =   1;
    if((x > A*Larg+20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel5 =   1;
        cout<<Sel5<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   2;
    }

    A  =   2;
    B  =   3;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   3;
    }
    A  =   3;
    B  =   4;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   4;
    }
    A  =   4;
    B  =   5;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   5;
    }
    A  =   5;
    B  =   6;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   6;
    }
    A  =   6;
    B  =   7;
    C  =   0;
    D  =   1;;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   7;
    }
    A  =   7;
    B  =   8;
    C  =   0;
    D  =   1;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   8;
    }
    A  =   0;
    B  =   1;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   9;
    }
    A  =   1;
    B  =   2;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   10;
    }

    A  =   2;
    B  =   3;
    C  =   1;
    D  =   2;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel5 =   11;
        cout<<Sel5<<endl;
    }

    A  =   3;
    B  =   4;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   12;
    }

    A  =   4;
    B  =   5;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   13;
    }
    A  =   5;
    B  =   6;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   14;
    }
    A  =   6;
    B  =   7;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   15;
    }
    A  =   7;
    B  =   8;
    C  =   1;
    D  =   2;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 = 16;
    }
    //---------------------
    A  =   0;
    B  =   1;
    C  =   2;
    D  =   3;
    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        Sel5 =   17;
        cout<<Sel5<<endl;
    }

    A  =   1;
    B  =   2;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   18;
    }

    A  =   2;
    B  =   3;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   19;
    }
    A  =   3;
    B  =   4;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   20;
    }
    A  =   4;
    B  =   5;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   21;
    }
    A  =   5;
    B  =   6;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   22;
    }
    A  =   6;
    B  =   7;
    C  =   2;
    D  =   3;

    if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 ))
    {
        cout<<Sel5<<endl;
        Sel5 =   23;
    }
    A  =   7;
    B  =   8;
    C  =   2;
    D  =   3;

//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel5<<endl;
//                Sel5 =   24;
//                }
//            A  =   0;
//            B  =   1;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel5<<endl;
//                Sel5 =   25;
//                }
//            A  =   1;
//            B  =   2;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel5<<endl;
//                Sel5 =   26;
//                }
//
//            A  =   2;
//            B  =   3;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                Sel5 =   27;
//                cout<<Sel5<<endl;
//                }
//
//            A  =   3;
//            B  =   4;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel5<<endl;
//                Sel5 =   28;
//                }
//
//            A  =   4;
//            B  =   5;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel5<<endl;
//                Sel5 =   29;
//                }
//            A  =   5;
//            B  =   6;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel5<<endl;
//                Sel5 =   30;
//                }
//            A  =   6;
//            B  =   7;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel5<<endl;
//                Sel5 =   31;
//                }
//            A  =   7;
//            B  =   8;
//            C  =   3;
//            D  =   4;
//
//            if((x > A*Larg +20 ) && (x < B*Larg +20 ) &&  (y > C*Haut +20 ) && (y < D*Haut +20 )){
//                cout<<Sel5<<endl;
//                Sel5 =  32;
//                }
//-------------------------------------------------------------------------------------------------------------------------------------------


    if((Lect1==1) && (Sel1==1) )
    {
        E=0;
        F=0;

    }
    if((Sel1==2)&& (Lect1==1) )
    {
        E=Larg;
        F=0;
    }
    if((Sel1==3)&& (Lect1==1) )
    {
        E=2*Larg;
        F=0;
    }
    if((Sel1==4)&& (Lect1==1) )
    {
        E=3*Larg;
        F=0;
    }
    if((Sel1==5)&& (Lect1==1) )
    {
        E=4*Larg;
        F=0;
    }
    if((Sel1==6)&& (Lect1==1) )
    {
        E=5*Larg;
        F=0;
    }
    if((Sel1==7)&& (Lect1==1) )
    {
        E=6*Larg;
        F=0;
    }
    if((Sel1==8)&& (Lect1==1) )
    {
        E=7*Larg;
        F=0;
    }
    if((Sel1==9)&& (Lect1==1) )
    {
        E=0;
        F=Haut;
    }
    if((Sel1==10)&& (Lect1==1) )
    {
        E=Larg;
        F=Haut;
    }
    if((Sel1==11)&& (Lect1==1) )
    {
        E=2*Larg;
        F=Haut;
    }
    if((Sel1==12)&& (Lect1==1) )
    {
        E=3*Larg;
        F=Haut;
    }
    if((Sel1==13)&& (Lect1==1) )
    {
        E=4*Larg;
        F=Haut;
    }
    if((Sel1==14)&& (Lect1==1) )
    {
        E=5*Larg;
        F=Haut;
    }
    if((Sel1==15)&& (Lect1==1) )
    {
        E=6*Larg;
        F=Haut;
    }
    if((Sel1==16)&& (Lect1==1) )
    {
        E=7*Larg;
        F=Haut;
    }
    //------------------------

    if   ((Sel1==17) && (Lect1==1))
    {
        E=0;
        F=2*Haut;

    }
    if((Sel1==18)&& (Lect1==1) )
    {
        E=Larg;
        F=2*Haut;
    }
    if((Sel1==19)&& (Lect1==1) )
    {
        E=2*Larg;
        F=2*Haut;
    }
    if((Sel1==20)&& (Lect1==1) )
    {
        E=3*Larg;
        F=2*Haut;
    }
    if((Sel1==21)&& (Lect1==1) )
    {
        E=4*Larg;
        F=2*Haut;
    }
    if((Sel1==22)&& (Lect1==1) )
    {
        E=5*Larg;
        F=2*Haut;
    }
    if((Sel1==23)&& (Lect1==1) )
    {
        E=6*Larg;
        F=2*Haut;
    }
    if((Sel1==24)&& (Lect1==1) )
    {
        E=7*Larg;
        F=2*Haut;
    }
//        if((Sel1==25)&& (Lect1==1) ){
//        E=0;
//        F=2*Haut;
//        }
//        if((Sel1==26)&& (Lect1==1) ){
//        E=Larg;
//        F=2*Haut;
//        }
//        if((Sel1==27)&& (Lect1==1) ){
//        E=2*Larg;
//        F=2*Haut;
//        }
//        if((Sel1==28)&& (Lect1==1) ){
//        E=3*Larg;
//        F=2*Haut;
//        }
//        if((Sel1==29)&& (Lect1==1) ){
//        E=4*Larg;
//        F=2*Haut;
//        }
//        if((Sel1==30)&& (Lect1==1) ){
//        E=5*Larg;
//        F=2*Haut;
//        }
//        if((Sel1==31)&& (Lect1==1) ){
//        E=6*Larg;
//        F=2*Haut;
//        }
//        if((Sel1==32)&& (Lect1==1) ){
//        E=7*Larg;
//        F=2*Haut;
//        }


    //------------------------
    if((Sel2==1) && (Lect2==1) )
    {
        G=0;
        H=0;

    }
    if((Sel2==2)&& (Lect2==1) )
    {
        G=Larg;
        H=0;
    }
    if((Sel2==3)&& (Lect2==1) )
    {
        G=2*Larg;
        H=0;
    }
    if((Sel2==4)&& (Lect2==1) )
    {
        G=3*Larg;
        H=0;
    }
    if((Sel2==5)&& (Lect2==1) )
    {
        G=4*Larg;
        H=0;
    }
    if((Sel2==6)&& (Lect2==1) )
    {
        G=5*Larg;
        H=0;
    }
    if((Sel2==7)&& (Lect2==1) )
    {
        G=6*Larg;
        H=0;
    }
    if((Sel2==8)&& (Lect2==1) )
    {
        G=7*Larg;
        H=0;
    }
    if((Sel2==9)&& (Lect2==1) )
    {
        G=0;
        H=Haut;
    }
    if((Sel2==10)&& (Lect2==1) )
    {
        G=Larg;
        H=Haut;
    }
    if((Sel2==11)&& (Lect2==1) )
    {
        G=2*Larg;
        H=Haut;
    }
    if((Sel2==12)&& (Lect2==1) )
    {
        G=3*Larg;
        H=Haut;
    }
    if((Sel2==13)&& (Lect2==1) )
    {
        G=4*Larg;
        H=Haut;
    }
    if((Sel2==14)&& (Lect2==1) )
    {
        G=5*Larg;
        H=Haut;
    }
    if((Sel2==15)&& (Lect2==1) )
    {
        G=6*Larg;
        H=Haut;
    }
    if((Sel2==16)&& (Lect2==1) )
    {
        G=7*Larg;
        H=Haut;
    }
    //------------------------

    if   ((Sel2==17) && (Lect2==1))
    {
        G=0;
        H=2*Haut;

    }
    if((Sel2==18)&& (Lect2==1) )
    {
        G=Larg;
        H=2*Haut;
    }
    if((Sel2==19)&& (Lect2==1) )
    {
        G=2*Larg;
        H=2*Haut;
    }
    if((Sel2==20)&& (Lect2==1) )
    {
        G=3*Larg;
        H=2*Haut;
    }
    if((Sel2==21)&& (Lect2==1) )
    {
        G=4*Larg;
        H=2*Haut;
    }
    if((Sel2==22)&& (Lect2==1) )
    {
        G=5*Larg;
        H=2*Haut;
    }
    if((Sel2==23)&& (Lect2==1) )
    {
        G=6*Larg;
        H=2*Haut;
    }
    if((Sel2==24)&& (Lect2==1) )
    {
        G=7*Larg;
        H=2*Haut;
    }
//        if((Sel2==25)&& (Lect2==1) ){
//        G=0;
//        H=2*Haut;
//        }
//        if((Sel2==26)&& (Lect2==1) ){
//        G=Larg;
//        H=2*Haut;
//        }
//        if((Sel2==27)&& (Lect2==1) ){
//        G=2*Larg;
//        H=2*Haut;
//        }
//        if((Sel2==28)&& (Lect2==1) ){
//        G=3*Larg;
//        H=2*Haut;
//        }
//        if((Sel2==29)&& (Lect2==1) ){
//        G=4*Larg;
//        H=2*Haut;
//        }
//        if((Sel2==30)&& (Lect2==1) ){
//        G=5*Larg;
//        H=2*Haut;
//        }
//        if((Sel2==31)&& (Lect2==1) ){
//        G=6*Larg;
//        H=2*Haut;
//        }
//        if((Sel2==32)&& (Lect2==1) ){
//        G=7*Larg;
//        H=2*Haut;
//        }
    //------------------------
    if((Lect3==1) && (Sel3==1) )
    {
        I=0;
        J=0;

    }
    if((Sel3==2)&& (Lect3==1) )
    {
        I=Larg;
        J=0;
    }
    if((Sel3==3)&& (Lect3==1) )
    {
        I=2*Larg;
        J=0;
    }
    if((Sel3==4)&& (Lect3==1) )
    {
        I=3*Larg;
        J=0;
    }
    if((Sel3==5)&& (Lect3==1) )
    {
        I=4*Larg;
        J=0;
    }
    if((Sel3==6)&& (Lect3==1) )
    {
        I=5*Larg;
        J=0;
    }
    if((Sel3==7)&& (Lect3==1) )
    {
        I=6*Larg;
        J=0;
    }
    if((Sel3==8)&& (Lect3==1) )
    {
        I=7*Larg;
        J=0;
    }
    if((Sel3==9)&& (Lect3==1) )
    {
        I=0;
        J=Haut;
    }
    if((Sel3==10)&& (Lect3==1) )
    {
        I=Larg;
        J=Haut;
    }
    if((Sel3==11)&& (Lect3==1) )
    {
        I=2*Larg;
        J=Haut;
    }
    if((Sel3==12)&& (Lect3==1) )
    {
        I=3*Larg;
        J=Haut;
    }
    if((Sel3==13)&& (Lect3==1) )
    {
        I=4*Larg;
        J=Haut;
    }
    if((Sel3==14)&& (Lect3==1) )
    {
        I=5*Larg;
        J=Haut;
    }
    if((Sel3==15)&& (Lect3==1) )
    {
        I=6*Larg;
        J=Haut;
    }
    if((Sel3==16)&& (Lect3==1) )
    {
        I=7*Larg;
        J=Haut;
    }
    //------------------------

    if   ((Sel3==17) && (Lect3==1))
    {
        I=0;
        J=2*Haut;

    }
    if((Sel3==18)&& (Lect3==1) )
    {
        I=Larg;
        J=2*Haut;
    }
    if((Sel3==19)&& (Lect3==1) )
    {
        I=2*Larg;
        J=2*Haut;
    }
    if((Sel3==20)&& (Lect3==1) )
    {
        I=3*Larg;
        J=2*Haut;
    }
    if((Sel3==21)&& (Lect3==1) )
    {
        I=4*Larg;
        J=2*Haut;
    }
    if((Sel3==22)&& (Lect3==1) )
    {
        I=5*Larg;
        J=2*Haut;
    }
    if((Sel3==23)&& (Lect3==1) )
    {
        I=6*Larg;
        J=2*Haut;
    }
    if((Sel3==24)&& (Lect3==1) )
    {
        I=7*Larg;
        J=2*Haut;
    }
//        if((Sel3==25)&& (Lect3==1) ){
//        I=0;
//        J=2*Haut;
//        }
//        if((Sel3==26)&& (Lect3==1) ){
//        I=Larg;
//        J=2*Haut;
//        }
//        if((Sel3==27)&& (Lect3==1) ){
//        I=2*Larg;
//        J=2*Haut;
//        }
//        if((Sel3==28)&& (Lect3==1) ){
//        I=3*Larg;
//        J=2*Haut;
//        }
//        if((Sel3==29)&& (Lect3==1) ){
//        I=4*Larg;
//        J=2*Haut;
//        }
//        if((Sel3==30)&& (Lect3==1) ){
//        I=5*Larg;
//        J=2*Haut;
//        }
//        if((Sel3==31)&& (Lect3==1) ){
//        I=6*Larg;
//        J=2*Haut;
//        }
//        if((Sel3==32)&& (Lect3==1) ){
//        I=7*Larg;
//        J=2*Haut;
//        }
    //------------------------
    if((Lect4==1) && (Sel==1) )
    {
        K=0;
        L=0;

    }
    if((Sel==2)&& (Lect4==1) )
    {
        K=Larg;
        L=0;
    }
    if((Sel==3)&& (Lect4==1) )
    {
        K=2*Larg;
        L=0;
    }
    if((Sel==4)&& (Lect4==1) )
    {
        K=3*Larg;
        L=0;
    }
    if((Sel==5)&& (Lect4==1) )
    {
        K=4*Larg;
        L=0;
    }
    if((Sel==6)&& (Lect4==1) )
    {
        K=5*Larg;
        L=0;
    }
    if((Sel==7)&& (Lect4==1) )
    {
        K=6*Larg;
        L=0;
    }
    if((Sel==8)&& (Lect4==1) )
    {
        K=7*Larg;
        L=0;
    }
    if((Sel==9)&& (Lect4==1) )
    {
        K=0;
        L=Haut;
    }
    if((Sel==10)&& (Lect4==1) )
    {
        K=Larg;
        L=Haut;
    }
    if((Sel==11)&& (Lect4==1) )
    {
        K=2*Larg;
        L=Haut;
    }
    if((Sel==12)&& (Lect4==1) )
    {
        K=3*Larg;
        L=Haut;
    }
    if((Sel==13)&& (Lect4==1) )
    {
        K=4*Larg;
        L=Haut;
    }
    if((Sel==14)&& (Lect4==1) )
    {
        K=5*Larg;
        L=Haut;
    }
    if((Sel==15)&& (Lect4==1) )
    {
        K=6*Larg;
        L=Haut;
    }
    if((Sel==16)&& (Lect4==1) )
    {
        K=7*Larg;
        L=Haut;
    }
    //------------------------

    if   ((Sel==17) && (Lect4==1))
    {
        K=0;
        L=2*Haut;

    }
    if((Sel==18)&& (Lect4==1) )
    {
        K=Larg;
        L=2*Haut;
    }
    if((Sel==19)&& (Lect4==1) )
    {
        K=2*Larg;
        L=2*Haut;
    }
    if((Sel==20)&& (Lect4==1) )
    {
        K=3*Larg;
        L=2*Haut;
    }
    if((Sel==21)&& (Lect4==1) )
    {
        K=4*Larg;
        L=2*Haut;
    }
    if((Sel==22)&& (Lect4==1) )
    {
        K=5*Larg;
        L=2*Haut;
    }
    if((Sel==23)&& (Lect4==1) )
    {
        K=6*Larg;
        L=2*Haut;
    }
    if((Sel==24)&& (Lect4==1) )
    {
        K=7*Larg;
        L=2*Haut;
    }
//        if((Sel==25)&& (Lect4==1) ){
//        K=0;
//        L=2*Haut;
//        }
//        if((Sel==26)&& (Lect4==1) ){
//        K=Larg;
//        L=2*Haut;
//        }
//        if((Sel==27)&& (Lect4==1) ){
//        K=2*Larg;
//        L=2*Haut;
//        }
//        if((Sel==28)&& (Lect4==1) ){
//        K=3*Larg;
//        L=2*Haut;
//        }
//        if((Sel==29)&& (Lect4==1) ){
//        K=4*Larg;
//        L=2*Haut;
//        }
//        if((Sel==30)&& (Lect4==1) ){
//        K=5*Larg;
//        L=2*Haut;
//        }
//        if((Sel==31)&& (Lect4==1) ){
//        K=6*Larg;
//        L=2*Haut;
//        }
//        if((Sel==32)&& (Lect4==1) ){
//        K=7*Larg;
//        L=2*Haut;
//        }
    //------------------------

    //------------------------

//------------------------
    if((Lect5==1) && (Sel5==1) )
    {
        M=0;
        N=0;

    }
    if((Sel5==2)&& (Lect5==1) )
    {
        M=1*Larg;
        N=0;
    }
    if((Sel5==3)&& (Lect5==1) )
    {
        M=2*Larg;
        N=0;
    }
    if((Sel5==4)&& (Lect5==1) )
    {
        M=3*Larg;
        N=0;
    }
    if((Sel5==5)&& (Lect5==1) )
    {
        M=4*Larg;
        N=0;
    }
    if((Sel5==6)&& (Lect5==1) )
    {
        M=5*Larg;
        N=0;
    }
    if((Sel5==7)&& (Lect5==1) )
    {
        M=6*Larg;
        N=0;
    }
    if((Sel5==8)&& (Lect5==1) )
    {
        M=7*Larg;
        N=0;
    }
    if((Sel5==9)&& (Lect5==1) )
    {
        M=0;
        N=1*Haut;
    }
    if((Sel5==10)&& (Lect5==1) )
    {
        M=1*Larg;
        N=1*Haut;
    }
    if((Sel5==11)&& (Lect5==1) )
    {
        M=2*Larg;
        N=1*Haut;
    }
    if((Sel5==12)&& (Lect5==1) )
    {
        M=3*Larg;
        N=1*Haut;
    }
    if((Sel5==13)&& (Lect5==1) )
    {
        M=4*Larg;
        N=1*Haut;
    }
    if((Sel5==14)&& (Lect5==1) )
    {
        M=5*Larg;
        N=1*Haut;
    }
    if((Sel5==15)&& (Lect5==1) )
    {
        M=6*Larg;
        N=1*Haut;
    }
    if((Sel5==16)&& (Lect5==1) )
    {
        M=7*Larg;
        N=1*Haut;
    }
    //------------------------

    if   ((Sel5==17) && (Lect5==1))
    {
        M=0;
        N=2*Haut;

    }
    if((Sel5==18)&& (Lect5==1) )
    {
        M=1*Larg;
        N=2*Haut;
    }
    if((Sel5==19)&& (Lect5==1) )
    {
        M=2*Larg;
        N=2*Haut;
    }
    if((Sel5==20)&& (Lect5==1) )
    {
        M=3*Larg;
        N=2*Haut;
    }
    if((Sel5==21)&& (Lect5==1) )
    {
        M=4*Larg;
        N=2*Haut;
    }
    if((Sel5==22)&& (Lect5==1) )
    {
        M=5*Larg;
        N=2*Haut;
    }
    if((Sel5==23)&& (Lect5==1) )
    {
        M=6*Larg;
        N=2*Haut;
    }
    if((Sel5==24)&& (Lect5==1) )
    {
        M=7*Larg;
        N=2*Haut;
    }
//        if((Sel5==25)&& (Lect5==1) ){
//        M=0;
//        N=3*Haut;
//        }
//        if((Sel5==26)&& (Lect5==1) ){
//        M=1*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==27)&& (Lect5==1) ){
//        M=2*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==28)&& (Lect5==1) ){
//        M=3*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==29)&& (Lect5==1) ){
//        M=4*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==30)&& (Lect5==1) ){
//        M=5*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==31)&& (Lect5==1) ){
//        M=6*Larg;
//        N=3*Haut;
//        }
//        if((Sel5==32)&& (Lect5==1) ){
//        M=7*Larg;
//        N=3*Haut;
//        }
    //------------------------
//////////////////////////////////////////////////////        dir.listDir(dossierV);
//////////////////////////////////////////////////////    dir.allowExt("mov");
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////    dir.sort();
//////////////////////////////////////////////////////if((Lect1==1) && (Sel==1) && (dir.size()>= 1 )){
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(1 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect1==1) && (Sel==2)  && (dir.size()>= 2 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(2 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect1==1) && (Sel==3) && (dir.size()>= 3 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(3 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect1==1) && (Sel==4)  && (dir.size()>= 4 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(4 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect1==1) && (Sel==5)  && (dir.size()>= 5 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(5 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect1==1) && (Sel==6)  && (dir.size()>= 6 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(6 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==7 ) && (dir.size()>=  7)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(7 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==8) && (dir.size()>= 8 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(8 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==9) && (dir.size()>= 9 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(9 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==10) && (dir.size()>= 10 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(10 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==11) && (dir.size()>= 11 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(11 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==12) && (dir.size()>= 12 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(12 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==13)  && (dir.size()>= 13 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(13 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==14) && (dir.size()>=14  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(14 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==15) && (dir.size()>=15  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(15 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==16)  && (dir.size()>= 16)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(16 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==17)&& (dir.size()>= 17 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(17 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==18)&& (dir.size()>= 18 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(18 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==19) &&  (dir.size()>=19)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(19 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==20) && (dir.size()>=20  )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(20 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==21)&& (dir.size()>=  21) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(21 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==22)&& (dir.size()>= 22 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(22 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==23)&& (dir.size()>= 23 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(23 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==24) && (dir.size()>= 24 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(24 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==25)&& (dir.size()>= 25 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(25 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==26) && (dir.size()>= 26 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(26 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==27)&& (dir.size()>=27  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(27 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==28) && (dir.size()>=  28)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(28 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==29) && (dir.size()>=  29)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(29 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==30)&& (dir.size()>=30  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(30 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==31)&& (dir.size()>=  31) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(31 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect1==1) && (Sel==32)&& (dir.size()>= 32 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open1");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(32 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
////////////////////////////////////////////////////////-------------------------------------------
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////  if((Lect2==1) && (Sel==1) && (dir.size()>= 1 )){
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(1 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect2==1) && (Sel==2)  && (dir.size()>= 2 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(2 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect2==1) && (Sel==3) && (dir.size()>= 3 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(3 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect2==1) && (Sel==4)  && (dir.size()>= 4 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(4 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect2==1) && (Sel==5)  && (dir.size()>= 5 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(5 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect2==1) && (Sel==6)  && (dir.size()>= 6 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(6 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==7 ) && (dir.size()>=  7)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(7 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==8) && (dir.size()>= 8 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(8 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==9) && (dir.size()>= 9 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(9 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==10) && (dir.size()>= 10 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(10 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==11) && (dir.size()>= 11 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(11 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==12) && (dir.size()>= 12 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(12 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==13)  && (dir.size()>= 13 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(13 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==14) && (dir.size()>=14  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(14 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==15) && (dir.size()>=15  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(15 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==16)  && (dir.size()>= 16)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(16 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==17)&& (dir.size()>= 17 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(17 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==18)&& (dir.size()>= 18 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(18 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==19) &&  (dir.size()>=19)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(19 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==20) && (dir.size()>=20  )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(20 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==21)&& (dir.size()>=  21) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(21 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==22)&& (dir.size()>= 22 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(22 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==23)&& (dir.size()>= 23 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(23 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==24) && (dir.size()>= 24 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(24 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==25)&& (dir.size()>= 25 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(25 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==26) && (dir.size()>= 26 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(26 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==27)&& (dir.size()>=27  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(27 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==28) && (dir.size()>=  28)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(28 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==29) && (dir.size()>=  29)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(29 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==30)&& (dir.size()>=30  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(30 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==31)&& (dir.size()>=  31) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(31 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect2==1) && (Sel==32)&& (dir.size()>= 32 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open2");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(32 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        //------------------------
//////////////////////////////////////////////////////        //---------------------------------------------------------------------------------------------------------------------------------------------
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==1) && (dir.size()>= 1 )){
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(1 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect3==1) && (Sel==2)  && (dir.size()>= 2 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(2 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect3==1) && (Sel==3) && (dir.size()>= 3 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(3 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect3==1) && (Sel==4)  && (dir.size()>= 4 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(4 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect3==1) && (Sel==5)  && (dir.size()>= 5 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(5 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect3==1) && (Sel==6)  && (dir.size()>= 6 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(6 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==7 ) && (dir.size()>=  7)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(7 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==8) && (dir.size()>= 8 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(8 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==9) && (dir.size()>= 9 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(9 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==10) && (dir.size()>= 10 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(10 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==11) && (dir.size()>= 11 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(11 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==12) && (dir.size()>= 12 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(12 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==13)  && (dir.size()>= 13 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(13 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==14) && (dir.size()>=14  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(14 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==15) && (dir.size()>=15  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(15 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==16)  && (dir.size()>= 16)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(16 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==17)&& (dir.size()>= 17 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(17 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==18)&& (dir.size()>= 18 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(18 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==19) &&  (dir.size()>=19)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(19 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==20) && (dir.size()>=20  )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(20 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==21)&& (dir.size()>=  21) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(21 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==22)&& (dir.size()>= 22 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(22 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==23)&& (dir.size()>= 23 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(23 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==24) && (dir.size()>= 24 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(24 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==25)&& (dir.size()>= 25 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(25 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==26) && (dir.size()>= 26 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(26 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==27)&& (dir.size()>=27  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(27 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==28) && (dir.size()>=  28)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(28 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==29) && (dir.size()>=  29)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(29 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==30)&& (dir.size()>=30  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(30 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==31)&& (dir.size()>=  31) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(31 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect3==1) && (Sel==32)&& (dir.size()>= 32 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open3");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(32 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        //------------------------
////////////////////////////////////////////////////////---------------------------------------------------------------------------------------------------------------------------------------------
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==1) && (dir.size()>= 1 )){
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(1 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect4==1) && (Sel==2)  && (dir.size()>= 2 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(2 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect4==1) && (Sel==3) && (dir.size()>= 3 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(3 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect4==1) && (Sel==4)  && (dir.size()>= 4 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(4 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect4==1) && (Sel==5)  && (dir.size()>= 5 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(5 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////                if((Lect4==1) && (Sel==6)  && (dir.size()>= 6 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(6 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==7 ) && (dir.size()>=  7)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(7 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==8) && (dir.size()>= 8 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(8 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==9) && (dir.size()>= 9 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(9 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==10) && (dir.size()>= 10 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(10 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==11) && (dir.size()>= 11 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(11 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==12) && (dir.size()>= 12 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(12 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==13)  && (dir.size()>= 13 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(13 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==14) && (dir.size()>=14  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(14 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==15) && (dir.size()>=15  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(15 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==16)  && (dir.size()>= 16)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(16 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==17)&& (dir.size()>= 17 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(17 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==18)&& (dir.size()>= 18 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(18 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==19) &&  (dir.size()>=19)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(19 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==20) && (dir.size()>=20  )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(20 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==21)&& (dir.size()>=  21) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(21 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==22)&& (dir.size()>= 22 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(22 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==23)&& (dir.size()>= 23 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(23 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==24) && (dir.size()>= 24 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(24 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==25)&& (dir.size()>= 25 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(25 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==26) && (dir.size()>= 26 )){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(26 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==27)&& (dir.size()>=27  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(27 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==28) && (dir.size()>=  28)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(28 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==29) && (dir.size()>=  29)){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(29 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==30)&& (dir.size()>=30  ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(30 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==31)&& (dir.size()>=  31) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(31 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
//////////////////////////////////////////////////////        if((Lect4==1) && (Sel==32)&& (dir.size()>= 32 ) ){
//////////////////////////////////////////////////////        ofxOscMessage m;
//////////////////////////////////////////////////////        m.setAddress("/Open4");
//////////////////////////////////////////////////////        m.addStringArg(dir.getPath(32 -1));
//////////////////////////////////////////////////////        sender.sendMessage(m);
//////////////////////////////////////////////////////        //Sel=0;
//////////////////////////////////////////////////////        }
    //------------------------
//-------------------------------------------
//    bClic   =   1;
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button)
{
    Sel1 =    0;
    Sel2 =    0;
    Sel3 =    0;
    Sel4 =    0;
    Sel5 =    0;

//     bClic   =   0;

}
