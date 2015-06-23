

<?php
echo "Testimonial 4 Colomun";
$pview = views_get_view('Testimonial'); 
$display_id ='page_4';
$pview->set_display($display_id);
$pview->pre_execute();
$pview->execute(); 
$output =$pview->render();
print $output;

?>
