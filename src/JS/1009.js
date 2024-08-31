/*
 * 1009 - Salary with Bonus
 * Author: Otavio
 * Date: 31/08/2024
 */
const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

lines.shift(); //discard the seller's name as it won't be used
const fixedSalary = parseFloat(lines.shift());
const totalSales = parseFloat(lines.shift());
const totalSalary = fixedSalary + (totalSales * 0.15);

console.log(`TOTAL = R$ ${totalSalary.toFixed(2)}`);
