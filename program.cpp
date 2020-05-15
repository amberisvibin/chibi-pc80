//Z80 SCREENTEST
#include <SDL2/SDL.h> 
#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

//define chars
bool chars[69][8][8] { 

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,1,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,0,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,1,1,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,1,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,0,1,1,0,0,},
    {0,1,0,1,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,0,0,1,0,0,},
    {0,1,0,1,0,1,0,0,},
    {0,1,0,0,1,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,1,0,1,0,0,},
    {0,1,0,0,1,0,0,0,},
    {0,0,1,1,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,1,0,1,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,0,0,0,0,},
    {0,1,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,1,1,0,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,1,0,0,},
    {0,0,1,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,1,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,1,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,1,1,1,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,1,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,1,0,1,0,1,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,1,0,1,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,1,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,1,0,1,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,1,1,0,0,1,0,0,},
    {0,1,1,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,1,1,0,0,},
    {0,1,0,0,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,0,0,0,0,},
    {0,1,0,1,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,1,0,1,0,0,0,0,},
    {0,1,0,0,1,0,0,0,},
    {0,0,1,1,0,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,1,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,0,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,0,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,1,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,1,0,0,0,},
    {0,1,0,0,0,1,0,0,},
    {0,1,0,1,0,1,0,0,},
    {0,1,0,1,1,1,0,0,},
    {0,1,0,0,0,0,0,0,},
    {0,0,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,1,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,0,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,1,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,1,1,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,1,0,0,0,0,0,},
    {0,0,0,1,0,0,0,0,},
    {0,0,0,1,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,1,1,1,0,1,0,0,},
    {0,1,0,1,1,1,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },

    {
    {0,0,0,0,0,0,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,0,1,0,1,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,},
    },
};

map<char, int> charMap = {      {' ',                0},
                                {'a',                1}, 
                                {'b',                2},
                                {'c',                3}, 
                                {'d',                4},
                                {'e',                5}, 
                                {'f',                6},
                                {'g',                7}, 
                                {'h',                8},
                                {'i',                9}, 
                                {'j',                10},
                                {'k',                11}, 
                                {'l',                12},
                                {'m',                13}, 
                                {'n',                14},
                                {'o',                15}, 
                                {'p',                16},
                                {'q',                17}, 
                                {'r',                18},
                                {'s',                19}, 
                                {'t',                20},
                                {'u',                21}, 
                                {'v',                22},
                                {'w',                23}, 
                                {'x',                24},
                                {'y',                25}, 
                                {'z',                26},
                                {'1',                27},
                                {'2',                28},
                                {'3',                29},
                                {'4',                30},
                                {'5',                31},
                                {'6',                32},
                                {'7',                33},
                                {'8',                34},
                                {'9',                35},
                                {'0',                36},
                                {'`',                37},
                                {'-',                38},
                                {'=',                39},
                                {'\\',               40},
                                {'/',                41},
                                {'[',                42},
                                {']',                44},
                                {';',                45},
                                {'\'',               47},
                                {',',                48},
                                {'.',                49}
                                
};

map<char, int> shiftMap = {     {'!',                52},
                                {'@',                62},
                                {'#',                54},
                                {'$',                55},
                                {'%',                56},
                                {'^',                63},
                                {'&',                57},
                                {'*',                50},
                                {'(',                58},
                                {')',                59},
                                {'~',                67},
                                {'_',                64},
                                {'+',                51},
                                {'|',                43},
                                {'?',                53},
                                {'{',                66},
                                {'}',                65},
                                {':',                46},
                                {'\"',               68},
                                {'<',                60},
                                {'>',                61}
                                
};

map<char, char> shiftConv = {   {'1',                '!'},
                                {'2',                '@'},
                                {'3',                '#'},
                                {'4',                '$'},
                                {'5',                '%'},
                                {'6',                '^'},
                                {'7',                '&'},
                                {'8',                '*'},
                                {'9',                '('},
                                {'0',                ')'},
                                {'`',                '~'},
                                {'-',                '_'},
                                {'=',                '+'},
                                {'\\',               '|'},
                                {'/',                '?'},
                                {'[',                '{'},
                                {']',                '}'},
                                {';',                ':'},
                                {'\'',              '\"'},
                                {',',                '<'},
                                {'.',                '>'}
                                
};

