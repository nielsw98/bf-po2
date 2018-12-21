#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


void getBitStrings(vector<string>& generatedAnswers, string s, int m )
{
    //Generate all possible bit-strings of size m
   if (m == 0)
      generatedAnswers.push_back(s);
   else
   {
      getBitStrings(generatedAnswers, s+"0", m-1);
      getBitStrings(generatedAnswers, s+"1", m-1);
   }
}

void bruteforce(vector<vector<int> >& answers, vector<int>& answersCorrect, int n, int m){
    //The possible answers for 'm' questions are stored in generatedAnswers
    vector<string> generatedAnswers;
    //Get the possible bit strings for 'm' questions
    getBitStrings(generatedAnswers, "", m);
    //The loop to check the input answers with the generated answers
    for (int i = 0; i < 2^m; i++){
            int generatedCorrect = 0; //The number of questions correct according to the generated answers
//            for (int j = 0; j < n && (answersCorrect[j] == generatedCorrect || generatedCorrect == 0); j++){
//                    for (int k = 0; k < m; k++){
//                        if (generatedAnswers[i].at(k) == answers[j][k]){
//                            generatedCorrect++;
//                        }
//                    }
//                    generatedCorrect = 0;
//            }
    }
}

int main()
{
    //n = number of students, m = number of questions
    int n;
    int m;
    scanf("%d", &n);
    scanf("%d", &m);
    //2d vector with the input answers
    vector<vector<int> > answers (n, vector<int>(m));
    //vector with the number of questions correct per student
    vector<int> answersCorrect (n);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%1d", &answers[i][j]);
        }
        scanf("%d", &answersCorrect[i]);
    }
    bruteforce(answers, answersCorrect, n, m);

}


