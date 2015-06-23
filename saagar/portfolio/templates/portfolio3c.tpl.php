

<?php
echo "Portfolio 3 Colomun";
$pview = views_get_view('portfolio'); 
$display_id ='page_2';
$pview->set_display($display_id);
$pview->pre_execute();
$pview->execute(); 
$output =$pview->render();
print $output;

?>
