// JS CODE
// Creat an 8 ball

// var lifesAnswers = [
//     "It is certain.",
//     "It is decidedly so.",
//     "Without a doubt.",
//     "Yes – definitely.",
//     "You may rely on it.",
//     "As I see it, yes.",
//     "Most likely.",
//     "Outlook good.",
//     "Yes.",
//     "Signs point to yes.",
//     "Reply hazy, try again.",
//     "Ask again later.",
//     "Better not tell you now.",
//     "Cannot predict now.",
//     "Concentrate and ask again.",
//     "Don't count on it.",
//     "My reply is no.",
//     "My sources say no.",
//     "Outlook not so good.",
//     "Very doubtful."
// ];

#include <iostream>
#include <string>

using namespace std;

int ranNum(){
    srand(time(0));
    int ranNum = rand() % 20;
    return ranNum;
}

int main(){
    string lifesAnswers[20] = {
        "It is certain.",
        "It is decidedly so.",
        "Without a doubt.",
        "Yes – definitely.",
        "You may rely on it.",
        "As I see it, yes.",
        "Most likely.",
        "Outlook good.",
        "Yes.",
        "Signs point to yes.",
        "Reply hazy, try again.",
        "Ask again later.",
        "Better not tell you now.",
        "Cannot predict now.",
        "Concentrate and ask again.",
        "Don't count on it.",
        "My reply is no.",
        "My sources say no.",
        "Outlook not so good.",
        "Very doubtful."
    };

    int answer = ranNum();
    cout << lifesAnswers[answer] << endl;

    return 0;
}

//Over all good practice on functions and radom numbers