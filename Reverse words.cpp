std::string reverse_words(std::string str)
{
    std::string rh = "";
    std::string result = "";
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            rh.push_back(str[i]);
        }
        else {
            while (not(rh.empty())) {
                result.push_back(rh.back());
                rh.pop_back();
            }
            result += " ";
        }
    }
    while (not(rh.empty())) {
        result.push_back(rh.back());
        rh.pop_back();
    }
    return result;
}
