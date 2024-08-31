/*
 * 1005 - Average 1
 * Author: Otavio
 * Date: 31/08/2024
 */
const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

const A = parseFloat(lines.shift());
const B = parseFloat(lines.shift());

const MEDIA = ((A*0.35) + (B*0.75))/1.1;
console.log(`MEDIA = ${MEDIA.toFixed(5)}`);
