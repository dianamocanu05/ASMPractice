#include <iostream>
struct Point {
	int x, y;
};
/*int Sum(int x)
{
	_asm {
		mov ebx, x
		mov eax, 0
		_while:
		add eax, ebx
		dec ebx
		cmp ebx, 0
		jg _while
		jmp _end
		_end:
	}
}

int DigitSum(int x)
{
	_asm {
		mov eax, x
		mov ebx, 0
		_while:
		mov edx, 0
		mov ecx, 10
		div ecx
		add ebx, edx
		cmp eax, 0
		jg _while
		jmp _end
			_end:
		mov eax, ebx
	}
}*/

/*int EvenDigitSum(int x)
{
	_asm {
		mov eax, x
		mov ebx, 0
		mov esi, 0
		_while:
		cmp eax, 0
		je _final
		mov edx, 0
		mov ebx, 10
		div ebx
		mov ecx, edx
		push eax
		mov eax, ecx
		mov edx, 0
		mov ebx, 2
		div ebx
		pop eax
		cmp edx, 1
		je _while
		add esi, ecx
		jmp _while
		_final:
			mov eax, esi
				jmp_end:
		_end:
	}
}*/

/*int DistanceSquared(int x1, int x2, int y1, int y2)
{
	_asm {
		mov eax, x1
		mov ebx, x2
		mov ecx, 0
		sub eax, ebx
		mul eax
		add ecx, eax
		mov eax, y1
		mov ebx, y2
		sub eax, ebx
		mul eax
		add ecx, eax
		mov eax, ecx


	}
}*/

/*int Factorial(int x)
{
	_asm {
		mov eax, 1
		mov ebx, x
		_while:
		mul ebx
		dec ebx
		cmp ebx, 0
		jg _while
	}
}*/

int main()
{

	//Ex1 : Suma numerelor 1+2+...+n
	/*int n,s;
	std::cin >> n;
	_asm {
		push n
		call Sum
		mov s, eax
	}
	std::cout << s;*/


	//Ex2 : Suma cifrelor unui numar
	/*int n, s;
	std::cin >> n;
	_asm {
		push n
		call DigitSum
		mov s, eax
		pop n
	}
	std::cout << s;*/

	//Ex3 : Suma cifrelor pare ale unui numar
	/*int n, s=0;
	std::cin >> n;
	_asm {
		push n
		call EvenDigitSum
		mov s, eax
		pop n
	}
	std::cout << s;*/

	//Ex8 : Patratul distantei dintre doua puncte
	/*Point A, B;
	int dist;
	std::cin >> A.x >> A.y >> B.x >> B.y;
	_asm {
		push B.y
		push A.y
		push B.x
		push A.x
		call DistanceSquared
		mov dist, eax
		add esp, 16
	}
	std::cout << dist;*/

	//Ex5 : Factorialul unui numar
	/*int n,s;
	std::cin >> n;
	_asm {
		push n
		call Factorial
		mov s, eax
		pop n
	}
	std::cout << s;*/





	//TO DO
	//Exercitiul 4: Scrieti o functie sa sorteze crescator un vector dat.
	//Exercitiul 6: Scrieti o functie sa numere de cate ori un caracter dat apare intr-un sir.
	//Exercitiul 7: Fiind date 2 matrici patratice alocate static cu aceeasi dimensiune cu elemente de tip int,
	//A si B, sa se calculeze in A, A+B (A = A+B) si sa se afiseze A.



	system("pause");
	return 0;
}


