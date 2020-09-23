#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::cout << "Task one.\n";
    int k[10];
    double s;
    k[2] = (std::rand() % 21) - 10;
    std::cout << "The second number is " << k[2] << "\n";
    for (int i=1;i<=10;++i) {
        if (i==2) {
            std::cout << "The " << i << " number is " << k[2];
            std::cout << " the result is " << k[2] << "\n";
        }
        s = (std::rand() % 21) - 10;
        std::cout << "The " << i << " number is " << s;
        std::cout << " the resuld is " << s/(k[2]) << "\n";
    }
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
    for (int h=1;h<m;h++) {
        std::cout << Vec[h] << " ";
    }
    std::cout << "\n";
    std::cout << "The end of the task three.\n";
    std::cout << "Task four.\n";
    std::string Str;
    std::cout << "Enter your text: ";
    std::cin >> Str;
    std::cout << Str;
    std::cout << "\n";
    std::cout << "The length of your text is " << Str.length();
    std::cout << "\n";
    size_t a = count(Str.begin(),Str.end(),'3');
    std::cout << "There are " << a << " meanings of '3'." << std::endl;
    int l1;
    int l2;
    std::cout << "Enter l1: ";
    std::cin >> l1;
    std::cout << "Enter l2: ";
    std::cin >> l2;
    int l3;
    l3 = l2-l1;
    std::cout << Str.substr(l1-1,l3+1) << std::endl;
    Str = "Can you can a can as a canner can can a can?            ";
    std::cout << "Enter your word: ";
    std::string Str2;
    std::cin >> Str2;
    Str.replace(0,3,Str2);
    Str.replace(8+Str2.length()-3,3,Str2);
    Str.replace(14+Str2.length()-3+1,3,Str2);
    Str.replace(23+Str2.length()-3+2,3,Str2);
    Str.replace(30+Str2.length()-3+3,3,Str2);
    Str.replace(34+Str2.length()-3+4,3,Str2);
    Str.replace(40+Str2.length()-3+5,3,Str2);
    std::cout << Str;
    return 0;
}