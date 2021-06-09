#include <windows.h>
#include <stdio.h>
#include <string>
#include <mysql.h>
#include <iostream>
#include <sstream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

void updateAverageMarks();
void updateTeacher();
void insertStudentByAdmin();
void UpdateStudent();
void deleteStudentByAdmin();
void searchSingleStudent();
void searchAllStudent();
void insertTeacherByAdmin();
void UpdateTeacher();
void DeleteTeacherByAdmin();
void searchSingleTeacher();
void searchAllTeacher();
void insertMarksByTeacherUnitTest1();
void insertMarksByTeacherUnitTest2();
void updateMarksByAdmin();
void deleteMarksByAdmin();
void searchSingleMarks();
void searchAllStudentMarks();
void loginTeacher();
void loginStudent();
void loginAdmin();
void updateSingleStudent();
void updateSingleTeacher();
void updateResultByTeacher();
void UpdateTeacherByAdmin();
void updateStudentByAdmin();
void insertMarksbyAdmin();
void updateSingleMarksByAdmin();
void updateSingleStudentByAdmin();
void updateSingleTeacherByAdmin();
void intro();
void adminMenu();
void adminStudentMenu();
void adminTeacherMenu();
void adminResultMenu();
void studentMenu();
void teacherMenu();
void resultMenu();

void updateAverageMarks()
{
    stringstream ss;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
    ss << "UPDATE `result` SET `ITM`=(`ITM1` + `ITM2`) / 2,`COA`=(`COA1` + `COA2`) / 2,`OOPS`=(`OOPS1` + `OOPS2`) / 2,`SEPM`=(`SEPM1` + `SEPM2`) / 2,`MATHS`=(`MATHS1` + `MATHS2`) / 2 WHERE 1";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
}

void intro()
{
    system("CLS");
    int a;
    cout << "\n\t\t*********************************************************************************";
    cout << "\n\t\t\t\t     * VES Institute Of Technology *";
    cout << "\n\t\t*********************************************************************************";
    cout << "\n\n\t\tMade By: \t           ANKIT RAMA YADAV - 60 ";
    cout << "\n\t\tMade By: \t           BALKRISHNA RAVADA - 43 ";
    cout << "\t";
    cout << "\n\n\n\t\t\t\tTOPIC: STUDENT DATABASE MANAGEMENT SYSTEM";
    cout << "\n\n\n\t\t\t\tMAIN MENU";
    cout << "\n\n\t\t\t\t1.ADMIN";
    cout << "\n\n\t\t\t\t2.STUDENT";
    cout << "\n\n\t\t\t\t3.TEACHER";
    cout << "\n\n\t\t\t\t4.RESULT";
    cout << "\n\n\n\t\t\t\tPlease Enter Your Choice (1-4) :   ";
    cin >> a;

    switch (a)
    {

    case 1:
        system("CLS");
        loginAdmin();
        break;
    case 2:
        system("CLS");
        loginStudent();
        break;
    case 3:
        system("CLS");
        loginTeacher();
        break;
    case 4:
        system("CLS");
        resultMenu();
    case 5:
        exit(0);
    default:
        cout << "\n\n\n\t\t\t\tInvalid Choice press enter TRY AGAIN";
        getch();
        intro();
    }
}

void adminMenu()
{
    system("CLS");
    int a;
    cout << "\n\n\n\t\t\t\tADMIN MENU";
    cout << "\n\n\t\t\t\t1.STUDENT";
    cout << "\n\n\t\t\t\t2.TEACHER";
    cout << "\n\n\t\t\t\t3.RESULT";
    cout << "\n\n\t\t\t\t4.BACK TO MAIN MENU";
    cout << "\n\n\n\t\t\t\tPlease Enter Your Choice (1-3) :   ";
    cin >> a;

    switch (a)
    {

    case 1:
        system("CLS");
        adminStudentMenu();
        break;
    case 2:
        system("CLS");
        adminTeacherMenu();
        break;
    case 3:
        system("CLS");
        adminResultMenu();
        break;
    case 4:
        system("CLS");
        intro();
        break;
    default:
        cout << "\n\n\n\t\t\t\tInvalid ChoiceT RY AGAIN";
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        adminMenu();
    }
}

void adminStudentMenu()
{
    system("CLS");
    int a;
    cout << "\n\n\n\t\t\t\tADMIN'S STUDENT MENU";
    cout << "\n\n\t\t\t\t1.ADD NEW STUDENT";
    cout << "\n\n\t\t\t\t2.UPDATE ALL RECORDS OF STUDENT";
    cout << "\n\n\t\t\t\t3.UPDATE SINGLE RECORD OF STUDENT";
    cout << "\n\n\t\t\t\t4.DELETE STUDENT";
    cout << "\n\n\t\t\t\t5.SEARCH STUDENT";
    cout << "\n\n\t\t\t\t6.VIEW STUDENT TABLE";
    cout << "\n\n\t\t\t\t7.BACK TO ADMIN MENU";
    cout << "\n\n\t\t\t\t8.BACK TO MAIN MENU";
    cout << "\n\n\n\t\t\t\tPlease Enter Your Choice (1-8) :   ";
    cin >> a;

    switch (a)
    {

    case 1:
        system("CLS");
        insertStudentByAdmin();
        break;
    case 2:
        system("CLS");
        updateStudentByAdmin();
        break;
    case 3:
        system("CLS");
        updateSingleStudentByAdmin();
        break;
    case 4:
        system("CLS");
        deleteStudentByAdmin();
        break;
    case 5:
        system("CLS");
        searchSingleStudent();
        break;
    case 6:
        system("CLS");
        searchAllStudent();
        break;
    case 7:
        system("CLS");
        adminMenu();
        break;
    case 8:
        system("CLS");
        intro();
        break;
    default:
        cout << "\n\n\n\t\t\t\tInvalid ChoiceT RY AGAIN";
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        adminStudentMenu();
    }
}

void adminTeacherMenu()
{
    system("CLS");
    int a;
    cout << "\n\n\n\t\t\t\tADMIN'S TEACHER MENU";
    cout << "\n\n\t\t\t\t1.ADD NEW TEACHER";
    cout << "\n\n\t\t\t\t2.UPDATE ALL RECORDS OF TEACHER";
    cout << "\n\n\t\t\t\t3.UPDATE SINGLE RECORD OF TEACHER";
    cout << "\n\n\t\t\t\t4.DELETE TEACHER";
    cout << "\n\n\t\t\t\t5.SEARCH TEACHER";
    cout << "\n\n\t\t\t\t6.VIEW TEACHER TABLE";
    cout << "\n\n\t\t\t\t7.BACK TO ADMIN MENU";
    cout << "\n\n\t\t\t\t8.BACK TO MAIN MENU";
    cout << "\n\n\n\t\t\t\tPlease Enter Your Choice (1-8) :   ";
    cin >> a;

    switch (a)
    {

    case 1:
        system("CLS");
        insertTeacherByAdmin();
        break;
    case 2:
        system("CLS");
        UpdateTeacherByAdmin();
        break;
    case 3:
        system("CLS");
        updateSingleTeacherByAdmin();
        break;
    case 4:
        system("CLS");
        DeleteTeacherByAdmin();
        break;
    case 5:
        system("CLS");
        searchSingleTeacher();
        break;
    case 6:
        system("CLS");
        searchAllTeacher();
        break;
    case 7:
        system("CLS");
        adminMenu();
        break;
    case 8:
        system("CLS");
        intro();
        break;
    default:
        cout << "\n\n\n\t\t\t\tInvalid ChoiceT RY AGAIN";
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        adminTeacherMenu();
    }
}

void adminResultMenu()
{
    system("CLS");
    int a;
    cout << "\n\n\n\t\t\t\tADMIN'S RESULT MENU";
    cout << "\n\n\t\t\t\t1.ADD NEW RESULT";
    cout << "\n\n\t\t\t\t2.UPDATE ALL MARKS OF STUDENT";
    cout << "\n\n\t\t\t\t3.UPDATE SINGLE MARKS OF STUDENT";
    cout << "\n\n\t\t\t\t4.DELETE STUDENT";
    cout << "\n\n\t\t\t\t5.SEARCH STUDENT MARKS";
    cout << "\n\n\t\t\t\t6.VIEW STUDENT RESULT TABLE";
    cout << "\n\n\t\t\t\t7.BACK TO ADMIN MENU";
    cout << "\n\n\t\t\t\t8.BACK TO MAIN MENU";
    cout << "\n\n\n\t\t\t\tPlease Enter Your Choice (1-8) :   ";
    cin >> a;

    switch (a)
    {

    case 1:
        system("CLS");
        insertMarksbyAdmin();
        break;
    case 2:
        system("CLS");
        updateMarksByAdmin();
        break;
    case 3:
        system("CLS");
        updateSingleMarksByAdmin();
        break;
    case 4:
        system("CLS");
        deleteMarksByAdmin();
        break;
    case 5:
        system("CLS");
        searchSingleMarks();
        break;
    case 6:
        system("CLS");
        searchAllStudentMarks();
        break;
    case 7:
        system("CLS");
        adminMenu();
        break;
    case 8:
        system("CLS");
        intro();
        break;
    default:
        cout << "\n\n\n\t\t\t\tInvalid ChoiceT RY AGAIN";
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        adminResultMenu();
    }
}

void studentMenu()
{
    system("CLS");
    int a;
    cout << "\n\n\n\t\t\t\tSTUDENT MENU";
    cout << "\n\n\t\t\t\t1.UPDATE EVERY STUDENT INFORMATION";
    cout << "\n\n\t\t\t\t2.UPDATE SINGLE STUDENT INFORMATION ";
    cout << "\n\n\t\t\t\t3.SEARCH STUDENT INFORMATON";
    cout << "\n\n\t\t\t\t4.BACK TO MAIN MENU";
    cout << "\n\n\n\t\t\t\tPlease Enter Your Choice (1-3) :   ";
    cin >> a;

    switch (a)
    {

    case 1:
        system("CLS");
        UpdateStudent();
        break;
    case 2:
        system("CLS");
        updateSingleStudent();
        break;
    case 3:
        system("CLS");
        searchSingleStudent();
        break;
    case 4:
        system("CLS");
        intro();
        break;
    default:
        cout << "\n\n\n\t\t\t\tInvalid ChoiceT RY AGAIN";
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        studentMenu();
    }
}