/*map<SDL_Keycode, int> charMap{  {SDLK_SPACE,            0},
                                {SDLK_a,                1}, 
                                {SDLK_b,                2},
                                {SDLK_c,                3}, 
                                {SDLK_d,                4},
                                {SDLK_e,                5}, 
                                {SDLK_f,                6},
                                {SDLK_g,                7}, 
                                {SDLK_h,                8},
                                {SDLK_i,                9}, 
                                {SDLK_j,                10},
                                {SDLK_k,                11}, 
                                {SDLK_l,                12},
                                {SDLK_m,                13}, 
                                {SDLK_n,                14},
                                {SDLK_o,                15}, 
                                {SDLK_p,                16},
                                {SDLK_q,                17}, 
                                {SDLK_r,                18},
                                {SDLK_s,                19}, 
                                {SDLK_t,                20},
                                {SDLK_u,                21}, 
                                {SDLK_v,                22},
                                {SDLK_w,                23}, 
                                {SDLK_x,                24},
                                {SDLK_y,                25}, 
                                {SDLK_z,                26},
                                {SDLK_1,                27},
                                {SDLK_2,                28},
                                {SDLK_3,                29},
                                {SDLK_4,                30},
                                {SDLK_5,                31},
                                {SDLK_6,                32},
                                {SDLK_7,                33},
                                {SDLK_8,                34},
                                {SDLK_9,                35},
                                {SDLK_0,                36},
                                {SDLK_BACKQUOTE,        37},
                                {SDLK_MINUS,            38},
                                {SDLK_EQUALS,           39},
                                {SDLK_BACKSLASH,        40},
                                {SDLK_SLASH,            41},
                                {SDLK_LEFTBRACKET,      42},
                                {SDLK_RIGHTBRACKET,     44},
                                {SDLK_SEMICOLON,        45},
                                {SDLK_QUOTE,            47},
                                {SDLK_COMMA,            48},
                                {SDLK_PERIOD,           49},
                                
};

map<SDL_Keycode, int> shiftMap{ {SDLK_SPACE,            0},
                                {SDLK_a,                1}, 
                                {SDLK_b,                2},
                                {SDLK_c,                3}, 
                                {SDLK_d,                4},
                                {SDLK_e,                5}, 
                                {SDLK_f,                6},
                                {SDLK_g,                7}, 
                                {SDLK_h,                8},
                                {SDLK_i,                9}, 
                                {SDLK_j,                10},
                                {SDLK_k,                11}, 
                                {SDLK_l,                12},
                                {SDLK_m,                13}, 
                                {SDLK_n,                14},
                                {SDLK_o,                15}, 
                                {SDLK_p,                16},
                                {SDLK_q,                17}, 
                                {SDLK_r,                18},
                                {SDLK_s,                19}, 
                                {SDLK_t,                20},
                                {SDLK_u,                21}, 
                                {SDLK_v,                22},
                                {SDLK_w,                23}, 
                                {SDLK_x,                24},
                                {SDLK_y,                25}, 
                                {SDLK_z,                26},
                                {SDLK_1,                52},
                                {SDLK_2,                62},
                                {SDLK_3,                54},
                                {SDLK_4,                55},
                                {SDLK_5,                56},
                                {SDLK_6,                63},
                                {SDLK_7,                57},
                                {SDLK_8,                50},
                                {SDLK_9,                58},
                                {SDLK_0,                59},
                                {SDLK_BACKQUOTE,        67},
                                {SDLK_MINUS,            64},
                                {SDLK_EQUALS,           51},
                                {SDLK_BACKSLASH,        43},
                                {SDLK_SLASH,            53},
                                {SDLK_LEFTBRACKET,      66},
                                {SDLK_RIGHTBRACKET,     65},
                                {SDLK_SEMICOLON,        46},
                                {SDLK_QUOTE,            68},
                                {SDLK_COMMA,            60},
                                {SDLK_PERIOD,           61},
                                
};*/


string shiftChars = R"(!@#$%^&*()~_+|?{}:"<>)";                            

//int screen[40][25]; but in vector
vector< vector<int> > screen(40, vector<int>(25));

const char* ver = "0.1.0-prerelease";

bool cursor = false;

int a = 0;
int b = 0;

void drawChar(SDL_Renderer *renderer, int scale, int x, int y, int charToDraw) {

    
    

    //set up
    SDL_RenderSetScale(renderer, scale, scale);
    

    //8x8 char loop
    for(int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            
            //get actual coords of pixels to draw
            int realX = j + (x * 8);
            int realY = i + (y * 8);

            if (chars[charToDraw][i][j]) {

                SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
                SDL_RenderDrawPoint(renderer, realX, realY);

            } else {

                SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
                SDL_RenderDrawPoint(renderer, realX, realY);

            }
        }
    }
    
}

void drawScreen(SDL_Renderer *renderer, int scale, int x, int y) {

    for(int c=0;c<40;c++) {
        for(int d=0;d<25;d++) {
            drawChar(renderer, scale, c, d, screen[c][d]); 
        }
    }

    if (cursor) {

        drawChar(renderer, scale, x, y, 64); 

    }

}

void clearScreen() {
    
    screen.clear();

}

