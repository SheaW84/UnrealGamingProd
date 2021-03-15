#include <iostream>
#include <ctime>

//This is the start of the triple x program exercise
void PrintIntroduction(int Difficulty)
{
    std::cout << R"(
               ,-.
       ___,---.__          /'|`\          __,---,___
    ,-'    \`    `-.____,-'  |  `-.____,-'    //    `-.
  ,'        |           ~'\     /`~           |        `.
 /      ___//              `. ,'          ,  , \___      \
|    ,-'   `-.__   _         |        ,    __,-'   `-.    |
|   /          /\_  `   .    |    ,      _/\          \   |
\  |           \ \`-.___ \   |   / ___,-'/ /           |  /
 \  \           | `._   `\\  |  //'   _,' |           /  /
  `-.\         /'  _ `---'' , . ``---' _  `\         /,-'
     ``       /     \    ,='/ \`=.    /     \       ''
             |__   /|\_,--.,-.--,--._/|\   __|
             /  `./  \\`\ |  |  | /,//' \,'  \
eViL        /   /     ||--+--|--+-/-|     \   \
           |   |     /'\_\_\ | /_/_/`\     |   |
            \   \__, \_     `~'     _/ .__/   /
             `-._,-'   `-._______,-'   `-._,-' 
             )" ;

//Print welcom messages to the terminal
    std::cout << "\nYou are a demon slayer faced a with a level " << Difficulty;
    std::cout << " demon with set hit points Enter the right hit points to slay the demon...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    // Declare 3 numbers in the code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;


    /* this is multiline comment*/

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print CodeSum and CodeProduct to the terminal

    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to: " <<CodeSum;
    std::cout << "\n+ The product of those same numbers equal to: "<<CodeProduct << std::endl;

      int GuessA, GuessB, GuessC;
    //Store player guesses
    std::cin >> GuessA >> GuessB >> GuessC;

  
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    
    //Check if the players guess are correct.  
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {

         std::cout << R"(
                  .m.                                   ,_
         ' ;M;                                ,;m `
           ;M;.           ,      ,           ;SMM;
          ;;Mm;         ,;  ____  ;,         ;SMM;
         ;;;MM;        ; (.MMMMMM.) ;       ,SSMM;;
       ,;;;mMp'        l  ';mmmm;/  j       SSSMM;;
     .;;;;;MM;         .\,.mmSSSm,,/,      ,SSSMM;;;
    ;;;;;;mMM;        .;MMmSSSSSSSmMm;     ;MSSMM;;;;
   ;;;;;;mMSM;     ,_ ;MMmS;;;;;;mmmM;  -,;MMMMMMm;;;;
  ;;;;;;;MMSMM;     \"*;M;( ( '') );m;*"/ ;MMMMMM;;;;;,
 .;;;;;;mMMSMM;      \(@;! _     _ !;@)/ ;MMMMMMMM;;;;;,
 ;;;;;;;MMSSSM;       ;,;.*o*> <*o*.;m; ;MMMMMMMMM;;;;;;,
.;;;;;;;MMSSSMM;     ;Mm;           ;M;,MMMMMMMMMMm;;;;;;.
;;;;;;;mmMSSSMMMM,   ;Mm;,   '-    ,;M;MMMMMMMSMMMMm;;;;;;;
;;;;;;;MMMSSSMMMMMMMm;Mm;;,  ___  ,;SmM;MMMMMMSSMMMM;;;;;;;;
;;'";;;MMMSSSSMMMMMM;MMmS;;,  "  ,;SmMM;MMMMMMSSMMMM;;;;;;;;.
!   ;;;MMMSSSSSMMMMM;MMMmSS;;._.;;SSmMM;MMMMMMSSMMMM;;;;;;;;;
    ;;;;*MSSSSSSMMMP;Mm*"'q;'   `;p*"*M;MMMMMSSSSMMM;;;;;;;;;
    ';;;  ;SS*SSM*M;M;'     `-.        ;;MMMMSSSSSMM;;;;;;;;;,
     ;;;. ;P  `q; qMM.                 ';MMMMSSSSSMp' ';;;;;;;
     ;;;; ',    ; .mm!     \.   `.   /  ;MMM' `qSS'    ';;;;;;
     ';;;       ' mmS';     ;     ,  `. ;'M'   `S       ';;;;;
      `;;.        mS;;`;    ;     ;    ;M,!     '  luk   ';;;;
       ';;       .mS;;, ;   '. o  ;   oMM;                ;;;;
        ';;      MMmS;; `,   ;._.' -_.'MM;                 ;;;
         `;;     MMmS;;; ;   ;      ;  MM;                 ;;;
           `'.   'MMmS;; `;) ',    .' ,M;'                 ;;;
              \    '' ''; ;   ;    ;  ;'                   ;;
               ;        ; `,  ;    ;  ;                   ;;
                        |. ;  ; (. ;  ;      _.-.         ;;
           .-----..__  /   ;  ;   ;' ;\  _.-" .- `.      ;;
         ;' ___      `*;   `; ';  ;  ; ;'  .-'    :      ;
         ;     """*-.   `.  ;  ;  ;  ; ' ,'      /       |
         ',          `-_    (.--',`--'..'      .'        ',
           `-_          `*-._'.\\\;||\\)     ,'
              `"*-._        "*`-ll_ll'l    ,'
                 ,==;*-._           "-.  .'
              _-'    "*-=`*;-._        ;'
            ."            ;'  ;"*-.    `
            ;   ____      ;//'     "-   `,
            `+   .-/                 ".\\;
              `*" /      
       )";
       std::cout << "\nYou killed the Demon!";
       std::cout << "\nMove on to the next one.";
      
        return true; 
    }    
    else 
    {
             std::cout << R"(
                   .    .
          |\   |\
       _..;|;__;|;
     ,'   ';` \';`-.
     7;-..     :   )
.--._)|   `;==,|,=='
 `\`@; \_ `<`G," G).
   `\/-;,(  )  .>. )
       < ,-;'-.__.;'
        `\_ `-,__,'
   kg      `-..,;,>
              `;;;;
               `  `
        )";
        std::cout << "\nThe demon killed you!\n";
        std::cout << "Please try again\n";

          return false;
    }
}

int main()
{
    srand(time(NULL)); // Creates a new random sequence based on time of day!
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    while (LevelDifficulty <= MaxDifficulty) // Loop the game until all levels are completed
    {

        bool BLeveLComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();
        if (BLeveLComplete) 
        {
            ++LevelDifficulty; 
        }
        
    }
    std::cout << "\n *** Great job! All the demons are slain!***\n";
    return 0;
}