void teacherMenu()
{
    system("CLS");
    int a;
    cout << "\n\n\n\t\t\t\tTEACHER MENU";
    cout << "\n\n\t\t\t\t1.UPDATE EVERY TEACHER INFORMATION";
    cout << "\n\n\t\t\t\t2.UPDATE SINGLE TEACHER INFORMATION ";
    cout << "\n\n\t\t\t\t3.SEARCH TEACHER INFORMATON";
    cout << "\n\n\t\t\t\t4.VIEW TEACHER TABLE";
    cout << "\n\n\t\t\t\t5.SEARCH SINGLE STUDENT INFORMATON";
    cout << "\n\n\t\t\t\t6.VIEW STUDENT INFORMATON TABLE";
    cout << "\n\n\t\t\t\t7.UPDATE MARKS";
    cout << "\n\n\t\t\t\t8.BACK TO MAIN MENU";
    cout << "\n\n\n\t\t\t\tPlease Enter Your Choice (1-8) :   ";
    cin >> a;

    switch (a)
    {

    case 1:
        system("CLS");
        updateTeacher();
        break;
    case 2:
        system("CLS");
        updateSingleTeacher();
        break;
    case 3:
        system("CLS");
        searchSingleTeacher();
        break;
    case 4:
        searchAllTeacher();
        break;
    case 5:
        searchSingleStudent();
        break;
    case 6:
        searchAllStudent();
        break;
    /*case 7:
        insertMarksByTeacherUnitTest1();
        break;
    case 8:
        insertMarksByTeacherUnitTest2();
        break;
        */
    case 7:
        updateResultByTeacher();
        break;
    case 8:
        intro();
        break;

    default:
        cout << "\n\n\n\t\t\t\tInvalid Choice TRY AGAIN";
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        teacherMenu();
    }
}

void resultMenu()
{
    system("CLS");
    int a;
    cout << "\n\n\n\t\t\t\tRESULT MENU";
    cout << "\n\n\t\t\t\t1.SEARCH STUDENT RESULT";
    cout << "\n\n\t\t\t\t2.VIEW RESULT TABLE";
    cout << "\n\n\t\t\t\t3.BACK TO MAIN MENU";
    cout << "\n\n\n\t\t\t\tPlease Enter Your Choice (1-3) :   ";
    cin >> a;

    switch (a)
    {

    case 1:
        system("CLS");
        searchSingleMarks();
        break;
    case 2:
        system("CLS");
        searchAllStudentMarks();
        break;
    case 3:
        system("CLS");
        intro();
        break;
    default:
        cout << "\n\n\n\t\t\t\tInvalid ChoiceT RY AGAIN";
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        resultMenu();
    }
}

void insertStudentByAdmin()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tADD NEW STUDENT" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);
    ss << "select rn from student where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn != temp)
    {
        stringstream ss1;
        stringstream ss2;
        int state = 0;

        string password = "12345";
        string name;
        string phone = "";
        string email = "";
        string course;
        string admitted_in;
        string dob = "";
        string gender = "";
        string address = "";

        string ITM1 = "";
        string COA1 = "";
        string OOPS1 = "";
        string SEPM1 = "";
        string MATHS1 = "";
        string ITM2 = "";
        string COA2 = "";
        string OOPS2 = "";
        string SEPM2 = "";
        string MATHS2 = "";
        string ITM = "";
        string COA = "";
        string OOPS = "";
        string SEPM = "";
        string MATHS = "";

        cout << "\n\t\t\t\tName                        :    ";
        cin.ignore(100, '\n');
        getline(cin, name);
        cout << "\n\t\t\t\tcourse                      :    ";
        getline(cin, course);
        cout << "\n\t\t\t\tAdmitted in                 :    ";
        cin >> admitted_in;
        ss1 << "INSERT INTO student VALUES('" << rn << "','" << password << "','" << name << "','" << phone << "','" << email << "','" << course << "','" << admitted_in << "','" << dob << "','" << gender << "','" << address << "')";
        ss2 << "INSERT INTO result VALUES('" << rn << "','" << ITM1 << "','" << ITM2 << "','" << ITM << "','" << COA1 << "','" << COA2 << "','" << COA << "','" << OOPS1 << "','" << OOPS2 << "','" << OOPS << "','" << SEPM1 << "','" << SEPM2 << "','" << SEPM << "','" << MATHS1 << "','" << MATHS2 << "','" << MATHS << "')";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        string query2 = ss2.str();
        const char *q2 = query2.c_str();
        state = mysql_query(conn, q2);
        if (state == 0)
        {
            cout << "\n\t\t\t\tINSERTED STUDENT OF ROLL NUMBER = " << rn << "\n\n\n"
                 << endl;
            cout << "\n\t\t\t\tpress y to add more student details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y")
            {
                insertStudentByAdmin();
            }
            else
            {
                adminStudentMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT INSERT \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminStudentMenu();
        }
    }

    else
    {
        cout << "\n\t\t\t\tSTUDENT ALLREADY EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminStudentMenu();
    }
}

void UpdateStudent()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tUPDATE NEW STUDENT" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER    :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from student where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {

        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn != temp)
    {
        cout << "\n\t\t\t\tSTUDENT NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        studentMenu();
    }

    else
    {
        stringstream ss1;
        int state = 0;
        string password;
        string name;
        string phone;
        string email;
        string dob;
        string gender;
        string address;
        cout << "\n\t\t\t\tPassword                     :   ";
        cin >> password;
        cout << "\n\t\t\t\tName                         :   ";
        cin.ignore(100, '\n');
        getline(cin, name);
        cout << "\n\t\t\t\tPHONE                        :   ";

        getline(cin, phone);
        cout << "\n\t\t\t\tEMAIL                        :   ";
        cin >> email;
        cout << "\n\t\t\t\tDOB                          :   ";
        cin >> dob;
        cout << "\n\t\t\t\tGENDER                       :   ";
        cin >> gender;
        cout << "\n\t\t\t\tADDRESS                      :   ";
        cin.ignore(100, '\n');
        getline(cin, address);
        ss1 << "update  student set password='" << password << "',name='" << name << "',phone='" << phone << "',email='" << email << "',dob='" << dob << "',gender='" << gender << "',address='" << address << "' where rn='" << rn << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\n\t\t\t\tUPDATED STUDENT OF ROLL NUMBER = " << rn << "\n\n\n"
                 << endl;
            cout << "\n\t\t\t\tpress y to update again student details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y")
            {
                UpdateStudent();
            }
            else
            {
                intro();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT UPDATE \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            intro();
        }
    }
}

void deleteStudentByAdmin()
{
    cout << "\n\n\n\t\t\t\tDELETE STUDENT DETAIL" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from student where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {

        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn != temp)
    {
        cout << "\n\t\t\t\tSTUDENT NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminStudentMenu();
    }

    else
    {
        stringstream ss1;
        stringstream ss2;
        int state = 0;
        ss2 << "delete from result where rn='" << rn << "'";
        string query2 = ss2.str();
        const char *q2 = query2.c_str();
        state = mysql_query(conn, q2);
        ss1 << "delete from student where rn='" << rn << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);

        if (state == 0)
        {
            cout << "\n\t\t\t\tDELETED STUDENT OF ROLL NUMBER = " << rn << "\n\n\n"
                 << endl;
            cout << "\n\t\t\t\tpress y to delete more student details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y")
            {
                insertStudentByAdmin();
            }
            else
            {
                adminStudentMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT DELETE \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminStudentMenu();
        }
    }
}

void searchSingleStudent()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tSEARCH STUDENT DETAILS" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from student where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {

        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn != temp)
    {
        cout << "\n\t\t\t\tSTUDENT NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Main Menu.......";
        getch();
        intro();
    }

    else
    {
        stringstream ss1;
        int state = 0;
        MYSQL *conn;
        MYSQL_ROW row;
        MYSQL_RES *res;
        conn = mysql_init(0);
        conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
        ss1 << "select * from student where rn='" << rn << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (!state)
        {

            res = mysql_store_result(conn);
            while (row = mysql_fetch_row(res))
            {
                cout << "\n\t\t\t\tROLL NUMBER    :   " << row[0] << " " << endl
                     << "\t\t\t\tPASSWORD       :   " << row[1] << " " << endl
                     << "\t\t\t\tNAME           :   " << row[2] << " " << endl
                     << "\t\t\t\tPHONE          :   " << row[3] << " " << endl
                     << "\t\t\t\tEMAIL          :   " << row[4] << " " << endl
                     << "\t\t\t\tCOURSE         :   " << row[5] << " " << endl
                     << "\t\t\t\tADMITTED IN    :   " << row[6] << " " << endl
                     << "\t\t\t\tDOB            :   " << row[7] << " " << endl
                     << "\t\t\t\tGENDER         :   " << row[8] << " " << endl
                     << "\t\t\t\tADDRESS        :   " << row[9] << " " << endl
                     << "\n\n\n";
            }
            cout << "\n\t\t\t\tpress y to search more student details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Main Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y")
            {
                searchSingleStudent();
            }
            else
            {
                intro();
            }
        }
    }
}

void searchAllStudent()
{
    cout << "\n\n\n\t\t\t\tALL REGISTERED STUDENT \n\n\n"
         << endl;
    string temp;
    stringstream ss;
    string rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select * from student";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);

        while (row = mysql_fetch_row(res))
        {
            cout << "\n\n\t\t\t\tROLL NUMBER          :    " << row[0] << endl
                 << "\t\t\t\tPASSWORD             :    " << row[1] << endl
                 << "\t\t\t\tNAME                 :    " << row[2] << endl
                 << "\t\t\t\tPHONE                :    " << row[3] << endl
                 << "\t\t\t\tEMAIL                :    " << row[4] << endl
                 << "\t\t\t\tCOURSE               :    " << row[5] << endl
                 << "\t\t\t\tADMITTED IN          :    " << row[6] << endl
                 << "\t\t\t\tDOB                  :    " << row[7] << endl
                 << "\t\t\t\tGENDER               :    " << row[8] << endl
                 << "\t\t\t\tMALE                 :    " << row[9] << endl;
        }
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        intro();
    }
}

