/*
 * 1007 - Difference
 * Author: Otavio
 * Date: 31/08/2024
 */
const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

const A = parseInt(lines.shift());
const B = parseInt(lines.shift());
const C = parseInt(lines.shift());
const D = parseInt(lines.shift());

console.log(`DIFERENCA = ${(A*B) - (C*D)}`)
