

#include "Cerrajero.h"


 Cerrajero::Cerrajero( string Nombre,  string Apellido,const  string Dni,unsigned int precioservicio,unsigned int salario, string tipollave):Empleado( Nombre,  Apellido,   Dni,   precioservicio, salario) { 
     this->tipoDeLLave = tipollave;
     

}





 void Cerrajero::trabajar()
 {
     cout << "//                                                                                                                  " << endl <<
         "         //                                                                                                                  " << endl <<
         "         //                                                                                                                  " << endl <<
         "        //                                                     .-=-:.                                                       " << endl <<
         "        //                                                .:---%%%%%@:                                                      " << endl <<
         "        //                                            :+#%%########%%#*=:                                                   " << endl <<
         "        //                                          .#**+**+***********##%+:                                                " << endl <<
         "        //                                         .%#==*+*****************%#:                                              " << endl <<
         "        //                                         +*++++********************#-                                             " << endl <<
         "        //                                        .%*++++******************+**#                                             " << endl <<
         "        //                                        -%++++*******************+**#                                             " << endl <<
         "        //                                        =%*************************##                                             " << endl <<
         "        //                   ..                 .-*%%%%%%%####***************#*                    .::..                    " << endl <<
         "        //                  :##:             .-#%%%#+*#%#######%%%%%###******##=-.              :+##*+*##-                  " << endl <<
         "        //                 =#::#+           :######*..=###%##*#########%%%%%##=-=#-           .**-:::::::*#:                " << endl <<
         "        //               .*+::::+#.        .@%%%%%%*.=--==:=*%%######%%%#+*%@::+-.#-         :%=::+#*#*=::=%.               " << endl <<
         "        //               -#--::::+*         .. .  =*..*+.=#...-+%**##=:...+%%:#:..++        .%=::%=.  .*#::=#               " << endl <<
         "        //               .--%::::=*               =+.-* .%@+-..*- =@%:....+%#=+=..+=        =*::#-      +#::%:              " << endl <<
         "        //                .-%::::=*               =*.=+.+@@@:..*:-*@@-......-:-..:%.        *=:-%       .@-:++              " << endl <<
         "        //               :%=:::::=*               -*.:#.%@@@...++-%@@-......*:.:=#-         #-:=#        *=:=*              " << endl <<
         "        //               .:=#::::=*               :#..=*-#%#....*==%#.......%***+.          #-:=*..::::..++:-#              " << endl <<
         "        //                 .#:.::-+               .%...-++-#..:..=+=.......:*              :#=:-#*+**+***#+:-*.             " << endl <<
         "        //               :++::::.=*                @:......=++=-.:......:..=*           -*#*#+:-#-=------*+.=%**=-          " << endl <<
         "        //               :#::::::-*                *-..........:-*#-....:.-#.           #%#*+*##+---=--=-=##*+=*#@:         " << endl <<
         "        //               .++=::::=*                =*:.....:-==+=:..:::::=#.            #+=+*###*+++====+++**#*+=@:         " << endl <<
         "        //               .+*=::::=*                 -#=......-=+:.:.....+%#*+:          #+=======+********+======%:         " << endl <<
         "        //              .=*::::::=#.                 .%#-.:...........:##**#%%#=        #+-=====-====-==-========%:         " << endl <<
         "        //             =#=::====-:-**.             .+#%*%#===---===+*#%**#*:  .**.      #+=======================%:         " << endl <<
         "        //           .*+:-=-::::-=+:-#:           =#-.%*#*:--===--::-%**#+      +#.     #+=======================%:         " << endl <<
         "        //           *=:+-:::::::::+::#.         **. .%***          #*+*%.       +#.    #+=======================%:         " << endl <<
         "        //          -*:+::::::::::::+:=+       .#=   .%**%.   .    .%**#=         +#.   #+=======================%.         " << endl <<
         "        //          +=:+:::::::::::::=:%      .#=   ::#%%%#%%%%%%%%#%%%%:          *#.  #+=======================@.         " << endl <<
         "        //          *:-=::::=+=+:::::+:%      +*    +*#****************#=        .=*@:  #+=======================@.         " << endl <<
         "        //          +=:+:::-+  :+:::-=:%     :%*#=. #%******************#      .+#=:=#. #+=======================@          " << endl <<
         "        //          :#:+-:::*..+=:::+:++     #-..+#+%*******************@. .  +#-...:*+ *+===-=====-=============@          " << endl <<
         "        //           ++:+-:++##-:::+:-#::--:=*....:*%*+*****************%= .**+......-@*%+=-=======***%*#*+==-===%          " << endl <<
         "        //            +**#%=**#====:=#*+=-==+=:....=*+=++****************%. :*:..:.:-+-.=+**+======#:.@:#=#*=+*##*          " << endl <<
         "        //             =#:#.*==*::=#+:........:....+**==+****************##- :#:....:......:-=+*###%:.%:*=+%*=-.            " << endl <<
         "        //             -#:%.+*.+**=................#+++*+******************##*%#:......:......:..::-.-#:%-%:                " << endl <<
         "        //              =#%+:**:...:==-.::..:::...+%+++++*********************#+%=.:::.::-=+***#+-::+%+%%#-                 " << endl <<
         "        //               ..+#*+*###*--+##*+=-:.:-#+#*+***********************#@..+#**###*=-:    :=++---.                    " << endl <<
         "        //                               .-=+***=. #************************+#@.   ..                                       " << endl <<
         "        //                                         #**************************%.                                            " << endl <<
         "        //                                         ##+*********************+**%+.                                           " << endl <<
         "        //                                         ##**************************%-                                           " << endl <<
         "        //                                         :%*************************#%.                                           " << endl <<
         "        //                                         .##*************************#                                            " << endl <<
         "        //                                          =%**********************+*#%                                            " << endl <<
         "        //                                          =%******************+******%.                                           " << endl <<
         "        //                                          -%*************************%-                                           " << endl <<
         "        //                                          :%****++=++++*******++*****#+                                           " << endl <<
         "        //                                          .%****++++++=++++++++=++***#*                                           " << endl <<
         "        //                                          .@****+++++#*#=+=++++=++****%                                           " << endl <<
         "        //                                           @******++**+##*+**+*+*+****@.                                          " << endl <<
         "        //                                           %*****++++++*#++++++++*****%:                             .            " << endl <<
         "        //                                           *#*********+*%*************%=                                          " << endl <<
         "        //                                           +#***********#%**+*********#*                                          " << endl <<
         "        //                                           =#*********+**%*************%                                          " << endl <<
         "        //                                           -%************%%************@                                          " << endl <<
         "        //                                           :%************@@************%:                                         " << endl <<
         "        //                                            @************@+%*********+*%=                                         " << endl <<
         "        //                                           .%*+**********@.%***********#*                                         " << endl <<
         "        //                                           =%%##*********@ +#*****+**##%%+                                        " << endl <<
         "        //                                    -+*##*+*%###%%#******@..%****#%%%%%%%%##*=:                                   " << endl <<
         "        //                                  :%%#****##%%#*####%%##*%. *%#%%##%%%#******#%*:                                 " << endl <<
         "        //                                 -@*********+#%#########%%* *%####%**++********#%-                                " << endl <<
         "        //                                 #*=++++*++*=++%@%%#######*.####%%*+*+++++++++++*#:.                              " << endl <<
         "        //                                -**+*++++++*=++*##*#%%%%%%* *%%##**++++++++++++++**                               " << endl <<
         "        //                                +#**********************#@- -%********************@:                              " << endl <<
         "        //                               .+%####%#######%%%%%%%%%%%@. .@%%%%%%##%#%%%#%#%###%=                              " << endl <<
         "        //                                **+++++++++++*+++++++****#:  %++*+++*++++++++++++*#+                              " << endl <<
         "        //                                :=========================.  -=====================:                              " << endl;


 }

 string Cerrajero::get_tipoDeLlave() {
    return this->tipoDeLLave;
}

 Cerrajero::~Cerrajero() {

}