void insertTeacherByAdmin()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tADD NEW TEACHER INFORMATION" << endl;
    string temp;
    stringstream ss;
    string id;
    cout << "\n\t\t\t\tENTER TEACHER ID   :   ";
    cin >> id;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select id from teacher where id='" << id << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (id != temp)
    {
        stringstream ss1;
        int state = 0;
        string password = "12345";
        string name;
        string subject;
        string phone = "";
        string email = "";
        string dob = "";
        string gender = "";
        string address = "";
        cout << "\n\t\t\t\tName                        :    ";
        cin.ignore(100, '\n');
        getline(cin, name);
        cout << "\n\t\t\t\tSubject                     :    ";
        cin >> subject;
        ss1 << "INSERT INTO teacher VALUES('" << id << "','" << password << "','" << name << "','" << subject << "','" << phone << "','" << email << "','" << dob << "','" << gender << "','" << address << "')";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\n\t\t\t\tINSERTED TEACHER OF ID  = " << id << "\n\n\n"
                 << endl;
            cout << "\n\t\t\t\tpress y to add more student details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                insertTeacherByAdmin();
            }
            else
            {
                adminTeacherMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT INSERT \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminTeacherMenu();
        }
    }

    else
    {
        cout << "\n\t\t\t\tTEACHER ALLREADY EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminTeacherMenu();
    }
}

void updateTeacher()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tUPDATE TEACHER DETAILS" << endl;
    string temp;
    stringstream ss;
    string id;
    cout << "\n\t\t\t\tENTER TEACHER ID      :   ";
    cin >> id;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select id from teacher where id='" << id << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {

        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (id != temp)
    {
        cout << "\n\t\t\t\tTEACHER NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        teacherMenu();
    }

    else
    {
        stringstream ss1;
        int state = 0;
        string password;
        string name;
        string phone;
        string email;
        string dob;
        string gender;
        string address;
        cout << "\n\t\t\t\tPassword             :   ";
        cin >> password;
        cout << "\n\t\t\t\tName                 :   ";
        cin >> name;
        cout << "\n\t\t\t\tPHONE                :   ";
        cin.ignore(100, '\n');
        getline(cin, phone);
        cout << "\n\t\t\t\tEMAIL                :   ";
        cin >> email;
        cout << "\n\t\t\t\tDOB                  :   ";
        cin >> dob;
        cout << "\n\t\t\t\tGENDER               :   ";
        cin >> gender;
        cout << "\n\t\t\t\tADDRESS              :   ";
        cin >> address;

        MYSQL *conn;
        MYSQL_ROW row;
        MYSQL_RES *res;
        conn = mysql_init(0);
        conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
        ss1 << "update  teacher set password='" << password << "',name='" << name << "',phone='" << phone << "',email='" << email << "',dob='" << dob << "',gender='" << gender << "',address='" << address << "' where id='" << id << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\n\t\t\t\tUPDATED TEACHER OF ID = " << id << "\n\n\n"
                 << endl;
                 getch();
            cout << "\n\t\t\t\tpress y to update more teacher details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";

            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                updateTeacher();
            }
            else
            {
                teacherMenu();
            }
        }
        else
        {
            cout << " CAN NOT UPDATE \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            teacherMenu();
        }
    }
}

void DeleteTeacherByAdmin()
{
    cout << "\n\n\n\t\t\t\tDELETE TEACHER INFORMATION" << endl;
    string temp;
    stringstream ss;
    string id;
    cout << "\n\t\t\t\tENTER TEACHER ID     :   ";
    cin >> id;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select id from teacher where id='" << id << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {

        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (id != temp)
    {
        cout << "\n\t\t\t\tTEACHER NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminTeacherMenu();
    }

    else
    {
        stringstream ss1;
        int state = 0;
        ss1 << "delete from teacher where id='" << id << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\n\t\t\t\tDELETED TEACHER OF ID = " << id << "\n\n\n"
                 << endl;
            cout << "\n\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                DeleteTeacherByAdmin();
            }
            else
            {
                adminTeacherMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT UPDATE \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminTeacherMenu();
        }
    }
}

void searchSingleTeacher()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tSEARCH SINGLE TEACHER INFORMATION" << endl;
    string temp;
    stringstream ss;
    string id;
    cout << "\n\t\t\t\tENTER TEACHER ID     :   ";
    cin >> id;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select id from teacher where id='" << id << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {

        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (id != temp)
    {
        cout << "\n\t\t\t\tTEACHER NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        intro();
    }

    else
    {
        stringstream ss1;
        int state = 0;
        ss1 << "select * from teacher where id='" << id << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (!state)
        {

            res = mysql_store_result(conn);
            while (row = mysql_fetch_row(res))
            {
                cout << "\n\t\t\t\tID                     :   " << row[0] << " " << endl
                     << "\t\t\t\tPASSWORD               :   " << row[1] << " " << endl
                     << "\t\t\t\tNAME                   :   " << row[2] << " " << endl
                     << "\t\t\t\tSUBJECT                :   " << row[3] << " " << endl
                     << "\t\t\t\tPHONE                  :   " << row[4] << " " << endl
                     << "\t\t\t\tEMAIL                  :   " << row[5] << " " << endl
                     << "\t\t\t\tDOB                    :   " << row[6] << " " << endl
                     << "\t\t\t\tGENDER                 :   " << row[7] << " " << endl
                     << "\t\t\t\tADDRESS                :   " << row[8] << " " << endl
                     << "\n\n\n";
            }
            cout << "\n\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                searchSingleTeacher();
            }
            else
            {
                intro();
            }
        }
    }
}

void searchAllTeacher()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\t\ALL TECAHER INFORMATION TABLE\n\n\n"
         << endl;
    string temp;
    stringstream ss;
    string rn;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select * from teacher";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);

        while (row = mysql_fetch_row(res))
        {
            cout << "\n\n\t\t\t\tID                   :    " << row[0] << endl
                 << "\t\t\t\tPASSWORD             :    " << row[1] << endl
                 << "\t\t\t\tNAME                 :    " << row[2] << endl
                 << "\t\t\t\tSUBJECT              :    " << row[3] << endl
                 << "\t\t\t\tPHONE                :    " << row[4] << endl
                 << "\t\t\t\tEMAIL                :    " << row[5] << endl
                 << "\t\t\t\tDOB                  :    " << row[6] << endl
                 << "\t\t\t\tGENDER               :    " << row[7] << endl
                 << "\t\t\t\tADDRESS              :    " << row[8] << endl;
        }
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        intro();
    }
}

void insertMarksByTeacherUnitTest1()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\t\ADD UNIT TEST 1 MARKS\n\n\n"
         << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\t\ENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from result where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn != temp)
    {
        stringstream ss1;
        int state = 0;

        string ITM1;
        string COA1;
        string OOPS1;
        string SEPM1;
        string MATHS1;
        cout << "\n\t\t\t\t\ITM1                        : ";
        cin >> ITM1;
        cout << "\n\t\t\t\t\COA1                        : ";
        cin >> COA1;
        cout << "\n\t\t\t\t\OOPS1                       : ";
        cin >> OOPS1;
        cout << "\n\t\t\t\t\SEPM1                       : ";
        cin >> SEPM1;
        cout << "\n\t\t\t\t\MATHS1                      : ";
        cin >> MATHS1;

        ss1 << "INSERT INTO result(`rn`, `ITM1`,`COA1` ,`OOPS1` ,`SEPM1` ,`MATHS1` ) VALUES('" << rn << "','" << ITM1 << "','" << COA1 << "','" << OOPS1 << "','" << SEPM1 << "','" << MATHS1 << "')";

        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\t\t\t\tUPDATED MARKS OF ROLL NUMBER = " << rn << "\n\n\n"
                 << endl;

            cout << "\n\t\t\t\tpress y to update more result details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                insertMarksByTeacherUnitTest1();
            }
            else
            {
                resultMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT INSERTED \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            resultMenu();
        }
    }

    else
    {
        cout << "\n\t\t\t\tSTUDENT ALREADY EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        resultMenu();
    }
}

void insertMarksByTeacherUnitTest2()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\t\ADD UNIT TEST 2 MARKS\n\n\n"
         << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER    :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from result where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn == temp)
    {
        stringstream ss1;
        int state = 0;

        string ITM2;
        string COA2;
        string OOPS2;
        string SEPM2;
        string MATHS2;
        cout << "\n\t\t\t\tITM2                         :   ";
        cin >> ITM2;
        cout << "\n\t\t\t\tCOA2                         :   ";
        cin >> COA2;
        cout << "\n\t\t\t\tOOPS2                        :   ";
        cin >> OOPS2;
        cout << "\n\t\t\t\tSEPM2                        :   ";
        cin >> SEPM2;
        cout << "\n\t\t\t\tMATHS2                       :   ";
        cin >> MATHS2;
        ss1 << "update result set ITM2='" << ITM2 << "',COA2='" << COA2 << "',OOPS2='" << OOPS2 << "',SEPM2='" << SEPM2 << "',MATHS2='" << MATHS2 << "'  where rn='" << rn << "' ";

        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\t\t\t\tUPDATED MARKS OF ROLL NUMBER = " << rn << "\n\n\n"
                 << endl;

            cout << "\n\t\t\t\tpress y to update more result details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                insertMarksByTeacherUnitTest1();
            }
            else
            {
                resultMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT UPDATED \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            resultMenu();
        }
    }

    else
    {
        cout << "\n\t\t\t\tSTUDENT ALREADY EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        resultMenu();
    }
}

