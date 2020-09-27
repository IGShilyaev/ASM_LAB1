

#include <iostream>
#include <string>

using namespace std;

int main()
{
	long num_8bit;
	cin >> num_8bit; //Ввод двоичного числа (8 бит, без "-",без проверки)

	__asm
	{
		xor eax, eax
		xor esi, esi
		xor ebx, ebx

		mov eax, num_8bit
		mov ebx, 10000 // Для выделения тетрад делением

		cyc1: //Разбиение на тетрады
		xor edx,edx //Обнуление edx
		div ebx //Очередная тетрада -> edx
		push edx //Очередная тетрада -> стек
		and eax, eax; //Проверка на равенство 0
		jnz cyc1 

		xor ebx,ebx
		xor ecx, ecx

		cyc2:
		pop esi //Достаем тетраду из стека
		
		cmp esi, 0	 //Сравнение тетрады с 0000
		jz add0			// Если равна 0000 - перейти к добавлению 0
		cmp esi, 1	 //Сравнение тетрады с 0001
		jz add1			// Если равна 0001 - перейти к добавлению 1
		cmp esi, 10  //Сравнение тетрады с 0010
		jz add2			// Если равна 0010 - перейти к добавлению 2
		cmp esi, 11  //Сравнение тетрады с 0011
		jz add3			// Если равна 0011 - перейти к добавлению 3
		cmp esi, 100 //Сравнение тетрады с 0100
		jz add4			// Если равна 0100 - перейти к добавлению 4
		cmp esi, 101 //Сравнение тетрады с 0101
		jz add5			// Если равна 0101 - перейти к добавлению 5
		cmp esi, 110 //Сравнение тетрады с 0110
		jz add6			// Если равна 0110 - перейти к добавлению 6
		cmp esi, 111 //Сравнение тетрады с 0111
		jz add7			// Если равна 0111 - перейти к добавлению 7
		cmp esi, 1000 //Сравнение тетрады с 1000
		jz add8			// Если равна 1000 - перейти к добавлению 8
		cmp esi, 1001 //Сравнение тетрады с 1001
		jz add9			// Если равна 1001 - перейти к добавлению 9
		cmp esi, 1010 //Сравнение тетрады с 1010
		jz addA			// Если равна 1010 - перейти к добавлению A
		cmp esi, 1011 //Сравнение тетрады с 1011
		jz addB			// Если равна 1011 - перейти к добавлению B
		cmp esi, 1100 //Сравнение тетрады с 1100
		jz addC			// Если равна 1100 - перейти к добавлению C
		cmp esi, 1101 //Сравнение тетрады с 1101
		jz addD			// Если равна 1101 - перейти к добавлению D
		cmp esi, 1110 //Сравнение тетрады с 1110
		jz addE			// Если равна 1110 - перейти к добавлению E
		cmp esi, 1111 //Сравнение тетрады с 1111
		jz addF			// Если равна 1111 - перейти к добавлению F

			add0:
		//Добавление символа как-то
			inc ecx
			xor esi,esi
			cmp ecx,2
			jnz cyc2
			jz end
			add1:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			add2:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			add3:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			add4:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			add5:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			add6:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			add7:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			add8:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			add9:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			addA:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			addB:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			addC:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			addD:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			addE:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end
			addF:
		//Добавление символа как-то
			inc ecx
			xor esi, esi
			cmp ecx, 2
			jnz cyc2
			jz end

			end:
			//Алгоритм счастливо завершает свою работу и дает верный результат!
	}
	

	system("pause");
	return 0;
}


