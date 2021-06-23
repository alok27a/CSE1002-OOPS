#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
struct n
{
    char d;
    n *l;
    n *r;
};
char pf[50];
int top = -1;
struct n *a[50];
int r(char inputch)
{
    if (inputch == '+' || inputch == '-' || inputch == '*' || inputch == '/')
        return (-1);
    else if (inputch >= 'A' || inputch <= 'Z')
        return (1);
    else if (inputch >= 'a' || inputch <= 'z')
        return (1);
    else
        return (-100);
}
void push(struct n *tree)
{
    top++;
    a[top] = tree;
}
struct n *pop()
{
    top--;
    return (a[top + 1]);
}
void construct_expression_tree(string suffix)
{
    char s;
    struct n *newl, *p1, *p2;
    int flag;
    s = suffix[0];
    for (int i = 1; s != 0; i++)
    {
        flag = r(s);
        if (flag == 1)
        {
            newl = new struct n;
            newl->d = s;
            newl->l = NULL;
            newl->r = NULL;
            push(newl);
        }
        else
        {
            p1 = pop();
            p2 = pop();
            newl = new struct n;
            newl->d = s;
            newl->l = p2;
            newl->r = p1;
            push(newl);
        }
        s = suffix[i];
    }
}
void preOrder(struct n *tree)
{
    if (tree != NULL)
    {
        cout << tree->d;
        preOrder(tree->l);
        preOrder(tree->r);
    }
}
void inOrder(struct n *tree)
{
    if (tree != NULL)
    {
        inOrder(tree->l);
        cout << tree->d;
        inOrder(tree->r);
    }
}
void postOrder(struct n *tree)
{
    if (tree != NULL)
    {
        postOrder(tree->l);
        postOrder(tree->r);
        cout << tree->d;
    }
}
// Infix to postfix

string infix, postfix = "";
char stack[100], ch;
int i, temp;

bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '$')
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isOperand(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int comparision(char ch)
{
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '^' || ch == '$')
    {
        return 3;
    }
    else
    {
        return 0;
    }
}

void push(char ch)
{
    top = top + 1;
    stack[top] = ch;
}

char pop_stack()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
int main(int argc, char **argv)
{
    cout << "Enter the infix expression ? " << endl;
    getline(cin, infix);
    for (i = 0; i < infix.length(); i++)
    {
        if (infix[i] == ' ')
        {
            continue;
        }
        else if (isOperand(infix[i]))
        {
            postfix += infix[i];
        }
        else if (infix[i] == '(')
        {
            push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while ((temp = pop_stack()) != '(')
            {
                postfix += temp;
            }
        }
        else if (infix[i] == '{')
        {
            push(infix[i]);
        }
        else if (infix[i] == '}')
        {
            while ((temp = pop_stack()) != '{')
            {
                postfix += temp;
            }
        }
        else if (infix[i] == '[')
        {
            push(infix[i]);
        }
        else if (infix[i] == ']')
        {
            while ((temp = pop_stack()) != '[')
            {
                postfix += temp;
            }
        }
        else if (isOperator(infix[i]))
        {
            while (comparision(stack[top]) >= comparision(infix[i]))
            {
                temp = pop_stack();
                postfix += temp;
            }
            push(infix[i]);
        }
    }
    while (top != -1)
    {
        temp = pop_stack();
        postfix += temp;
    }

    construct_expression_tree(postfix);
    cout << "\nIn-Order Traversal : ";
    inOrder(a[0]);
    cout << "\nPre-Order Traversal : ";
    preOrder(a[0]);
    cout << "\nPost-Order Traversal : ";
    postOrder(a[0]);
    return 0;
}