void scrollScreen() {

    for(int c=0;c<40;c++) {
        for(int d=0;d<24;d++) {
            screen[c][d] = screen[c][d+1];
        }
    }

    for(int c=0;c<40;c++) {
    
        screen[c][24] = 0;
    
    }

}

void printCharFromCode(int charCode) {

    screen[a][b] = charCode;
       
    if (a < 39) { a++; } else { a = 0; b++; }
    if (b < 25) {} else { b = 24; scrollScreen(); }    

}

void printChar(char charToDraw) {

    if (shiftChars.find(charToDraw) != string::npos) {

        printCharFromCode(shiftMap[charToDraw]);

    } else {

        printCharFromCode(charMap[charToDraw]);

    }

}

void print(string stringToPrint) {

    for(int f=0; f < stringToPrint.length(); f++) {

        printChar(stringToPrint[f]);

    }

}

void println(string stringToPrint) {

    for(int f=0; f < stringToPrint.length(); f++) {

        printChar(stringToPrint[f]);

    }

    a = 0;
    b++;

}

int main(int argc, char* argv[]) {

    //setup

    //output version info

    SDL_version compiled;
    SDL_version linked;

    SDL_VERSION(&compiled);
    SDL_GetVersion(&linked);

    SDL_LogInfo(SDL_LOG_CATEGORY_APPLICATION, "Z80SCREENTEST %s", ver);
    SDL_LogInfo(SDL_LOG_CATEGORY_APPLICATION, "SDL2 compile  %d.%d.%d",
                                               compiled.major, compiled.minor, compiled.patch);
    SDL_LogInfo(SDL_LOG_CATEGORY_APPLICATION, "SDL2 link     %d.%d.%d",
                                               linked.major, linked.minor, linked.patch);

    

    //declare pointers
    SDL_Window      *window;
    SDL_Renderer    *renderer;

    //set a scale
    int scale = 4;

    //prevent crash on some os's
    SDL_SetMainReady();

    //initialize SDL2
    if (SDL_Init(0) < 0) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_Init failed: %s", SDL_GetError());
        SDL_Quit();
        return 3;
    };

    //create window with properties:
    window = SDL_CreateWindow(
        "Z80 SCREENTEST",                  //window title
        SDL_WINDOWPOS_UNDEFINED,           //initial x position
        SDL_WINDOWPOS_UNDEFINED,           //initial y position
        320 * scale,                       //width, in pixels
        200 * scale,                       //height, in pixels
        SDL_WINDOW_OPENGL                  //flags
    );
 
    // Check that the window was successfully created
    if (window == NULL) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_CreateWindow failed: %s", SDL_GetError());
        SDL_Quit();
        return 3;
    };
    
    //create renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (renderer == NULL) {
        SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "SDL_CreateRenderer failed: %s", SDL_GetError());
        SDL_Quit();
        return 3;
    }; 

    //clear screen to black
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    
    println("cp/m 2.2");
    println("copyright 1979 digital research");
    println("");
    print("a>");

    

    

    Uint32 time = SDL_GetTicks();

    //program loop 
    bool close = 0;
    while (!close) { 
        
        drawScreen(renderer, scale, a, b);
        SDL_RenderPresent(renderer);

        if (SDL_GetTicks() > time + 500) {

            cursor = !cursor;
            time = SDL_GetTicks();
        }
        //handle events
        SDL_Event event;
        while (SDL_PollEvent(&event)) { 
            switch (event.type) { 
  
            //close
            case SDL_QUIT:  
                close = 1; 
                break; 
            case SDL_KEYDOWN: 
                switch (event.key.keysym.sym) {

                    case SDLK_RETURN:
                        cursor = true;
                        a = 0;
                        if (b < 24) { b++; } else { b = 24; scrollScreen(); }
                        time = SDL_GetTicks();
                        break;

                    case SDLK_TAB:
                        a = a + 2;
                        break;

                    case SDLK_BACKSPACE:
                        
                        cursor = true;

                        if (a == 0) {
                            if (b != 0) {
                                a = 40;
                                b = b - 1;
                            } else {
                                break;
                            }
                        }
                        a = a - 1;
                        screen[a][b] = 0;
                        
                        time = SDL_GetTicks();

                        break;

                    default:
                    
                        cout << shiftMap[event.key.keysym.sym];

                        if (charMap.count(event.key.keysym.sym) == 0) { break; }

                        cursor = true;

                        if (event.key.keysym.mod == 4097) {
                        
                            //char shiftSym = 

                            printCharFromCode(shiftMap[shiftConv[event.key.keysym.sym]]);

                        } else {

                            printCharFromCode(charMap[event.key.keysym.sym]);

                        }
               

                        time = SDL_GetTicks();

                        break;

                }
            }             
        } 
    }

    //destroy things
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    //clean up sdl
    SDL_Quit();

    return 0;
}