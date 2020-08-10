// All promise

let certifyPromise = () => {
    return new Promise((resolve, reject) => {
      // some processing happens and canditate gets the certificate
      certified = true;
      if (certified) {
        //success
        resolve("certificate obtained");
      } else {
        //failure
        reject("Certificate rejected");
      }
    });
  };
  
  let jobPromise = () => {
    return new Promise((resolve, reject) => {
      // some processing happens and canditate gets the certificate
      jobObtained = false;
      if (jobObtained) {
        resolve("Job obtained");
      } else {
        //failure
        reject("Job rejected");
      }
    });
  };


Promise.all([certifyPromise(), jobPromise()])
.then(result => {
    console.log(result);
})
.catch(result => {
    console.log(result);
});

Promise.race([certifyPromise(), jobPromise()])
.then(result => {
    console.log(result);
})
.catch(result => {
    console.log(result);
});