# 3207-Lab-Introduction_S24
In this lab, you will be learning about git and some of the features of git and GitHub. A part of the lab will be to clone this repository and and then make changes to the repository.
The attached simple source file print_random.c is to be modified by you to include a function that implements the randchar() function.
See the instructions in the GitHW1 file

Functions Implemented (per file):
    random.c:
        char randchar():
            This function generates a random integer using the rand() function, making sure that it is a value between 0 and 26, and then converts that value into a character, and returns that character it gets when converted.
    print_random.c:
        int main():
            This function is the main function that will generate 7 random characters by calling the randchar() function above 7 times using a for-loop, and then return the string generated from it.