#include "base.h"

int base::check_real_file(){
    if(QFile::exists(name_file_uni)==false){
        errorBase = ___isEmptyUnivers;
        return  ___isEmptyUnivers;
    }
    if(QFile::exists(name_file_title)==false){
        errorBase = ___isEmptyTitle;
        return  ___isEmptyTitle;
    }
    return  NoIsEmptyFile;
}
