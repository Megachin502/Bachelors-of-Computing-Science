/*
   New Perspectives on HTML, CSS, and JavaScript
   Tutorial 13
   Review Assignment

   Author: elam
   Date:   

   Function List
   =============

   init()
      Run when the Web page is loaded; displays puzzle 1
      and loads the event handlers for the Web page buttons.

   swapPuzzle()
      Swaps one puzzle for another based on the button being clicked
      by the user. Confirms the change before swapping in the
      new puzzle.

   setupPuzzle()
      Sets up a new puzzle, adding the onclick event handlers for
      every puzzle cell.

   changeBackground()
      Changes the cell background from grey to circled to black and
      back to grey again. Checks the puzzle for a complete solution.

   peek()
      Temporarily displays incorrect cells with the numbers highlighted
      in a red font.

   unpeek()
      Returns the puzzle to its original state prior to peeking.

   showSolution()
      Removes all inline background color styles from the puzzle, showing
      the complete solution.

   checkSolution()
      Checks the current state of the puzzle, determining whether it 
      respreents a complete solution.

   drawHitori(numbers, blocks)
      Returns a text string of the HTML code to
      display a Hitori Web table based on the contents of
      multi-dimensional arrays: numbers and blocks.
	
*/





function drawHitori(numbers, blocks) {

   /* Initial HTML String for the Hitori Puzzle */
   var htmlString = "";

   /* numbers is a multidimensional array containing the
      Hitori numbers; blocks is a corresponding 
      multidimensional array containing the location of the
      blocks which are indicated by the # character.
      Non-blocking cells are indicated by a blank character.
  */

   /* Create a Web table with the id, hitoriGrid, containing
      the numeric values. Blocks cells have the class name,
      blocks. Non-blocking cells have the class name, circles
  */

   var totalRows = numbers.length;
   var totalCols = numbers[0].length;
   htmlString = "<table id='hitoriGrid'>";
   

   for (var i = 0; i < totalRows; i++) {
      htmlString += "<tr>";

      for (var j = 0; j < totalCols; j++) {
         if (blocks[i][j] == "#") htmlString += "<td  class='blocks'>"
         else htmlString += "<td class='circles'>";

         htmlString += numbers[i][j];
         htmlString +="</td>";
      }

      htmlString += "</tr>";
   }

   htmlString += "</table>";

   return htmlString;
}

//3 loads when window loads
window.onload = init();
//4
function init(){
	//Change html tag and ID value
	document.getElementsByTagName("h1")[0].innerHTML = "Hitori Puzzle 1";
	document.getElementsByTagName("h2")[0].innerHTML = hitori1Rating;
	document.getElementById("puzzle").innerHTML = drawHitori(hitori1Numbers, hitori1Blocks);
	//swap buttons when click on puzzle 1,2,3
	var puzzleButtons = document.getElementsByClassName("puzzles");
	for(var i = 0;i<puzzleButtons.length;i++){
		puzzleButtons[i].onclick = swapPuzzle;
	}
	setupPuzzle();
	//No () when running functions for =
	document.getElementById("peek").onclick = peek;
	document.getElementById("solve").onclick = showSolution;
}
//5
function swapPuzzle(){
	//confirm returns true or false
	var showProfile = confirm("Load new puzzle?");
	if (showProfile == true){
		var title, rating, numbers, blocks;
		//this.value returns number 1,2,3
		title = "Hitori " + this.value;
		//this.id returns hitori1,2,3
		rating = eval(this.id + "Rating");
		numbers = eval(this.id + "Numbers");
		blocks = eval(this.id + "Blocks");
		document.getElementsByTagName("h1")[0].innerHTML = title;
		document.getElementsByTagName("h2")[0].innerHTML = rating;
		document.getElementById("puzzle").innerHTML = drawHitori(numbers,blocks);
		setupPuzzle();
	}
}
//6
function setupPuzzle(){
	//queryselectorall selects all that
	var puzzleCells = document.querySelectorAll("#hitoriGrid td");
	for(var i = 0; i<puzzleCells.length; i++){
		puzzleCells[i].style.backgroundColor = "grey"; //rgb(211,211,211) did not work
		puzzleCells[i].style.color = "black";
		puzzleCells[i].style.backgroundImage = "none";
		puzzleCells[i].onclick = changeBackground;
	}
}
//7
function changeBackground(){
	//this means were in puzzleCells
	if(this.style.backgroundColor == "grey"){
		this.style.backgroundColor = "white";
		this.style.color = "black";
		this.style.backgroundImage = "url(circle.png)";
	} else if (this.style.backgroundColor == "white"){
		this.style.backgroundColor = "black";
		this.style.color = "white";
		this.style.backgroundImage = "none";
	} else {
		this.style.backgroundColor = "grey";
		this.style.color = "black";
		this.style.backgroundImage = "none";
	}
	checkSolution();
}
//8
function checkSolution(){
	//td.circles is class
	var allCells = document.querySelectorAll("#hitoriGrid td.circles");
	var solved = true;
	for(var i = 0; i<allCells.length;i++){
		if(allCells[i].style.backgroundColor !== "white"){
			solved = false;
			break;
		}
	}
	var allCellsBlocks = document.querySelectorAll("#hitoriGrid td.blocks");
	for(var i = 0; i<allCellsBlocks.length;i++){
		if(allCellsBlocks[i].style.backgroundColor !== "black"){
			solved = false;
			break;
		}
	}
	if (solved == true){
		alert("Congrats you solved the puzzle!");
	}
}
//9
function peek(){
	var blockCells = document.querySelectorAll("#hitoriGrid td.blocks");
	for(var i = 0; i<blockCells.length;i++){
		if(blockCells[i].style.backgroundColor == "white"){
			blockCells[i].style.color = "red";
		}
	}
	var circleCells = document.querySelectorAll("#hitoriGrid td.circles");
	for(var i = 0; i<circleCells.length;i++){
		if(circleCells[i].style.backgroundColor == "black"){
			circleCells[i].style.color = "red";
		}
	}
	//loads after half a second
	setTimeout("unpeek()",500);
}
//10
function unpeek(){
	//Figure out how to not use 2 for loops for circles and blocks class but find if class is in td !!!!!!!!!!
	var allCells = document.querySelectorAll("#hitoriGrid td.circles");
	var allCellsBlocks = document.querySelectorAll("#hitoriGrid td.blocks");
	for(var i = 0; i<allCellsBlocks.length;i++){
		if(allCellsBlocks[i].style.color == "red"){
			allCellsBlocks[i].style.color = "black";
		} 
	}
	for(var i = 0; i<allCells.length;i++){
		if (allCells[i].style.color == "red"){
			allCells[i].style.color = "white";
		}
	}
}
//11
function showSolution(){
	var circleCells = document.querySelectorAll("#hitoriGrid td.circles");
	for(var i = 0; i<circleCells.length;i++){
		circleCells[i].style.color = "black";
		circleCells[i].style.backgroundColor = "white";
		circleCells[i].style.backgroundImage = "url(circle.png)";
	}
	var blockCells = document.querySelectorAll("#hitoriGrid td.blocks");
	for(var i = 0; i<blockCells.length;i++){
		blockCells[i].style.color = "white";
		blockCells[i].style.backgroundColor = "black";
		blockCells[i].style.backgroundImage = "none";
	}
}