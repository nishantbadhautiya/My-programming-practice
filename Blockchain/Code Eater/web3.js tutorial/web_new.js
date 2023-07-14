// const solc = require('solc');
// const fs = require('fs');
// //using ganache
// const Web3 = require('web3');
// let web3 = new Web3(new Web3.providers.HttpProvider("HTTP://127.0.0.1:7545"));
// let fileContent = fs.readFileSync("demo.sol").toString();
// console.log(fileContent);
// var input = { // giving input to solidity compiler
//     language: "Solidity",
//     sources: {
//         "demo.sol": {
//             content: fileContent,
//         },
//     },
//     settings: {
//         outputSelection: {
//             "*": {
//                 "*": ["*"],
//             },
//         },
//     },
// }

// var output = JSON.parse(solc.compile(JSON.stringify(input)));
// console.log(output);
// const ABI = output.contracts["demo.sol"]["demo"].abi;
// const bytecode = output.contracts["demo.sol"]["demo"].evm.bytecode.object;
// console.log({ abi: ABI, bytecode: bytecode });


// /////////////////////////////////////////////////////////////////////////////

// let contract = new web3.eth.Contract(ABI);
// let defaultAccount;
// web3.eth.getAccounts().then((accounts) => {
//     console.log( "Accounts:", accounts );
//     defaultAccount = accounts[0];
//     console.log(defaultAccount);
//     contract.deploy({ data: bytecode }).send({ from: defaultAccount, gas: 500000 }).on("receipt", (receipt) => {
//         console.log("Contract Address: ", receipt.contractAddress);
//     }).then((demoContract) => {
//         demoContract.methods.x().call((err, data) => {
//             console.log("Initial Value: ", data);
//         })
//     })
// })



const solc = require('solc');
const fs = require('fs');
const Web3 = require('web3');

async function deployContract() {
  try {
    let web3 = new Web3("http://127.0.0.1:7545");

    let fileContent = fs.readFileSync("demo.sol", "utf8");
    console.log(fileContent);

    let input = {
      language: "Solidity",
      sources: {
        "demo.sol": {
          content: fileContent,
        },
      },
      settings: {
        outputSelection: {
          "*": {
            "*": ["*"],
          },
        },
      },
    };

    let output = JSON.parse(solc.compile(JSON.stringify(input)));
    console.log(output);

    const ABI = output.contracts["demo.sol"]["demo"].abi;
    const bytecode = output.contracts["demo.sol"]["demo"].evm.bytecode.object;
    console.log({ abi: ABI, bytecode: bytecode });

    let accounts = await web3.eth.getAccounts();
    console.log("Accounts:", accounts);
    let defaultAccount = accounts[0];
    console.log("Default Account:", defaultAccount);

    let contract = new web3.eth.Contract(ABI);
    let deployTransaction = contract.deploy({ data: bytecode });

    let gasEstimate = await deployTransaction.estimateGas();
    console.log("Gas Estimate:", gasEstimate);

    let deployment = await deployTransaction.send({
      from: defaultAccount,
      gas: gasEstimate,
    });

    console.log("Contract Address:", deployment.options.address);

    let demoContract = new web3.eth.Contract(ABI, deployment.options.address);
    let result = await demoContract.methods.x().call();
    console.log("Initial Value:", result);
  } catch (error) {
    console.error(error);
  }
}

deployContract();