void updateMarksByAdmin()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tUPDATE EVERY MARKS OF STUDENT " << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from result where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn == temp)
    {
        stringstream ss1;
        int state = 0;

        float ITM1;
        float COA1;
        float OOPS1;
        float SEPM1;
        float MATHS1;
        float ITM2;
        float COA2;
        float OOPS2;
        float SEPM2;
        float MATHS2;
        cout << "\n\t\t\t\tITM1                        :    ";
        cin >> ITM1;
        cout << "\t\t\t\tCOA1                        :    ";
        cin >> COA1;
        cout << "\t\t\t\tOOPS1: ";
        cin >> OOPS1;
        cout << "\t\t\t\tSEPM1                       :    ";
        cin >> SEPM1;
        cout << "\t\t\t\tMATHS1                      :    ";
        cin >> MATHS1;
        cout << "\t\t\t\tITM2                        :    ";
        cin >> ITM2;
        cout << "\n\t\t\t\tCOA2                        :    ";
        cin >> COA2;
        cout << "\t\t\t\tOOPS2                       :    ";
        cin >> OOPS2;
        cout << "\t\t\t\tSEPM2                       :    ";
        cin >> SEPM2;
        cout << "\t\t\t\tMATHS2                      :    ";
        cin >> MATHS2;

        ss1 << "update result set ITM1='" << ITM1 << "',ITM2='" << ITM2 << "',COA1='" << COA1 << "',COA2='" << COA2 << "',OOPS1='" << OOPS1 << "',OOPS2='" << OOPS2 << "',SEPM1='" << SEPM1 << "',SEPM2='" << SEPM2 << "',MATHS1='" << MATHS1 << "',MATHS2='" << MATHS2 << "' where rn='" << rn << "' ";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\n\t\t\t\tUPDATED STUDENT OF ROLL NUMBER = " << rn << "\n\n\n"
                 << endl;
            updateAverageMarks();
            /*stringstream ss3;
            int state = 0;
            int ITM;
            int COA;
            float OOPS;
            float SEPM;
            float MATHS;

            ITM = ((ITM1 + ITM2) / 2) + 0.5;
            COA = ((COA1 + COA2) / 2) + 0.5;
            OOPS = ((OOPS1 + OOPS2) / 2) + 0.5;
            SEPM = ((SEPM1 + SEPM2) / 2) + 0.5;
            MATHS = ((MATHS1 + MATHS2) / 2) + 0.5;

            cout << ITM << endl;
            cout << COA << endl;
            cout << OOPS << endl;
            cout << SEPM << endl;
            cout << MATHS << endl;

            MYSQL *conn;
            MYSQL_ROW row;
            MYSQL_RES *res;
            conn = mysql_init(0);
            conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
            ss3 << "update result set ITM='" << ITM << "',COA='" << COA << "',OOPS='" << OOPS << "',SEPM='" << SEPM << "',MATHS='" << MATHS << "' where rn='" << rn << "' ";
            string query3 = ss3.str();
            const char *q3 = query3.c_str();
            state = mysql_query(conn, q3);
            if (state == 0)
            {
                cout << "\n\t\t\t\tINSERTED AVERAGE MARKS OF BOTHE UNIT TEST MARKS OF ROLL NUMBER = " << rn << "\n\n\n"<<endl;
            }*/
            cout << "\n\t\t\t\tpress y to add more student details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                insertStudentByAdmin();
            }
            else
            {
                adminStudentMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT UPDATE \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminTeacherMenu();
        }
    }

    else
    {
        cout << "\n\t\t\t\tSTUDENT NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminTeacherMenu();
    }
}

void deleteMarksByAdmin()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tDELETE RESULT OF STUDENT" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER     :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from result where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn != temp)
    {
        cout << "\n\t\t\t\tSTUDENT NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminResultMenu();
    }

    else
    {
        stringstream ss1;
        int state = 0;
        ss1 << "delete from result where rn='" << rn << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\n\t\t\t\tDELETED STUDENT OF ROLL NUMBER = " << rn << "\n\n\n"
                 << endl;
            cout << "\n\t\t\t\tpress y to delete more student result" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                deleteMarksByAdmin();
            }
            else
            {
                adminResultMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT DELETE \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            adminResultMenu();
        }
    }
}

void searchSingleMarks()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tSEARCH MARKS OF STUDENT" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from result where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {

        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn != temp)
    {
        cout << "\n\t\t\t\tSTUDENT NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        resultMenu();
    }

    else
    {
        stringstream ss1;
        int state = 0;
        ss1 << "select * from result where rn='" << rn << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (!state)
        {
            res = mysql_store_result(conn);
            while (row = mysql_fetch_row(res))
            {
                cout << "\n\t\t\t\tROLL NO.       :   " << row[0] << " " << endl
                     << "\t\t\t\tITM            :   " << row[1] << " " << endl
                     << "\t\t\t\tITM1           :   " << row[2] << " " << endl
                     << "\t\t\t\tITM2           :   " << row[3] << " " << endl
                     << "\t\t\t\tCOA            :   " << row[4] << " " << endl
                     << "\t\t\t\tCOA1           :   " << row[5] << " " << endl
                     << "\t\t\t\tCOA2           :   " << row[6] << " " << endl
                     << "\t\t\t\tOOPS           :   " << row[7] << " " << endl
                     << "\t\t\t\tOOPS1          :   " << row[8] << " " << endl
                     << "\t\t\t\tOOPS2          :   " << row[9] << " " << endl
                     << "\t\t\t\tSEPM           :   " << row[10] << " " << endl
                     << "\t\t\t\tSEPM1          :   " << row[11] << " " << endl
                     << "\t\t\t\tSEPM2          :   " << row[12] << " " << endl
                     << "\t\t\t\tMATHS          :   " << row[13] << " " << endl
                     << "\t\t\t\tMATHS1         :   " << row[14] << " " << endl
                     << "\t\t\t\tMATHS2         :   " << row[15] << " " << endl;
            }
            cout << "\n\t\t\t\tpress y to search more student result" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                searchSingleMarks();
            }
            else
            {
                resultMenu();
            }
        }
    }
}

void searchAllStudentMarks()
{
    cout << "\n\n\t\t\t\tRESULT TABLE " << endl;
    string temp;
    stringstream ss;
    string rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select * from result";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);

        while (row = mysql_fetch_row(res))
        {

            cout << "\n\n\t\t\t\tID                   :    " << row[0] << endl
                 << "\t\t\t\tPASSWORD             :    " << row[1] << endl
                 << "\t\t\t\tNAME                 :    " << row[2] << endl
                 << "\t\t\t\tSUBJECT              :    " << row[3] << endl
                 << "\t\t\t\tPHONE                :    " << row[4] << endl
                 << "\t\t\t\tEMAIL                :    " << row[5] << endl
                 << "\t\t\t\tDOB                  :    " << row[6] << endl
                 << "\t\t\t\tGENDER               :    " << row[7] << endl
                 << "\t\t\t\tADDRESS              :    " << row[8] << endl
                 << "\t\t\t\tPASSWORD             :    " << row[9] << endl
                 << "\t\t\t\tNAME                 :    " << row[10] << endl
                 << "\t\t\t\tSUBJECT              :    " << row[11] << endl
                 << "\t\t\t\tPHONE                :    " << row[12] << endl
                 << "\t\t\t\tEMAIL                :    " << row[13] << endl
                 << "\t\t\t\tDOB                  :    " << row[14] << endl
                 << "\t\t\t\tGENDER               :    " << row[15] << endl;
        }
        cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
             << "\n\t\t\t\t";
        getch();
        resultMenu();
    }
}

void loginTeacher()
{
START:
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\TEACHER LOGIN";
    string id;
    char pass[32];
    int i = 0;
    char a;
    cout << "\n\n\n\t\t\t\t\tENTER TEACHER ID   :   ";
    cin >> id;
    cout << "\n\n\t\t\t\t\tENTER PASSWORD   :   ";
    for (i = 0;;)
    {
        a = getch();
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
        {
            pass[i] = a;
            ++i;
            cout << "*";
        }
        if (a == '\b' && i >= 1)
        {
            cout << "\b \b";
            --i;
        }
        if (a == '\r')
        {
            pass[i] = '\0';
            break;
        }
    }
    if (i <= 4)
    {
        cout << "\n\n\n\t\t\t\t\tnminimum 4 digit needed";
        goto START;
    }
    std::string s(pass);

    stringstream ss;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select * from teacher where id='" << id << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    res = mysql_store_result(conn);
    row = mysql_fetch_row(res);

    if (id == row[0] and s == row[1])
    {
        system("CLS");
        teacherMenu();
    }
    else
    {
        cout << "\n\n\n\t\t\t\t\tINCORRECT USERNAME OR PASSWORD";
        cout << "\n\n\n\t\t\t\t\tPress Any Key To Login Again........";
        getch();
        system("CLS");
        goto START;
    }
}

void loginStudent()
{

START:
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\tSTUDENT LOGIN";
    string rn;
    char pass[32];
    int i = 0;
    char a;
    cout << "\n\n\n\t\t\t\t\tENTER ROLL NUMBER   :   ";
    cin >> rn;
    cout << "\n\n\t\t\t\t\tENTER PASSWORD   :   ";
    for (i = 0;;)
    {
        a = getch();
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
        {
            pass[i] = a;
            ++i;
            cout << "*";
        }
        if (a == '\b' && i >= 1)
        {
            cout << "\b \b";
            --i;
        }
        if (a == '\r')
        {
            pass[i] = '\0';
            break;
        }
    }
    if (i <= 4)
    {
        cout << "\n\n\n\t\t\t\t\tnminimum 4 digit needed";
        goto START;
    }
    std::string s(pass);

    stringstream ss;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select * from student where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    res = mysql_store_result(conn);
    row = mysql_fetch_row(res);

    if (rn == row[0] and s == row[1])
    {
        system("CLS");
        studentMenu();
    }
    else
    {
        cout << "\n\n\n\t\t\t\t\tINCORRECT USERNAME OR PASSWORD";
        cout << "\n\n\n\t\t\t\t\tPress Any Key To Login Again........";
        getch();
        system("CLS");
        goto START;
    }
}

