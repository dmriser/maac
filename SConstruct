import os, glob 

# Config environment 
env = Environment(ENV = {'PATH':os.environ['PATH']}, h22libs=os.environ['ANALYSIS_PATH'])
env.ParseConfig("root-config --glibs --cflags")
env.Append(CCFLAGS = ['-g','-std=c++11'])
env.Append(CPPPATH = ['$h22libs/include/'], LIBPATH = ['$h22libs/lib/'],LIBS = ['h22'])

sources  = glob.glob('source/base/*.cxx')
env.SharedLibrary('lib/maac',sources)
