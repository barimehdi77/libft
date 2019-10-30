/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbari <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 21:44:17 by mbari             #+#    #+#             */
/*   Updated: 2019/10/29 19:26:07 by mbari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int main()
{
	/*-------------> ft_memset.c <---------------*/
	printf("/*-------------> ft_memset.c <---------------*/\n");
	char s1[] = "The Night King";
	char s2[] = "Be points";
	char s3[] = "You are stuped";
	char s4[] = "You can't memset This";
	char s5[] = "no need to memset This";
	char s6[] = "are you sure you want This";
	char s7[] = "Password is : the night king";
	ft_memset(s1, '.', 5);
	ft_memset(s2 + 3, '.', 6);
	ft_memset(s3 + 8, '*', 6);
	ft_memset(s4 + 7, ' ', 2);
	ft_memset(s5, '.', 0);
	ft_memset(s6, '_', ft_strlen("are you sure you want this"));
	ft_memset(s7 + 14, '*', 14);
	printf("The Test Number 1 : %s\nThe Test Number 2 : %s\nThe Test Number 3 : %s\nThe Test Number 4 : %s\nthe Test Number 5 : %s\nThe Test Number 6 : %s\nThe Test Number 7 : %s\n",s1,s2,s3,s4,s5,s6,s7);		
	/*-------------> ft_bzero.c <---------------*/
	printf("/*-------------> ft_bzero.c <---------------*/\n");
	char a1[] = "This is a Hidden part :)";
	char a2[] = "are you z or 1";
	char a3[] = "zero it!!!";
	char a4[] = "be zero Now";
	char a5[] = "z like Nothing";
	ft_bzero(a1 + 10, 1);
	ft_bzero(a2 + 8, 1);
	ft_bzero(a3, 4);
	ft_bzero(a4 + 3, 4);
	ft_bzero(a5, 1);
	printf("The Test Number 1 : %s\nThe Test Number 2 : %s\nThe Test Number 3 : %s\nThe Test Number 4 : %s\nthe Test Number 5 : %s\n",a1,a2,a3,a4,a5);
	/*-------------> ft_memcpy.c <---------------*/
	printf("/*-------------> ft_memcpy.c <---------------*/\n");
	char b1[] = "copy this from b1and don't copy this";
	char B1[] = "why am stay here?";
	char b2[] = "How are you Mr.";
	char B2[] = "in the Dark wasBARI MEHDI77?";
	char b3[] = "";
	char B3[] = "am i joke to You? This is Nothing in b2";
	char b4[] = "B4 is dead hahaha";
	char B4[] = "";
	char b5[] = "";
	char B5[] = "";
	ft_memcpy(B1, b1,ft_strlen(B1));
	ft_memcpy(B2, b2,ft_strlen(b2));
	ft_memcpy(B3, b3,ft_strlen(b3));
	ft_memcpy(B4, b4,ft_strlen(b4));
	ft_memcpy(B5, b5,12);
	printf("The Test Number 1 : %s\nThe Test Number 2 : %s\nThe Test Number 3 : %s\nThe Test Number 4 : %s\nthe Test Number 5 : %s\n",B1,B2,B3,B4,B5);
	/*-------------> ft_memccpy.c <---------------*/
	printf("/*-------------> ft_memccpy.c <---------------*/\n");
	char c1[] = "copy all of this";
	char C1[] = "i will win if c1 if was Bigger then me hahaha";
	char c2[] = "copy just here F and don't copy this OKAY!";
	char C2[] = "I have money i will give it to you if you let me here";
	char c3[] = "copy 7 bytes from this OKAY";
	char C3[] = "7 bytes is ready!!";
	char c4[] = "this directed by";
	char C4[] = "you know who is  robert b weide";
	char c5[] = "";
	char C5[] = "Finally I won";
	ft_memccpy(C1, c1, 'z', ft_strlen(c1));
	ft_memccpy(C2, c2, 'F', ft_strlen(c1));
	ft_memccpy(C3, c3, 'z', 7);
	ft_memccpy(C4, c4, 'y', ft_strlen(c4));
	ft_memccpy(C5, c5, 'z', ft_strlen(C5));
	printf("The Test Number 1 : %s\nThe Test Number 2 : %s\nThe Test Number 3 : %s\nThe Test Number 4 : %s\nthe Test Number 5 : %s\n",C1,C2,C3,C4,C5);
	/*-------------> ft_memmove.c <---------------*/
	printf("/*-------------> ft_memmove.c <---------------*/\n");
	char d1[] = "can you move This?";
	char D1[] = "no I can't hhh";
	char d2[] = "I see you in";
	char D2[] = "you see me i The Dark?";
	char d3[] = "move just This to D3 and don't move this OKAY!";
	char D3[] = "I know u can Move it";
	char d4[] = "";
	char D4[] = "do you joke with me ?!!";
	char d5[] = "Now D5 is empty hahahah";
	char D5[] = "";
	ft_memmove(D1, d1, ft_strlen(d1));
	ft_memmove(D2, d2, ft_strlen(d2));
	ft_memmove(D3, d3, 20);
	ft_memmove(D4, d4, ft_strlen(D4));
	ft_memmove(D5, d5, ft_strlen(d5));
	printf("The Test Number 1 : %s\nThe Test Number 2 : %s\nThe Test Number 3 : %s\nThe Test Number 4 : %s\nthe Test Number 5 : %s\n",D1,D2,D3,D4,D5);
	/*-------------> ft_memchr.c <---------------*/
	printf("/*-------------> ft_memchr.c <---------------*/\n");
	char e1[] = "www.1337.ma";
	char e2[] = "no point here!";
	char e3[] = "after - hi! I'm after -";
	char e4[] = "i have a + here come and get it!";
	char e5[] = "www.";
	char *E1 = ft_memchr(e1,'.',7);
	char *E2 = ft_memchr(e2,'.',ft_strlen(e2));
	char *E3 = ft_memchr(e3,'-',7);
	char *E4 = ft_memchr(e4,'+',7);
	char *E5 = ft_memchr(e5,'.',7);
	printf("The Test Number 1 : %s\nThe Test Number 2 : %s\nThe Test Number 3 : %s\nThe Test Number 4 : %s\nthe Test Number 5 : %s\n",E1,E2,E3,E4,E5);
	/*-------------> ft_memcmp.c <---------------*/
	printf("/*-------------> ft_memcmp.c <---------------*/\n");
	char f1[] = "ABCDEF";
	char F1[] = "ABCEF";
	char f2[] = "123456789";
	char F2[] = "123456780";
	char f3[] = "";
	char F3[] = "f3 is NULL";
	char f4[] = "F4 is NULL";
	char F4[] = "";
	char f5[] = "";
	char F5[] = "";
	int f11 = ft_memcmp(f1 ,F1,6);
	int f12 = ft_memcmp(f2 ,F2,4);
	int f13 = ft_memcmp(f3 ,F3,10);
	int f14 = ft_memcmp(f4 ,F4,7);
	int f15 = ft_memcmp(f5 ,F5,1);
	printf("The Test Number 1 : %d\nThe Test Number 2 : %d\nThe Test Number 3 : %d\nThe Test Number 4 : %d\nthe Test Number 5 : %d\n",f11,f12,f13,f14,f15);
	/*-------------> ft_strlen.c <---------------*/
	printf("/*-------------> ft_strlen.c <---------------*/\n");
	char g1[] = "www.1337.ma";
	char g2[] = "King of The north!";
	char g3[] = "";
	char g4[] = "no text here please go away !!";
	char g5[] = "vm here please choose another MAC!";
	ft_strlen(g1) == strlen(g1) ? printf("The Test Number 1 : Your strlen work\n") : printf("The Test Number 1 : Your strlen dosen't Work\n");
	ft_strlen(g2) == strlen(g2) ? printf("The Test Number 2 : Your strlen work\n") : printf("The Test Number 1 : Your strlen dosen't Work\n");
	ft_strlen(g3) == strlen(g3) ? printf("The Test Number 3 : Your strlen work\n") : printf("The Test Number 1 : Your strlen dosen't Work\n");
	ft_strlen(g4) == strlen(g4) ? printf("The Test Number 4 : Your strlen work\n") : printf("The Test Number 1 : Your strlen dosen't Work\n");
	ft_strlen(g5) == strlen(g5) ? printf("The Test Number 5 : Your strlen work\n") : printf("The Test Number 1 : Your strlen dosen't Work\n");
	/*-------------> ft_strchr.c <---------------*/
	printf("/*-------------> ft_strchr.c <---------------*/\n");
	char h1[] = "www.1337.ma";
	char h2[] = "no point here!";
	char h3[] = "after - hi! I'm after -";
	char h4[] = "i have a + here come and get it!";
	char h5[] = "www.";
	char *H1 = ft_strchr(e1,'.');
	char *H2 = ft_strchr(e2,'.');
	char *H3 = ft_strchr(e3,'-');
	char *H4 = ft_strchr(e4,'+');
	char *H5 = ft_strchr(e5,'.');
	printf("The Test Number 1 : %s\nThe Test Number 2 : %s\nThe Test Number 3 : %s\nThe Test Number 4 : %s\nthe Test Number 5 : %s\n",H1,H2,H3,H4,H5);
	/*-------------> ft_strrchr.c <---------------*/
	printf("/*-------------> ft_strrchr.c <---------------*/\n");
	char i1[] = "www.1337.ma";
	char i2[] = "no point here!";
	char i3[] = "after * hi! I'm after * oh this is The last";
	char i4[] = "i have a / here come and get it / You are Nice! :)";
	char i5[] = "www.";
	char *I1 = ft_strrchr(i1,'.');
	char *I2 = ft_strrchr(i2,'.');
	char *I3 = ft_strrchr(i3,'*');
	char *I4 = ft_strrchr(i4,'/');
	char *I5 = ft_strrchr(i5,'.');
	printf("The Test Number 1 : %s\nThe Test Number 2 : %s\nThe Test Number 3 : %s\nThe Test Number 4 : %s\nthe Test Number 5 : %s\n",I1,I2,I3,I4,I5);
	/*-------------> ft_strncmp.c <---------------*/
	printf("/*-------------> ft_strncmp.c <---------------*/\n");
	char j1[] = "ABCDEF";
	char J1[] = "ABCEF";
	char j2[] = "123456789";
	char J2[] = "123456780";
	char j3[] = "";
	char J3[] = "f3 is NULL";
	char j4[] = "F4 is NULL";
	char J4[] = "";
	char j5[] = "";
	char J5[] = "";
	int j11 = ft_strncmp(j1 ,J1,6);
	int j12 = ft_strncmp(j2 ,J2,4);
	int j13 = ft_strncmp(j3 ,J3,10);
	int j14 = ft_strncmp(j4 ,J4,7);
	int j15 = ft_strncmp(j5 ,J5,1);
	printf("The Test Number 1 : %d\nThe Test Number 2 : %d\nThe Test Number 3 : %d\nThe Test Number 4 : %d\nthe Test Number 5 : %d\n",j11,j12,j13,j14,j15);
	/*-------------> ft_strlcpy.c <---------------*/
	printf("/*-------------> ft_strlcpy.c <---------------*/\n");
	char k1[] = "www.1337.ma";
	char K1[] = "www.4b2c.fr";
	char k2[] = "King of The north!";
	char K2[] = "king";
	char k3[] = "";
	char K3[] = "hahahha";
	char k4[] = "no text here please go away !!";
	char K4[] = "are you sure you want this ?";
	char k5[] = "vm here please choose another MAC!";
	char K5[] = "This is my post, go away";
	int k11 = ft_strlcpy(k1 ,k1,6);
	int k12 = ft_strlcpy(k2 ,k2,4);
	int k13 = ft_strlcpy(k3 ,k3,10);
	int k14 = ft_strlcpy(k4 ,k4,7);
	int k15 = ft_strlcpy(k5 ,k5,1);
	printf("The Test Number 1 : %d\nThe Test Number 2 : %d\nThe Test Number 3 : %d\nThe Test Number 4 : %d\nthe Test Number 5 : %d\n",k11,k12,k13,k14,k15);
	/*-------------> ft_strlcat.c <---------------*/
	printf("/*-------------> ft_strlcat.c <---------------*/\n");
	char l1[] = "www.1337.ma";
	char L1[] = "www.4b2c.fr";
	char l2[] = "King of The north!";
	char L2[] = "king";
	char l3[] = "";
	char L3[] = "hahahha";
	char l4[] = "no text here please go away !!";
	char L4[] = "are you sure you want this ?";
	char l5[] = "vm here please choose another MAC!";
	char L5[] = "This is my post, go away";
	int l11 = ft_strlcpy(l1 ,L1,6);
	int l12 = ft_strlcpy(l2 ,L2,4);
	int l13 = ft_strlcpy(l3 ,L3,10);
	int l14 = ft_strlcpy(l4 ,L4,7);
	int l15 = ft_strlcpy(l5 ,L5,1);
	printf("The Test Number 1 : %d\nThe Test Number 2 : %d\nThe Test Number 3 : %d\nThe Test Number 4 : %d\nthe Test Number 5 : %d\n",l11,l12,l13,l14,l15);
	/*-------------> ft_strnstr.c <---------------*/
	printf("/*-------------> ft_strnstr.c <---------------*/\n");
	char m1[] = "The best Player in 2019 is CR7";
	char M1[] = "best";
	char m2[] = "The Night King";
	char M2[] = "Night";
	char m3[] = "";
	char M3[] = "oh  no";
	char m4[] = "are you 0 or 1 ?";
	char M4[] = "if";
	char m5[] = "";
	char M5[] = "";
	ft_strnstr(M1, m1,ft_strlen(m1));
	ft_strnstr(M2, m2,3);
	ft_strnstr(M3, m3,5);
	ft_strnstr(M4, m4,9);
	ft_strnstr(M5, m5,5);
	printf("The Test Number 1 : %s\nThe Test Number 2 : %s\nThe Test Number 3 : %s\nThe Test Number 4 : %s\nthe Test Number 5 : %s\n",M1,M2,M3,M4,M5);
	/*-------------> ft_atoi.c <---------------*/
	printf("/*-------------> ft_atoi.c <---------------*/\n");
	char n1[] = "\0 \t \v \r .... 77 ishere";
	char n2[] = "no number here";
	char n3[] = "              777                ";
	char n4[] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0        77              ";
	char n5[] = "                                                    ";
	ft_atoi(n1) == atoi(n1) ? printf("The Test Number 1 : Your atoi work\n") : printf("The Test Number 1 : Your atoi dosen't Work\n");
	ft_atoi(n2) == atoi(n2) ? printf("The Test Number 2 : Your atoi work\n") : printf("The Test Number 1 : Your atoi dosen't Work\n");
	ft_atoi(n3) == atoi(n3) ? printf("The Test Number 3 : Your atoi work\n") : printf("The Test Number 1 : Your atoi dosen't Work\n");
	ft_atoi(n4) == atoi(n4) ? printf("The Test Number 4 : Your atoi work\n") : printf("The Test Number 1 : Your atoi dosen't Work\n");
	ft_atoi(n5) == atoi(n5) ? printf("The Test Number 5 : Your atoi work\n") : printf("The Test Number 1 : Your atoi dosen't Work\n");
	/*-------------> ft_isprint.c <---------------*/
	printf("/*-------------> ft_isprint.c <---------------*/\n");
	char o1 = '/';
	char o2 = '-';
	char o3 = 126;
	char o4 = 77;
	char o5 = 13;
	ft_isprint(o1) == isprint(o1) ? printf("The Test Number 1 : Your isprint work\n") : printf("The Test Number 1 : Your isprint dosen't Work\n");
	ft_isprint(o2) == isprint(o2) ? printf("The Test Number 2 : Your isprint work\n") : printf("The Test Number 2 : Your isprint dosen't Work\n");
	ft_isprint(o3) == isprint(o3) ? printf("The Test Number 3 : Your isprint work\n") : printf("The Test Number 3 : Your isprint dosen't Work\n");
	ft_isprint(o4) == isprint(o4) ? printf("The Test Number 4 : Your isprint work\n") : printf("The Test Number 4 : Your isprint dosen't Work\n");
	ft_isprint(o5) == isprint(o5) ? printf("The Test Number 5 : Your isprint work\n") : printf("The Test Number 5 : Your isprint dosen't Work\n");
}