void loginAdmin()
{
START:
    system("CLS");
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\tADMIN LOGIN";
    string un;
    char pass[32];
    int i = 0;
    char a;
    cout << "\n\n\n\t\t\t\t\tENTER USERNAME   :   ";
    cin >> un;
    cout << "\n\n\t\t\t\t\tENTER PASSWORD   :   ";
    for (i = 0;;)
    {
        a = getch();
        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
        {
            pass[i] = a;
            ++i;
            cout << "*";
        }
        if (a == '\b' && i >= 1)
        {
            cout << "\b \b";
            --i;
        }
        if (a == '\r')
        {
            pass[i] = '\0';
            break;
        }
    }
    if (i <= 4)
    {
        cout << "\n\n\n\t\t\t\t\tnminimum 4 digit needed";
        goto START;
    }
    std::string s(pass);

    if (un == "admin" && s == "12345")
    {
        system("CLS");
        adminMenu();
    }
    else
    {
        cout << "\n\n\n\t\t\t\t\tINCORRECT USERNAME OR PASSWORD";
        cout << "\n\n\n\t\t\t\t\tPress Any Key To Login Again........";
        getch();
        system("CLS");
        goto START;
    }
}

void updateSingleStudent()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tUPDATE SINGLE STUDENT INFORMATION" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from student where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn == temp)
    {
        stringstream ss1;
        int state = 0;
        cout << "\n\n\n\t\t\t\tUPDATE SINGLE STUDENT INFORMATION\n";
        cout << "\n\t\t\t\t1. NAME";
        cout << "\n\t\t\t\t2. PHONE";
        cout << "\n\t\t\t\t3. EMAIL";
        cout << "\n\t\t\t\t4. DOB";
        cout << "\n\t\t\t\t5. GENDER";
        cout << "\n\t\t\t\t6. ADDRESS";
        cout << "\n\t\t\t\tCHOOSE FIELD BETWEEN 1 TO 10 YOU WANT TO UPDATE  :   ";
        int ch2;
        cin >> ch2;
        switch (ch2)
        {
        case 1:
        {
            system("CLS");
            string name;
            cout << "\n\t\t\t\tNAME  :   ";
            cin.ignore(100, '\n');
            getline(cin, name);
            ss1 << "update student set name='" << name << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tNAME UPDATED\n\n\n"
                 << endl;
            getch();
            studentMenu();
        }
        break;
        case 2:
        {
            system("CLS");
            string phone;
            cout << "\n\t\t\t\tPHONE  :   ";
            cin.ignore(100, '\n');
            getline(cin, phone);
            ss1 << "update student set phone='" << phone << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tPHONE UPDATED\n\n\n"
                 << endl;
            getch();
            studentMenu();
        }
        break;
        case 3:
        {
            system("CLS");
            string email;
            cout << "\n\t\t\t\tEMAIL  :   ";
            cin >> email;
            ss1 << "update student set email='" << email << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tEMAIL UPDATED\n\n\n"
                 << endl;
            getch();
            studentMenu();
        }

        break;
        case 4:
        {
            system("CLS");
            string dob;
            cout << "\n\t\t\t\tDOB  :   ";
            cin >> dob;
            ss1 << "update student set dob='" << dob << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tDATE OF BIRTH UPDATED\n\n\n"
                 << endl;
            getch();
            studentMenu();
        }
        break;
        case 5:
        {
            system("CLS");
            string gender;
            cout << "\n\t\t\t\tGENDER    :   ";
            cin >> gender;
            ss1 << "update student set gender='" << gender << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tGENDER UPDATED\n\n\n"
                 << endl;
            getch();
            studentMenu();
        }
        break;
        case 6:
        {
            system("CLS");
            string address;
            cout << "\n\t\t\t\tADDRESS   :   ";
            cin.ignore(100, '\n');
            getline(cin, address);
            ss1 << "update student set address='" << address << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tADDRESS UPDATED\n\n\n"
                 << endl;
            getch();
            studentMenu();
        }
        break;
        default:
            cout << "\n\t\t\t\tInvalid Choice TRY AGAIN";
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            studentMenu();
        }
        if (state == 0)
        {
            cout << "\t\t\t\tUPDATED STUDENT INFORMATION OF ID = " << rn << "\n\n\n"
                 << endl;

            cout << "\n\t\t\t\tpress y to update more result details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                updateSingleStudent();
            }
            else
            {
                studentMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT UPDATED \n\n\n"
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            studentMenu();
        }
    }

    else
    {
        cout << "STUDENT NOT EXIST\n\n\n";
        getch();
        studentMenu();
    }
}

void updateSingleTeacher()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tUPDATE SINGLE TEACHER INFORMATION " << endl;
    string temp;
    stringstream ss;
    string id;
    cout << "\n\t\t\t\tENTER TEACHER ID        :   ";
    cin >> id;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select id from teacher where id='" << id << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (id == temp)
    {
        stringstream ss1;
        int state = 0;
        cout << "\n\n\n\t\t\t\tUPDATE SINGLE TEACHER INFORMATION ";
        cout << "\n\t\t\t\t1. PASSWORD";
        cout << "\n\t\t\t\t2. NAME";
        cout << "\n\t\t\t\t3. PHONE";
        cout << "\n\t\t\t\t4. EMAIL";
        cout << "\n\t\t\t\t5. DOB";
        cout << "\n\t\t\t\t6. GENDER";
        cout << "\n\t\t\t\t7. ADDRESS" << endl;
        int ch2;
        cout << "\n\t\t\t\tCHOOSE FIELD BETWEEN 1 TO 7 YOU WANT TO UPDATE   :   ";
        cin >> ch2;
        switch (ch2)
        {
        case 1:
        {
            system("CLS");
            string password;
            cout << "\n\n\n\t\t\t\tPASSWORD                  :   ";
            cin >> password;
            ss1 << "update teacher set password='" << password << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED PASSWORD" << id;
            getch();
            teacherMenu();
        }
        break;
        case 2:
        {
            system("CLS");
            string name;
            cout << "\n\n\n\t\t\t\tNAME                  :   ";
            cin >> name;
            ss1 << "update teacher set name='" << name << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED NAME OF ID   =   " << id;
            getch();
            teacherMenu();
        }
        break;
        case 3:
        {
            system("CLS");
            string phone;
            cout << "\n\n\n\t\t\t\tPHONE: ";
            cin.ignore(100, '\n');
            getline(cin, phone);
            ss1 << "update teacher set phone='" << phone << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED PHONE OF ID   =   " << id;
            getch();
            teacherMenu();
        }
        break;
        case 4:
        {
            system("CLS");
            string email;
            cout << "\n\n\n\t\t\t\tEMAIL: ";
            cin >> email;
            ss1 << "update teacher set email='" << email << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED EMAIL OF ID   =   " << id;
            getch();
            teacherMenu();
        }

        break;
        case 5:
        {
            system("CLS");
            string dob;
            cout << "\n\n\n\t\t\t\tDOB: ";
            cin >> dob;
            ss1 << "update teacher set dob='" << dob << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED DOB OF ID   =   " << id;
            getch();
            teacherMenu();
        }
        break;
        case 6:
        {
            system("CLS");
            string gender;
            cout << "\n\n\n\t\t\t\tGENDER OF ID   =   ";
            cin >> gender;
            ss1 << "update teacher set gender='" << gender << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED GENDER" << id;
            getch();
            teacherMenu();
        }
        break;
        case 7:
        {
            system("CLS");
            string address;
            cout << "\n\n\n\t\t\t\tADDRESS: ";
            cin >> address;
            ss1 << "update teacher set address='" << address << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED ADDRESS OF ID   =   " << id;
            getch();
            teacherMenu();
        }
        break;
        default:

            cout << "\n\t\t\t\tInvalid Choice TRY AGAIN";
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            teacherMenu();
        }
        if (state == 0)
        {
            cout << "\n\t\t\t\tUPDATED TEACHER OF ID = " << id << "\n\n\n"
                 << endl;
            cout << "\n\t\t\t\tpress y to update more teacher details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                updateSingleTeacher();
            }
            else
            {
                teacherMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT UPDATED \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            teacherMenu();
        }
    }

    else
    {
        cout << "\n\t\t\t\tSTUDENT NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        teacherMenu();
    }
}

