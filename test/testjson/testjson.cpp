#include "json.hpp"
using json = nlohmann::json;

#include<iostream>
#include<vector>
#include<map>

using namespace std;

// json序列化示例1
string func1() {
    json js;
    js["msg_type"] = 2;
    js["from"] = "susong";
    js["to"] = "huijingyue";
    js["msg"] = "hello, what are you doing now ?" ;

    string sendBuf = js.dump();  // json数据对象 =》 序列化json字符串
    // cout << sendBuf.c_str() << endl;
    return sendBuf;
}

void func2() {
    json js;
    js["id"] = {1, 2, 3, 4, 5};
    js["name"] = "suxiaosong";
    js["msg"]["hujingyue"] = "hello world";
    js["msg"]["hjy"] = "hello hjy";
    js["msg"] = {{"hujingyue", "hello world"}, {"hjy", "hello hjy"}};

    cout << js << endl;
}

int main()
{
    string recvBuf = func1();
    json jsbuf = json::parse(recvBuf);  // 数据反序列化
    cout << jsbuf["msg_type"] << endl;
    cout << jsbuf["from"] << endl;
    cout << jsbuf["to"] << endl;
    cout << jsbuf["msg"] << endl;

    func2();

    return 0;
}