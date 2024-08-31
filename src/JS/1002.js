/*
 * 1002 - Area of a Circle
 * Author: Otavio
 * Date: 31/08/2024
 */
var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const PI = 3.14159;
const R = parseFloat(lines[0]);

const A = PI * (R*R);

console.log('A='+A.toFixed(4));
