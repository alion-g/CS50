while True:
    str = input('Text: ')
    alpha = 0
    word = 1
    sentence = 0
    total=0
    if (str):
        for i in range(len(str)):
            if (str[i].isalpha()):
                alpha += 1
            elif (str[i] == ' ' and str[i + 1]):
                word += 1
            elif (str[i] == '?' or str[i] == '!' or str[i] == '.'):
                sentence += 1
            else:
                pass
        L = float(alpha / word * 100)

        S = float(sentence / word * 100)

        # Readbility
        total = (float)(0.0588 * L - 0.296 * S - 15.8)

        # Output
        if (total >= 16):
            print('Grade 16+')
        elif (total < 1):
            print('Before Grade 1')
        else:
            print('Grade ', round(total))
        break