void updateResultByTeacher()
{
    system("CLS");
    cout << "\n\n\n\n\t\t\t\t\t\tUPDATE MARKS" << endl;
    cout << "\n\n\n\n\t\t\t\t\t\tTEACHER LOGIN";
    string storeSubject;
    string temp1;
    string temp2;
    stringstream ss;
    string id;
    string password;
    cout << "\n\n\n\t\t\t\t\tENTER TEACHER ID   :   ";
    cin >> id;
    cout << "\n\n\t\t\t\t\tENTER PASSWORD   :   ";
    cin >> password;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select * from teacher where id='" << id << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    res = mysql_store_result(conn);
    row = mysql_fetch_row(res);
    if (id == row[0] and password == row[1])
    {
        storeSubject = row[3];
        string rn;
    START:
        system("CLS");
        cout << "\n\n\n\t\t\t\t\tINSERT MARKS OF STUDENT";
        cout << "\n\n\n\t\t\t\t\tENTER ROLL NUMBER OF STUDENT   :   ";
        cin >> rn;
        if (storeSubject == "ITM" || storeSubject == "itm")
        {
            cout << "\n\n\n\t\t\t\t\tSUBJECTS YOU CAN UPDATE";
            cout << "\n\n\n\t\t\t\t\t1. ITM1 MARKS      ";
            cout << "\n\n\t\t\t\t\t2. ITM2 MARKS      ";
            int x;
            cout << "\n\n\t\t\t\t\tPLEASE ENTER YOUT CHOICE   :   ";
            cin >> x;

            switch (x)
            {

            case 1:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string ITM1;
                cout << "\n\n\t\t\t\t\tENTER ITM1 MARKS   :   ";
                cin >> ITM1;
                ss1 << "update result set ITM1='" << ITM1 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\t\t\t\t\tITM1 MARKS UPDATED ";
                updateAverageMarks();
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            case 2:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string ITM2;
                cout << "\n\n\t\t\t\t\tENTER ITM2 MARKS   :   ";
                cin >> ITM2;
                ss1 << "update result set ITM2='" << ITM2 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\n\t\t\t\t\tITM2 MARKS UPDATED ";
                updateAverageMarks();
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            default:
                cout << "\n\n\n\t\t\t\tInvalid Choice TRY AGAIN";
                updateResultByTeacher();
            }
        }
        if (storeSubject == "COA" || storeSubject == "coa")
        {
            cout << "\n\n\n\t\t\t\t\tSUBJECTS YOU CAN UPDATE";
            cout << "\n\n\n\t\t\t\t\t1. COA1 MARKS      ";
            cout << "\n\n\t\t\t\t\t2. COA2 MARKS      ";
            int x;
            cout << "\n\n\t\t\t\t\tPLEASE ENTER YOUT CHOICE   :   ";
            cin >> x;
            switch (x)
            {
            case 1:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string COA1;
                cout << "\n\n\t\t\t\t\tENTER COA1 MARKS   :   ";
                cin >> COA1;
                ss1 << "update result set COA1='" << COA1 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\t\t\t\t\tCOA1 MARKS UPDATED ";
                updateAverageMarks();
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            case 2:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string COA2;
                cout << "\n\n\t\t\t\t\tENTER COA2 MARKS   :   ";
                cin >> COA2;
                ss1 << "update result set COA2='" << COA2 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\t\t\t\t\tCOA2 MARKS UPDATED ";
                updateAverageMarks();
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            default:
                cout << "\n\n\n\t\t\t\tInvalid Choice TRY AGAIN";
                updateResultByTeacher();
            }
        }
        if (storeSubject == "OOPS" || storeSubject == "oops")
        {
            cout << "\n\n\n\t\t\t\t\tSUBJECTS YOU CAN UPDATE";
            cout << "\n\n\n\t\t\t\t\t1. OOPS1 MARKS      ";
            cout << "\n\n\t\t\t\t\t2. OOPS2 MARKS      ";
            int x;
            cout << "\n\n\t\t\t\t\tPLEASE ENTER YOUT CHOICE   :   ";
            cin >> x;
            switch (x)
            {
            case 1:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string OOPS1;
                cout << "\n\n\t\t\t\t\tENTER OOPS1 MARKS   :   ";
                cin >> OOPS1;
                ss1 << "update result set OOPS1='" << OOPS1 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\t\t\t\t\tOOPS1 MARKS UPDATED";
                updateAverageMarks();
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            case 2:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string OOPS2;
                cout << "\n\n\t\t\t\t\tENTER OOPS2 MARKS   :   ";
                cin >> OOPS2;
                ss1 << "update result set OOPS2='" << OOPS2 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\t\t\t\t\tOOPS2 MARKS UPDATED ";
                updateAverageMarks();
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            default:
                cout << "\n\n\n\t\t\t\tInvalid Choice TRY AGAIN";
                updateResultByTeacher();
            }
        }
        if (storeSubject == "SEPM" || storeSubject == "sepm")
        {
            cout << "\n\n\n\t\t\t\t\tSUBJECTS YOU CAN UPDATE";
            cout << "\n\n\n\t\t\t\t\t1. SEPM1 MARKS      ";
            cout << "\n\n\t\t\t\t\t2. SEPM2 MARKS      ";
            int x;
            cout << "\n\n\t\t\t\t\tPLEASE ENTER YOUT CHOICE   :   ";
            cin >> x;
            switch (x)
            {
            case 1:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string SEPM1;
                cout << "\n\n\t\t\t\t\tENTER SEPM1 MARKS   :   ";
                cin >> SEPM1;
                ss1 << "update result set SEPM1='" << SEPM1 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\t\t\t\t\tSEPM1 MARKS UPDATED";
                updateAverageMarks();
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            case 2:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string SEPM2;
                cout << "\n\n\t\t\t\t\tENTER SEPM2 MARKS   :   ";
                updateAverageMarks();
                cin >> SEPM2;
                ss1 << "update result set SEPM2='" << SEPM2 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\t\t\t\t\tSEPM2 MARKS UPDATED";
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            default:
                cout << "\n\n\n\t\t\t\tInvalid Choice TRY AGAIN";
                updateResultByTeacher();
            }
        }
        if (storeSubject == "MATHS" || storeSubject == "maths")
        {
            cout << "\n\n\n\t\t\t\t\tSUBJECTS YOU CAN UPDATE";
            cout << "\n\n\n\t\t\t\t\t1. MATHS1 MARKS      ";
            cout << "\n\n\t\t\t\t\t2. MATHS2 MARKS      ";
            int x;
            cout << "\n\n\t\t\t\t\tPLEASE ENTER YOUT CHOICE   :   ";
            cin >> x;
            switch (x)
            {
            case 1:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string MATHS1;
                cout << "\n\n\t\t\t\t\tENTER MATHS1 MARKS   :   ";
                updateAverageMarks();
                cin >> MATHS1;
                ss1 << "update result set MATHS1='" << MATHS1 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\t\t\t\t\tMATHS1 MARKS UPDATED";
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            case 2:
            {
                stringstream ss1;
                int state = 0;
                MYSQL *conn;
                MYSQL_ROW row;
                MYSQL_RES *res;
                conn = mysql_init(0);
                conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);
                string MATHS2;
                cout << "\n\n\t\t\t\t\tENTER MATHS2 MARKS   :   ";
                updateAverageMarks();
                cin >> MATHS2;
                ss1 << "update result set MATHS2='" << MATHS2 << "' where rn='" << rn << "' ";
                string query1 = ss1.str();
                const char *q1 = query1.c_str();
                state = mysql_query(conn, q1);
                cout << "\n\n\t\t\t\t\tMATHS2 MARKS UPDATED";
                cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
                cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                     << "\n\t\t\t\t";
                string desicion;
                cin >> desicion;
                if (desicion == "y" || desicion == "Y")
                {
                    goto START;
                }
                else
                {
                    teacherMenu();
                }
            }
            break;
            default:
                cout << "\n\n\n\t\t\t\tInvalid Choice TRY AGAIN";
                updateResultByTeacher();
            }
        }
    }
    else
    {
        cout << "\n\n\n\t\t\t\t\tINCORRECT TEACHER ID OR PASSWORD";
        cout << "\n\n\n\t\t\t\t\tPress Any Key To Login Again........";
        getch();
        system("CLS");
        updateResultByTeacher();
    }
}

void UpdateTeacherByAdmin()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tUPDATE ALL INFORMATION OF TEACHER" << endl;
    string temp;
    stringstream ss;
    string id;
    cout << "\n\t\t\t\tENTER TEACHER ID     :   ";
    cin >> id;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select id from teacher where id='" << id << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {

        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (id != temp)
    {
        cout << "\n\t\t\t\tTEACHER NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminTeacherMenu();
    }

    else
    {
        stringstream ss1;
        int state = 0;

        string password;
        string name;
        string subject;
        string phone;
        string email;
        string dob;
        string gender;
        string address;
        cout << "\n\t\t\t\tPassword             :   ";
        cin >> password;
        cout << "\n\t\t\t\tName                 :   ";
        cin.ignore(100, '\n');
        getline(cin, name);
        cout << "\n\t\t\t\tSUBJECT              :   ";
        cin >> subject;
        cout << "\n\t\t\t\tPHONE                :   ";

        getline(cin, phone);
        cout << "\n\t\t\t\tEMAIL                :   ";
        cin >> email;
        cout << "\n\t\t\t\tDOB                  :   ";
        cin >> dob;
        cout << "\n\t\t\t\tGENDER               :   ";
        cin >> gender;
        cout << "\n\t\t\t\tADDRESS              :   ";
        cin.ignore(100, '\n');
        getline(cin, address);

        ss1 << "update  teacher set password='" << password << "',name='" << name << "',subject='" << subject << "',phone='" << phone << "',email='" << email << "',dob='" << dob << "',gender='" << gender << "',address='" << address << "' where id='" << id << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\n\t\t\t\tUPDATED TEACHER OF ID = " << id << "\n\n\n"
                 << endl;
            cout << "\n\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                UpdateTeacherByAdmin();
            }
            else
            {
                adminTeacherMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT UPDATE \n\n\n"
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminTeacherMenu();
        }
    }
}

void updateStudentByAdmin()
{
    cout << "\n\n\n\t\t\t\tUPDATE STUDENT DETAILS" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from student where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {

        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn != temp)
    {
        cout << "\n\t\t\t\tSTUDENT NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminStudentMenu();
    }

    else
    {
        stringstream ss1;
        int state = 0;
        string password;
        string name;
        string phone;
        string email;
        string course;
        string admitted_in;
        string dob;
        string gender;
        string address;
        cout << "\n\t\t\t\tPassword                    :   ";
        cin >> password;
        cout << "\n\t\t\t\tName                        :   ";
        cin.ignore(100, '\n');
        getline(cin, name);
        cout << "\n\t\t\t\tPHONE                       :   ";

        getline(cin, phone);
        cout << "\n\t\t\t\tEMAIL                       :   ";
        cin.ignore(100, '\n');
        getline(cin, email);
        cout << "\n\t\t\t\tCOURSE                      :   ";
        getline(cin, course);
        cout << "\n\t\t\t\tADMITTTED IN                :   ";
        cin >> admitted_in;
        cout << "\n\t\t\t\tDOB                         :  ";
        cin >> dob;
        cout << "\n\t\t\t\tGENDER                      : ";
        cin >> gender;
        cout << "\n\t\t\t\tADDRESS                     : ";
        cin.ignore(100, '\n');
        getline(cin, address);
        ss1 << "update  student set password='" << password << "',name='" << name << "',phone='" << phone << "',email='" << email << "',course='" << course << "',admitted_in='" << admitted_in << "',dob='" << dob << "',gender='" << gender << "',address='" << address << "' where rn='" << rn << "'";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            cout << "\n\t\t\t\tUPDATED ALL INFORMATION OF STUDENT";
            cout << "\n\t\t\t\tpress y to update more student details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                updateStudentByAdmin();
            }
            else
            {
                adminStudentMenu();
            }
        }
        else
        {
            cout << " CAN NOT UPDATE \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminStudentMenu();
        }
    }
}

