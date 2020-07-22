#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    //vector<string> msg = {"hello", "C++", "world", "from", "VS Code", "and the C++ extension!"};
    //for(auto word : msg)
    //{
    //    cout << word << " ";
    //}
    string msg1 = "hello world, vscode.";
    cout << msg1 << endl;
    int j = 0;
    for(int i = 0; i<100; i++)
    {
        j = j + i;
        cout << j << endl;
    }
    return 0;
}