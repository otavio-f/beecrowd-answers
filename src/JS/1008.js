/*
 * 1008 - Salary
 * Author: Otavio
 * Date: 31/08/2024
 */
const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

const idNumber = parseInt(lines.shift());
const hours = parseInt(lines.shift());
const amountPerHour = parseFloat(lines.shift());

const salary = hours*amountPerHour;

console.log(`NUMBER = ${idNumber}
SALARY = U$ ${salary.toFixed(2)}`);
