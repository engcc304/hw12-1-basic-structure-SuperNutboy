/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    struct Person {
	    char  Name[20] ;
	    int   Age ;
	    int   Sex ;
	    float Score ;
	} ;
    
    Test case:
        Person A
        Name : 
            Mai
        Age : 
            24
        Sex : 
            M
        Score : 
            99.99

        Person B
        Name : 
            Mon
        Age : 
            21
        Sex : 
            F
        Score : 
            87.60

    Output:
        --| Person A Information |--
        Name : Mai (M)
        Age : 24 years old
        Score : 99.99 points
        --| Person B Information |--
        Name : Mon (F)
        Age : 21 years old
        Score : 87.60 points

*/

#include<stdio.h>

struct person {
        char Name[20] ;
        int Age ;
        char Sex ;
        float Score ;

    } ;

int main() {
    struct person personA = { "Mai" , 24 , 'M' , 99.99 } ;
    struct person personB = { "Mon" , 21 , 'F' , 87.60 } ;

    printf ( "--| Person A Information |--\n" ) ;
    printf ( "Name : %s (%c)\n" ,personA.Name , personA.Sex ) ;
    printf ( "Age : %d\n" ,personA.Age ) ;
    printf ( "Score : %0.2f\n" ,personA ) ;
    
    printf ( "--| Person A Information |--\n" ) ;
    printf ( "Name : %s (%c)\n" ,personB.Name , personB.Sex ) ;
    printf ( "Age : %d\n" ,personB.Age ) ;
    printf ( "Score : %0.2f\n" ,personB ) ;
}