#include <transform.h>
#include <visit.h>

std::string Generate114::Transform(long long num, bool debug)
{
    // init
    std::string out;
    std::string result = "";
    short flag = 0;
    long long temp = num, count = 0;

    // deal with negative numbers
    if (num < 0)
        goto NEGATIVE_NUMBER_SOLUTION;

    // visit in table
    out = Generate114::Visit(num);

    // check and recreate result
    if (out != "")
    {
        return out;
    }
    else
    {
    // deal with negative numbers
    NEGATIVE_NUMBER_SOLUTION:
        if (num < 0)
        {
            num = -num;
            result = "(" + Generate114::Visit(-1) + ") * (";
            out = Generate114::Visit(num);
            if (out == "")
            {
                flag = 1;
                goto RECREATE_RESULT;
            }
            result += out + ")";
            return result;
        }

    RECREATE_RESULT:;
        std::string out2;
        std::string out3;

        // 1. 0 <= num <= 10000(1e4)
        if (num <= 10000)
        {
        FIRST_FORM_SOLUTION:
            // form: a + b
            for (int a = num / 2; a < num; a++)
            {
                out = Generate114::Visit(a);
                out2 = Generate114::Visit(num - a);
                if (out != "" && out2 != "")
                {
                    result = out + " + " + out2;
                    goto NEGATIVE_CHECK;
                }
            }

            return "";
        }

        // 2. 10000(1e4) <= num <= 114514
        else if (num <= 114514)
        {
        SECOND_FORM_SOLUTION:
            // form: a * b + c
            for (int a = 0; a < (int)sqrt(num) + 1; a++)
            {
                if (a == 0)
                    continue;
                out = Generate114::Visit(a);
                out2 = Generate114::Visit((long long)num / a);
                out3 = Generate114::Visit(num % a);
                if (out != "" && out2 != "" && out3 != "")
                {
                    if ((int)num / a != 1)
                        result += "(" + out + ") * (" + out2 + ")";
                    else
                        result += out;
                    if (num % a != 0)
                        result += " + " + out3;

                    goto NEGATIVE_CHECK;
                }
            }

            return "";
        }

        // 3. 114514 <= num <= 13113456196
        else if (num <= 13113456196)
        {
        THIRD_FORM_SOLUTION:
            // form:114514 * a + b * c + d
            std::string out1 = Generate114::Visit((long long)num / 114514);
            std::string out2 = Generate114::Visit(114514);
            result = "( " + out1 + ") * (" + out2 + ") + ";
            int last = num % 114514;
            if (0 <= last && last <= 10000)
                goto FIRST_FORM_SOLUTION;
            else
                goto SECOND_FORM_SOLUTION;
        }

        // 4. num > 13113456196
        else
        {
        FOURTH_FORM_SOLUTION:
            // form: 114514 ^ a * b + c
            while (temp < 114514)
            {
                temp /= 114514;
                count++;
            }

            result = "(" + Generate114::Visit(114514) + ") ^ (" + Generate114::Transform(count, debug) + ") * (" + Generate114::Transform(num / (long long)powl(114514, count)) + ") + " + Generate114::Transform(num % (long long)powl(114514, count));
            goto NEGATIVE_CHECK;
        }

        NEGATIVE_CHECK:
            if (flag == 1)
                result += "";
            return result;
        }
    }