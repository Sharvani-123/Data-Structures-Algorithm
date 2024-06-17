#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,int> desk_map;
    desk_map[1]=53;
    desk_map[2]=54;
    desk_map[3]=57;

    desk_map[2]=58; //reassign (map can only contain unique keys)
    //to iterate over a map, we need to make an iterator
    //the iterator is a pointer to the map's internal node

    //using for loop(method 1)
    unordered_map<int,int>::iterator it;
    for(it=desk_map.begin(); it!=desk_map.end();it++){
        int key= it->first;
        int value= it->second;
        cout<<"Key: "<<key<<" "<<"Value: "<<value<<endl;
    }
    //using for each(method-2)
    for(auto it: desk_map){
        int key= it.first;
        int value= it.second;
        cout<<"Key: "<<key<<" "<<"Value: "<<value<<endl;
    }

    //find if exits
    if(desk_map.find(1)!=desk_map.end()){
        //found
        cout<<"Key exits"<<endl;
        int value=desk_map[1];
        cout<<"The value is: "<<value<<endl;
    }
    else{
        //not found
        cout<<"Doesn't Exists"<<endl;
    }
    // deletion is also done using the key
    desk_map.erase(1);

    cout<<"After erase: "<<endl;
     unordered_map<int,int>::iterator itr;
    for(itr=desk_map.begin(); itr!=desk_map.end();itr++){
        int key= itr->first;
        int value= itr->second;
        cout<<"Key: "<<key<<" "<<"Value: "<<value<<endl;
    }
    return 0;
}