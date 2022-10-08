showNotes();
let addBtn = document.getElementById('addBtn');
addBtn.addEventListener('click', function (e) {
  let addTxt = document.getElementById('addTxt');
  if (addTxt.value == '') {
    alert("Empty note");
  }
  else {
    let addTitle = document.getElementById('addTitle');
    let notes = localStorage.getItem('notes');
    if (notes == null) {
      notesobj = [];
    }
    else {
      notesobj = JSON.parse(notes);
    }
    let myobj = {
      title: addTitle.value,
      text: addTxt.value
    }
    notesobj.push(myobj);
    localStorage.setItem("notes", JSON.stringify(notesobj));
    addTxt.value = "";
    addTitle.value = "";
    // console.log(notesobj);
    showNotes();
  }
})
function showNotes() {
  let notes = localStorage.getItem("notes");
  if (notes == null) {
    notesobj = [];
  }
  else {
    notesobj = JSON.parse(notes);
  }

  let html = "";
  notesobj.forEach(function (element, index) {
    html += `
  <div class="noteCard my-2 mx-2 card" style="width: 18rem;">
                <div class="card-body">
                    <h5 class="card-title">${element.title}</h5>
                    <p class="card-text">${element.text}</p>
                    <button id="${index}"onclick="deleteNote(this.id)" class="btn btn-danger">Delete Note</button>
                </div>
                </div>`;
  });
  let notesElm = document.getElementById("notes");
  if (notesobj.length != 0) {
    notesElm.innerHTML = html;
  } else {
    notesElm.innerHTML = `Nothing to show! Use "Add a Note" section above to add notes.`;
  }

  let noteln = document.getElementById("addBtn");
  if (notesobj.innerText == '') {
    notesobj.addEventListener('click', func)
    function func() {
      alert("Empty note");
    }
  }
}

//deleting any note
function deleteNote(index) {
  let notes = localStorage.getItem("notes");
  if (notes == null) {
    notesobj = [];
  }
  else {
    notesobj = JSON.parse(notes);
  }
  notesobj.splice(index, 1);
  localStorage.setItem("notes", JSON.stringify(notesobj));
  showNotes();
}
//searching the notes
let search = document.getElementById('searchTxt');
search.addEventListener("input", function () {
  let inputVal = search.value.toLowerCase();
  let noteCards = document.getElementsByClassName('noteCard');
  Array.from(noteCards).forEach(function (element) {
    let cardtxt = document.getElementsByTagName("p")[0].innerText;
    if (cardtxt.includes(inputVal)) {
      element.style.display = "block";
    } else {
      element.style.display = "none";
    }
  })
})