#include <stdio.h>

class DBQuery {
	static int hCon;
	int nResult;
public:
	DBQuery() {};
	static void DBConnect(const char* Server, const char* ID, const char* Pass);
	static void DBDisConnect();
	bool RunQuery(const char* SQL);
};

int DBQuery::hCon;

void DBQuery::DBConnect(const char* Server, const char* ID, const char* Pass)
{
	hCon = 1234;
	puts("연결되었습니다.");
}

void DBQuery::DBDisConnect()
{
	hCon = NULL;
	puts("연결이 끊어졌습니다.");
}

bool DBQuery::RunQuery(const char* SQL)
{
	puts(SQL);
	return true;
}

int main()
{
	DBQuery::DBConnect(" ", "root", "mysql_p@ssw0rd");
	DBQuery Q1, Q2, Q3;

	Q1.RunQuery("SELECT * FROM usertbl WHERE userID = 'KBS';");

	DBQuery::DBDisConnect();
}