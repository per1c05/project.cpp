#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int broj,br,ostatak,mesto;
string bin="",octal="",hexad="",hexb="";
string niz[] = {"A", "B", "C", "D", "E", "F"};

void binarni()
{
    br = broj;
    while(br>=1)
    {
        ostatak = br%2;
        br = br/2;
        bin = bin + std::to_string(ostatak);
    }
    reverse(bin.begin(),bin.end());
    cout << "Binarni broj je: " << bin << endl;
}

void oktalni()
{
    br = broj;
    while(br>=1)
    {
        ostatak = br%8;
        br = br/8;
        octal = octal + std::to_string(ostatak);
    }
    reverse(octal.begin(),octal.end());
    cout << "Oktalni broj je: " << octal << endl;
}

void heksadecimalni()
{
    br = broj;
    while(br>=1)
    {
        ostatak = br%16;
        br = br/16;
        if(ostatak>=10)
        {
            mesto = ostatak%10;
            hexad = hexad + niz[mesto];
        }
        if(ostatak<10)
        {
            hexad = hexad + std::to_string(ostatak);
        }
    }
    reverse(hexad.begin(),hexad.end());
    cout << "Heksadecimalni broj je: " << hexad << endl;
}

int main()
{
    cout << "Unesi dekadni broj: ";
    cin >> broj;
    cout << "Dekadni broj je: " << broj << endl;
    binarni();
    oktalni();
    heksadecimalni();
}
