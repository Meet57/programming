if ('serviceWorker' in navigator) {
    // register service worker
    navigator.serviceWorker.register('service-worker.js');
}


let count = Number(window.localStorage.getItem("count"));
if(!count){
    window.localStorage.setItem("count","0");
}

function createnote(noteTitle,noteBody){
    
    document.getElementById("no-notes").classList.add("hidden")

    let li = document.createElement("li");
    let a = document.createElement("a");
    let h2 = document.createElement("h2");
    let p = document.createElement("p");
    let xButton = document.createElement("Button");

    xButton.classList.add("delete");

    let xText = document.createTextNode("X");
    let h2TN = document.createTextNode(noteTitle);
    let pTN = document.createTextNode(noteBody);

    h2.appendChild(h2TN);
    p.appendChild(pTN);
    xButton.appendChild(xText);

    a.appendChild(h2);
    a.appendChild(xButton);
    a.appendChild(p);

    a.setAttribute("href","#");

    li.appendChild(a);
    document.getElementById("notes").appendChild(li);
}

function createNoteFromInput(e){
    e.preventDefault();
    
    var noteTitle = document.getElementById('new-note-title-input').value;
    var noteBody = document.getElementById('new-note-body-input').value;

    document.getElementById('new-note-title-input').value = "";
    document.getElementById('new-note-body-input').value = "";

    count += 1;
    window.localStorage.setItem("count",count);

    while(window.localStorage.getItem(noteTitle)){
        noteTitle += " (1)";
    }

    window.localStorage.setItem(noteTitle,noteBody);

    createnote(noteTitle,noteBody);
}

function removeItem(e){
    
    count -= 1;
    window.localStorage.setItem("count",count);
    
    if(e.target.classList.contains("delete")){
        if(confirm('Are you sure you want to delete the note ?')){
            let li = e.target.parentElement.parentElement;
            let ul = document.getElementById("notes");

            ul.removeChild(li);
        }
    }

    window.localStorage.removeItem(e.target.previousElementSibling.innerText);

    if(count<1){
        document.getElementById("no-notes").className = "";
        count = 0;
        window.localStorage.setItem("count",count);
    }
}

for(let i=0;i<=count;i++){
    let nt = window.localStorage.key(i);
    let nb = window.localStorage.getItem(nt);

    if(nt != "count" && nt){
        createnote(nt,nb);
    }
}

document.getElementById("inputForm").addEventListener("submit", createNoteFromInput, false);

document.getElementById("notes").addEventListener("click", removeItem)