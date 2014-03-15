#include "testApp.h"
#include "ofDirectShowPlayer.h"

//--------------------------------------------------------------
void testApp::setup()
{
    ofBackground(0);
    ofSetFrameRate(60.0);
    ofSetVerticalSync(true);

    if (video.loadMovie("movies/fingers.mov")) video.play();
    else cout << "No video file found!" << endl;
}

//--------------------------------------------------------------
void testApp::exit() 
{

}

//--------------------------------------------------------------
void testApp::update()
{
	ofSetWindowTitle(ofToString(ofGetFrameRate()));

    video.update();
}

//--------------------------------------------------------------
void testApp::draw()
{
    if (video.isLoaded() && video.isFrameNew()) {
        if(!tex.isAllocated()) tex.allocate(video.getPixelsRef());
        else tex.loadData(video.getPixelsRef());
    }

    tex.draw(0, 0);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key)
{
    if (key == 'f') {
        ofToggleFullscreen();
    }
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}
