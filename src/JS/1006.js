/*
 * 1006 - Average 2
 * Author: Otavio
 * Date: 31/08/2024
 */
const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

const A = parseFloat(lines.shift());
const B = parseFloat(lines.shift());
const C = parseFloat(lines.shift());

const MEDIA = (A*0.2) + (B*0.3) + (C*0.5);

console.log(`MEDIA = ${MEDIA.toFixed(1)}`);
