function output(){
	$('#receipt').empty();
	$("#receipt").append("<hr><h1>Receipt</h2><br>");
	firstName=$('#firstName').val();
	lastName=$('#lastName').val();
	email=$('#email').val();
	streetAddress=$('#streetAddress').val();
	city=$('#city').val();
	province=$('#province').val();
	postalCode=$('#postalCode').val();
	creditCardType=$("#creditCardType").val();
	expirateDateMonth=$("#expirateDateMonth").val();
	expirateDateYear=$("#expirateDateMonth").val();
	creditCardNumberLast=$("#creditCardNumberLast").val();
	$('#receipt').append("<b>Shipping address</b><br>"+firstName + " " + lastName + "<br>");
	$('#receipt').append(email);
	$('#receipt').append("<br>" + streetAddress);
	$('#receipt').append("<br>" + city);
	$('#receipt').append("<br>" + province);
	$('#receipt').append("<br>" + postalCode + "<br>");
	$("#receipt").append("<b>Payment method</b><br>" + creditCardType);
	$('#receipt').append("<br>" + expirateDateMonth + "/" + expirateDateYear);
	$('#receipt').append("<br>" + "xxxx-xxxx-xxxx-"+creditCardNumberLast + "<br><br>");
	$("#receipt").append("<b>Purchases</b><br>");
	calcPrice();
	if($("#emailNotifications").is(":checked")){
		$('#receipt').append("You will be notified when your order has shipped!");
	}
}
function calcPrice(){
	product1=$('#product1').val();
	product1Cost=5*product1;
	if(product1 !=0){
		$('#receipt').append("4gb: $5x"+ product1 + " = $" + (product1Cost) + "<br>");
	}
	product2=$('#product2').val();
	product2Cost=10*product2;
	if(product2 !=0){
		$('#receipt').append("8gb: $10x"+ product2 + " = $" + (product2Cost)+ "<br>");
	}
	product3=$('#product3').val();
	product3Cost=15*product3;
	if(product3 !=0){
		$('#receipt').append("16gb: $15x"+ product3 + " = $" + (product3Cost)+ "<br>");
	}
	product4=$('#product4').val();
	product4Cost=20*product4;
	if(product4 !=0){
		$('#receipt').append("32gb: $20x"+ product4 + " = $" + (product4Cost)+ "<br>");
	}
	product5=$('#product5').val();
	product5Cost=25*product5;
	if(product5 !=0){
		$('#receipt').append("64gb: $25x"+ product5 + " = $" + (product5Cost)+ "<br>");
	}
	total=product1Cost+product2Cost+product3Cost+product4Cost+product5Cost;
	$('#receipt').append("Total: $"+ (total) + "<br>"+ "<br>");
	if(total>150){
		total=total*.75;
		$('#receipt').append("Total for spending over $150 (15% discount): $"+ (total) + "<br>");
	}
	if($("#giftWrapped").is(":checked")){
	total=total+product1*1+product2*1+product3*1+product4*1+product5*1;
	$('#receipt').append("Total with gift wrapping: $"+ (total) + "<br>"+ "<br>");	
	}
	province=$('#province').val();
	provinceToLower=province.toLowerCase();
	if(total!=0){
		if(provinceToLower=="bc"){
			total=(total*.12)+total;
			$('#receipt').append("<b>Final total with BC sales tax (12%):</b> $"+ (total) + "<br>");
	}	else{
			total=(total*.06)+total;
			$('#receipt').append("<b>Final total with sales tax (6%):</b> $"+ (total) + "<br>");
		}
		$('#receipt').append("Thank You<br>");
	}
	
}
function setup() {
  jQuery('#submit').click(output)

}
jQuery(document).ready(setup)