#include"iostream"
#include"vector"
#include"string"
using namespace std;

int main() {
    vector<string> strVec;

    strVec.push_back("Sophia");
    strVec.push_back("and");
    strVec.push_back("Nemo");
    strVec.push_back("are");
    strVec.push_back("good");
    strVec.push_back("people.");

    cout << "The capacity of the original vector is: " << strVec.capacity() << endl;

    vector<string>(strVec).swap(strVec);

    cout << "The capacity of the original vector first swap is: " << strVec.capacity() << " ???" << endl;     //??????

    for (vector<string>::iterator iter = strVec.begin(); iter != strVec.end();) {
        if ((*iter) == "and")
            iter=strVec.erase(iter);
        else if((*iter) == "Nemo")
            iter = strVec.erase(iter);
        else
            iter++;
    }

    vector<string>(strVec).swap(strVec);

    cout << "After deleting two elements in the vector, now the capacity is: " << strVec.capacity() << endl;

    vector<string>().swap(strVec);

    cout << "After clearing, now the capacity is: " << strVec.capacity() << endl;

    return 0;
}
