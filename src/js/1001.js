/*
 * 1001 - Extremely Basic
 * Author: Otavio
 * Date: 31/08/2024
 */
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const A = parseInt(lines[0]);
const B = parseInt(lines[1]);

console.log('X =', A+B);
