 /* 
 To-Do List Application
1:Use an array or vector to store tasks.
2:Allow the user to add, remove, and display tasks.
3:Optional: Save tasks to a file for persistence.
 */

 #include<cstdio>
 #include<iostream>
 #include<string>

    void firstTerminal(std::string userName, int pinCode);
    
    void deleteMemory(int* list,int size, std::string* text);
    
       int main(){

      int pinCode=0,size=0;
      std::string userName;
       char option;
       system("cls");
       do
       {
        system("cls");
        firstTerminal(userName,pinCode);
        
        std::cout<<std::endl;
        std::cout<<"Enter Amount Of List Activities:";
               std::cin>>size;
               std::cin.ignore();
               int*list = new int[size];
      std::string* text = new std::string[size];
        system("cls");
              printf("You Have %d To-Do's, Fill Your List\n",size );   
            for (int i = 0; i < size; i++)
            {
            std::cout<<"To-Do "<<(i+1)<<":";
             getline(std::cin, text[i]);
             
            std::cout<<std::endl;
            }
            system("cls");
     printf("Here Is Your To-Do List \n");
     std::cout<<"__________________________\n";
           for (int k = 0; k <size; k++)
           {
            std::cout<<"To-Do "<<(k+1)<<": ";
              
                std::cout<<text[k];
            
            std::cout<<std::endl;
            std::cout<<"__________________________";
            std::cout<<std::endl;
           } 
        printf("Let's Hope You Will Not Procrastinate\nWould You Like To Restart[Y/N]:");
             std::cin>>option;
             std::cin.ignore();
             delete[] list;
             delete[] text;
       } while (option=='Y' || option=='y');
        
         
 system("pause>NULL");
       }

    void firstTerminal(std::string userName, int pinCode){
         printf("Time Managements Breeds Consistency\n Let's Do Some Planning.\n\nEnter Your Username:");
         getline(std::cin,userName);
        system("cls");
           while(userName.length()<4)
           {
            printf("Username Has To Be More Than Four Characters.\n\nEnter Your Username:");
            getline(std::cin,userName);
            system("cls");
           }
     printf("Enter Your Pin Code For Access:");
             std::cin>>pinCode;
            while (pinCode<1000 || pinCode>9999)
            {
                  printf("ACCESS DENIED\n");
                if (pinCode<1000)
                {
                    printf("Pin Code Must Not Start With %d And Must Contain Four Digits, Aketlo Bolela Gape!!\n\n",0);
                }
                else if (pinCode>9999)
                {
                    printf("Pin Can't Be %d Digits, Onahana Keko Kae Mo?\n\n", 0);
                }
                
                   else{
                    printf("Error, Lwena Oe Bone\n\n");
                   }
                printf("Enter Access PIN Code:");
                    std::cin>>pinCode;
       
            }
            system("cls"); 
            printf("Hello %s, Welcome Back To Our To-Do-List-App\n\n",userName.c_str());
    }
    
   
   