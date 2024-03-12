#include <iostream>  // importujemy pliki z dysku
#include <string>
#include <cstdalign> // do std::rand - random, zwraca integer miedzy 0 a max rand
#include <vector>
#include <cmath>
#include <algorithm>

auto zad1() -> void{                  // najpierw deklarujemy funkcje, nie wazne gdzie je zapisujemy
    std::string name;
    std::cout << "Input your name: ";
    std::cin >> name;
    if(name=="Einstein"){
        std::cout << "I know you!" << std::endl;
    } else {
        std::cout << "Greetings" << std::endl;
    }
}

auto zad2() -> void{
    auto guessedNumber = int(-1);
    auto numberToGuess = int(std::rand()%100);
    while(guessedNumber != numberToGuess){
        std::cout<<"Guess a number: ";
        std::cin >> guessedNumber;

        if(guessedNumber>numberToGuess){
            std::cout << "Too big. Try lower" << std::endl;
        }
        if(guessedNumber<numberToGuess){
            std::cout << "Too small. Try higher" << std::endl;
        }
    }
    std::cout << "Congratulationd"<< std::endl;
}




// ===========================ZADANIE 3====================================

auto isPrime(auto number = int()) -> bool{
    if(number<2)
        return false;
    for(int i = 2; i<= sqrt(number); ++i)
        if(number%i == 0)
            return false;
    return true;
}

void zad3(){
    using std::cout; using std::endl; using std::cin;

    cout << "Please input the numbers.\n" << "Type in a negative number to stop." << endl;
    std::vector<int> numbersToCheckForPrimality;
    auto number = int();
    for(cin >> number; number>=0; cin>>number){
        numbersToCheckForPrimality.push_back(number);
    }

    for (int number : numbersToCheckForPrimality) {
        if (isPrime(number)) {
            cout<<number << " is prime."<<endl;
        } else {
            cout<<number << " is not prime."<<endl;
        }
    }
}
//=====================================================================================




auto zad4() -> void{
    auto str = std::string();
    std::cout << "Print a word: ";
    std::cin >> str;
    //std::cout << str.front() << "\n";
    std::cout << str[0] << "\n";
    //std::cout << "'" << str.back() << "'\n";
    std::cout << "'" << str[str.size()-1] << "'\n";
    std::cout << str.size() << "\n";
    if(str.size()%2==0){
        std::cout << str.substr(str.size()/2-1, 2) << "\n";
    } else {
        std::cout << "\"" <<str[str.size()/2] << "\"\n";
    }
    std::cout << "[" << str << "]\n";
    std::ranges::sort(str);
    std::cout << str << "\n";
}


auto zad5_1() -> void{
    auto digit = int();
    auto boolean = bool(true);
    while(boolean){
        std::cout<<"Print a digit: ";
        std::cin >> digit;
        switch (digit) {
            case 0:
                std::cout<<"Zero\n";
                break;
            case 1:
                std::cout<<"One\n";
                break;
            case 2:
                std::cout<<"Two\n";
                break;
            case 3:
                std::cout<<"Three\n";
                break;
            default:
                std::cout<<"Incorrect input! Try again by restarting the program.";
                boolean = false;
                break;
        }
    }
}


auto main() -> int {
                       //
                      //free function dostepna wszedzie (w calym programie) z definicji publiczne, nie nalezy do zadnej klasy
                     // main jest wyjatkowy, poniewaz mozna nie pisac "return 0;" kompilator sam dostawi, ale tylko w main
                    // w innej funkcji jesli nie napiszemy "return" to sie skompiluje, nie bedzie bledu, ale nie jest to dobrze
                   // cout - object pewnej klasy, strumien standartowy outputowy, funkcja zwraca tez cout (jako lewy argument). wypisuje i zwraca cout
                  //
    using std::cout; using std::endl;
    cout << "Hello, World!" << endl;                 // endl tez robi czyszczenie bufora
    cout << "Hello," << " World" << "!" << "\n";

    auto k = int();
    auto x = double();

   // std::cin >> k >> x;              // "hello" - nie jest string

                                     // String s; - w jave jest to odniesienie, nie ma objektu, na razie null
    auto s = std::string();
    s.size();                       //bedzie dobrze, object powstal, pusty, bedzie 0;

                                   // "s" - jest nazwa objectu!!!

                                   // s1 == s2 - porownywanie objektow, nie trzeba korzystac z metody equals()!
    //zad1();
    //zad2();
    zad4();
}

//skompilowac project - build - build project (ctrl + F9)

