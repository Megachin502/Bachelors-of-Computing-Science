say_hello = function() {
  alert('Im a heading!')
}
textRedEnter=function(){
	jQuery('p').attr('class', 'highlighted')
}
textRedLeave=function(){
	jQuery('p').attr('class', '')
}
listRemove=function(){
	jQuery('li').first().remove()
}
setup = function() {
  jQuery('h1').click(say_hello)
  jQuery('#hoverable').mouseover(textRedEnter)
  jQuery('#hoverable').mouseleave(textRedLeave)
  jQuery('button').click(listRemove)
}
jQuery(document).ready(setup)