Tôi sẽ cố gắng thực hiện lại README bằng tiếng Anh cho bạn. Đây là bản dịch của bản nháp:

# Data Compression with Huffman Coding 🗜️

This project is an application of the data compression algorithm Huffman coding using the hardware language SystemVerilog. This project can compress and decompress strings of characters with high efficiency. This project is simulated with Verilator, synthesized with Quartus and tested with DE2 or DE10 kit.

## Introduction 📚

Data compression is the process of reducing the size of data to save storage space and increase transmission speed. Data compression can be divided into two types: lossy and lossless compression. Lossy compression is when the data after compression cannot be fully restored to its original state, but still ensures acceptable quality. Lossless compression is when the data after compression can be fully restored to its original state, without losing any information.

Huffman coding is a popular lossless compression algorithm, proposed by David A. Huffman in 1952. This algorithm is based on using variable-length codes to represent characters in data. Variable-length codes are codes that have different numbers of bits for different characters, depending on their frequency of occurrence in the data. Characters with high frequency will be encoded with fewer bits, while characters with low frequency will be encoded with more bits. Thus, we can reduce the number of bits needed to represent data.

To construct variable-length codes for characters, the Huffman coding algorithm uses a data structure called a Huffman tree. A Huffman tree is a full binary tree, with leaves (leaf nodes) being characters in the data, and internal nodes being intermediate nodes. Each node in the Huffman tree has a value called weight, which is the sum of the frequencies of the characters at its child leaves. The Huffman tree is built from bottom up, by merging two nodes with the smallest weights together to create a new node with a weight equal to the sum of its children. This process is repeated until there is only one root node (root node) left.

After having the Huffman tree, we can generate variable-length codes for characters by traversing from root to leaf of the tree. Each time we go to the left child, we assign bit 0, each time we go to the right child, we assign bit 1. Thus, the variable-length code of a character will be the string of bits assigned when traversing from root to leaf of the tree. These variable-length codes have the property that no code is a prefix of another code, so we can encode and decode data uniquely.

This project uses the hardware language SystemVerilog to design and simulate modules for compressing and decompressing data using the Huffman coding algorithm. This project also uses Quartus tool to synthesize circuit for FPGA and DE2 or DE10 kit to test circuit functionality.

## Requirements 🛠️

To run this project, you need:

- A computer with Verilator and Quartus installed
- A DE2 or DE10 kit for testing
- A string of characters not exceeding 255 characters to compress and decompress
- A way to transmit 8 bits in parallel for each character for input and output

## Installation and Usage 🚀

To install and use this project, you can follow these steps:

1. Clone this repository to your computer using the command:

```bash
git clone https://github.com/your_username/huffman-coding.git
```

2. Open the folder containing the project using the command:

```bash
cd huffman-coding
```

3. Run the makefile to compile and simulate modules using Verilator using the command:

```bash
make
```

4. Run the testbench file to check results of modules using the command:

```bash
./obj_dir/Vtestbench
```

5. Open project.qpf file with Quartus to synthesize circuit for DE2 or DE10 kit.

6. Connect kit to computer via USB port and select device in Quartus.

7. Load circuit into kit using command:

```bash
quartus_pgm -c USB-Blaster -m JTAG -o "p;output_file.sof"
```

8. Enter the string of characters to compress into a .txt file and save it in the memory card, then insert it into the kit to start the compression process.

9. View result of compression process on output of kit or on LCD screen.

10. Enter compressed string of characters into input of kit and press start button to start decompression process.

11. View the result of the decompression process on the .txt file saved in the memory card.

## Technologies and Tools 🛠️

This project uses following technologies and tools:

- SystemVerilog - Hardware language for design and simulation
- Verilator - Tool for compiling and simulating SystemVerilog
- Quartus - Tool for synthesizing circuit for FPGA
- DE2 or DE10 kit - Development kit for FPGA

References 📚
To learn more about Huffman coding algorithm and how to apply it with SystemVerilog, you can refer to the following materials:

Huffman coding - Wikipedia
SystemVerilog Tutorial for beginners - ChipVerify
Huffman Coding in SystemVerilog - YouTube