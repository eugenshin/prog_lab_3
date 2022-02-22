#include <Windows.h>
#include <iostream>
#include "line.h"
#include "angle.h"
#include "triangle.h"
#include "circle.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	point* pointmas1 = new point[2];
	printf("Введите координаты первой точки: ");
	pointmas1[0].vvod();
	printf("Введите координаты второй точки: ");
	pointmas1[1].vvod();
	printf("Координаты первой точки: ");
	pointmas1[0].vivod();
	printf("\nКоординаты второй точки: ");
	pointmas1[1].vivod();
	printf("\nРасстояние между точками = %f", pointmas1[0].distance(&pointmas1[1]));
	delete[] pointmas1;
	point* pointmas2[2];
	for (int i = 0; i < 2; i++) {
		pointmas2[i] = new point;
	}
	printf("\nВведите координаты первой точки: ");
	(*pointmas2[0]).vvod();
	printf("Введите координаты второй точки: ");
	(* pointmas2[1]).vvod();
	printf("Координаты первой точки: ");
	(*pointmas2[0]).vivod();
	printf("\nКоординаты второй точки: ");
	(*pointmas2[1]).vivod();
	printf("\nРасстояние между точками = %f", (*pointmas2[0]).distance(pointmas2[1]));
	for (int i = 0; i < 2; i++) {
		delete pointmas2[i];
	}
	line line1;
	printf("\nВведите координаты первой и второй точки линии: ");
	line1.vvod();
	line1.vivod();
	printf("\nДлинна линии = %f", line1.length());
	angle angle1;
	printf("\nВведите координаты точкек: на первой стороне угла, вершины, на второй стороне угла: ");
	angle1.vvod();
	angle1.vivod();
	printf("\nЗначение угла = %f градусов.", angle1.value());
	triangle tri1;
	printf("\nВведите координаты точек треугольника: ");
	tri1.vvod();
	tri1.vivod();
	printf("\nПлощадь треугольника = %f, периметр треугольника = %f", tri1.square(), tri1.per());
	circle circle1;
	printf("\nВведите координаты цента круга и его радиус: ");
	circle1.vvod();
	circle1.vivod();
	printf("\nПлощадь круга = %f, периметр круга = %f", circle1.square(), circle1.per());
	return 0;
}