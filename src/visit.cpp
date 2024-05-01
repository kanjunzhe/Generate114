#include <visit.h>

std::string Generate114::Visit(long long num)
{
    if (num < 0)
        goto NEGATIVE_NUMBERS;
    else if (num < 200)
        goto SMALL_POSITIVE_NUMBERS;
    else if (num < 1000)
        goto MID_POSITIVE_NUMBERS;
    else
        goto LARGE_POSITIVE_NUMBERS;


NEGATIVE_NUMBERS:
    if (num == -1)
    {
        return "11-4-5+1-4";
    }
    goto FINAL;

SMALL_POSITIVE_NUMBERS:
    if (num == 0)
    {
        return "(1-1)*4514";
    }
    if (num == 1)
    {
        return "11/(45-1)*4";
    }
    if (num == 2)
    {
        return "-11+4-5+14";
    }
    if (num == 3)
    {
        return "11*-4+51-4";
    }
    if (num == 4)
    {
        return "-11-4+5+14";
    }
    if (num == 5)
    {
        return "11-4*5+14";
    }
    if (num == 6)
    {
        return "1-14+5+14";
    }
    if (num == 7)
    {
        return "11-4+5-1-4";
    }
    if (num == 8)
    {
        return "11-4+5/1-4";
    }
    if (num == 9)
    {
        return "11-4+5+1-4";
    }
    if (num == 10)
    {
        return "-11/4+51/4";
    }
    if (num == 11)
    {
        return "11*-4+51+4";
    }
    if (num == 12)
    {
        return "-11+4+5+14";
    }
    if (num == 13)
    {
        return "1*14-5/1+4";
    }
    if (num == 14)
    {
        return "11+4-5/1+4";
    }
    if (num == 15)
    {
        return "1+14-5+1+4";
    }
    if (num == 16)
    {
        return "11-4-5+14";
    }
    if (num == 17)
    {
        return "11+4*5-14";
    }
    if (num == 18)
    {
        return "1+1+4*5*1-4";
    }
    if (num == 19)
    {
        return "1+1+4*5+1-4";
    }
    if (num == 20)
    {
        return "-11+45-14";
    }
    if (num == 21)
    {
        return "-1-1+4+5+14";
    }
    if (num == 22)
    {
        return "1*14+5-1+4";
    }
    if (num == 23)
    {
        return "1*14-5+14";
    }
    if (num == 24)
    {
        return "1+14-5+14";
    }
    if (num == 25)
    {
        return "11*4-5-14";
    }
    if (num == 26)
    {
        return "11-4+5+14";
    }
    if (num == 27)
    {
        return "11+4*5/1-4";
    }
    if (num == 28)
    {
        return "11+4*5+1-4";
    }
    if (num == 29)
    {
        return "-11+45-1-4";
    }
    if (num == 30)
    {
        return "1*-1+45-14";
    }
    if (num == 31)
    {
        return "1/1*45-14";
    }
    if (num == 32)
    {
        return "1*1+45-14";
    }
    if (num == 33)
    {
        return "1+1+45-14";
    }
    if (num == 34)
    {
        return "1-14+51-4";
    }
    if (num == 35)
    {
        return "11*4+5-14";
    }
    if (num == 36)
    {
        return "11+4*5+1+4";
    }
    if (num == 37)
    {
        return "-11+45-1+4";
    }
    if (num == 38)
    {
        return "-11+45*1+4";
    }
    if (num == 39)
    {
        return "-11+45+1+4";
    }
    if (num == 40)
    {
        return "-11+4*51/4";
    }
    if (num == 41)
    {
        return "1/1*45*1-4";
    }
    if (num == 42)
    {
        return "11+45-14";
    }
    if (num == 43)
    {
        return "1+1*45+1-4";
    }
    if (num == 44)
    {
        return "114-5*14";
    }
    if (num == 45)
    {
        return "11+4*5+14";
    }
    if (num == 46)
    {
        return "11*4+5+1-4";
    }
    if (num == 47)
    {
        return "1/-1+45-1+4";
    }
    if (num == 48)
    {
        return "-11+45+14";
    }
    if (num == 49)
    {
        return "1*1*45/1+4";
    }
    if (num == 50)
    {
        return "1+1*45/1+4";
    }
    if (num == 51)
    {
        return "11+45-1-4";
    }
    if (num == 52)
    {
        return "11+45/1-4";
    }
    if (num == 53)
    {
        return "11+45+1-4";
    }
    if (num == 54)
    {
        return "11-4+51-4";
    }
    if (num == 55)
    {
        return "-1+14*5-14";
    }
    if (num == 56)
    {
        return "1*14*5-14";
    }
    if (num == 57)
    {
        return "1+14*5-14";
    }
    if (num == 58)
    {
        return "-1+1*45+14";
    }
    if (num == 59)
    {
        return "114-51-4";
    }
    if (num == 60)
    {
        return "11+45*1+4";
    }
    if (num == 61)
    {
        return "1+1+45+14";
    }
    if (num == 62)
    {
        return "1+14+51-4";
    }
    if (num == 63)
    {
        return "11*4+5+14";
    }
    if (num == 64)
    {
        return "11*4+5*1*4";
    }
    if (num == 65)
    {
        return "1*14*5-1-4";
    }
    if (num == 66)
    {
        return "1*14*5-1*4";
    }
    if (num == 67)
    {
        return "1-1*4+5*14";
    }
    if (num == 68)
    {
        return "1+1-4+5*14";
    }
    if (num == 69)
    {
        return "1*14+51+4";
    }
    if (num == 70)
    {
        return "11+45+14";
    }
    if (num == 71)
    {
        return "(1+14)*5-1*4";
    }
    if (num == 72)
    {
        return "-1-1+4+5*14";
    }
    if (num == 73)
    {
        return "1*14*5-1+4";
    }
    if (num == 74)
    {
        return "1/1*4+5*14";
    }
    if (num == 75)
    {
        return "1+14*5*1+4";
    }
    if (num == 76)
    {
        return "1+1+4+5*14";
    }
    if (num == 77)
    {
        return "11-4+5*14";
    }
    if (num == 78)
    {
        return "(1+1)*4+5*14";
    }
    if (num == 79)
    {
        return "1*-1+4*5/1*4";
    }
    if (num == 80)
    {
        return "1-1+4*5*1*4";
    }
    if (num == 81)
    {
        return "1/1+4*5*1*4";
    }
    if (num == 82)
    {
        return "1+1+4*5/1*4";
    }
    if (num == 83)
    {
        return "-1+14+5*14";
    }
    if (num == 84)
    {
        return "1*14+5*14";
    }
    if (num == 85)
    {
        return "1+14+5*14";
    }
    if (num == 86)
    {
        return "(1+1)*45*1-4";
    }
    if (num == 87)
    {
        return "11+4*(5+14)";
    }
    if (num == 88)
    {
        return "1*14*(5+1)+4";
    }
    if (num == 89)
    {
        return "(1+14)*5+14";
    }
    if (num == 90)
    {
        return "-114+51*4";
    }
    if (num == 91)
    {
        return "11*4+51-4";
    }
    if (num == 92)
    {
        return "(1+1)*(45-1)+4";
    }
    if (num == 93)
    {
        return "(1+1)*45-1+4";
    }
    if (num == 94)
    {
        return "114-5/1*4";
    }
    if (num == 95)
    {
        return "114-5-14";
    }
    if (num == 96)
    {
        return "11*(4+5)+1-4";
    }
    if (num == 97)
    {
        return "1+1*4*(5+1)*4";
    }
    if (num == 98)
    {
        return "1+1+4*(5+1)*4";
    }
    if (num == 99)
    {
        return "11*4+51+4";
    }
    if (num == 100)
    {
        return "1*(1+4)*5*1*4";
    }
    if (num == 101)
    {
        return "1+1*4*5*(1+4)";
    }
    if (num == 102)
    {
        return "11*(4+5)-1+4";
    }
    if (num == 103)
    {
        return "11*(4+5)+1*4";
    }
    if (num == 104)
    {
        return "114-5-1-4";
    }
    if (num == 105)
    {
        return "114+5-14";
    }
    if (num == 106)
    {
        return "114-5+1-4";
    }
    if (num == 107)
    {
        return "11-4*-(5+1)*4";
    }
    if (num == 110)
    {
        return "-(11-451)/4";
    }
    if (num == 111)
    {
        return "11+4*5*(1+4)";
    }
    if (num == 112)
    {
        return "114-5-1+4";
    }
    if (num == 113)
    {
        return "114-5/1+4";
    }
    if (num == 114)
    {
        return "11*4+5*14";
    }
    if (num == 115)
    {
        return "114+5*1-4";
    }
    if (num == 116)
    {
        return "114+5+1-4";
    }
    if (num == 117)
    {
        return "(1-14)*(5-14)";
    }
    if (num == 118)
    {
        return "(1+1)*(45+14)";
    }
    if (num == 120)
    {
        return "-(1+1)*4*5*(1-4)";
    }
    if (num == 121)
    {
        return "11*(45-1)/4";
    }
    if (num == 122)
    {
        return "114+5-1+4";
    }
    if (num == 123)
    {
        return "114-5+14";
    }
    if (num == 124)
    {
        return "114+5+1+4";
    }
    if (num == 125)
    {
        return "-1-14*(5-14)";
    }
    if (num == 126)
    {
        return "1*(14-5)*14";
    }
    if (num == 127)
    {
        return "1-14*(5-14)";
    }
    if (num == 128)
    {
        return "1+1+(4+5)*14";
    }
    if (num == 129)
    {
        return "114+5*-(1-4)";
    }
    if (num == 130)
    {
        return "-1+145-14";
    }
    if (num == 131)
    {
        return "1*145-14";
    }
    if (num == 132)
    {
        return "1+145-14";
    }
    if (num == 133)
    {
        return "114+5+14";
    }
    if (num == 134)
    {
        return "114+5/1*4";
    }
    if (num == 135)
    {
        return "-1/1*45*(1-4)";
    }
    if (num == 136)
    {
        return "1*1-45*(1-4)";
    }
    if (num == 137)
    {
        return "1+1-45*(1-4)";
    }
    if (num == 138)
    {
        return "-1*(1+45)*(1-4)";
    }
    if (num == 139)
    {
        return "-1+145-1-4";
    }
    if (num == 140)
    {
        return "1*145-1-4";
    }
    if (num == 141)
    {
        return "1+145-1-4";
    }
    if (num == 142)
    {
        return "1+145*1-4";
    }
    if (num == 143)
    {
        return "1+145+1-4";
    }
    if (num == 146)
    {
        return "11+45*-(1-4)";
    }
    if (num == 147)
    {
        return "-1+145-1+4";
    }
    if (num == 148)
    {
        return "1*145-1+4";
    }
    if (num == 149)
    {
        return "1*145*1+4";
    }
    if (num == 150)
    {
        return "1+145*1+4";
    }
    if (num == 151)
    {
        return "1+145+1+4";
    }
    if (num == 152)
    {
        return "(1+1)*4*(5+14)";
    }
    if (num == 154)
    {
        return "11*(4-5)*-14";
    }
    if (num == 157)
    {
        return "1*(1-4)*-51+4";
    }
    if (num == 158)
    {
        return "-1+145+14";
    }
    if (num == 159)
    {
        return "1*145+14";
    }
    if (num == 160)
    {
        return "1+145+14";
    }
    if (num == 161)
    {
        return "114+51-4";
    }
    if (num == 165)
    {
        return "11*-45/(1-4)";
    }
    if (num == 168)
    {
        return "(11+45)*-(1-4)";
    }
    if (num == 169)
    {
        return "114+51+4";
    }
    if (num == 170)
    {
        return "(11-45)*-(1+4)";
    }
    if (num == 171)
    {
        return "114*(5+1)/4";
    }
    if (num == 172)
    {
        return "11*4*(5-1)-4";
    }
    if (num == 174)
    {
        return "-1-1+(45-1)*4";
    }
    if (num == 175)
    {
        return "-1+1*(45-1)*4";
    }
    if (num == 176)
    {
        return "1*1*(45-1)*4";
    }
    if (num == 177)
    {
        return "1+1*(45-1)*4";
    }
    if (num == 178)
    {
        return "-1-1+45*1*4";
    }
    if (num == 179)
    {
        return "-1/1+45*1*4";
    }
    if (num == 180)
    {
        return "1*1*45*1*4";
    }
    if (num == 181)
    {
        return "1+1*45*1*4";
    }
    if (num == 182)
    {
        return "1+1+45/1*4";
    }
    if (num == 183)
    {
        return "-1+1*(45+1)*4";
    }
    if (num == 184)
    {
        return "114+5*14";
    }
    if (num == 185)
    {
        return "1-1*-(45+1)*4";
    }
    if (num == 186)
    {
        return "1+1+(45+1)*4";
    }
    if (num == 187)
    {
        return "1/-1+4*(51-4)";
    }
    if (num == 188)
    {
        return "1-1-(4-51)*4";
    }
    if (num == 189)
    {
        return "-11-4+51*4";
    }
    if (num == 190)
    {
        return "1*-14+51*4";
    }
    if (num == 191)
    {
        return "1-14+51*4";
    }
    if (num == 192)
    {
        return "(1+1)*4*(5+1)*4";
    }
    if (num == 195)
    {
        return "(1-14)*5*(1-4)";
    }
    if (num == 196)
    {
        return "-(1+1)*4+51*4";
    }
    if (num == 197)
    {
        return "-11+4+51*4";
    }
    if (num == 198)
    {
        return "-1-1+4*51-4";
    }
    if (num == 199)
    {
        return "1*-1+4*51-4";
    }

    goto FINAL;

MID_POSITIVE_NUMBERS:
    if (num == 200)
    {
        return "1/1*4*51-4";
    }
    if (num == 201)
    {
        return "1/1-4+51*4";
    }
    if (num == 202)
    {
        return "1+1-4+51*4";
    }
    if (num == 204)
    {
        return "(1-1)/4+51*4";
    }
    if (num == 206)
    {
        return "11*4*5-14";
    }
    if (num == 207)
    {
        return "-1+1*4*51+4";
    }
    if (num == 208)
    {
        return "1*1*4+51*4";
    }
    if (num == 209)
    {
        return "1+1*4*51+4";
    }
    if (num == 210)
    {
        return "1+1+4+51*4";
    }
    if (num == 211)
    {
        return "11-4+51*4";
    }
    if (num == 212)
    {
        return "(1+1)*4+51*4";
    }
    if (num == 214)
    {
        return "-11+45*(1+4)";
    }
    if (num == 215)
    {
        return "11*4*5-1-4";
    }
    if (num == 216)
    {
        return "11*4*5-1*4";
    }
    if (num == 217)
    {
        return "11*4*5+1-4";
    }
    if (num == 218)
    {
        return "1*14+51*4";
    }
    if (num == 219)
    {
        return "1+14+51*4";
    }
    if (num == 220)
    {
        return "1*1*(4+51)*4";
    }
    if (num == 221)
    {
        return "1/1+4*(51+4)";
    }
    if (num == 222)
    {
        return "1+1+4*(51+4)";
    }
    if (num == 223)
    {
        return "11*4*5-1+4";
    }
    if (num == 224)
    {
        return "11*4*5/1+4";
    }
    if (num == 225)
    {
        return "11*4*5+1+4";
    }
    if (num == 226)
    {
        return "1*1+45*(1+4)";
    }
    if (num == 227)
    {
        return "1+1+45*(1+4)";
    }
    if (num == 229)
    {
        return "1145/(1+4)";
    }
    if (num == 230)
    {
        return "1*(1+45)*(1+4)";
    }
    if (num == 231)
    {
        return "11+4*(51+4)";
    }
    if (num == 234)
    {
        return "11*4*5+14";
    }
    if (num == 235)
    {
        return "1*(1+4)*(51-4)";
    }
    if (num == 236)
    {
        return "11+45*(1+4)";
    }
    if (num == 240)
    {
        return "(11+4)*(5-1)*4";
    }
    if (num == 247)
    {
        return "-(1-14)*(5+14)";
    }
    if (num == 248)
    {
        return "11*4+51*4";
    }
    if (num == 251)
    {
        return "1*-(1+4)*-51-4";
    }
    if (num == 252)
    {
        return "(114-51)*4";
    }
    if (num == 257)
    {
        return "(1+1)/4*514";
    }
    if (num == 259)
    {
        return "1*(1+4)*51+4";
    }
    if (num == 260)
    {
        return "1*(14+51)*4";
    }
    if (num == 265)
    {
        return "-1+14*(5+14)";
    }
    if (num == 266)
    {
        return "1*14*(5+14)";
    }
    if (num == 267)
    {
        return "1+14*(5+14)";
    }
    if (num == 268)
    {
        return "11*4*(5+1)+4";
    }
    if (num == 269)
    {
        return "-11+4*5*14";
    }
    if (num == 270)
    {
        return "(1+1)*45*-(1-4)";
    }
    if (num == 275)
    {
        return "1*(1+4)*(51+4)";
    }
    if (num == 278)
    {
        return "-1-1+4*5*14";
    }
    if (num == 279)
    {
        return "1*-1+4*5*14";
    }
    if (num == 280)
    {
        return "1-1+4*5*14";
    }
    if (num == 281)
    {
        return "1+14*5/1*4";
    }
    if (num == 282)
    {
        return "1+1+4*5*14";
    }
    if (num == 285)
    {
        return "(11+4)*(5+14)";
    }
    if (num == 286)
    {
        return "(1145-1)/4";
    }
    if (num == 291)
    {
        return "11+4*5*14";
    }
    if (num == 297)
    {
        return "-11*(4+5)*(1-4)";
    }
    if (num == 300)
    {
        return "(11+4)*5/1*4";
    }
    if (num == 312)
    {
        return "(1-14)*-(5+1)*4";
    }
    if (num == 318)
    {
        return "114+51*4";
    }
    if (num == 325)
    {
        return "-(1-14)*5*(1+4)";
    }
    if (num == 327)
    {
        return "-(114-5)*(1-4)";
    }
    if (num == 329)
    {
        return "(11-4)*(51-4)";
    }
    if (num == 335)
    {
        return "-1+14*(5+1)*4";
    }
    if (num == 336)
    {
        return "1*14*(5+1)*4";
    }
    if (num == 337)
    {
        return "1-14*-(5+1)*4";
    }
    if (num == 341)
    {
        return "11*(45-14)";
    }
    if (num == 349)
    {
        return "-1+14*5*(1+4)";
    }
    if (num == 350)
    {
        return "1*(1+4)*5*14";
    }
    if (num == 351)
    {
        return "1+14*-5*-(1+4)";
    }
    if (num == 352)
    {
        return "(1+1)*(45-1)*4";
    }
    if (num == 353)
    {
        return "(11-4)*51-4";
    }
    if (num == 357)
    {
        return "(114+5)*-(1-4)";
    }
    if (num == 360)
    {
        return "(1+1)*45*1*4";
    }
    if (num == 361)
    {
        return "(11-4)*51+4";
    }
    if (num == 363)
    {
        return "(1+1451)/4";
    }
    if (num == 368)
    {
        return "(1+1)*(45+1)*4";
    }
    if (num == 375)
    {
        return "(1+14)*5*(1+4)";
    }
    if (num == 376)
    {
        return "(1+1)*4*(51-4)";
    }
    if (num == 385)
    {
        return "(11-4)*(51+4)";
    }
    if (num == 396)
    {
        return "11*4*-(5-14)";
    }
    if (num == 400)
    {
        return "-114+514";
    }
    if (num == 404)
    {
        return "(1+1)*4*51-4";
    }
    if (num == 412)
    {
        return "(1+1)*4*51+4";
    }
    if (num == 432)
    {
        return "(1-145)*(1-4)";
    }
    if (num == 434)
    {
        return "-1-145*(1-4)";
    }
    if (num == 435)
    {
        return "-1*145*(1-4)";
    }
    if (num == 436)
    {
        return "-11+451-4";
    }
    if (num == 438)
    {
        return "(1+145)*-(1-4)";
    }
    if (num == 440)
    {
        return "(1+1)*4*(51+4)";
    }
    if (num == 444)
    {
        return "-11+451+4";
    }
    if (num == 445)
    {
        return "-1-1+451-4";
    }
    if (num == 446)
    {
        return "1*-1+451-4";
    }
    if (num == 447)
    {
        return "1/1*451-4";
    }
    if (num == 448)
    {
        return "1+1*451-4";
    }
    if (num == 449)
    {
        return "1+1+451-4";
    }
    if (num == 450)
    {
        return "(1+1)*45*(1+4)";
    }
    if (num == 452)
    {
        return "114*(5-1)-4";
    }
    if (num == 453)
    {
        return "-1-1+451+4";
    }
    if (num == 454)
    {
        return "-1+1*451+4";
    }
    if (num == 455)
    {
        return "1-1+451+4";
    }
    if (num == 456)
    {
        return "1*1+451+4";
    }
    if (num == 457)
    {
        return "1+1+451+4";
    }
    if (num == 458)
    {
        return "11+451-4";
    }
    if (num == 460)
    {
        return "114*(5-1)+4";
    }
    if (num == 466)
    {
        return "11+451+4";
    }
    if (num == 470)
    {
        return "-11*4+514";
    }
    if (num == 476)
    {
        return "(114+5)/1*4";
    }
    if (num == 480)
    {
        return "11*(45-1)-4";
    }
    if (num == 481)
    {
        return "11*45-14";
    }
    if (num == 488)
    {
        return "11*(45-1)+4";
    }
    if (num == 490)
    {
        return "11*45-1-4";
    }
    if (num == 491)
    {
        return "11*45-1*4";
    }
    if (num == 492)
    {
        return "11*45+1-4";
    }
    if (num == 495)
    {
        return "11*(4+5)*(1+4)";
    }
    if (num == 498)
    {
        return "11*45-1+4";
    }
    if (num == 499)
    {
        return "11*45*1+4";
    }
    if (num == 500)
    {
        return "11*45+1+4";
    }
    if (num == 501)
    {
        return "1-14+514";
    }
    if (num == 502)
    {
        return "11*(45+1)-4";
    }
    if (num == 506)
    {
        return "-(1+1)*4+514";
    }
    if (num == 507)
    {
        return "-11+4+514";
    }
    if (num == 508)
    {
        return "-1-1-4+514";
    }
    if (num == 509)
    {
        return "11*45+14";
    }
    if (num == 510)
    {
        return "1-1-4+514";
    }
    if (num == 511)
    {
        return "1*1-4+514";
    }
    if (num == 512)
    {
        return "1+1-4+514";
    }
    if (num == 513)
    {
        return "-11*(4-51)-4";
    }
    if (num == 514)
    {
        return "(1-1)/4+514";
    }
    if (num == 516)
    {
        return "-1-1+4+514";
    }
    if (num == 517)
    {
        return "-1+1*4+514";
    }
    if (num == 518)
    {
        return "1-1+4+514";
    }
    if (num == 519)
    {
        return "1+1*4+514";
    }
    if (num == 520)
    {
        return "1+1+4+514";
    }
    if (num == 521)
    {
        return "11-4+514";
    }
    if (num == 522)
    {
        return "(1+1)*4+514";
    }
    if (num == 527)
    {
        return "-1+14+514";
    }
    if (num == 528)
    {
        return "1*14+514";
    }
    if (num == 529)
    {
        return "1+14+514";
    }
    if (num == 545)
    {
        return "(114-5)*(1+4)";
    }
    if (num == 556)
    {
        return "114*5-14";
    }
    if (num == 558)
    {
        return "11*4+514";
    }
    if (num == 560)
    {
        return "(1+1)*4*5*14";
    }
    if (num == 561)
    {
        return "11/4*51*4";
    }
    if (num == 565)
    {
        return "114*5-1-4";
    }
    if (num == 566)
    {
        return "114*5*1-4";
    }
    if (num == 567)
    {
        return "114*5+1-4";
    }
    if (num == 573)
    {
        return "114*5-1+4";
    }
    if (num == 574)
    {
        return "114*5/1+4";
    }
    if (num == 575)
    {
        return "114*5+1+4";
    }
    if (num == 576)
    {
        return "1*(145-1)*4";
    }
    if (num == 579)
    {
        return "-1+145*1*4";
    }
    if (num == 580)
    {
        return "1*145/1*4";
    }
    if (num == 581)
    {
        return "1+145*1*4";
    }
    if (num == 584)
    {
        return "114*5+14";
    }
    if (num == 595)
    {
        return "(114+5)*(1+4)";
    }
    if (num == 601)
    {
        return "11*(4+51)-4";
    }
    if (num == 609)
    {
        return "11*(4+51)+4";
    }
    if (num == 611)
    {
        return "(1-14)*-(51-4)";
    }
    if (num == 612)
    {
        return "-1*(1-4)*51*4";
    }
    if (num == 616)
    {
        return "1*-(1-45)*14";
    }
    if (num == 619)
    {
        return "-11+45*14";
    }
    if (num == 628)
    {
        return "114+514";
    }
    if (num == 629)
    {
        return "1*-1+45*14";
    }
    if (num == 630)
    {
        return "1*1*45*14";
    }
    if (num == 631)
    {
        return "1*1+45*14";
    }
    if (num == 632)
    {
        return "1+1+45*14";
    }
    if (num == 641)
    {
        return "11+45*14";
    }
    if (num == 644)
    {
        return "1*(1+45)*14";
    }
    if (num == 649)
    {
        return "11*(45+14)";
    }
    if (num == 657)
    {
        return "-1+14*(51-4)";
    }
    if (num == 658)
    {
        return "1*14*(51-4)";
    }
    if (num == 659)
    {
        return "1+14*(51-4)";
    }
    if (num == 660)
    {
        return "(114+51)*4";
    }
    if (num == 667)
    {
        return "-(1-14)*51+4";
    }
    if (num == 680)
    {
        return "114*(5+1)-4";
    }
    if (num == 688)
    {
        return "114*(5+1)+4";
    }
    if (num == 704)
    {
        return "11*4*(5-1)*4";
    }
    if (num == 705)
    {
        return "(1+14)*(51-4)";
    }
    if (num == 709)
    {
        return "-1+14*51-4";
    }
    if (num == 710)
    {
        return "1*14*51-4";
    }
    if (num == 711)
    {
        return "1+14*51-4";
    }
    if (num == 715)
    {
        return "(1-14)*-(51+4)";
    }
    if (num == 717)
    {
        return "-1-14*-51+4";
    }
    if (num == 718)
    {
        return "1*14*51+4";
    }
    if (num == 719)
    {
        return "1+14*51+4";
    }
    if (num == 720)
    {
        return "(1-145)*-(1+4)";
    }
    if (num == 724)
    {
        return "-1-145*-(1+4)";
    }
    if (num == 725)
    {
        return "1*145*(1+4)";
    }
    if (num == 726)
    {
        return "1+145*(1+4)";
    }
    if (num == 730)
    {
        return "(1+145)*(1+4)";
    }
    if (num == 761)
    {
        return "(1+14)*51-4";
    }
    if (num == 769)
    {
        return "(11+4)*51+4";
    }
    if (num == 770)
    {
        return "1*14*(51+4)";
    }
    if (num == 771)
    {
        return "1+14*(51+4)";
    }
    if (num == 784)
    {
        return "(11+45)*14";
    }
    if (num == 805)
    {
        return "-11+4*51*4";
    }
    if (num == 814)
    {
        return "-1-1+4*51*4";
    }
    if (num == 815)
    {
        return "-1+1*4*51*4";
    }
    if (num == 816)
    {
        return "1*1*4*51*4";
    }
    if (num == 817)
    {
        return "1*1+4*51*4";
    }
    if (num == 818)
    {
        return "1+1+4*51*4";
    }
    if (num == 825)
    {
        return "(11+4)*(51+4)";
    }
    if (num == 827)
    {
        return "11+4*51*4";
    }
    if (num == 836)
    {
        return "11*4*(5+14)";
    }
    if (num == 880)
    {
        return "11*4*5*1*4";
    }
    if (num == 894)
    {
        return "(1+1)*(451-4)";
    }
    if (num == 898)
    {
        return "(1+1)*451-4";
    }
    if (num == 906)
    {
        return "(1+1)*451+4";
    }
    if (num == 910)
    {
        return "-(1-14)*5*14";
    }
    if (num == 979)
    {
        return "-1+14*5*14";
    }
    if (num == 980)
    {
        return "1*14*5*14";
    }
    if (num == 981)
    {
        return "1+14*5*14";
    }

    goto FINAL;

LARGE_POSITIVE_NUMBERS:
    if (num == 1020)
    {
        return "1*(1+4)*51*4";
    }
    if (num == 1026)
    {
        return "114*-(5-14)";
    }
    if (num == 1036)
    {
        return "(1+1)*(4+514)";
    }
    if (num == 1050)
    {
        return "(11+4)*5*14";
    }
    if (num == 1056)
    {
        return "11*4*(5+1)*4";
    }
    if (num == 1100)
    {
        return "11*4*5*(1+4)";
    }
    if (num == 1131)
    {
        return "1145-14";
    }
    if (num == 1140)
    {
        return "(1145-1)-4";
    }
    if (num == 1141)
    {
        return "1145-1*4";
    }
    if (num == 1142)
    {
        return "1145+1-4";
    }
    if (num == 1148)
    {
        return "1145-1+4";
    }
    if (num == 1149)
    {
        return "1145+1*4";
    }
    if (num == 1150)
    {
        return "1145+1+4";
    }
    if (num == 1159)
    {
        return "1145+14";
    }
    if (num == 1260)
    {
        return "(1+1)*45*14";
    }
    if (num == 1386)
    {
        return "11*(4+5)*14";
    }
    if (num == 1428)
    {
        return "(11-4)*51*4";
    }
    if (num == 1446)
    {
        return "-1+1451-4";
    }
    if (num == 1447)
    {
        return "1*1451-4";
    }
    if (num == 1448)
    {
        return "1+1451-4";
    }
    if (num == 1454)
    {
        return "-1+1451+4";
    }
    if (num == 1455)
    {
        return "1*1451+4";
    }
    if (num == 1456)
    {
        return "1+1451+4";
    }
    if (num == 1485)
    {
        return "11*-45*(1-4)";
    }
    if (num == 1526)
    {
        return "(114-5)*14";
    }
    if (num == 1542)
    {
        return "1*-(1-4)*514";
    }
    if (num == 1632)
    {
        return "(1+1)*4*51*4";
    }
    if (num == 1666)
    {
        return "(114+5)*14";
    }
    if (num == 1710)
    {
        return "114*-5*(1-4)";
    }
    if (num == 1760)
    {
        return "-(11-451)*4";
    }
    if (num == 1793)
    {
        return "-11+451*4";
    }
    if (num == 1800)
    {
        return "1*-(1-451)*4";
    }
    if (num == 1802)
    {
        return "-1-1+451*4";
    }
    if (num == 1803)
    {
        return "1*-1+451*4";
    }
    if (num == 1804)
    {
        return "1-1+451*4";
    }
    if (num == 1805)
    {
        return "1+1*451*4";
    }
    if (num == 1806)
    {
        return "1+1+451*4";
    }
    if (num == 1808)
    {
        return "1*(1+451)*4";
    }
    if (num == 1815)
    {
        return "11+451*4";
    }
    if (num == 1824)
    {
        return "114*(5-1)*4";
    }
    if (num == 1848)
    {
        return "(11+451)*4";
    }
    if (num == 1936)
    {
        return "11*(45-1)*4";
    }
    if (num == 1980)
    {
        return "11*45*1*4";
    }
    if (num == 2016)
    {
        return "-(1-145)*14";
    }
    if (num == 2024)
    {
        return "11*(45+1)*4";
    }
    if (num == 2029)
    {
        return "-1+145*14";
    }
    if (num == 2030)
    {
        return "1*145*14";
    }
    if (num == 2031)
    {
        return "1+145*14";
    }
    if (num == 2044)
    {
        return "(1+145)*14";
    }
    if (num == 2045)
    {
        return "-11+4*514";
    }
    if (num == 2054)
    {
        return "-1-1+4*514";
    }
    if (num == 2055)
    {
        return "-1/1+4*514";
    }
    if (num == 2056)
    {
        return "1/1*4*514";
    }
    if (num == 2057)
    {
        return "1/1+4*514";
    }
    if (num == 2058)
    {
        return "1+1+4*514";
    }
    if (num == 2067)
    {
        return "11+4*514";
    }
    if (num == 2068)
    {
        return "11*4*(51-4)";
    }
    if (num == 2166)
    {
        return "114*(5+14)";
    }
    if (num == 2240)
    {
        return "11*4*51-4";
    }
    if (num == 2248)
    {
        return "11*4*51+4";
    }
    if (num == 2280)
    {
        return "114*5*1*4";
    }
    if (num == 2420)
    {
        return "11*4*(51+4)";
    }
    if (num == 2475)
    {
        return "11*45*(1+4)";
    }
    if (num == 2570)
    {
        return "1*(1+4)*514";
    }
    if (num == 2652)
    {
        return "(1-14)*51*-4";
    }
    if (num == 2736)
    {
        return "114*(5+1)*4";
    }
    if (num == 2850)
    {
        return "114*5*(1+4)";
    }
    if (num == 2855)
    {
        return "-1+14*51*4";
    }
    if (num == 2856)
    {
        return "1*14*51*4";
    }
    if (num == 2857)
    {
        return "1+14*51*4";
    }
    if (num == 3060)
    {
        return "(11+4)*51*4";
    }
    if (num == 3080)
    {
        return "11*4*5*14";
    }
    if (num == 3435)
    {
        return "-1145*(1-4)";
    }
    if (num == 3598)
    {
        return "(11-4)*514";
    }
    if (num == 3608)
    {
        return "(1+1)*451*4";
    }
    if (num == 4112)
    {
        return "(1+1)*4*514";
    }
    if (num == 4503)
    {
        return "-11+4514";
    }
    if (num == 4512)
    {
        return "-1-1+4514";
    }
    if (num == 4513)
    {
        return "-1*1+4514";
    }
    if (num == 4514)
    {
        return "1-1+4514";
    }
    if (num == 4515)
    {
        return "1+1*4514";
    }
    if (num == 4516)
    {
        return "1+1+4514";
    }
    if (num == 4525)
    {
        return "11+4514";
    }
    if (num == 4576)
    {
        return "(1145-1)*4";
    }
    if (num == 4580)
    {
        return "1145*1*4";
    }
    if (num == 4584)
    {
        return "(1145+1)*4";
    }
    if (num == 4917)
    {
        return "11*(451-4)";
    }
    if (num == 4957)
    {
        return "11*451-4";
    }
    if (num == 4965)
    {
        return "11*451+4";
    }
    if (num == 5005)
    {
        return "11*(451+4)";
    }
    if (num == 5358)
    {
        return "114*(51-4)";
    }
    if (num == 5610)
    {
        return "-11*(4-514)";
    }
    if (num == 5698)
    {
        return "11*(4+514)";
    }
    if (num == 5725)
    {
        return "1145*(1+4)";
    }
    if (num == 5800)
    {
        return "(1-1451)*-4";
    }
    if (num == 5803)
    {
        return "-1+1451*4";
    }
    if (num == 5804)
    {
        return "1*1451*4";
    }
    if (num == 5805)
    {
        return "1+1451*4";
    }
    if (num == 5808)
    {
        return "(1+1451)*4";
    }
    if (num == 5810)
    {
        return "114*51-4";
    }
    if (num == 5818)
    {
        return "114*51+4";
    }
    if (num == 6270)
    {
        return "114*(51+4)";
    }
    if (num == 6682)
    {
        return "(1-14)*-514";
    }
    if (num == 6930)
    {
        return "11*45*14";
    }
    if (num == 7195)
    {
        return "-1+14*514";
    }
    if (num == 7196)
    {
        return "1*14*514";
    }
    if (num == 7197)
    {
        return "1+14*514";
    }
    if (num == 7710)
    {
        return "(1+14)*514";
    }
    if (num == 7980)
    {
        return "114*5*14";
    }
    if (num == 8976)
    {
        return "11*4*51*4";
    }
    if (num == 9028)
    {
        return "(1+1)*4514";
    }
    if (num == 11447)
    {
        return "11451-4";
    }
    if (num == 11455)
    {
        return "11451+4";
    }
    if (num == 14513)
    {
        return "-1+14514";
    }
    if (num == 14514)
    {
        return "1*14514";
    }
    if (num == 14515)
    {
        return "1+14514";
    }
    if (num == 16030)
    {
        return "1145*14";
    }
    if (num == 19844)
    {
        return "11*451*4";
    }
    if (num == 22616)
    {
        return "11*4*514";
    }
    if (num == 23256)
    {
        return "114*51*4";
    }
    if (num == 45804)
    {
        return "11451*4";
    }
    if (num == 49654)
    {
        return "11*4514";
    }
    if (num == 58596)
    {
        return "114*514";
    }
    if (num == 114514)
    {
        return "114514";
    }
    if (num == 229028)
    {
        return "114514+114514";
    }

    goto FINAL;

FINAL:
    return "";
}