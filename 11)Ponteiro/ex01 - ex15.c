1{
	pnum == &num
	num == *pnum
}

2{
	*px = *px/5;
}

3{
	endereço de i.
	-2
	3
}

4{
	endereço de i
	7
	5
	15
	9
}

5{
	i = *&*&j;
}

6{
	letra e
}

7{
	x = 100;
	*pta = &a;
	**pf = 7.9;
	ptx = &x;

	pp = &x;
	pf = &pta;
}

8{
	10
	5.9
	FFA0

	FFB4
	10

	5.9
	FFF0
	FFB4
	FFA0

	FFB4
	-
	5.9
	FFA6
	10
	10
	FFA0
	FFD4
}

9{
	pti[1] é igual a 10
}

10{
	Efetuamos a leitura de f
}

11{
	*(pulo + 2);
}

12{
	p = mat + 1; -> porque o mat pega o primeiro elemento do vetor mat e depois soma 1.
	x = (*mat)++; -> vale, equivalente a colocar x=*(mat), onde da o primerio posição de mat.
}

13{
	printa os seguintes numeros 4,9,13
	printa os endereços dos numeros
}

14{
	4092,4093,4094,4094
	4092,4094,4096,4098
	4092,4096,4100,4014
	4092,4100,4104,4108
}

15{
	valido:
	aloha[2] = value;

	coisas[4][4] = aloha[3];
	pf = value;
	pf = aloha;
}