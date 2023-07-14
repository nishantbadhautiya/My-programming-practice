// const Web3 = require("web3"); // import web3
// let web3 = new Web3(new Web3.providers.HttpProvider("HTTP://127.0.0.1:7545"));//connect to ganache

// let contract = new web3.eth.Contract([[
// 	{
// 		"inputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "_x",
// 				"type": "uint256"
// 			}
// 		],
// 		"name": "set",
// 		"outputs": [],
// 		"stateMutability": "nonpayable",
// 		"type": "function"
// 	},
// 	{
// 		"inputs": [],
// 		"name": "x",
// 		"outputs": [
// 			{
// 				"internalType": "uint256",
// 				"name": "",
// 				"type": "uint256"
// 			}
// 		],
// 		"stateMutability": "view",
// 		"type": "function"
// 	}
// ], "0x1172d2444b5B399b1b726BB9c2De3ff8310a1c4E"]);

// contract.methods.x().call().then((result)=>{
//     console.log(result);
// })



const Web3 = require("web3");

async function retrieveContractValue() {
  try {
    let web3 = new Web3("http://127.0.0.1:7545"); // Connect to Ganache

    let contractAddress = "0x1172d2444b5B399b1b726BB9c2De3ff8310a1c4E"; // Replace with your contract address

    let contractABI = [
        {
            "inputs": [
                {
                    "internalType": "uint256",
                    "name": "_x",
                    "type": "uint256"
                }
            ],
            "name": "set",
            "outputs": [],
            "stateMutability": "nonpayable",
            "type": "function"
        },
        {
            "inputs": [],
            "name": "x",
            "outputs": [
                {
                    "internalType": "uint256",
                    "name": "",
                    "type": "uint256"
                }
            ],
            "stateMutability": "view",
            "type": "function"
        }
    ]; // Replace with your contract ABI

    let contract = new web3.eth.Contract(contractABI, contractAddress);

    let result = await contract.methods.x().call();
    console.log("Contract value:", result);
  } catch (error) {
    console.error(error);
  }
}

retrieveContractValue();
