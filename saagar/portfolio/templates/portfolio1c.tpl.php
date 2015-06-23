

<?php
echo "Portfolio 1 Colomun";
$pview = views_get_view('portfolio'); 
$display_id ='page_4';
$pview->set_display($display_id);
$pview->pre_execute();
$pview->execute(); 
$output =$pview->render();
print $output;

?>
