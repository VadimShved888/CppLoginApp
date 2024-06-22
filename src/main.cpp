#include <iostream>
#include <cpr/cpr.h>

int main() {
    std::string url = "http://testphp.vulnweb.com/userinfo.php";
    cpr::Payload payload = {{"uname", "test"}, {"pass", "test"}};

    cpr::Response response = cpr::Post(cpr::Url{url}, payload);

    std::cout << response.text << std::endl;

    return 0;
}