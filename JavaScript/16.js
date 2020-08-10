//Promises

let certificatePromise = new Promise((resolve,reject) => {
    certificated = false;
    if(certificated){
        setTimeout(
            ()  => {
                resolve('Certificate Success')
            },1000
        );
    }else{
        reject('Cerificate Reject')
    }
});

let jobPromise = new Promise((resolve,reject) => {
    jobObtained = true
    if(jobObtained){
        resolve('Job Success')
    }else{
        reject('Job Reject')
    }
});

certificatePromise.then((successResult) => {
    console.log(successResult);
    return jobPromise;
}).catch((failerResult) => {
    console.log(failerResult);
}).then((successResult) => {
    console.log(successResult);
}).catch((failerResult) => {
    console.log(failerResult);
});

console.log("Rest...");