void insertMarksbyAdmin()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\t\tADD MARKS OF STUDENTS" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from result where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn == temp)
    {
        cout << "\n\t\t\t\tSTUDENT RESULT ALREADY EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        resultMenu();
    }

    else
    {
        stringstream ss1;
        int state = 0;
        float ITM1;
        float COA1;
        float OOPS1;
        float SEPM1;
        float MATHS1;
        float ITM2;
        float COA2;
        float OOPS2;
        float SEPM2;
        float MATHS2;
        cout << "\n\t\t\t\tITM1                        :    ";
        cin >> ITM1;
        cout << "\t\t\t\tCOA1                        :    ";
        cin >> COA1;
        cout << "\t\t\t\tOOPS1                       :    ";
        cin >> OOPS1;
        cout << "\t\t\t\tSEPM1                       :    ";
        cin >> SEPM1;
        cout << "\t\t\t\tMATHS1                      :    ";
        cin >> MATHS1;
        cout << "\n\t\t\t\tITM2                        :    ";
        cin >> ITM2;
        cout << "\t\t\t\tCOA2                        :    ";
        cin >> COA2;
        cout << "\t\t\t\tOOPS2                       :    ";
        cin >> OOPS2;
        cout << "\t\t\t\tSEPM2                       :    ";
        cin >> SEPM2;
        cout << "\t\t\t\tMATHS2                      :    ";
        cin >> MATHS2;
        ss1 << "INSERT INTO result(`rn`,`ITM1`,`ITM2`,`COA1`,`COA2`,`OOPS1`,`OOPS2`,`SEPM1`,`SEPM2`,`MATHS1`,`MATHS2`) VALUES('" << rn << "','" << ITM1 << "','" << ITM2 << "','" << COA1 << "','" << COA2 << "','" << OOPS1 << "','" << OOPS2 << "','" << SEPM1 << "','" << SEPM2 << "','" << MATHS1 << "','" << MATHS1 << "')";
        string query1 = ss1.str();
        const char *q1 = query1.c_str();
        state = mysql_query(conn, q1);
        if (state == 0)
        {
            stringstream ss3;
            int state = 0;
            int ITM;
            int COA;
            float OOPS;
            float SEPM;
            float MATHS;
            /*
            ITM = ((ITM1 + ITM2) / 2) + 0.5;
            COA = ((COA1 + COA2) / 2) + 0.5;
            OOPS = ((OOPS1 + OOPS2) / 2) + 0.5;
            SEPM = ((SEPM1 + SEPM2) / 2) + 0.5;
            MATHS = ((MATHS1 + MATHS2) / 2) + 0.5;
            ss3 << "update result set ITM='" << ITM << "',COA='" << COA << "',OOPS='" << OOPS << "',SEPM='" << SEPM << "',MATHS='" << MATHS << "' where rn='" << rn << "' ";

            string query3 = ss3.str();
            const char *q3 = query3.c_str();
            state = mysql_query(conn, q3);
            if (state == 0)
            {
                cout << "\n\t\t\t\tUPDATED AVERAGE MARKS OF BOTH UNIT TEST MARKS OF ROLL NUMBER = " << rn << endl;
            }
            */
            cout << "\n\t\t\t\tUPDATED STUDENT MARKS OF ROLL NUMBER = " << rn << endl;
            updateAverageMarks();
            cout << "\n\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                insertMarksbyAdmin();
            }
            else
            {
                resultMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT UPDATE \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            resultMenu();
        }
    }
}

void updateSingleMarksByAdmin()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tUPDATE SINGLE MARKS OF STUDENT" << endl;
    string storeSubject;
    string temp;
    stringstream ss;
    string rn;
    string password;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;

    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select * from result where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn == temp)
    {
    START:
        system("CLS");
        cout << "\n\n\n\t\t\t\tUPDATE SINGLE RECORD\n";
        cout << "\n\t\t\t\t1.ITM1";
        cout << "\n\t\t\t\t2.ITM2";
        cout << "\n\t\t\t\t3.COA1";
        cout << "\n\t\t\t\t4.COA2";
        cout << "\n\t\t\t\t5.OOPS1";
        cout << "\n\t\t\t\t6.OOPS2";
        cout << "\n\t\t\t\t7.SEPM1";
        cout << "\n\t\t\t\t8.SEPM2";
        cout << "\n\t\t\t\t9.MATHS1";
        cout << "\n\t\t\t\t10.MATHS2" << endl;
        cout << "\n\t\t\t\tCHOOSE FIELD BETWEEN 1 TO 10 YOU WANT TO UPDATE  :   ";
        int ch2;
        cin >> ch2;
        switch (ch2)
        {
        case 1:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            string ITM1;
            cout << "\n\n\n\t\t\t\tITM1: ";
            cin >> ITM1;
            ss1 << "update result set ITM1='" << ITM1 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "" << endl;
            cout << "\n\t\t\t\tITM1 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }
        break;
        case 2:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            string ITM2;
            cout << "\n\n\n\t\t\t\tITM2: ";
            cin >> ITM2;
            ss1 << "update result set ITM2='" << ITM2 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tITM2 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }
        break;
        case 3:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            string COA1;
            cout << "\n\n\n\t\t\t\tCOA1: ";
            cin >> COA1;
            ss1 << "update result set COA1='" << COA1 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tCOA1 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }
        break;
        case 4:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            MYSQL *conn;
            string COA2;
            cout << "\n\n\n\t\t\t\tCOA2: ";
            cin >> COA2;
            ss1 << "update result set COA2='" << COA2 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tCOA2 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }
        break;
        case 5:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            string OOPS1;
            cout << "\n\n\n\t\t\t\tOOPS1: ";
            cin >> OOPS1;
            ss1 << "update result set OOPS1='" << OOPS1 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tOOPS1 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }

        break;
        case 6:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            string OOPS2;
            cout << "\n\n\n\t\t\t\tOOPS2: ";
            cin >> OOPS2;
            ss1 << "update result set OOPS2='" << OOPS2 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tOOPS2 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }
        break;
        case 7:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            string SEPM1;
            cout << "\n\n\n\t\t\t\tSEPM1: ";
            cin >> SEPM1;
            ss1 << "update result set SEPM1='" << SEPM1 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tSEPM1 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }
        break;
        case 8:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            string SEPM2;
            cout << "\n\n\n\t\t\t\tSEPM2: ";
            cin >> SEPM2;
            ss1 << "update result set SEPM2='" << SEPM2 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tSEPM2 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }
        break;
        case 9:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            string MATHS1;
            cout << "\n\n\n\t\t\t\tMATHS1: ";
            cin >> MATHS1;
            ss1 << "update result set MATHS1='" << MATHS1 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tMATHS1 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }
        break;
        case 10:
        {
            system("CLS");
            stringstream ss1;
            int state = 0;
            string MATHS2;
            cout << "\n\n\n\t\t\t\tMATHS2: ";
            cin >> MATHS2;
            ss1 << "update result set MATHS2='" << MATHS2 << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\t\tMATHS2 MARKS UPDATED\n\n\n"
                 << endl;
            updateAverageMarks();
            cout << "\n\n\t\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\n\t\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                goto START;
            }
            else
            {
                adminResultMenu();
            }
        }
        break;
        default:
            cout << "\n\t\t\t\tInvalid Choice TRY AGAIN";
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminResultMenu();
        }
        if (state == 0)
        {
            cout << "\t\t\t\tUPDATED MARKS OF ID = " << rn << "\n\n\n"
                 << endl;

            cout << "\n\t\t\t\tpress y to update more result details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                updateSingleMarksByAdmin();
            }
            else
            {
                adminResultMenu();
            }
        }
        else
        {

            cout << "\n\t\t\t\tCAN NOT UPDATED \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminTeacherMenu();
        }
    }

    else
    {
        cout << "\n\t\t\t\tSTUDENT ALREADY EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        resultMenu();
    }
}

