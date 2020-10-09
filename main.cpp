#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>

int main() {
    std::srand(std::time(nullptr));
    std::cout << "Task one.\n";
    int k[10];
    for (int i = 0; i < 10; ++i) {
        k[i] = std::rand() % 21 - 10;
        std::cout << "The " << i+1 << " number is " << k[i];
        std::cout << "\n";
    }
    std::cout << "\n";
    double s = k[1];
    double r;
    for (int i = 0; i < 10; ++i) {
        double r = k[i] / s;
        std::cout << "The result is " << r << "\n";
    }
    std::cout << "\n";
    std::cout << "The end of the task one.\n";
    std::cout << "Task two.\n";
    std::cout << "Enter n (n>10): ";
    int n;
    std::cin >> n;
    int *p = new int[n];
    for (int z=1;z<=n;z++) {
        std::cin >> p[z];
    }
    for (int z=1;z<=n;z++) {
        std::cout << p[z] << " ";
    }
    std::cout << "\n";
    for (int z=1;z<=n;++z){
        if (p[z]==0){
            p[z]-=2;
            std::cout << p[z] << " ";
        }
        else std::cout << p[z] << " ";
    }
    std::cout << "\n";
    std::cout << "Enter k1 (k1<n): ";
    int k1;
    std::cin >> k1;
    std::cout << "Enter k2 (k2<n and k2>k1): ";
    int k2;
    std::cin >> k2;
    double z=0;
    int c = k1;
    while (k1<=k2){
        z = z + p[k1];
        k1 = k1 + 1;
    }
    std::cout << "Average mean is " <<z/(k2-c+1) << std::endl;
    delete[] p;
    std::cout << "The end of the task two.\n";
    std::cout << "Task three.\n";
    std::cout << "Enter m (m>5): ";
    int m;
    std::cin >> m;
    std::vector<int> Vec(m);
    for (int h=0;h<m;h++) {
        std::cin >> Vec[h];
    }
    for (int h: Vec)
        std::cout << h << " ";
    std::cout << "\n";
    Vec.push_back(24);
    for (int h: Vec)
        std::cout << h << " ";
    std::cout << "\n";
    double b=0;
    for (int h: Vec){
        b = b + h;
    }
    std::cout << "The sum of a vector is " << b << std::endl;
    for (int i = 0; i < Vec.size(); ++i) {
        if (Vec[i] == 0) {
            Vec.erase(Vec.begin()+i);
            break;
        }
    }
    for (int h: Vec){
        std::cout << h << " ";
    }
    std::cout << "\n";
    std::cout << "The end of the task three.\n";
    std::cout << "Task four.\n";
    std::string S;
    std::cout << "Enter your text: ";
    std::cin.ignore(10, '\n');
    std::getline(std::cin, S);
    std::cout << S;
    std::cout << "\n";
    std::cout << "The length of your text is " << S.length();
    std::cout << "\n";
    double a = count(S.begin(),S.end(),'3');
    double part = a/S.length();
    std::cout << "There part of meanings of '3' is " << part << std::endl;
    int l1;
    int l2;
    std::cout << "Enter l1: ";
    std::cin >> l1;
    std::cout << "Enter l2: ";
    std::cin >> l2;
    int l3;
    l3 = l2-l1;
    std::cout << S.substr(l1-1,l3+1) << std::endl;
    S = "Can you can a can as a canner can can a can?";
    std::cout << "Enter your word: ";
    std::string S2;
    std::cin.ignore(10, '\n');
    std::getline(std::cin, S2);
    S.replace(S.find("can?"),3,S2);
    S.replace(S.find("Can"),3,S2);
    S2.push_back(' ');
    for (int i=0;i<4;i++)
    {
        int point;
        point = S.find("can ");
        S.replace(point,4,S2);
    }
    std::cout << S << std::endl;
    return 0;
}
