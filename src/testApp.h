#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "ofxUI.h"

#include "ofxOsc.h"
#define RPORT 12348 //incoming//        ofxGLWarper warper;

#define SPORT 12347 //outgoing
// listen on port 12345
//#define PORT 12345
#define NUM_MSG_STRINGS 100
#define HOST "localhost"


class testApp : public ofSimpleApp{

	public:

		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased (int key);

		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);



		ofVideoGrabber 		vidGrabber;
		ofVideoPlayer playerA01, playerA02, playerA03, playerA04, playerA05, playerA06, playerA07, playerA08, playerA09, playerA10, playerA11, playerA12, playerA13, playerA14, playerA15, playerA16;
		ofVideoPlayer playerB01, playerB02, playerB03, playerB04, playerB05, playerB06, playerB07, playerB08, playerB09, playerB10, playerB11, playerB12, playerB13, playerB14, playerB15, playerB16;


		int 				camWidth;
		int 				camHeight;
        ofImage currentFrame0, currentFrame1, currentFrame2, currentFrame3, currentFrame4, currentFrame5, currentFrame6, currentFrame7;
		//		void openVideo();
        string movieAdress;
        string currentFileName;
        string  currentFilePath;
        string  dirV;
        ofFile file;
        ofDirectory dir;
		vector<ofImage> images;
		int currentImage;
		float   numV,   TotalV,counter;
		int Sel,A,B,C,D,E,F,G,H,I,J,K,L,M,N;
		ofRectangle  RectBlanc;

        vector<ofxUICanvas *> guis;
        map<string, ofxUICanvas *> guihash;
        void guiEvent(ofxUIEventArgs &e);
        ofxUIScrollableCanvas *gui;
        ofxUICanvas *gui1;

		void setupGUI1();
		void setupGUI2();
		int B1,B2,B3;
		ofxUIDropDownList *ddl;

//----------------------------------------------------------------------------------

		ofTrueTypeFont font;
		ofxOscReceiver receiver;
		ofxOscSender    sender;
		string getOscMsgAsString(ofxOscMessage m);

		int current_msg_string;
		string msg_strings[NUM_MSG_STRINGS];
		float timers[NUM_MSG_STRINGS];
		string  dossierV;
		bool drawPadding;

//		vector<ofImage> currentFrame;
		ofTrueTypeFont	verdana14;
		string  fps;

		float   Haut,Larg;
		int   Lect1,Lect2,Lect3,Lect4,Lect,Lect5;
		int Sel1,Sel2,Sel3,Sel4,Sel5;

		ofxXmlSettings XML;
		ofTrueTypeFont TTF;
		float   dirSize;
		bool bClic,bWindow;


};

#endif

