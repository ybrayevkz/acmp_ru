
if (s[0] == 'A' || s[0] == 'B' || s[0] == 'C' || s[0] == 'E' || s[0] == 'H' || s[0] == 'K' || s[0] == 'M' || s[0] == 'O' ||
    s[0] == 'P' || s[0] == 'T' || s[0] == 'X' || s[0] == 'Y') {
    mistake--;
}
if (s[4] == 'A' || s[4] == 'B' || s[4] == 'C' || s[4] == 'E' || s[4] == 'H' || s[4] == 'K' || s[4] == 'M' || s[4] == 'O' ||
    s[4] == 'P' || s[4] == 'T' || s[4] == 'X' || s[4] == 'Y') {
    mistake--;
}
if (s[5] == 'A' || s[5] == 'B' || s[5] == 'C' || s[5] == 'E' || s[5] == 'H' || s[5] == 'K' || s[5] == 'M' || s[5] == 'O' ||
    s[5] == 'P' || s[5] == 'T' || s[5] == 'X' || s[5] == 'Y') {
    mistake--;
}
if (s[1] == '1' || s[1] == '2' || s[1] == '3' || s[1] == '4' || s[1] == '5' || s[1] == '6' || s[1] == '7' || s[1] == '8' ||
    s[1] == '9' || s[1] == '0') {
    mistake--;
}
if (s[2] == '1' || s[2] == '2' || s[2] == '3' || s[2] == '4' || s[2] == '5' || s[2] == '6' || s[2] == '7' || s[2] == '8' ||
    s[2] == '9' || s[2] == '0') {
    mistake--;
}
if (s[3] == '1' || s[3] == '2' || s[3] == '3' || s[3] == '4' || s[3] == '5' || s[3] == '6' || s[3] == '7' || s[3] == '8' ||
    s[3] == '9' || s[3] == '0') {
    mistake--;
}
if (mistake == 0) {
    cout << "Yes" << endl;;
}
else {
    cout << "No" << endl;
}
mistake = 6;
        }
    }
    return 0;
}