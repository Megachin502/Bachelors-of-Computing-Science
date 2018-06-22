animate_demo = function() {
  newstyle = {
    'font-size': '250%',
    'letter-spacing': '0.5em'
  }
  jQuery('#animations h2').animate(newstyle, 1000)
}
rightAnimate=function(){
	newstyle={
		'height':'0',
		'left':'100%'
	}
	jQuery('#animations h2').animate(newstyle, 1000)
}
leftAnimate=function(){
	newstyle={
		'height':'1.5em',
		'left':'0'
	}
	jQuery('#animations h2').animate(newstyle, 1000)
}
toggleAnimation=function(){
	jQuery('#animations h2').slideToggle()
}
sayHello=function(){
	jQuery('#newcontent').append('<p>Hello!</p>')
}
sayGoodbye=function(){
	jQuery('#newcontent').append('<p>Goodbye!</p>')
}
takeItBack=function(){
	jQuery('#newcontent p').last().remove()
}
setup = function() {
  jQuery('#demo').click(animate_demo)
  jQuery('#right').click(rightAnimate)
  jQuery('#left').click(leftAnimate)
  jQuery('#toggle').click(toggleAnimation)
  jQuery('#hello').click(sayHello)
  jQuery('#goodbye').click(sayGoodbye)
  jQuery('#remove').click(takeItBack)
}
jQuery(document).ready(setup)