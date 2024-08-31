/*
 * 1010 - Simple Calculate
 * Author: Otavio
 * Date: 31/08/2024
 */
const input = require('fs').readFileSync('/dev/stdin', 'utf8');
const lines = input.split('\n');

const first = lines.shift().split(' ');
const second = lines.shift().split(' ');

first.shift(); //p1 id
const firstAmount = parseInt(first.shift());
const firstPrice = parseFloat(first.shift());

let total = firstAmount*firstPrice;

second.shift(); //p2 id
const secondAmount = parseInt(second.shift());
const secondPrice = parseFloat(second.shift());

total += secondAmount*secondPrice;

console.log(`VALOR A PAGAR: R$ ${total.toFixed(2)}`);