void updateSingleStudentByAdmin()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tUPDATE SINGLE STUDENT DETAILS" << endl;
    string temp;
    stringstream ss;
    string rn;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> rn;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select rn from student where rn='" << rn << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (rn == temp)
    {
        stringstream ss1;
        int state = 0;
        cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
        cout << "\n\t\t\t\t1. CHANGE PASSWORD";
        cout << "\n\t\t\t\t2. NAME";
        cout << "\n\t\t\t\t3. PHONE";
        cout << "\n\t\t\t\t4. EMAIL";
        cout << "\n\t\t\t\t5. COURCE";
        cout << "\n\t\t\t\t6. ADMITTED IN";
        cout << "\n\t\t\t\t7. DOB";
        cout << "\n\t\t\t\t8. GENDER";
        cout << "\n\t\t\t\t9. ADDRESS";
        cout << "\n\t\t\t\tCHOOSE FIELD OPTION WANT TO UPDATE  :   " << endl;

        int ch2;
        cin >> ch2;
        switch (ch2)
        {
        case 1:
        {
            system("CLS");
            string password;
            cout << "\n\n\n\t\t\t\tPASSWORD     : ";
            cin.ignore(100, '\n');
            getline(cin, password);
            ss1 << "update student set password='" << password << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\tUPDATED PASSWORD OF STUDENT ROLL NUMBER " << rn;
            getch();
            adminStudentMenu();
        }
        break;
        case 2:
        {
            system("CLS");
            string name;
            cout << "\n\n\n\t\t\t\tNAME     : ";
            cin.ignore(100, '\n');
            getline(cin, name);
            ss1 << "update student set name='" << name << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\tUPDATED NAME OF STUDENT ROLL NUMBER " << rn;
            getch();
            adminStudentMenu();
        }
        break;
        case 3:
        {
            system("CLS");
            string phone;
            cout << "\n\n\n\t\t\t\tPHONE    : ";
            ss1 << "update student set phone='" << phone << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\tUPDATED PHONE OF STUDENT ROLL NUMBER " << rn;
            getch();
            adminStudentMenu();
        }
        break;
        case 4:
        {
            system("CLS");
            string email;
            cout << "\n\n\n\t\t\t\tEMAIL    : ";
            cin.ignore(100, '\n');
            getline(cin, email);
            ss1 << "update student set email='" << email << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "EMAIL";
            cout << "\n\t\t\tUPDATED EMAIL OF STUDENT ROLL NUMBER " << rn;
            getch();
            adminStudentMenu();
        }

        break;
        case 5:
        {
            system("CLS");
            string course;
            cout << "\n\n\n\t\t\t\tCOURCE      :   ";
            cin.ignore(100, '\n');
            getline(cin, course);
            ss1 << "update student set course='" << course << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\tUPDATED COURSE OF STUDENT ROLL NUMBER " << rn;
            getch();
            adminStudentMenu();
        }
        break;
        case 6:
        {
            system("CLS");
            string admitted_in;
            cout << "\n\n\n\t\t\t\tADMITTED IN  : ";
            cin.ignore(100, '\n');
            getline(cin, admitted_in);
            ss1 << "update student set admitted_in='" << admitted_in << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\tUPDATED ADMITTED YEAR OF STUDENT ROLL NUMBER " << rn;
            getch();
            adminStudentMenu();
        }
        break;
        case 7:
        {
            system("CLS");
            string dob;
            cout << "\n\n\n\t\t\t\tDOB  : ";
            cin.ignore(100, '\n');
            getline(cin, dob);
            ss1 << "update student set dob='" << dob << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "DOB";
            cout << "\n\t\t\tUPDATED DOB OF STUDENT ROLL NUMBER " << rn;
            getch();
            adminStudentMenu();
        }
        break;
        case 8:
        {
            system("CLS");
            string gender;
            cout << "\n\n\n\t\t\t\tGENDER   : ";
            cin.ignore(100, '\n');
            getline(cin, gender);
            ss1 << "update student set gender='" << gender << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\tUPDATED GENDER OF STUDENT ROLL NUMBER " << rn;
            getch();
            adminStudentMenu();
        }
        break;
        case 9:
        {
            system("CLS");
            string address;
            cout << "\n\n\n\t\t\t\tADDRESS  : ";
            cin.ignore(100, '\n');
            getline(cin, address);
            ss1 << "update student set address='" << address << "' where rn='" << rn << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\t\t\tUPDATED ADDRESS OF STUDENT ROLL NUMBER " << rn;
            getch();
            adminStudentMenu();
        }
        break;
        default:
            cout << "\nInvalid Choice TRY AGAIN";
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminTeacherMenu();
        }
        if (state == 0)
        {
            cout << "\n\t\t\t\tUPDATED STUDENTS ITM UNIT TEST-1 MARKS OF ROLL NUMBER = " << rn << "\n\n\n"
                 << endl;
            cout << "\n\t\t\t\tpress y to add more student details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y")
            {
                updateSingleStudentByAdmin();
            }
            else
            {
                adminStudentMenu();
            }
        }
        else
        {
            cout << "\n\t\t\t\tCAN NOT INSERT STUDENT MARKS \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminStudentMenu();
        }
    }

    else
    {
        cout << "\n\t\t\t\tSTUDENT NOT EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminStudentMenu();
    }
}

void updateSingleTeacherByAdmin()
{
    system("CLS");
    cout << "\n\n\n\t\t\t\tUPDATE SINGLE TEACHER INFORMATION " << endl;
    string temp;
    stringstream ss;
    string id;
    cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER   :   ";
    cin >> id;
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "localhost", "root", "", "DBMS", 0, NULL, 0);

    ss << "select id from teacher where id='" << id << "'";
    string query = ss.str();
    const char *q = query.c_str();
    int state = mysql_query(conn, q);
    if (!state)
    {
        res = mysql_store_result(conn);
        while (row = mysql_fetch_row(res))
        {
            temp = row[0];
        }
    }
    if (id == temp)
    {
        stringstream ss1;
        int state = 0;
        MYSQL *conn;
        MYSQL_ROW row;
        MYSQL_RES *res;
        conn = mysql_init(0);
        conn = mysql_real_connect(conn, "localhost", "root", "", "dbms", 0, NULL, 0);

        cout << "\n\t\t\t\tENTER STUDENT ROLL NUMBER      ";
        cout << "\n\t\t\t\t1.PASSWORD                     ";
        cout << "\n\t\t\t\t2.NAME                         ";
        cout << "\n\t\t\t\t3.SUBJECT                      ";
        cout << "\n\t\t\t\t4.PHONE                        ";
        cout << "\n\t\t\t\t5.EMAIL                        ";
        cout << "\n\t\t\t\t6.DOB                          ";
        cout << "\n\t\t\t\t7.GENDER                       ";
        cout << "\n\t\t\t\t8.ADDRESS                      ";
        int ch2;

        cout << "\n\t\t\t\tCHOOSE FIELD BETWEEN 1 TO 8 YOU WANT TO UPDATE   :  ";
        cin >> ch2;
        switch (ch2)
        {
        case 1:
        {
            system("CLS");
            string password;
            cout << "\n\n\n\t\t\t\tPASSWORD                  :   ";
            cin >> password;
            ss1 << "update teacher set password='" << password << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED PASSWORD OF TEACHER ID    : " << id;
            getch();
            adminTeacherMenu();
        }
        break;
        case 2:
        {
            system("CLS");
            string name;
            cout << "\n\n\n\t\t\t\tNAME                  :   ";
            cin.ignore(100, '\n');
            getline(cin, name);
            ss1 << "update teacher set name='" << name << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED NAME OF TEACHER ID    : " << id;
            getch();
            adminTeacherMenu();
        }
        break;
        case 3:
        {
            system("CLS");
            string subject;
            cout << "\n\n\n\t\t\t\tSUBJECT                  :   ";
            cin >> subject;
            ss1 << "update teacher set subject='" << subject << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED SUBJECT OF TEACHER ID    : " << id;
            getch();
            adminTeacherMenu();
        }
        break;
        case 4:
        {
            system("CLS");
            string phone;
            cout << "\n\n\n\t\t\t\tPHONE                  :   ";

            getline(cin, phone);
            ss1 << "update teacher set phone='" << phone << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED PHONE OF TEACHER ID    : " << id;
            getch();
            adminTeacherMenu();
        }
        break;
        case 5:
        {
            system("CLS");
            string email;
            cout << "\n\n\n\t\t\t\tEMAIL                  :   ";
            cin >> email;
            ss1 << "update teacher set email='" << email << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED EMAIL OF TEACHER ID    : " << id;
            getch();
            adminTeacherMenu();
        }

        break;
        case 6:
        {
            system("CLS");
            string dob;
            cout << "\n\n\n\t\t\t\tDOB                  :   ";
            cin >> dob;
            ss1 << "update teacher set dob='" << dob << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED DOB OF TEACHER ID    : " << id;
            getch();
            adminTeacherMenu();
        }
        break;
        case 7:
        {
            system("CLS");
            string gender;
            cout << "\n\n\n\t\t\t\tGENDER                  :   ";
            cin >> gender;
            ss1 << "update teacher set gender='" << gender << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED GENDER OF TEACHER ID    : " << id;
            getch();
            adminTeacherMenu();
        }
        break;
        case 8:
        {
            system("CLS");
            string address;
            cout << "\n\n\n\t\t\t\tADDRESS                  :   ";
            cin.ignore(100, '\n');
            getline(cin, address);
            ss1 << "update teacher set address='" << address << "' where id='" << id << "' ";
            string query1 = ss1.str();
            const char *q1 = query1.c_str();
            state = mysql_query(conn, q1);
            cout << "\n\n\n\t\t\t\tUPDATED ADDRESS OF TEACHER ID    : " << id;
            getch();
            adminTeacherMenu();
        }
        break;
        default:
            cout << "\n\t\t\t\tInvalid Choice TRY AGAIN";
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminTeacherMenu();
        }
        if (state == 0)
        {
            getch();
            cout << "\n\t\t\t\tUPDATED TEACHER OF ID = " << id << "\n\n\n"
                 << endl;

            getch();
            cout << "\n\t\t\t\tpress y to add more teacher details" << endl;
            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            string desicion;
            cin >> desicion;
            if (desicion == "y" || desicion == "Y")
            {
                updateSingleTeacherByAdmin();
            }
            else
            {
                adminTeacherMenu();
            }
        }
        else
        {

            cout << "\n\t\t\t\tCAN NOT UPDATED \n\n\n"
                 << endl
                 << mysql_error(conn) << endl;

            cout << "\n\t\t\t\tpress any key to go back to Menu......." << endl
                 << "\n\t\t\t\t";
            getch();
            adminTeacherMenu();
        }
    }

    else
    {
        cout << "\n\t\t\t\tSTUDENT ALREADY EXIST\n\n\n";
        cout << "\n\t\t\t\tpress any key to go back to Menu.......";
        getch();
        adminStudentMenu();
    }
}

int main()
{

    //test();
    //getch();
    intro();
    //ADMIN - STUDENT
    /*LoginAdmin();
    insertStudentByAdmin();
    updateSingleStudentByAdmin();
    updateStudentByAdmin();
    searchSingleStudent();
    searchAllStudent();
    deleteStudentByAdmin();

    //ADMIN - TEACHER
    insertTeacherByAdmin();
    updateSingleTeacherByAdmin();
    UpdateTeacherByAdmin();
    searchSingleTeacher();
    searchAllTeacher();
    DeleteTeacherByAdmin();

    //ADMIN - RESULT
    insertMarksbyAdmin();
    updateMarksByAdmin();
    updateSingleMarksByAdmin();
    searchSingleMarks();
    searchAllStudentMarks();
    deleteMarksByAdmin();

    //STUDENT : COMPLETED
    loginStudent();
    UpdateStudent();
    updateSingleStudent();
    searchSingleStudent();

    //TEACHER
    loginTeacher();
    UpdateTeacher();
    updateSingleTeacher();
    searchSingleTeacher();
    searchAllTeacher();
    searchSingleStudent();
    searchAllStudent();

    insertMarksByTeacherUnitTest1();
    insertMarksByTeacherUnitTest2();
    updateResultByTeacher();

    //insertMarksByTeacherUnitTest();
    */

    return 0;
}
