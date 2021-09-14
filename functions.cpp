#include <string>
#include <iostream>

void bleep(std::string word, std::string &text) {
  std::string temp = "";

  for(int i = 0; i <= text.size(); i++) {

    if (text[i] == ' ' || text[i] == '.' || i == text.size()) {

      if (temp == word) {

        for (int j = 0; j < word.size(); j++) {

          text[i-temp.size()+j] = '*';

        }

      }

       temp = "";

    }
    else {

        bool flag = false;
        int k = 0;

        while(!flag && k < word.size()){

            if (text[i] == word[k]){

                temp += text[i];
                flag = true;

            }

            k++;

        }
                
    }
    
  }

}
