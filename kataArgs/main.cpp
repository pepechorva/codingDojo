#include <iostream>>


using namespace std;

string directory;
bool logging = false;
bool setPort = false;
bool setDirectory = false;
int port = 0;


bool directoryFlagExists(string detectedFlag)
{
    if(detectedFlag == "-d")
    {
        setDirectory = true;
        return true;
    }
    else
    {
        return false;
    }
}

bool portFlagExists(string detectedFlag)
{
    if(detectedFlag == "-p")
    {
        setPort = true;
        return true;
    }
    else
    {
        return false;
    }
}

bool isLogged(string detectedFlag)
{
    if(detectedFlag == "-l")
    {
        logging = true;
        return true;
    }
    else
    {
        return false;
    }
}

void compruebaArgs(int argc, char *argv[])
{
    string detectedFlag="";

    for(unsigned int i = 1; i < argc; i++)
    {
    
    detectedFlag = argv[i];

    if((isLogged(detectedFlag)))
    ;

    if((portFlagExists(detectedFlag)))
    {
        port = atoi(argv[i+1]);
    }

    if((directoryFlagExists(detectedFlag)))
    {
        directory = argv[i+1];
    }
    
    detectedFlag="";
  }

}

int main(int argc, char*argv[])
{
  compruebaArgs(argc, argv);
 
       
  if(logging)
  {
    cout << "loggeado" << endl;
  }
  if(setPort)
  {
    cout << "establecido el puerto " << port << endl;
  }
  if(setDirectory)
  {
    cout << "directorio introducido: "<< directory << endl;
  }  

}
