# read4me-api

### Read4me PDF to voice converter API

##### 1. Requirements:
 
* [espeak](https://github.com/rhdunn/espeak)
* [PoDoFo](https://github.com/mekentosj/podofo)
    
##### 2. Using:

##### 2.1. espeak:

* Compile espeak:
    
    `cd app/libs/espeak/src && make`

* Errors with portaudio:
    
    * Maybe you can get some errors with portaudio libraries, which espeak depends. If this occurs, then download portaudio19-dev package. In Debian-like distros, you should run this command to do it:
    
        `sudo apt-get install portaudio19-dev`
        

##### 2.2. PoDoFo:

* Compile PoDoFo:
    
    `cd app/libs/` 
    
    `mkdir podofo-build && cd $_`
    
    `cmake -G "Unix Makefiles" -DCMAKE_INSTALL_PREFIX="$HOME/podofo" ../podofo`
    
    `make && make install`
    
##### 3. Compiling the project:

`cd app && make`
     
##### 4. Contributors:

See project contributors [here](https://github.com/read4me/read4me-api/graphs/contributors).
