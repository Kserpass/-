//表达式求值
OperandType EvaluateExpression(){
  //算术表达式的算符优先算法。设OPTR和OPND分别为运算符栈和运算数栈，
  //OP为运算符栈
  InitStack(OPTR); Push(OPTR,'#');
