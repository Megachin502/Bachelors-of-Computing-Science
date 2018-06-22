/*
   New Perspectives on HTML5, CSS, and JavaScript
   Tutorial 14
   Review Assignment

   Author:   elam
   Date:     

   Filename: keyword.js


   Functions List:

   makeElemList(elem)
      Returns a sorted array containing the content of all elements with the tag name
      "elem".

   setElemId(elem, elemText)
      Sets and returns the id for an element with the tag name "elem" and containing
      the content "elemeText".

   makeKeyWordBox()
      Creates a keyword box containing a sorted list of hyperlinks pointing to
      all of the dfn elements in the main document.


*/

//3
function makeElemList(){
	var elemList = document.getElementById("elem");
	var elemTextArr = [];
	for(var i=0;i<elemList.length;i++){
		elemTextArr[i] = elemList.innerHTML.value;
	}
}