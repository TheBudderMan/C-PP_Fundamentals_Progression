#pragma once
//File mainIsland.h
#ifndef MAINISLAND_H
#define MAINISLAND_H
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <regex>
#include <sstream>
#include <array>
#include"mainIsland.h"
using namespace std;
//globally defined integer values for array indexing.
#define R 4 
#define C 4 
class theIsland {
public://values initialized here so no need for function to do so.
	int a = 0, b = 0, c = 0, d = 0,
		e = 0, f = 1, g = 1, h = 0,
		i = 0, j = 1, k = 1, l = 0,
		m = 0, n = 0, o = 0, p = 0;
	//
	int island[R][C] = {
						a, b, c, d,
						e, f, g, h,
						i, j, k, l,
						m, n, o, p };
	//
	int checkForNeighbours(int island[][C], int i, int j){
		int count = 0;//counts up for each position where it finds nothing around its current location
		/*Checks up from current position and adds a counter if something is there*/ 
		if (i > 0 && island[i - 1][j])
			count++;
		/*Checks left from current position and adds a counter if something is there*/
		if (j > 0 && island[i][j - 1])
			count++;
		/*Checks down from current position and adds a counter if something is there*/
		if (i < R - 1 && island[i + 1][j])
			count++;
		/*Checks right from current position and adds a counter if something is there*/
		if (j < C - 1 && island[i][j + 1])
			count++;
		return count;
	}
	//
	void showPerimetre(){
		a; b; c; d;
		e; f; g; h;
		i; j; k; l;
		m; n; o; p;
		int perimetre = 0;
		int island[R][C] ={
			a, b, c, d,
			e, f, g, h,
			i, j, k, l,
			m, n, o, p};
		/*
		This here is the 2d scanning for loop.
		it goes from left to right 4 times and then back to 0 at 4,
		and j goes up 1 in order to go through the array.
		This is rather useful and can be used to scan any 2D array.
		*/
		for (int i = 0; i < R; i++) {
			for (int j = 0; j < C; j++) {
				if (island[i][j]) {
					perimetre += (4 - checkForNeighbours(island, i, j));
				}
			}
		}
		cout << "Perimetre: " << perimetre << "\n";
	}
	//
	void showIsland() {
		a; b; c; d;
		e; f; g; h;
		i; j; k; l;
		m; n; o; p;
		int island[R][C] ={
			a, b, c, d,
			e, f, g, h,
			i, j, k, l,
			m, n, o, p};
		cout << "Here's the current island!\n";
		int count = 0;
		for (int i = 0; i < R; i++) {						
			for (int j =0; j < C; j++) {
				count++;
				if (count == R) {
					cout << "[" << island[i][j] << "] \n";
					count = 0;
				}
				else {
					cout << "[" << island[i][j] << "] ";
				}
			}
		}		
	}
	void showRow1() {
		a; b; c; d;
		cout << "Row # 1\n";
		cout << "[" << a << "] [" << b << "] [" << c << "] [" << d << "]\n";
	}	
	void showRow2() {
		e; f; g; h;
		cout << "Row # 2\n";
		cout << "[" << e << "] [" << f << "] [" << g << "] [" << h << "]\n";
	}	
	void showRow3() {
		i; j; k; l;
		cout << "Row # 3 \n";
		cout << "[" << i << "] [" << j << "] [" << k << "] [" << l << "]\n";
	}	
	void showRow4() {
		m; n; o; p;
		cout << "Row # 4\n";
		cout << "[" << m << "] [" << n << "] [" << o << "] [" << p << "]\n";
	}
	void showCol1() {
		a; e; i; m;
		cout << "Column #1\n";
		cout << "[" << a << "]\n[" << e << "]\n[" << i << "]\n[" << m << "]\n";
	}
	void showCol2() {
		b; f; j; n;
		cout << "Column #2 \n";
		cout << "[" << b << "]\n[" << f << "]\n[" << j << "]\n[" << n << "]\n";
	}
	void showCol3() {
		c; g; k; o;
		cout << "Column #3\n";
		cout << "[" << c << "]\n[" << g << "]\n[" << k << "]\n[" << l << "]\n";
	}
	void showCol4() {
		d; h; l; p;
		cout << "Column #4\n";
		cout << "[" << a << "]\n[" << e << "]\n[" << i << "]\n[" << m << "]\n";
	}
	/*Each input is given a getter and setter*/
	int getA() { return a; }
	int setA(int inputA) { return a = inputA; }
	int getB() { return b; }
	int setB(int inputB) { return b = inputB; }
	int getC() { return c; }
	int setC(int inputC) { return c = inputC; }
	int getD() { return d; }
	int setD(int inputD) { return d = inputD; }
	//
	int getE() { return e; }
	int setE(int inputE) { return e = inputE; }
	int getF() { return f; }
	int setF(int inputF) { return f = inputF; }
	int getG() { return g; }
	int setG(int inputG) { return g = inputG; }
	int getH() { return h; }
	int setH(int inputH) { return h = inputH; }
	//
	int getI() { return i; }
	int setI(int inputI) { return i = inputI; }
	int getJ() { return j; }
	int setJ(int inputJ) { return j = inputJ; }
	int getK() { return k; }
	int setK(int inputK) { return k = inputK; }
	int getL() { return l; }
	int setL(int inputL) { return l = inputL; }
	//
	int getM() { return m; }
	int setM(int inputM) { return m = inputM; }
	int getN() { return n; }
	int setN(int inputN) { return n = inputN; }
	int getO() { return o; }
	int setO(int inputO) { return o = inputO; }
	int getP() { return p; }
	int setP(int inputP) { return p = inputP; }
	//
	void showArea() {
		cout << "The area is: " << a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p << "\n";
	}
private:
	int inputA, inputB, inputC, inputD,
		inputE, inputF, inputG, inputH,
		inputI, inputJ, inputK, inputL,
		inputM, inputN, inputO, inputP;
};
#endif