/* 
JSON-RPC (Remote Procedure Call) is a lightweight remote procedure call protocol encoded in JSON (JavaScript Object Notation). It allows applications or clients to communicate with a remote server or service by sending JSON-formatted requests and receiving JSON-formatted responses over a network.

JSON-RPC is a simple and language-agnostic protocol that enables communication between different software systems, including web applications, client-server architectures, and distributed systems. It is commonly used in blockchain networks, including Ethereum, to interact with nodes, query data, and invoke smart contract functions.

The JSON-RPC protocol consists of two main components: the request and the response.

Request: The client sends a JSON-RPC request to a remote server, specifying the method to be invoked and any necessary parameters. The request typically includes fields such as "jsonrpc" (indicating the JSON-RPC version), "method" (specifying the method name), and "params" (containing the method parameters).

Response: Upon receiving a JSON-RPC request, the server processes the request, executes the requested method, and generates a JSON-RPC response. The response includes fields such as "jsonrpc" (indicating the JSON-RPC version), "result" (containing the method's result), and "error" (if an error occurred during processing).
*/

let Web3 = require('web3')
Web3
let url = "https://mainnet.infura.io/v3/3e141765dbfa478b84627322dedd2a91" // like our rpc client
let web3 = new Web3(url)
web3
// eth is an object contains a lot of function which allows to interect with ethereum blockchain.
var address = '0xB3a0efEa47F241665ba2b10187B02501AADbFcB4' // take from etherscan.io
web3.eth.getBalance(address, (err, bal) => { balance = bal });
balance
web3.eth.getBalance("0xB3a0efEa47F241665ba2b10187B02501AADbFcB4").then(console.log);


web3.utils.fromWei(balance, "ether") // can use ether unit convertor to convert it.
web3.utils.fromWei(balance, "gwei")
web3.utils.fromWei(balance, "Gwei")
web3.eth.accounts.create() // used to create a new fresh account on ethereum blockchain 
web3.eth.accounts.privateKeyToAccount('0x3e1e1a09de2c265d0e49dd656b49184c0f245ef20faffb4463eda8755137ce00'); // give private key and get account address






// let Web3 = require('web3');
// Web3
// let Web3 = require('web3');
// Web3
// let url = 'http://127.0.0.1:7545'
// let web3 = new Web3(url);
// var address = "0xf860636eB59661559B296f329a22c066d76ea12a"
// web3.eth.getBalance(address, (err, wei) => { balance = web3.utils.fromWei(wei, 'ether') })
// balance
