#!/usr/bin/node
// Print square of given size

const size = parseInt(process.argv[2]);

if (!isNaN(size)) {
    for (let i = 0; i < size; i++) {
        console.log('#'.repeat(size));
    }
} else {
    console.log('Missing size');
}
