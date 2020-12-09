#include<iostream>
#include "parse.h"
#include "lex.cpp"
#include "lex.h"
#include<map>

using namespace std;

inline LexItem token;
bool trial;


inline bool Prog(istream& in, int& line) {
	token = Parser::GetNextToken(in, line);
	if (token == BEGIN) {
		StmtList(in, line);
		return true;
	}
	else {
		return false;
	}
	

}
inline bool StmtList(istream& in, int& line) {
	token = Parser::GetNextToken(in, line);
	cout << token << " "<<token.GetLinenum()<<endl;
	return true;

}
inline bool Stmt(istream& in, int& line) {
	return false;

}
inline bool PrintStmt(istream& in, int& line) {
	return false;
}
inline bool IfStmt(istream& in, int& line) {
	return false;
}
inline bool Var(istream& in, int& line) {
	return false;
}
inline bool AssignStmt(istream& in, int& line) {
	return false;
}
inline bool ExprList(istream& in, int& line) {
	return false;
}
inline bool Expr(istream& in, int& line) {
	return false;
}
inline bool Term(istream& in, int& line) {
	return false;
}
inline bool Factor(istream& in, int& line) {
	return false;
}