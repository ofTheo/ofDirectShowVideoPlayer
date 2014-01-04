ofDirectShowVideoPlayer
=======================

ofDirectShowVideoPlayer contains DirectShowVideo a C++ class that allows for video playback and pixel access and ofDirectShowVideoPlayer an openFrameworks wrapper.



Video plackback is not currently callback based, but it will be updated shortly for a callback based capture approach.
This implementation, implements all the ofBaseVideoPlayer virtual functions. 



To allow for QuickTime video playback with this player install the K-Lite Mega Codec Pack 10.2



This code is free to be used in any manner with or without attribution. 

No warrenty is offered or implied. 


To try out:
-Make sure you have OF v0.8.0 or higher 
-Download the files and add to your project
-Duplicate the moviePlayerExample and add the following lines to testApp::setup 
	dPlayer = new ofDirectShowPlayer(); 
	ofPtr <ofBaseVideoPlayer> ptr(dPlayer);
	fingerMovie.setPlayer(ptr); 

Credits:
Code is based off of examples provided by MSDN, the videoInput library, http://www.codeproject.com/Articles/30450/A-simple-console-DirectShow-player and http://www.geekpage.jp/en/programming/directshow/


