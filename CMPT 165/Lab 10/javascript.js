function output(){
	$('#result').empty();
	name = $('#name').val();
	$('#result').append("Hello,  "+name+".");
	chosen = $("#apply").val();
	number =$('#number').val();
	if(chosen==1){
		$('#result').append("<br>The number "+number+ " plus 1 is " + (Number(number)+1));
	}
	if(chosen==10){
		$('#result').append("<br>The number "+number+ " times 10 is " + (Number(number)*10));
	}
	if(chosen==-5){
		$('#result').append("<br>The number "+number+ " minus 5 is " + (Number(number)-5));
	}
}
function setup() {
  jQuery('#submit').click(output)

}
jQuery(document).ready(setup)