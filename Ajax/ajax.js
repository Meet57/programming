let fetchBtn = document.getElementById('fetchBtn')

// fetchBtn.addEventListener('click', buttonClickHandler)

$("#backupBtn").click(function () {
    $.get("https://jsonplaceholder.typicode.com/posts/1", function (data, status) {
        document.getElementById('data').innerHTML = JSON.stringify(data)
    });
});

$("#fetchBtn").click(() => {
    $.post("https://jsonplaceholder.typicode.com/posts/", 
    {title:'Meet Patel',body:'Covid',userId:57}
    ,function (data, status) {
        document.getElementById('data').innerHTML = JSON.stringify(data)
    });
})